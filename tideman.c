#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CANDIDATES 9

int candidateCount = 0;
int pairCount = 0;

typedef struct {
    int winner;
    int loser;
} pair;

//voters who prefers candidate i over candidate j
int preferences[MAX_CANDIDATES][MAX_CANDIDATES];

//Edge pointing from candidate i to candidate j is locked returns true
bool locked[MAX_CANDIDATES][MAX_CANDIDATES];

string candidate[MAX_CANDIDATES]

bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);

int main(int argc, string args[]) {

    if (argc > 2) {
        candidateCount = argc - 1;
        if (candidateCount < MAX_CANDIDATES) {
            for (int i = 0; i < candidateCount; i++) {
                candidates[i].name = args[i + 1];
            }
        } else {
            printf("Candidates cannot exceed maximum candidate cound!\n");
            return 0;
        }
    }


    return 0;
}

//Look for a candidate with the same name
bool vote(int rank, string name, int ranks[]) {

    for (int i = 0; i < candodateCount; i++) {
        //finds the candidate
        if (strcmp(candidates[i], name) == 0) {
            //if candidate is found, updates the rank to the voter's i'th preference
            ranks[rank] = i;
            return true
        }
    }
    //if none is found, basically updates nothing and returns false
    return false;
}

//updates preferences array based on the current voter's ranks
void record_preferences(int ranks[]) {
    for (int i =0; i < candidateCount; i++) {
        for (int j =i+1; j < candidateCount; j++){
            preferences[rank[i]][rank[j]]++;   
        }
    }
}

void add_pairs(void) {
    
}

void sort_pairs(void) {
    
}

int comparator(const void *a, const void *b) {
    
}

void validateLock(int j) {
    
}








