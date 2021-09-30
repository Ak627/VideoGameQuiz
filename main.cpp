#include<iostream>
using namespace std;
int main() {
    //variables to hold onto each princess' score:
    int Mario = 0;
    int MasterChief = 0;
    int Kratos = 0;
    int Link = 0;
    int GlaDOS = 0;
    char choice; //variable to hold user input
    cout << "Welcome to the Video Game Character quiz!" << endl;
    //question 1
    cout << "What's your favorite color? (g)reen, (p)ink, (r)ed or (b)lack?" << endl;
    cin >> choice;
    if (choice == 'g') {
        MasterChief = MasterChief + 1;
        Link = Link + 1;
    }//long way to add one
    else if (choice == 'p')
        GlaDOS += 1; //shorter way to add one
    else if (choice == 'b')
        Kratos++; //shortest way to add one
    else if (choice == 'r')
        Mario++;
    else
        cout << "not an option, dummy" << endl;
    //question 2
    cout << "What is your favorite activity? (m)usic, (p)uzzles, (f)ighting, (a)dventuring, or (s)leeping\n";
    cin >> choice;
    if (choice == 'm')
        Mario++;
    else if (choice == 'p')
        GlaDOS++;
    else if (choice == 'f')
        Kratos++;
    else if (choice == 'a')
        Link++;
    else if (choice == 's')
        MasterChief++;
    else
        cout << "not an option, dummy" << endl;
    //question 3
    cout << "What is your eye color? (b)rown, b(l)ue, (u)nknown\n";
    cin >> choice;
    if (choice == 'b')
        Kratos++;
    else if (choice == 'l') {
        Link++;
        Mario++;
    }
    else if (choice == 'u') {
        MasterChief++;
        GlaDOS++;
    }
    else
        cout << "not an option, dummy" << endl;
    //question 4
    cout << "Would you get a tattoo? (1) Yes I would, (2) No never/I can't, (3) Well Maybe\n";
    cin >> choice;
    if (choice == '1')
        Kratos++;
    else if (choice == '2') {
        Mario++;
        GlaDOS++;
    }
    else if (choice == '3')
        Link++;
    //question 5, final question
    cout << "What is your greatest accomplishment? (r)evenge, (d)efeating the covenant, (s)aving the princess, or (t)esting others\n";
    cin >> choice;
    if (choice == 'r')
        Kratos++;
    else if (choice == 'd')
        MasterChief++;
    else if (choice == 's') {
        Mario++;
        Link++;
    }
    else if (choice == 't')
        GlaDOS++;
    //check which princess has the biggest score
    //the symbol "&&" means AND
    if (MasterChief >= Kratos && MasterChief >= GlaDOS && MasterChief >= Mario && MasterChief >= Link) {
        cout << "You are Master Chief!" << endl;
        cout << "You like fighting against the Covenant, Sleeping for long periods of time, and are generally quiet.\n";
    }
    else if (Kratos >= MasterChief && Kratos >= GlaDOS && Kratos >= Mario && Kratos >= Link) {
        cout << "You are Kratos" << endl;
        cout << "You like getting revenge on those who've done you wrong, Always ready for a fight.\n";
    }
    else if (GlaDOS >= MasterChief && GlaDOS >= Kratos && GlaDOS >= Mario && GlaDOS >= Link) {
        cout << "You are GlaDOS!" << endl;
        cout << "You like puzzles, Testing others, and have thing for Cake.\n";
    }
    else if (Link >= MasterChief && Link >= Kratos && Link >= GlaDOS && Link >= Mario) {
        cout << "You are Link!" << endl;
        cout << "You like adventuring through the world, You don't talk much, and you are generally a nice person.\n";
    }
    else if (Mario >= MasterChief && Mario >= Link && Mario >= Kratos && Mario >= GlaDOS) {
        cout << "You are Mario!" << endl;
        cout << "You like Jumping, Saving your princess, and you are motivated by Cake.\n";
    }
}
