#include <iostream>
#include "three_poks.hpp"
#include <fstream>
using namespace std;

void print(Pokemon frst, Pokemon sec, Pokemon thrd){
    cout << "<pokemons>\n";

    cout << "</pokemons>\n";
}
int main()
{
    Slowpoke first_pok = Slowpoke("Slowpoke", 1, 11, 111, 1111, "SuperSlow", "MegaSlow");
    Jigglypuff second_pok = Jigglypuff("Jigglypuff", 2, 22, 222, 2222, "Song", "Cute");
    Rattata third_pok = Rattata("Rattata", 3, 33, 333, 3333, "Rat", "tatata");
    ofstream pokemonsfile;
    pokemonsfile.open("pokemons.txt");
    pokemonsfile << "<pokemons>\n";
    pokemonsfile << "\n\t<pokemon name='" << first_pok.getPokemonName() << "'>\n";
    pokemonsfile << "\t\t<hp>" << first_pok.getPokemonHealthPoint() << "</hp>\n";
    pokemonsfile << "\t\t<ap>" << first_pok.getPokemonAttackPoint() << "</ap>\n";
    pokemonsfile << "\t\t<dp>" << first_pok.getPokemonDefensePoint() << "</dp>\n";
    pokemonsfile << "\t\t<sp>" << first_pok.getPokemonSpeedPoint() << "</sp>\n";
    pokemonsfile << "\t\t<sa>" << first_pok.getSpecialAttack() << "</sa>\n";
    pokemonsfile << "\t\t<sd>" << first_pok.getSpecialDefense() << "</sd>\n";
    pokemonsfile << "\t</pokemon>\n";
    pokemonsfile << "\n\t<pokemon name='" << second_pok.getPokemonName() << "'>\n";
    pokemonsfile << "\t\t<hp>" << second_pok.getPokemonHealthPoint() << "</hp>\n";
    pokemonsfile << "\t\t<ap>" << second_pok.getPokemonAttackPoint() << "</ap>\n";
    pokemonsfile << "\t\t<dp>" << second_pok.getPokemonDefensePoint() << "</dp>\n";
    pokemonsfile << "\t\t<sp>" << second_pok.getPokemonSpeedPoint() << "</sp>\n";
    pokemonsfile << "\t\t<sa>" << second_pok.getSpecialAttack() << "</sa>\n";
    pokemonsfile << "\t\t<sd>" << second_pok.getSpecialDefense() << "</sd>\n";
    pokemonsfile << "\t</pokemon>\n";
    pokemonsfile << "\n\t<pokemon name='" << third_pok.getPokemonName() << "'>\n";
    pokemonsfile << "\t\t<hp>" << third_pok.getPokemonHealthPoint() << "</hp>\n";
    pokemonsfile << "\t\t<ap>" << third_pok.getPokemonAttackPoint() << "</ap>\n";
    pokemonsfile << "\t\t<dp>" << third_pok.getPokemonDefensePoint() << "</dp>\n";
    pokemonsfile << "\t\t<sp>" << third_pok.getPokemonSpeedPoint() << "</sp>\n";
    pokemonsfile << "\t\t<sa>" << third_pok.getSpecialAttack() << "</sa>\n";
    pokemonsfile << "\t\t<sd>" << third_pok.getSpecialDefense() << "</sd>\n";
    pokemonsfile << "\t</pokemon>\n";
    pokemonsfile << "\n</pokemons>\n";
    pokemonsfile.close();
    return 0;
}
