#!/bin/bash

function run() {
	flex scanner.l && yacc -d parser.y && gcc y.tab.c lex.yy.c -w
	local total_testcases="$1"
	echo "Running: $total_testcases"
	local start=1
	while [ $start -le $total_testcases ]
	do
		printf "\n\n"
		for i in {1..40}
		do
			echo -ne "_"
		done
		echo -ne "Testing case number $start"
		for i in {1..40}
		do
			echo -ne "_"
		done
		printf "\n"
		local filename="tests/test"$start".c"
		./a.out $filename
		((start++))
	done
}

number_of_files=`ls -l ./tests/ | egrep -c '^-'`
run $number_of_files