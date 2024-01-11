#include <iostream>
#include <cstdlib>
#include <ctime>
#define BLUE    "\033[34m"

using namespace std;

int main() {
    srand(time(0));
cout << "YOU ARE NOW PLAYING BLACKJACK!!" << endl;
while(true){
   cout << "+-------------------------------------------------------------------------------------+" << endl;

cout << "Starting Sum: " << (rand() % 10 + 1) << endl;

int player_card1 = rand() % 10 + 1;
int player_card2 = rand() % 10 + 2;
int player_score = player_card1 + player_card2;
 
cout << "You drew a " <<  player_card1 << " and a " << player_card2 << endl;
cout << "Total score: " << player_score << endl;

while(true){
    cout << "Do you want to draw another card? (yes/no)" << endl;
    string answer;
    cin >> answer;
    if(answer == "yes"){
        int new_card = rand() % 10 + 1;
        cout << "You drew a " << new_card << ". " << endl;
        player_score += new_card;
        cout << "Your new total is: " << player_score << endl;
        if(player_score > 21){
            cout << "Your sum is over 21. You Lose :( " << endl;
            return 0;
        }
    }
    if(answer == "no"){
        break;
    }
}
    int dealer_card1 = rand() % 10 + 1;
    int dealer_card2 = rand() % 10 + 1;
    int dealer_score = dealer_card1 + dealer_card2;

    while(dealer_score < 17){
        cout << "Dealer draws a new card." << endl;
        int dealer_new_card = rand() % 10 + 1;
        dealer_score += dealer_new_card;
        if(dealer_score > 21 && player_score < 21){
            cout << "Dealer Bust. YOU WIN!!!" << endl;
            return 0;
        }
        else if(dealer_score > 21 && player_score >> 21){
            cout << "Double Bust! Unfortunately you still lose." << endl;
        }
    }

    cout << "Player score = " << player_score << endl;
    cout << "Dealer score = " << dealer_score << endl;

    if(player_score > dealer_score){
        cout << "Player wins!!" << endl;
    }
    else if(player_score < dealer_score){
        cout << "Dealer wins!" << endl;
    }
    else{
        cout << "It's a tie!!" << endl;
    }
    cout << "Do you want to play again? (yes/no)" << endl;
        string play_again;
        cin >> play_again;

        if (play_again != "yes") {
            cout << "Thanks for playing! Goodbye." << endl;
            break; // Break out of the outermost loop (entire game)
        }
}
cout << "+-------------------------------------------------------------------------------------+" << endl;

    return 0;
}


