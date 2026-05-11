sayings

---

About

Motivational sayings.

---

Compiling

Once you have the source code, run:
	jmake
To install sayings, run:
	sudo cp sayings /usr/local/bin/

---

Usage

To run normally:
	sayings
For help:
	sayings --help

---

FAQ

Q: Why no Makefile?
A: I wanted to use my build script jmake, download it -> https://www.github.com/SrFluff/jmake

Q: What if I don't want to use jmake?
A: clang -O3 -march=native -o sayings main.c
