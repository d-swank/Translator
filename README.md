# Translator

A translator that utilizes a deterministic finite automaton (DFA) to adhere to a specific set of rules. 
Using provided test files containing various sentences, the program checks for syntactic and semantic accuracy. 
If the sentences pass this check, the program accurately parses and translates the story from Japanese to English.

If the senetence is not syntactically correct, the program throws an error message and asks the user to skip or replace
the token. When the program is finished parsing the entire story, all the errors that were thrown are copied to an error.txt file.
