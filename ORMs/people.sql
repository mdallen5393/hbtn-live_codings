-- Create table in orm_db with some data

DROP DATABASE orm_db;
CREATE DATABASE IF NOT EXISTS orm_db;

USE orm_db;

CREATE TABLE IF NOT EXISTS people (
  id INT NOT NULL AUTO_INCREMENT,
  name VARCHAR(256) NOT NULL,
  PRIMARY KEY (id)
);

INSERT INTO people (name) VALUES ('Chris'), ('Aaron'), ('Ben H'), ('Phillip'), ('Sarah'), ('Cason'), ('Doug'), ('Svitlana'), ('Zach'), ('Ben S'), ('Tayler'), ('Shadi'), ('Colan'), ('Matthew');

