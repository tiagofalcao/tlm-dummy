#!/usr/bin/make -f
MKFILE := $(abspath $(lastword $(MAKEFILE_LIST)))
ROOTDIR := $(notdir $(patsubst %/,%,$(dir $(MKFILE))))
BUILDDIR ?= build

.PHONY:		default
default:	all

PACKAGE := tlm-dummy
DESCRIPTION := A dummy SystemC to bind unbinded TLM2 sockets
VERSION := 0.1

include gnudirs.mk

SHELL = /bin/sh
CPP ?= cpp
CPPFLAGS ?=
CC ?= gcc
CXX ?= g++
AR ?= ar
CFLAGS ?= -O3 -fPIC
CXXFLAGS ?= -O3 -std=c++11 -fPIC
LDFLAGS ?=
LDLIBS ?=
ARFLAGS ?= rcs

REQUIREMENTS := systemc expio
OPTIONALS :=

include rules.mk
