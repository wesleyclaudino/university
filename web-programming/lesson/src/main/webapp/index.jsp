<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title> Juntando JSP com HTML </title>
</head>
<body>

	<% 
		String name = request.getParameter("primeiroNome");
		String estadoCivil = request.getParameter("estadoCivil");
		String esportes = request.getParameter("esportes");
		String viagens = request.getParameter("viagens");
		String carros = request.getParameter("carros");
		String sobreVoce = request.getParameter("sobreVoce");
		String faixaEtaria = request.getParameter("faixaEtaria");
		if(name != null){
	%>

		<h1> Bem vindo <%=name%> </br>seus dados foram cadastrados com sucesso!!!</h1>
		<h2> Estado Civil <%=estadoCivil%> </h2>
		<h2>Interesses: <%if(esportes!=null) out.println(esportes+", "); %>
						<%if(viagens!=null) out.println(viagens+", "); %>
						<%if(carros!=null) out.println(carros+", "); %>
		</h2>
		<h2> Sobre Você: <%=sobreVoce%> </h2>
		<h2> Faixa Etária: <%=faixaEtaria%> </h2>
		
		<a href="index.jsp"> VOLTAR </a>

	<% }else{ %>

		<h1> FORMULÁRIO DE DADOS PESSOAIS </h1>
		<form action="index.jsp" method="get">
			<label>Nome</label>
			<input type="text" value="Digite seu nome" name="primeiroNome"/>
			<label>Solteiro</label>
			<input type="radio" value="solteiro" name="estadoCivil" />
			<label>Casado</label>
			<input type="radio" value="casado" name="estadoCivil" />
			<label>Interesses</label></br>
				<label>Esportes</label>
				<input type="checkbox" value="esportes" name="esportes" /></br>
				<label>Viagens</label>
				<input type="checkbox" value="viagens" name="viagens" /></br>
				<label>Carros</label>
				<input type="checkbox" value="carros" name="carros" /></br>
				</br></br>
			<label>Selecione sua faixa etária:</label>
			<select name="faixaEtaria">
			<option value="Casa dos 10"> Casa dos 10 </option>
			<option value="Casa dos 20"> Casa dos 20 </option>
			<option value="Casa dos 30" selected> Casa dos 30 </option>
			<option value="Casa dos 40"> Casa dos 40 </option>
			<option value="Casa dos 50"> Casa dos 50 </option>
			</select>
			<input type="submit" />
		</form>

	<% } %>

</body>
</html>