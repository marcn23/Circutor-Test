### How to compile ###

    -> For compiling and executing the program I always use terminal. In this case, I used g++ compiler which you can get writing (sudo apt get install g++ on Ubuntu). Then, we need to compile file writing on the terminal (g++ word-sorter.cc -o word-sorter) and execute with the terminal with the following command (./word-sorter).
    You can also redirect the input puting it on a file (as I did) and execute (./word-sorter < test.txt)
    

### Why this way? ###

    -> I've been thinking different ways to solve the problem:
        - For example, I started puting it all on a vector and using the function sort from the "algorithm" library (through a comparation function) but my implementation was incorrect so I decided to change the way I sort the elements.
        - Then I tried to do it with a list and an iterator, inserting the elements in the correct order from the beggining. It seemed to me very interesting cause the worst case (the one that the element you want to insert is the last one) is of order n. 
    
    
### Why C++? ###

    -> I've choosed C++ because it's the language I feel more comfortable writing code and the one with I have more exerience. Although this reason I think that it would be not very complicated writing it on another language because the most difficult is the way you think the problem, not the syntax.
