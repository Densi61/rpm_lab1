#include "three_poks.hpp"

Slowpoke::Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int l_pokemonSpeedPoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense)
: Pokemon(l_pokemonName, l_pokemonHealthPoint, l_pokemonAttackPoint, l_pokemonDefensePoint, l_pokemonSpeedPoint){
    slowpokeSpecAttack = l_pokemonSpecAttack;
    slowpokeSpecDefense = l_pokemonSpecDefense;
}


