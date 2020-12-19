#! /bin/zsh
cd "/Users/mustafasoby/Documents/coding/miniProjects/AutoGenerateSetAndGet/AutoGenerateSetAndGet"
pbpaste > temp.txt
./mainWithClass
cat temp.txt | pbcopy
