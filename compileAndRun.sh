
file=$1
command="clang++ --std=c++14 \"${file}\" && ./a.out"
printf "Running \"${command}\":\n"
eval $command

