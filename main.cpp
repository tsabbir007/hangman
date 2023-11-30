#include <bits/stdc++.h>
using namespace std;

string get_random_word(vector<string> &words);
void play();

vector<string> words =
    {
        "apple", "banana", "orange", "cat", "dog", "house", "tree", "sun", "moon", "star",
        "book", "pencil", "computer", "keyboard", "mouse", "table", "chair", "road", "car", "train",
        "flower", "river", "ocean", "mountain", "cloud", "bird", "fish", "turtle", "happy", "sad",
        "laugh", "cry", "smile", "friend", "family", "love", "hate", "light", "dark", "color", "music",
        "dance", "eat", "sleep", "run", "jump", "play", "learn", "write", "draw"};

string hangman_art[7] = {
    " +---+\n"
    " |   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    " |   |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|   |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\\  |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\\  |\n"
    "/    |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\\  |\n"
    "/ \\  |\n"
    "     |\n"
    "=========="};

int main()
{
    srand(time(0));
    cout << "Welcome to Hangman!\n";
    play();

    return 0;
}

void play()
{
    string secret_word = get_random_word(words);
    string guess_word = secret_word;
    
    for (int i = 0; i < secret_word.length(); ++i)
    {
        guess_word[i] = '_';
    }
    int numberOfTry = 0;
    char guess;

    while (true)
    {
        if(!numberOfTry) cout << "Word Length is " << secret_word.length() << endl;
        cout << hangman_art[numberOfTry] << endl;
        cout << guess_word << endl;
        cout << "You have " << 6 - numberOfTry <<" more chance"<<endl;
        cout << "Enter your guess:\n";
        cin >> guess;

        if (secret_word.find(guess) != string::npos)
        {
            for (int i = 0; i < guess_word.length(); ++i)
            {
                if (secret_word[i] == guess)
                {
                    guess_word[i] = guess;
                }
            }
            if (secret_word == guess_word)
            {
                cout << hangman_art[numberOfTry] << endl;
                cout << guess_word << endl;
                cout << "You win! The word was " << secret_word << endl;
                cout << "Press capital C to continue to the game. Else to exit" << endl;
                char c;
                cin>>c;
                if (c == 'C')
                {
                    numberOfTry = 0;
                    continue;
                }
                else
                    break;
            }
        }
        else
        {
            ++numberOfTry;
        }
        if (numberOfTry >= 6)
        {
            cout << hangman_art[numberOfTry] << endl;
            cout << guess_word << endl;
            cout << "You lost! The word was " << secret_word << endl;
            cout << "Press capital C to continue to the game. Else to exit" << endl;
            char c;
            cin>>c;
            if (c == 'C')
            {
                numberOfTry = 0;
                continue;
            }
            else
                break;
        }
    }
}

string get_random_word(vector<string> &words)
{
    return words[rand() % words.size()];
}
