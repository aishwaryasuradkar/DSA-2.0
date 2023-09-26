char ch[100];
    cin.getline(ch,100);

    //string reverse =  reversingArray( ch, 100);
    cout<<"Before:" << ch << endl;

    int len =  findLength(ch,100);
    reverseString(ch, len);

    cout<< endl<< "Reversed string is:"  << endl;
