# Lossless data compression 

# Zip
lcomp.py
## step1
Open the file named love.txt
init a list named lovewords
split love.txt by newline and space, convert to list of list named  lovewords using append and split method

## step2
init a dictionary named lovedict
init a list of list named lovezip

go through lovewords
if word in lovedict , translate the word to idex number.  
if word not in lovdict, add new word to lovedict, then translate to index number
for example:
"I love you more than  you love me"
lovedict={“I”:1,"love":2,"you":3,"more":4,"than":5,"you":6,"me"：7}
lovezip=[1，2，3，4，5，3，2，7]

## step3
write lovedict and lovezip into love.lzp

#unzip
uncomp.py

##Step2
read love.lzp
init a loveresult list 
convert the first line into lovedict 
conver the rest of line number into text according to lovedict
append the translated word into loveresult

##Step3
write loveresult into loveres.txt


