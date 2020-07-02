# Code Challenge 2019 - Round 2 - CTF3
> `original/codechallenge2019_CTF3.b`

## Event summary

The Code Challenge 2019 Central event consisted of 2 round, up to 100 competitors. The first round is IOI format, a contestant has to solve 5 competitive programming tasks, with increasing difficulties. Each task has subtasks, if a subtask is fully solved, contestant gain points assigned for that subtask, if not, they won't gain a single point. If points are equal, time penalty (im not so sure now, its has been a year) is taking to calculation.

After that, 100 competitors will then be splitted into 2 group, top 10 of Round 1 will go to Round 2 - CP, while the others 90 go to Round 2 - CTF. I secured myself a spot in the top 10, so I couldn't participate in the CTF round.

I did poorly on Round 2 though..

## Round 2 - CTF: The problems
By the time I wrote this, the three links have died :(

<p style = "text-align:center">
<img src="post.png" alt="Facebook_Announcement.png">
</p>

I couldn't remember what the first problem was.
But the second problem was sort of a math game, nothing technical.
The third one however, was a HTML page with the organizer logo has some of the `brainfuck` operators on it. Turns out, the whole page is filled with `brainfuck`, by select all we have a full brainfuck program.

### CTF3
Luckily, when I got home that day, I sat down and tried the problem itself. So i still have the source.

Check `original/codechallenge2019_CTF3.b`.

## Attempts:
### (2019/??/??) Attempt#1:
When you run the program, it prints `Enter key:` and awaits for input.
I noticed there are 3 `,`, this means take a `byte` from standard input stream.

Quickly, I assumed the problem is simple just enter the right 3-character password, which can be quickly brute-force through.

This is where I got stuck though. I had no idea how to execute this `brainfuck` thing. Maybe I'm supposed to write my own compiler or something.

After invested lots of time in looking for _something_.. I decided to use a `brainfuck to c` converter. Compiled that `C` code but it ran so fucking slow! Maybe it needed some sort of compile flag?? I had no fucking clue.

Anyway that was all I could remember on my first attempt to solve it.