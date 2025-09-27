#include <iostream>
#include <string>

using namespace std;

int main()
{
    string start;
    int thecell;
    int tunnelchoice;
    int guardchoice;
    int hallwaychoice;
    int tortureroomchoice;
    int twodoorchoice;

    cout << "Welcome to\nESCAPE THE DUNGEON";
    cout << "\n\n\n\nType 'start' to begin\n";
    cin >> start;
    system("clear");

    cout << "You find yourself trapped in a dark dungeon."
         << "\nA torch flickers on the wall, giving light to the room."
         << "\nYou must find a way out..." << endl;

    cout << "\n\nDecisions:\n1. Inspect cell\n2. Hide in the corner\n\nChoice: ";
    cin >> thecell;

    switch (thecell)
    {
        case 1:
        {
            cout << "\n\nYou found and removed a loose stone in the wall. This uncovered a secret tunnel!"
                 << "\n\nYou take the stone and continue into the tunnel until you find yourself at a split."
                 << "\nFrom the left tunnel you hear the sounds of people cheering."
                 << "\nFrom the right tunnel you hear the screams of a man."
                 << "\n\n1. Left tunnel\n2. Right tunnel\nChoice: ";
            cin >> tunnelchoice; 
           
            switch (tunnelchoice)
            {
                case 1:
                    cout << "\nYou take the left tunnel and run into a room full of guards cheering. "
                         << "They notice you and kill you...\n\nGAME OVER";
                    return 0;

                case 2: 
                {
                    cout << "\nYou take the right path and run into a man being tortured by a guard."
                         << "\n\n1. Take out the guard\n2. Try to leave unnoticed.\nChoice: ";
                    cin >> tortureroomchoice;

                    switch (tortureroomchoice)
                    {
                        case 1: 
                            cout << "\nYou hit the guard over the head with the rock and knock him out.\n"
                                 << "You search his body and find keys, which you use to unlock the door."
                                 << "\nOnce you get out of the room you find yourself in a hallway with a door on your right."
                                 << "\nYou unlock the door with your key and escape the dungeon."
                                 << "\n\nCONGRATULATIONS! YOU ESCAPED!";
                            return 0;
            
                        case 2:
                            cout << "\nYou make it to the door unnoticed. Once you try to open it, you find out it's locked.\n"
                                 << "The sound of the door makes the guard turn around and charge at you."
                                 << "\nHe overpowers and kills you.\n\nGAME OVER...";
                            return 0;
                    }
                }
                break;
            }
        }
        break;

        case 2:
        {
            cout << "\n\nYou hide in the corner, just out of sight from the cell door.\n"
                 << "The guard walks by, notices the empty cell, and frowns in confusion."
                 << "\nHe unlocks the door and steps inside to investigate.\n"
                 << "The cell door now hangs open behind him.";

            cout << "\n\n1. Attack the guard\n2. Slip past unseen\n\nChoice: ";
            cin >> guardchoice;

            switch (guardchoice)
            {
                case 1:
                    cout << "\nYou attack the guard, but he overpowers you and kills you.\n\nGAME OVER...";
                    return 0;

                case 2: 
                {
                    cout << "\nYou slip past unseen and need to go somewhere fast.\n"
                         << "On your left there is a staircase.\nOn your right there is a room labeled 'Guard Room.'"
                         << "\n\n1. Go up the stairs\n2. Go into the guard room.\nChoice: ";
                    cin >> hallwaychoice;

                    switch (hallwaychoice)
                    {
                        case 1: 
                            cout << "\nYou run into a guard going up the stairs and he catches you.\n\nGAME OVER...";
                            return 0;

                        case 2:
                        {
                            cout << "\nYou walk into the guard room where you find a dagger on the table. You take it and backtrack."
                                 << "\nYou check the hallway again and notice the guard is still inspecting the cell."
                                 << "\nYou run past the guard and go up the stairs, where you encounter and kill a guard with the dagger you recently acquired."
                                 << "\nAt the top of the stairs you see two locked doors. You try the one you hear nothing behind with no success."
                                 << "\nNow you are left with the one with the screaming man."
                                 << "\n\n1. Knock on the door\n2. Try to kick the door in\nChoice: ";
                            cin >> twodoorchoice;

                            switch (twodoorchoice)
                            {
                                case 1:
                                    cout << "\nYou knock on the door. This confuses the guard, and he opens it. You attack and kill him."
                                         << "\nYou find keys on his body, which allow you to open the other door in the hallway."
                                         << "\nYou go back into the hallway and open the door. To your surprise, this was the way out..."
                                         << "\n\nCONGRATULATIONS! YOU ESCAPED!";
                                    return 0;

                                case 2:
                                    cout << "\nYou try to kick in the door and end up breaking your foot. The loud bang alerts the guard."
                                         << "\nHe finds you curled up in a ball holding your foot."
                                         << "\n\nGAME OVER...";
                                    return 0;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        break;
    }

    return 0;
}
