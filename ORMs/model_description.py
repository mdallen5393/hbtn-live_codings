#!/usr/bin/env python3
from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base

Base = declarative_base()

class Description(Base):
    __tablename__ = 'descriptions'
    id = Column(Integer, primary_key=True, nullable=False, autoincrement=True)
    word = Column(String(128), nullable=False)
