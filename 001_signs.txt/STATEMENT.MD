Take a look at "signs.txt", the file contains dots and dashes which is more or less morse code.

Reposter states that the messages after decode is a paragraph consists of only English characters.
Even though, the amount of possible combinations are immense. But ones that make sense aren't that many. Decode is easy, but decode to a comprehensive one is another thing. Can I find the right one?

## Attempt #1: straight Brute-force
I tried decoding each character, and dump the correct decodings to a log file. This log file soon became unexpectedly large and lag my PC so i have abandoned this approach.

## Attempt #2:
I grabbed a dict file "words.txt" that has bunch of english words (not full, but enough), i also tried dumping the correct decodings (morse to correct words), the amount of possibilities are still to large.

I went for an upgrade, set the program to prompt me the current paragraph-permutation, if i see fit, i will allow it to append more words behind it. Else, i will discard current word that is attached to the "seemingly correct paragraph".

# Result: Partially solved
Although not finish, i have soon to encounter a very promising decoding. I can just continue from this sentence as i know this is likely to be the correct decoding.

I'll soon finish this challenge.
