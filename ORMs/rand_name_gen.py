#!/usr/bin/env python3
# Generates names randomly from a list of popular names
import random
import time

#region - import names from name file
names = ['Aaron', 'Ben H', 'Ben S', 'Cason', 'Chris', 'Colan', 'Doug', 'Matthew', 'Phillip', 'Sarah', 'Shadi', 'Svitlana', 'Tayler', 'Zach']
#endregion
random.shuffle(names)

print("Generating names...")
time.sleep(1)

for name in names:
    time.sleep(1)
    print(f' - {name}')

time.sleep(1)
print("Generating SQL file...")

insert_values = ', '.join("('{}')".format(name) for name in names)
sql_code = f"""-- Create table in orm_db with some data

DROP DATABASE orm_db;
CREATE DATABASE IF NOT EXISTS orm_db;

USE orm_db;

CREATE TABLE IF NOT EXISTS people (
  id INT NOT NULL AUTO_INCREMENT,
  name VARCHAR(256) NOT NULL,
  PRIMARY KEY (id)
);

INSERT INTO people (name) VALUES {insert_values};
"""

with open("people.sql", "w") as sql_file:
    sql_file.write(sql_code)

time.sleep(1)
print("SQL file generated in `people.sql`")
time.sleep(1)
print("Program complete.")
