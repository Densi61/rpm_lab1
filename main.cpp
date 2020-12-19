#include <iostream>
#include "pokemon.hpp"
#include <fstream>
using namespace std;


int main()
{
    Slowpoke slowpoke("Slowpoke", 1, 11, 111, 1111, "SuperSlow", "MegaSlow");
    Jigglypuff jigglypuff("Jigglypuff", 2, 22, 222, 2222, "Song", "Cute");
    Rattata rattata("Rattata", 3, 33, 333, 3333, "Rat", "tatata");
    ofstream pokemonsfile;
    pokemonsfile.open("pokemons.txt");
    pokemonsfile << "<pokemons>\n";
    pokemonsfile << "\n\t<pokemon name='" << slowpoke.getPokemonName() << "'>\n";
    pokemonsfile << "\t\t<hp>" << slowpoke.getPokemonHealthPoint() << "</hp>\n";
    pokemonsfile << "\t\t<ap>" << slowpoke.getPokemonAttackPoint() << "</ap>\n";
    pokemonsfile << "\t\t<dp>" << slowpoke.getPokemonDefensePoint() << "</dp>\n";
    pokemonsfile << "\t\t<sp>" << slowpoke.getPokemonSpeedPoint() << "</sp>\n";
    pokemonsfile << "\t\t<sa>" << slowpoke.getPokemonSpecAttack() << "</sa>\n";
    pokemonsfile << "\t\t<sd>" << slowpoke.getPokemonSpecDefense() << "</sd>\n";
    pokemonsfile << "\t</pokemon>\n";
    pokemonsfile << "\n\t<pokemon name='" << jigglypuff.getPokemonName() << "'>\n";
    pokemonsfile << "\t\t<hp>" << jigglypuff.getPokemonHealthPoint() << "</hp>\n";
    pokemonsfile << "\t\t<ap>" << jigglypuff.getPokemonAttackPoint() << "</ap>\n";
    pokemonsfile << "\t\t<dp>" << jigglypuff.getPokemonDefensePoint() << "</dp>\n";
    pokemonsfile << "\t\t<sp>" << jigglypuff.getPokemonSpeedPoint() << "</sp>\n";
    pokemonsfile << "\t\t<sa>" << jigglypuff.getPokemonSpecAttack() << "</sa>\n";
    pokemonsfile << "\t\t<sd>" << jigglypuff.getPokemonSpecDefense() << "</sd>\n";
    pokemonsfile << "\t</pokemon>\n";
    pokemonsfile << "\n\t<pokemon name='" << rattata.getPokemonName() << "'>\n";
    pokemonsfile << "\t\t<hp>" << rattata.getPokemonHealthPoint() << "</hp>\n";
    pokemonsfile << "\t\t<ap>" << rattata.getPokemonAttackPoint() << "</ap>\n";
    pokemonsfile << "\t\t<dp>" << rattata.getPokemonDefensePoint() << "</dp>\n";
    pokemonsfile << "\t\t<sp>" << rattata.getPokemonSpeedPoint() << "</sp>\n";
    pokemonsfile << "\t\t<sa>" << rattata.getPokemonSpecAttack() << "</sa>\n";
    pokemonsfile << "\t\t<sd>" << rattata.getPokemonSpecDefense() << "</sd>\n";
    pokemonsfile << "\t</pokemon>\n";
    pokemonsfile << "\n</pokemons>\n";
    pokemonsfile.close();
    return 0;
}
