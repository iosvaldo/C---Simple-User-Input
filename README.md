# C-simple-user-input
Small program for a user to input a 100-limit sentence. 


This program was simple to create, but I kept getting an Error: `implicit declaration of gets() not allowed in c99`.

In my code, I first entered the %c in the name, but it only accepted one character of the entered string by the user; I found that using %s will accept the complete string until the white space only. So I then found that using [^n\] or other similar variations can produce the most accurate outcome of the user's input. 
However, it wasn't working how I wanted it to, and I learned it has no width limits, so I looked up another resource and found I should be using the fgets() method instead.

According to stack overflow, fgets() gets the whole line, and then I can start using sscanf or another function to parse the line. 

to run the program for this repositpry on replit.com: `https://replit.com/join/xqgtdmoorg-iosvaldo`

once you forked and made a copy press the green RUN button at the top of the program. 
