#! /bin/zsh
cd "/Users/mustafasoby/Documents/coding/miniProjects/AutoGenerateSetAndGet/AutoGenerateSetAndGet"
pbpaste > temp.txt
./main
cat temp.txt | pbcopy
