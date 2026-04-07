First step:The computer doesn't actually know my native language,so i took words from Dex(the official database of all romanian words) and i used 2 tables that work like a mirror
The first table:words without diacritics:"Scoala"(school),"fata"[girl(the girl)],etc.
2nd table:with diacritics:"școală"(school), "fată"(the girl),...;Each word from the first list has a correspondent in the 2nd list.
Second step:When typing a phrase,the program takes a look at each word individually;using while(cin >> cuvant) takes the first word,and then the second and so on and so forth.
Third step:This is what i did so my program looks more complicated than it actually is;Before searching the word in the dictionary,the program filters it so it becomes a normal word,just missing diacritics.
Fourth step:Searching and replacing the "clean words" from step 3 with the actual words from the 2nd list,word by word and shows you the correct phrase.
