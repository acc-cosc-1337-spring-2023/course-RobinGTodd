//add include statements
#include "func.h"
#include<iostream>

using std::cout; using std::string;

//add function code here
double get_gc_content(const string &dna)
{
    int dna_len = dna.length();
    double gc_count = 0;

    for (int i = 0; i < dna_len; i++) {
        if (dna[i] == 'G' | dna[i] == 'C') {
            gc_count += 1;
        }
    }

    return gc_count/dna_len;

}

string get_dna_complement(string dna)
{   
    string dna_rev = get_reverse_string(dna);
    string dna_compl;

    for (int i = 0; i < dna.length(); i++) {
        switch (dna_rev[i]) {
            case 'A': 
                dna_compl += 'T';
                break;
            case 'G': 
                dna_compl += 'C';
                break;
            case 'C': dna_compl += 'G';
                break;
            case 'T': dna_compl += 'A';
                break;
            default:
                break;
        }
    }
    return dna_compl;
}


string get_reverse_string(string dna)
{
    string dna_rev;

    for (int i = dna.length(); i > 0; i--) {
        dna_rev += dna[i-1];
        }

    return dna_rev;
}

void display_menu()
{
    cout<<"1-Get GC Content\n";
    cout<<"2-Get DNA Complement\n";
    cout<<"3-Exit\n";
}

void display_get_gc_content()
{
    
}