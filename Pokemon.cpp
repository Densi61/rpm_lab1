#include "pokemon.hpp"
#include <iostream>
#include <string>
Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int l_pokemonSpeedPoint)
{
    m_pokemonName = l_pokemonName;
    m_pokemonHealthPoint = l_pokemonHealthPoint;
    m_pokemonAttackPoint = l_pokemonAttackPoint;
    m_pokemonDefensePoint = l_pokemonDefensePoint;
    m_pokemonSpeedPoint = l_pokemonSpeedPoint;
}
void Pokemon::setPokemonName(std::string l_pokemonName) {
    m_pokemonName = l_pokemonName;
}

void Pokemon::setPokemonHealthPoint(int l_pokemonHealthPoint) {
    m_pokemonHealthPoint = l_pokemonHealthPoint;
}

void Pokemon::setPokemonAttackPoint(int l_pokemonAttackPoint) {
    m_pokemonAttackPoint = l_pokemonAttackPoint;
}

void Pokemon::setPokemonDefensePoint(int l_pokemonDefensePoint) {
    m_pokemonDefensePoint = l_pokemonDefensePoint;
}

void Pokemon::setPokemonSpeedPoint(int l_pokemonSpeedPoint) {
    m_pokemonSpeedPoint = l_pokemonSpeedPoint;
}

