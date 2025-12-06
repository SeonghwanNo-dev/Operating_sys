gcc -o threads temp.c -Wall -pthread
echo "----------------------------------------------------"
./threads 100000
