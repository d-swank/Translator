#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<map>
using namespace std;

/* INSTRUCTION:  copy your parser.cpp here
      cp ../ParserFiles/parser.cpp .
   Then, insert or append its contents into this file and edit.
   Complete all ** parts.
*/
bool word(string s) {

    int state = 0;
    int charpos = 0;
    /* replace the following todo the word dfa  ** */
    // State 0 = q0, State 1 = q0q1, State 2 = q0qy, State 3 = qsa, 
    // State 4 = qs, State 5 = qc, State 6 = qt, State 7 = qy
    while (s[charpos] != '\0') {

        // --------------- State q0 ---------------
        if (state == 0) {

            switch (s[charpos]) {

            // State q0 goes to q0q1 on V
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'I':
            case 'E':
                state = 1;
                break;

            // State q0 goes to qsa on dwzyj
            case 'd':
            case 'w':
            case 'z':
            case 'y':
            case 'j':
                state = 3;
                break;

            // State q0 goes to qs on s
            case 's':
                state = 4;
                break;

            // State q0 goes to qc on c
            case 'c':
                state = 5;
                break;

            // State q0 goes to qt on t
            case 't':
                state = 6;
                break;

            // State q0 goes to qy on bghkmnpr
            case 'b':
            case 'g':
            case 'h':
            case 'k':
            case 'm':
            case 'n':
            case 'p':
            case 'r':
                state = 7;
                break;

            // Exit state q0 if q0 goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // --------------- State q0q1 ---------------
        else if (state == 1) {

            switch (s[charpos]) {

            // State q0q1 goes to q0q1 on V
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'I':
            case 'E':
                state = 1;
                break;

            // State q0q1 goes to q0qy on n
            case 'n':
                state = 2;
                break;

            // State q0q1 goes to qsa on dwzyj
            case 'd':
            case 'w':
            case 'z':
            case 'y':
            case 'j':
                state = 3;
                break;

            // State q0q1 goes to qs on s
            case 's':
                state = 4;
                break;

            // State q0q1 goes to qc on c
            case 'c':
                state = 5;
                break;

            // State q0q1 goes to qt on t
            case 't':
                state = 6;
                break;

            // State q0q1 goes to q0qy on bghkmpr
            case 'b':
            case 'g':
            case 'h':
            case 'k':
            case 'm':
            case 'p':
            case 'r':
                state = 7;
                break;

            // Exit state q0q1 if q0q1 goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // --------------- State q0qy ---------------
        else if (state == 2) {

            switch (s[charpos]) {

            // State q0qy goes to q0q1 on V
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'I':
            case 'E':
                state = 1;
                break;

            // State q0qy goes to qsa on dwzyj
            case 'd':
            case 'w':
            case 'z':
            case 'y':
            case 'j':
                state = 3;
                break;

            // State q0qy goes to qs on s
            case 's':
                state = 4;
                break;

            // State q0qy goes to qc on c
            case 'c':
                state = 5;
                break;

            // State q0qy goes to qt on t
            case 't':
                state = 6;
                break;

            // State q0qy goes to qy on bghkmnpr
            case 'b':
            case 'g':
            case 'h':
            case 'k':
            case 'm':
            case 'n':
            case 'p':
            case 'r':
                state = 7;
                break;

            // Exit state q0qy if q0qy goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // --------------- State qsa ---------------
        else if (state == 3) {

            switch (s[charpos]) {

            // State qsa goes to q0q1 on V
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'I':
            case 'E':
                state = 1;
                break;

            // Exit state qsa if qsa goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // --------------- State qs ---------------
        else if (state == 4) {

            switch (s[charpos]) {

            // State qs goes to q0q1 on V
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'I':
            case 'E':
                state = 1;
                break;

            // State qs goes to qsa on h
            case 'h':
                state = 3;
                break;

            // Exit state qs if qs goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // --------------- State qc ---------------
        else if (state == 5) {

            switch (s[charpos]) {

            // State qc goes to qsa on h
            case 'h':
                state = 3;
                break;

            // Exit state qc if qc goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // --------------- State qt ---------------
        else if (state == 6) {

            switch (s[charpos]) {

            // State qt goes to q0q1 on V
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'I':
            case 'E':
                state = 1;
                break;

            // State qt goes to qsa on s
            case 's':
                state = 3;
                break;

            // Exit state qt if qt goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // --------------- State qy ---------------
        else if (state == 7) {

            switch (s[charpos]) {

            // State qy goes to q0q1 on V
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'I':
            case 'E':
                state = 1;
                break;

            // State qy goes to qsa on y
            case 'y':
                state = 3;
                break;

            // Exit state qt if qt goes to no other states
            default:
                state = -1;
                break;
            }
        }

        // If none of the states go to any other states on the provided grammar then return false
        else {
            return false;
        }

        charpos++;
    } //  end of while

    // where did I end up????
    if (state == 0 || state == 1 || state == 2) {
        return true;  // end in a final state
    }

    else {
        return false; // Returns false if the machine is not in the final state
    }
}
// PERIOD DFA 
// Done by: Colton Clark
bool period(string s) {
    // complete this **
    // Sets index of s[0] to c
    char c = s[0];

    // Checks to see if there is a period
    if (c == '.') {
        return true; // Returns true if there is a period
    }

    else {
        return false; // Returns false if there is no period
    }
}

// ------ Three  Tables -------------------------------------

// TABLES Done by: Colton Clark

// ** Update the tokentype to be WORD1, WORD2, PERIOD, ERROR, EOFM, etc.
enum tokentype { WORD1, WORD2, PERIOD, VERB, VERBNEG, VERBPAST, VERBPASTNEG, IS, WAS,
                 OBJECT, SUBJECT, DESTINATION, PRONOUN, CONNECTOR, ERROR, EOFM };

// ** For the display names of tokens - must be in the same order as the tokentype.
string tokenName[] = { "WORD1", "WORD2", "PERIOD", "VERB", "VERBNEG", "VERBPAST", "VERBPASTNEG", "IS", "WAS",
                       "OBJECT", "SUBJECT", "DESTINATION", "PRONOUN", "CONNECTOR", "ERROR", "EOFM" };

// ** Need the reservedwords table to be set up here. 
bool reservedWords(tokentype& tt, string r) {

    // Checks for the reserved word masu
    if (r == "masu") {
        tt = VERB; // Sets the tokentype to VERB.
    }

    // Checks for the reserved word masen
    else if (r == "masen") {
        tt = VERBNEG; // Sets the tokentype to VERB NEGATIVE
    }

    // Checks for the reserved word mashita
    else if (r == "mashita") {
        tt = VERBPAST; // Sets the tokentype to VERB PAST
    }

    // Checks for the reserved word masendeshita
    else if (r == "masendeshita") {
        tt = VERBPASTNEG; // Sets the tokentype to VERB PAST NEGATIVE
    }

    // Checks for the reserved word desu 
    else if (r == "desu") {
        tt = IS; // Sets the tokentype to IS
    }

    // Checks for the reserved word deshita
    else if (r == "deshita") {
        tt = WAS; // Sets the tokentype to WAS
    }

    // Checks for the reserved word o
    else if (r == "o") {
        tt = OBJECT; // Sets the tokentype to OBJECT 
    }

    // Checks for the reserved word wa
    else if (r == "wa") {
        tt = SUBJECT; // Sets the tokentype to SUBJECT
    }

    // Checks for the reserved word ni
    else if (r == "ni") {
        tt = DESTINATION; // Sets the tokentype to DESTINATION
    }

    // Checks for the reserved word watashi
    else if (r == "watashi") {
        tt = PRONOUN; // Sets the tokentype to PRONOUN
    }

    // Checks for the reserved word anata
    else if (r == "anata") {
        tt = PRONOUN; // Sets the tokentype to PRONOUN
    }

    // Checks for the reserved word kare
    else if (r == "kare") {
        tt = PRONOUN; // Sets the tokentype to PRONOUN
    }

    // Checks for the reserved word kanojo
    else if (r == "kanojo") {
        tt = PRONOUN; // Sets the tokentype to PRONOUN
    }

    // Checks for the reserved word sore
    else if (r == "sore") {
        tt = PRONOUN; // Sets the tokentype to PRONOUN
    }

    // Checks for the reserved word mata
    else if (r == "mata") {
        tt = CONNECTOR; // Sets the tokentype to CONNECTOR
    }

    // Checks for the reserved word soshite
    else if (r == "soshite") {
        tt = CONNECTOR; // Sets the tokentype to CONNECTOR
    }

    // Checks for the reserved word shikashi
    else if (r == "shikashi") {
        tt = CONNECTOR; // Sets the tokentype to CONNECTOR
    }

    // Checks for the reserved word dakara
    else if (r == "dakara") {
        tt = CONNECTOR; // Sets the tokentype to CONNECTOR
    }

    // Checks for the reserved word eofm
    else if (r == "eofm") {
        tt = EOFM; // Sets the tokentype to EOFM
    }

    // If none of the checked reserved words aren't there then return false
    else {
        return false;
    }

    // Returns true if one of the reserved words are found.
    return true;
}

// ** Do not require any file input for this. Hard code the table.
// ** a.out should work without any additional files.


// ------------ Scanner and Driver ----------------------- 

ifstream fin;  // global stream for reading from the input file

// Scanner processes only one word each time it is called
// Gives back the token type and the word itself
// ** Done by: Dakota Swank
int scanner(tokentype& tt, string& w) {

    // ** Grab the next word from the file via fin
    fin >> w;
    // 1. If it is eofm, return right now.   
    if (w == "eofm" || w == "EOFM") {
        tt = EOFM;
        return 0;
    }
    /*  **
    2. Call the token functions (word and period)
       one after another (if-then-else).
       Generate a lexical error message if both DFAs failed.
       Let the tokentype be ERROR in that case.

    3. If it was a word,
       check against the reservedwords list.
       If not reserved, tokentype is WORD1 or WORD2
       decided based on the last character.

    4. Return the token type & string  (pass by reference)
    */
    // Checks to see if there's a period
    if (period(w)) {
        tt = PERIOD; // Sets the tokentype to PERIOD
    }

    // Checks to see if there is a word in the file
    else if (word(w)) {

        // Checks to see if there are reserved words in the file
        if (reservedWords(tt, w)) {
            return 0; // Returns 0 if there is a reserved word.
        }

        // Checks to see if the word that is being processed contains a capital I or E at the end of the word.
        else if (w[w.size() - 1] == 'I' || w[w.size() - 1] == 'E') {
            tt = WORD2; // Sets the tokentype to WORD2
        }

        // If it doesn't contain a reserved word and/or an I or E at the end of the word then set the tokentype to WORD1
        else {
            tt = WORD1;
        }
    }

    // If the file being processed doesn't contain a word provided then print a Lexical Error
    else {
        tt = ERROR; // Sets the tokentype to ERROR
        cerr << "Lexical error: '" << w << "' is not a valid token" << endl; // Prints Error message with the invalid token
    }

    return 0;

} //the end of scanner

//=================================================
// File parser.cpp written by Group Number: 19
//=================================================

// ----- Four Utility Functions and Globals -----------------------------------

// ** Need syntaxerror1 and syntaxerror2 functions (each takes 2 args)
//    to display syntax error messages as specified by me.  

bool match(tokentype);
bool token_available;

// ** Need the updated match and next_token with 2 global vars
// saved_token and saved_lexeme
// token_available is used to check whether there is a token to be processed of not.
tokentype saved_token;
string saved_lexeme;
ofstream errors;

// Type of error: Match failed (incorrect token)
// Done by: Dakota Swank 
void syntax_error1(string saved_lexeme, tokentype expected) {
    
    char res;

    cout << "SYNTAX ERROR: Expected '" << tokenName[expected] << "' but found '" << saved_lexeme << "' and halt.\n\n";

    errors.open("errors.txt");
    errors << "SYNTAX ERROR: Expected '" << tokenName[expected] << "' but found '" << saved_lexeme << "' and halt.\n\n";

    cout << "Skip or replace the token? (s or r): ";
    cin >> res;
    cout << "\n";
    
    if(res == 's' || res == 'S') {
        // Skip the token
        token_available = false;
        // match the expected token
        match(expected);
        return;

    } 
    
    else if(res == 'r' || res == 'R') {
        // Replace the token with the next token
        saved_token = expected;
        match(expected);
        return;
    }

    errors.close();
}

// Type of error: Incorrect word trying to be processed into the parse function
// Done by: Dakota Swank
void syntax_error2(string saved_lexeme, string parse_function) {

    cout << "SYNTAX ERROR: Unexpected '" << saved_lexeme << "' found in '" << parse_function << "' and halt.\n\n";
    exit(1);
}

// Purpose: Fetches the next token that ran through the scanner and saves it.
// Done by: Colton Clark
tokentype next_token() {

    // if there is no saved token yet
    if (!token_available) {

        // call scanner to grab a new token
        // saved_token is the token type and saved_lexeme is the word that is read in
        scanner(saved_token, saved_lexeme);

        // Prints the next word in the file
        cout << "Scanner called using word: " << saved_lexeme << "\n";

        // mark the fact that you have saved it
        token_available = true;
    }

    return saved_token; // return the saved token
}

// Purpose: Matches the expected token to the correct token being passed through the scanner. If 
//          a mismatch occurs then it throws a synatical error, if not indicates there was a match.
// Done by: Dakota Swank
bool match(tokentype expected) {

    // mismatch has occurred with the next token
    if (next_token() != expected) {

        // calls a syntax error function here to generate a syntax error message here and do recovery
        syntax_error1(saved_lexeme, expected);

        // no match, halt the program
        return false; 
    }

    // match has occurred
    else {

        // Prints the token that is matched 
        cout << "Matched " << tokenName[expected] << "\n\n"; 

        // eat up the token
        token_available = false;

        // say there was a match
        return true;
    }
}

//=================================================
// File translator.cpp written by Group Number: **
//=================================================

// ----- Additions to the parser.cpp ---------------------

// ** Declare Lexicon (i.e. dictionary) that will hold the content of lexicon.txt
// Global variable - saved english word
string saved_E_word; 
// A map that stores the definitions of the Japanese words to English words from the lexcion.txt
map<string, string> lexicon;

// Make sure it is easy and fast to look up the translation.
// Do not change the format or content of lexicon.txt 
//  Done by: Dakota Swank
void dictionary() {
    
    // Opens the lexicon.txt file
    ifstream lexicon_fin;
    lexicon_fin.open("lexicon.txt");

    // Local variables
    string Jword;
    string Eword;

    // While there is a Japanese word in the lexicon.txt file then loop
    while (lexicon_fin >> Jword) {

        // Reads in the English word to the lexicon.txt file
        lexicon_fin >> Eword;
        // Replaces the Japanese word that is in the lexicon.txt file with the English word
        lexicon[Jword] = Eword;
    }
}

// ** Additions to parser.cpp here:
//    getEword() - using the current saved_lexeme, look up the English word
//                 in Lexicon if it is there -- save the result   
//                 in saved_E_word
// Done by: Dakota Swank
void getEword() {

    // Checks to see if the word is in the lexicon map
    if (lexicon.count(saved_lexeme)) {
        // If the saved Japanese word is in the lexicon then set it to the saved English word
        saved_E_word = lexicon[saved_lexeme]; 
    }

    else {
        // Else if the Japanese word is not set in the lexicon then set the saved English word to the saved Japanese word
        saved_E_word = saved_lexeme;
    }
}

// This is the file where the output gets sent
ofstream file("translated.txt");

//    gen(line_type) - using the line type,
//                     sends a line of an IR to translated.txt
//                     (saved_E_word or saved_token is used)
// Done by: Colton Clark
void gen(string line_type) {

    // Checks whether the line_type is TENSE
    if (line_type == "TENSE")
        // If the line_type is TENSE then it prints the token name to the translated.txt file
        file << line_type << ": " << tokenName[saved_token] << "\n\n";

    else
        // Else print the saved english work into the translated.txt file
        file << line_type << ": " << saved_E_word << "\n";
}

// ----- Changes to the parser.cpp content ---------------------

// ** Comment update: Be sure to put the corresponding grammar 
//    rule with semantic routine calls
//    above each non-terminal function 

// ** Each non-terminal function should be calling
//    getEword and/or gen now.

// ----- RDP functions - one per non-term -------------------

// ** Make each non-terminal into a function here
// ** Be sure to put the corresponding grammar rule above each function
// ** Be sure to put the name of the programmer above each function

// Function prototypes
void s();
void after_subject();
void after_noun();
void after_object();
void noun(); 
void verb();
void be();
void tense();

// Done by: Dakota Swank
// Grammar: <story> ::= <s> { <s> }
void story() {

    cout << "\nProcessing <Story>\n\n";

    // Processes <s>
    s();

    // Loop for <s>
    while (true) {
        // Looks ahead to see if the start of the <story> is valid
        switch (next_token()) {
        
        // Found the beginnings of what <s> can be
        case CONNECTOR:
        case WORD1:
        case PRONOUN:
            // Processes <s> if CONNECTOR, WORD1, or PRONOUN are found
            s();
            break;

        // If there is no next_token that matches then return
        default:
            return;
        }
    }
}

// Done by: Dakota Swank
// Grammar: <s> ::= [CONNECTOR] <noun> SUBJECT <after subject> 
// Updated Grammar: <s> ::= [CONNECTOR #getEword# #gen(CONNECTOR)#] <noun> #getEword# 
//                           SUBJECT #gen(ACTOR)# <after subject>
void s() {

    cout << "Processing <S>\n\n";

    // If the next_token does not equal eofm then proceed
    if (next_token() != EOFM) {
        
        // If the next_token is a CONNECTOR then proceed
        if (next_token() == CONNECTOR) {
            // Checks to see if the next_token CONNECTOR is found by the scanner and grabs it
            match(CONNECTOR); 
            // Calls the getEword() function to the get the equivelent english word of the japanese word
            getEword();
            // Calls the gen() function to print the results
            gen("CONNECTOR");
        }

        // Calls and processes the <noun> parser function to match the tokens
        noun();
        // Calls the getEword() function to the get the equivelent english word of the japanese word
        getEword();
         // Checks to see if SUBJECT is found by the scanner and grabs it
        match(SUBJECT);
        // Calls the gen() function to print the results
        gen("ACTOR");
        // Calls and processes the <after_subject> parser function to match the tokens
        after_subject();
    }
}

// Done by: Dakota Swank
// Grammar: <after subject> ::= <verb> <tense> PERIOD | <noun> <after noun> 
// Updated Grammar: <after subject> ::= <verb> #getEword# #gen(ACTION)# <tense> 
//                  #gen(TENSE)# PERIOD | <noun> #getEword# <after noun>
void after_subject() {

    cout << "Processing <afterSubject>\n\n";

    // Looks ahead to see if the start of the <afterSubject> function is valid
    switch (next_token()) {

    // If WORD2 then calls all parse functions specified by the grammar
    case WORD2:
        // Calls and processes the <verb> parser function to match the tokens
        verb();
        // Calls the getEword() function to the get the equivelent english word of the japanese word
        getEword();
        // Calls the gen() function to print the results
        gen("ACTION");
        // Calls and processes the <tense> parser function to match the tokens 
        tense();
        // Calls the gen() function to print the results
        gen("TENSE");
        // Checks to see if PERIOD is found by the scanner and grabs it
        match(PERIOD);
        break;

    // Or if the aferSubject begins with WORD1 or PRONOUN then fetch the functions specified by the grammar
    case WORD1:
    case PRONOUN:
        // Calls and processes the <noun> parser function to match the tokens
        noun();
        // Calls the getEword() function to the get the equivelent english word of the japanese word
        getEword();
        // Calls and processes the <afterNoun> parser function to match the tokens
        after_noun();
        break;

    // Otherwise, none are valid choices, therefore, throws an syntactical error
    default:
        syntax_error2(saved_lexeme, "afterSubject");
        break;
    }
}

// Done by: Colton Clark
// Grammar: <after noun> ::= <be> PERIOD | DESTINATION <verb> <tense> PERIOD | OBJECT <after object>
// Updated Grammar: <after noun> ::= <be> #gen(DESCRIPTION)# #gen(TENSE)# PERIOD | DESTINATION #gen(TO)# <verb> 
//                 #getEword# #gen(ACTION)# <tense> #gen(TENSE) PERIOD | OBJECT #gen(Object)# <after object>
void after_noun() {

    cout << "Processing <afterNoun>\n\n";

    // Looks ahead to see if the start of the <afterNoun> function is valid
    switch (next_token()) {

    // If IS or WAS then matches tokens and/or calls the parser functions specified by the grammar
    case IS:
    case WAS:
        // Calls and processes the <be> parser function to match the tokens
        be();
        // Calls the gen() function to print the results
        gen("DESCRIPTION");
        // Calls the gen() function to print the results
        gen("TENSE");
        // Checks to see if PERIOD is found by the scanner and grabs it
        match(PERIOD);
        break;

     // Or if DESTINATION then matches tokens and/or calls all parse functions specified by the grammar
    case DESTINATION:
        // Checks to see if DESTINATION is found by the scanner and grabs it
        match(DESTINATION);
        // Calls the gen() function to print the results
        gen("TO");
        // Calls and processes the <verb> parser function to match the tokens
        verb();
        // Calls the getEword() function to the get the equivelent english word of the japanese word
        getEword();
        // Calls the gen() function to print the results
        gen("ACTION");
        // Calls and processes the <tense> parser function to match the tokens 
        tense();
        // Calls the gen() function to print the results
        gen("TENSE");
        // Checks to see if PERIOD is found by the scanner and grabs it
        match(PERIOD);
        break;

     // Or if OBJECT then matches the OBJECT token and calls the <afterObject> parser function as specified by the grammar
    case OBJECT:
        // Checks to see if OBJECT is found by the scanner and grabs it
        match(OBJECT);
        // Calls the gen() function to print the results
        gen("OBJECT");
        // Calls and processes the <afterObject> parser function to match the tokens
        after_object();
        break;

    // Otherwise, none are valid choices, therefore, throws an syntactical error
    default:
        syntax_error2(saved_lexeme, "afterNoun");
        break;
    }
}

// Done by: Colton Clark
// Grammar: <after object> ::= <verb> <tense> PERIOD | <noun> DESTINATION <verb> <tense> PERIOD
// Updated Grammar: <afterobject> ::= <verb> #getEword# #gen(ACTION)# <tense> #gen(TENSE)# PERIOD | <noun> #getEword# 
//                   DESTINATION #gen(TO)# <verb> #getEword# #gen(ACTION)# <tense> #gen(TENSE)# PERIOD
void after_object() {

    cout << "Processing <afterObject>\n\n";

    // Looks ahead to see if the start of the <afterObject> function is valid
    switch (next_token()) {

    // If word is a verb then calls all functions specified by the grammar
    case WORD2:

        // Calls and processes the <verb> parser function to match the tokens
        verb();
        // Calls the getEword() function to the get the equivelent english word of the japanese word
        getEword();
        // Calls the gen() function to print the results
        gen("ACTION");
        // Calls and processes the <tense> parser function to match the tokens
        tense();
        // Calls the gen() function to print the results
        gen("TENSE");
        // Checks to see if PERIOD is found by the scanner and grabs it
        match(PERIOD);
        break;

    // If the word is a noun then it calls all functions specified by the grammar
    case WORD1:
    case PRONOUN:
        // Calls and processes the <noun> parser function to match the tokens
        noun();
        // Calls the getEword() function to the get the equivelent english word of the japanese word
        getEword();
        // Checks to see if DESTINATION is found by the scanner and grabs it
        match(DESTINATION);
        // Calls the gen() function to print the results
        gen("TO");
        // Calls and processes the <verb> parser function to match the tokens
        verb();
        // Calls the getEword() function to the get the equivelent english word of the japanese word
        getEword();
        // Calls the gen() function to print the results
        gen("ACTION");
        // Calls and processes the <tense> parser function to match the tokens
        tense();
        // Calls the gen() function to print the results
        gen("TENSE");
         // Checks to see if PERIOD is found by the scanner and grabs it
        match(PERIOD);
        break;

    // Otherwise, none are valid choices, therefore, throws an syntactical error
    default:
        syntax_error2(saved_lexeme, "afterObject");
        break;
    }
}

// Done by: Colton Clark
// Grammar: <noun> ::= WORD1 | PRONOUN 
void noun() {

    cout << "Processing <noun>\n\n";

    // Looks ahead to see if the start of the <noun> function is valid
    switch (next_token()) {

    // If WORD1
    case WORD1:
        // Checks to see if WORD1 is found by the scanner and grabs it
        match(WORD1);
        break;

    // If PRONOUN
    case PRONOUN:
        // Checks to see if PRONOUN is found by the scanner and grabs it
        match(PRONOUN);
        break;

    // Otherwise, none are valid choices, therefore, throws a syntactical error
    default:
        syntax_error2(saved_lexeme, "noun");
        break;
    }
}

// Done by: Colton Clark
// Grammar: <verb> ::= WORD2
void verb() {

    cout << "Processing <verb>\n\n";

    // Looks ahead to see if the start of the <verb> function is valid
    switch (next_token()) {

    // If WORD2
    case WORD2:
        // Checks to see if WORD2 is found by the scanner and grabs it
        match(WORD2);
        break;

    // Otherwise, none are valid choices, therefore, throws an syntactical error
    default:
        syntax_error2(saved_lexeme, "verb");
        break;
    }
}

// Done by: Colton Clark
// Grammar: <be> ::= IS | WAS
void be() {

    cout << "Processing <be>\n\n";

    // Looks ahead to see if the start of the <be> function is valid
    switch (next_token()) {
    
    // If IS
    case IS:
        // Checks to see if IS is found by the scanner and grabs it
        match(IS);
        break;

    // If WAS
    case WAS:
        // Checks to see if WAS is found by the scanner and grabs it
        match(WAS);
        break;

    // Otherwise, none are valid choices, therefore, throws an syntactical error
    default:
        syntax_error2(saved_lexeme, "be");
        break;
    }
}

// Done by: Colton Clark
// Grammar: <tense> ::= VERBPAST | VERBPASTNEG | VERB | VERBNEG
void tense() {

    cout << "Processing <tense>\n\n";

    // Looks ahead to see if the start of the <tense> function is valid
    switch (next_token()) {

    // If VERBPAST
    case VERBPAST:
        // Checks to see if VERBPAST is found by the scanner and grabs it
        match(VERBPAST);
        break;

    // If VERBPASTNEG
    case VERBPASTNEG:
        // Checks to see if VERBPASTNEG is found by the scanner and grabs it
        match(VERBPASTNEG);
        break;

    // If VERB
    case VERB:
        // Checks to see if VERB is found by the scanner and grabs it
        match(VERB);
        break;

    // If VERBNEG
    case VERBNEG:
        // Checks to see if VERBNEG is found by the scanner and grabs it
        match(VERBNEG);
        break;

    // Otherwise, none are valid choices, therefore, throws an syntactical error
    default:
        syntax_error2(saved_lexeme, "tense");
        break;
    }
}

string filename;
ofstream outfile;

// ---------------- Driver ---------------------------

// The final test driver to start the translator
// Done by: Dakota Swank
int main() {

    //** opens the lexicon.txt file and reads it into Lexicon
    fin.open("lexicon.txt");
    //** closes lexicon.txt 
    fin.close();

    //** opens the output file translated.txt
    outfile.open("translated.txt");
    cout << "Enter the input file name: ";
    cin >> filename;
    fin.open(filename.c_str());

    // Calls the dictionary function to check the words in the lexicon.txt file
    dictionary();

    //** calls the <story> to start parsing
    story();

    // prints if the story is parsed successfully 
    cout << "Successfully parsered <Story>\n\n";

    //** closes the input file 
    fin.close();
    //** closes traslated.txt
    outfile.close();

    errors.close();

}// end
//** require no other input files!
//** syntax error EC requires producing errors.txt of error messages
//** tracing On/Off EC requires sending a flag to trace message output functions

