#!/bin/bash

function run() {
	flex scanner.l && yacc -d parser.y && gcc y.tab.c lex.yy.c -w
	local total_testcases="$1"
	echo "Running Test cases for ICG phase $total_testcases"
	local start=1
	while [ $start -le $total_testcases ]
	do
		printf "\n\n"
		for i in {1..40}
		do
			echo -ne "_"
		done
		echo -ne "Testcase number $start in progress"
		for i in {1..40}
		do
			echo -ne "_"
		done
		printf "\n\n"
		local filename="testfiles/test"$start".c"
		./a.out $filename
		((start++))
	done
}

number_of_files=`ls -l ./testfiles/ | egrep -c '^-'`
run $number_of_files