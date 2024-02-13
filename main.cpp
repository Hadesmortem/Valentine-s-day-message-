// Valentines Missig ko
#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    // Input
    string name;
    int age;
    string relationship;

    printf("\nEnter your name: ");
    getline(cin, name);

    printf("\nEnter your age: ");
    cin >> age;

    printf("\nAre you in a relationship? (yes/no): ");
    cin >> relationship;

    // Output message based on relationship status
    if (relationship == "yes") {
        printf("\nYayyyy finally after %d years of existence, love found you, %s. Always cheering for you!\n", age, name.c_str());
    } else {
        printf("\n%d kana tapos walang love life? jk lang pu baka naliligo lang yon antay ka nalang\n", age);
    }

    // Output main message
    printf("\nAnyways Hi, this is me Angelo. the one reading this I hope you're doing great.\n");
    printf("\nDid you notice the date? It's Feb 14, it's Valentine's Day.\n");

    // Output hollow heart centered
    printf("\n\nHere's a heart for you, Happy Valentines, %s:\n\n", name.c_str());
    printf("\t\t    143143  143143  \n");
    printf("\t\t   14314314 14314314\n");
    printf("\t\t  143143143 143143143\n");
    printf("\t\t   14314314 14314314\n");
    printf("\t\t     1431431431431\n");
    printf("\t\t        1431431\n");
    printf("\t\t          143\n");

    // Additional message
    printf("\n\n\n\t\t\timysm\n");

    // Choices for viewing message
    char choice;
    printf("\nEnter 'A' if you want to see the message for you or 'B' if you do not: ");
    cin >> choice;
    // Convert choice to uppercase
    choice = toupper(choice);

    if (choice == 'A') {
        string user_name;
        printf("\nEnter your name: ");
        cin.ignore(); // To clear the newline character from previous input
        getline(cin, user_name);

        // Convert user_name to lowercase for comparison
        transform(user_name.begin(), user_name.end(), user_name.begin(), ::tolower);

        // Process message based on the user's name
        if (user_name == "ash" || user_name == "ashley" || user_name == "demerin") {
            printf("\nThis is a Message intended only for you: Hi madumb, if you're reading this it means that this code is working properly, anyways I've heard na mayor kana daw sa section mo, di kita inistalk or what sinabi lang sakin ni jack nung field demo or nung nakasakay na kami pauwi. I know na I'm not a decent person to be talking to you like this pero gusto ko lang na sabihin even though di na tayo nag uusap (wala namang bago) is that I'm happy for those memories na nagawa in which may mga bad yes pero meron parin namang masaya na na nag pasaya sakin everyday, even if hindi ko nasabi sayo directly i know that you also know that ganoon yung naramdaman ko sayo. I'm still sorry padin for being immature and unable to stop those circle of mine that they are so nosy in other business. Again this is me angelo na dati mong bff, Happy Valentine's 💐🌹🌷(⁠ʃ⁠ƪ⁠＾⁠3⁠＾⁠）❤️\n");
        } else if (user_name == "angel" || user_name == "hipolito") {
            printf("\nThis is a Special Message for you lots: Ikaw nanamn angel, charot lang lots hehe. This is actually a Valentine's message for you and at the same time a motivational or demotivational bahala kana kung paano mo i-iinterpret, anyways i know that you always push yourself by combining your responsibilities in school and in your house, is it tiring? Yes and im proud of you for that (⁠｡⁠◕⁠‿⁠◕⁠｡⁠), hmmm nakalimutan ko na mga sasabihin ko sayo hays. Ayun, i just want to say na you're human, we are humans and we also deserve to be happy hindi yung lagi ka nalang umiiyak, it's funny na mga psychology students na nag aaral sa mga psychology ng mga tao ay kahit sila mismo hirap i manage sarili nila bwhaahahaha. Kaya mo yan i know because ikaw nayan ihhh. Happy Valentine's 💝🫂💐, this is me magaling mag last chat since birth angelo (⁠/⁠^⁠-⁠^⁠(⁠^⁠ ⁠^⁠*⁠)⁠/.\n");
        } else if (user_name == "sedi" || user_name == "cedi" || user_name == "cedrick") {
            printf("\nSpecial Message for you sid: Hellooooooo sediiiiiiiii, i mess you a lot y'know, it's been ages since we've last talk i think a few days before your birthday, i remember not being able to do a video greeting na i was supposed to send to dreii for compiling in which it's a hellish week. I have no other excuses for that because it already happened. I hope na may nag papasaya na sayo dyan and for sure makaka tanggap ka rin ng flowers and chocolates (sana lahat) bwhahahhaahhaahahah, balita ko batak ka nadaw mag java script ah mag papaturo ako sayo ah  (⁠人⁠*⁠´⁠∀⁠｀⁠)⁠｡⁠*ﾟ⁠+.  I often see your stories and myday and woooow super fresh as always, i always hope na you and my other friends are always fine i wish you all the best para sa mga plano mong natupad na and matutupad palang, i hope na pag nag kita ulit tayo hindi mo ako tatanungin kung mag bago naba ako on that span of months because I've clearly don't eto parin ako abno para sa mga kaibigan kong may saltik. This is it Happy Valentine's Day,  Sid 💌💐🫂. Once again this is me one of the bulldogs of A.I.C.S\n");
        } else {
            printf("\nHello there my little dorling, are you good? Not like you can interact with this, i realized paano kita naging kaibigan because sa dami ng unicorn sa paligid and mga magical creatures ikaw/kayo pa ni donkey at shrek jusko naman bwhahahahahahaha, kung kaibigan kita ibig sabihin wala ka ring date this valentines but di naman kita jinujudge (slight lang), yung mga dorling ko dyan na may date pasensyahan nalang tayo kung tamaan ng ligaw na bala ah kase nga bato bato sa langit ang tamaan wag magalit jk lang baka baldahin nyo ako dyan eh. Anyways this is it para to sa mga single na frens ko dyan pati yung mga taken , HAPPY VALENTINES DAAAAAAY 💐🌹🌷💖💐🥰😘! Lotsoflove\n");
        }
    } else if (choice == 'B') {
        printf("\nNo pick again because i want you to see the messages TT.\n");
    } else {
        printf("\nInvalid choice!\n");
    }

    return 0;
}
    