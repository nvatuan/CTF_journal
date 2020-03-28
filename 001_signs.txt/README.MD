Take a look at "signs.txt", the file contains dots and dashes which is more or less morse code.

**Challenge reposter** stated that the original text message is a paragraph consists of only English characters.
Even though, the amount of possible combinations are immense, but I feel ones that make sense aren't that many. Decode is easy, but decode to a comprehensive one is another thing.

## (????/??/??) Attempt #1: straight Brute-force
I tried decoding each character, and dump the correct decodings to a log file. This log file soon became unexpectedly large so i have abandoned this approach.

## (????/??/??) Attempt #2:
I grabbed a dict file "words.txt" that has bunch of english words (not full, but enough), i also tried dumping the correct decodings (morse to correct words), the amount of possibilities are still to large.

I went for an upgrade, set the program to prompt me the current paragraph-permutation, if i see fit, i will allow it to append more words behind it. Else, i will discard current word that is attached to the "seemingly correct paragraph".

# Result #2: PARTIALLY SOLVED
Although not finish, i have soon to encounter a very promising decoding. I can just continue from this sentence as i know this is likely to be the correct decoding.

I'll soon finish this challenge.

## Update 2020 Mar 28th: Attempt #3:
I did calculate estimation of how many valid interpretations would it be and here's the log:
```
$ Valid fmorse.txt morseSubstrings: 58138
$ Estimated valid `fmorse.txt` interpretations: 3.33984e+1826
```
I first extracted the substring from morse file and check if it's valid morsecode.
Then use a little bit of DP, I calculated valid but possibly meaningless interpretations.

I had an idea of applying *Zipf's law* on Natural Language to narrow down the amount of decodes, 
or apply other Natural Language rules(?). Though haven't gone too deep into it.

It is even possible I have a bad wordlist `\attempt\words.txt` since some of the words are either way obsoleted or non-existing,
I did a search for a new wordlist file but have grown tired rather quickly. I think I'll close this challenge off.

# Result #3: NO IMPROVEMENT, ESTIMATED, CLOSED

