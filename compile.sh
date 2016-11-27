#!/bin/bash
# Copyright 2016 ewized. All Rights Reserved.

rm -Rf out
mkdir out
g++ `find -name *.cpp | sort -fr` -o out/a.out
