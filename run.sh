
g++ main.cpp -o main

#run main if it exists
if [ -f main ]; then
    ./main && rm main
fi
