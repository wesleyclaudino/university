/********** PARTE 1 **********/
-- Usando Constraints em um BD:
create database cadastro
default character set utf8
default collate utf8_general_ci;

-- Usando Constraints em uma tabela:
use cadastro;
create table `pessoas` (
`id` int not null auto_increment,
`nome` varchar(30) not null,
`nascimento` date,
`sexo` enum('M', 'F'),
`peso` decimal(5,2),
`altura` decimal(3,2),
`nacionalidade` varchar(20) default 'Brasil',
primary key (id)
) default charset = utf8;

/********** PARTE 2 **********/
-- Inserindo registros (tuplas) em uma tabela, na forma completa:
insert into pessoas
(nome, nascimento, sexo, peso, altura, nacionalidade)
values
('Álax', '1889-01-02', 'M', '70.3', '1.81', 'Brasil'); -- Registro 1
select * from pessoas;

insert into pessoas
(nome, nascimento, sexo, peso, altura, nacionalidade)
values
('Alecsander', '1776-03-07', 'M', '78.3', '1.84', 'Bolívia'); -- Registro 2
select * from pessoas;

-- Inserindo com constraints:
insert into pessoas
(id, nome, nascimento, sexo, peso, altura, nacionalidade)
values
(default, 'Camily', '1905-06-15', 'F', '55.3', '1.60', default);
select * from pessoas;

-- Inserindo registros, na forma reduzida:
insert into pessoas values
(default, 'Eduardo', '1985-06-15', 'M', '70.3', '1.69', default);
select * from pessoas;

-- Inserindo registros múltiplos:
insert into pessoas values
(default, 'Gabriel Gomes', '1991-07-23', 'M', '70', '1.75', default),
(default, 'Gabriel Menino', '1992-08-24', 'M', '91.3', '2', 'Dinamarca'),
(default, 'Giovanni', '1993-09-25', 'M', '72.3', '1.77', 'Itália');
select * from pessoas;

/********** PARTE 3 **********/
-- Inserindo novas colunas:
desc pessoas;
alter table pessoas
add column profissao varchar(10);
select * from pessoas;

-- Deletando colunas:
desc pessoas;
alter table pessoas
drop column profissao;
select * from pessoas;

-- Lidando com a ordem das inserções das colunas:
desc pessoas;
alter table pessoas
add matricula int first;
select * from pessoas;

desc pessoas;
alter table pessoas
add codigo int after matricula;
select * from pessoas;