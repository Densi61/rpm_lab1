#include "pokemon.hpp"

Slowpoke::Slowpoke() {

}

Slowpoke::Slowpoke(std::string l_pokemonName, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense)
: Pokemon(l_pokemonName){
    m_pokemonSpecAttack = l_pokemonSpecAttack;
    m_pokemonSpecDefense= l_pokemonSpecDefense;
}

Slowpoke::Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense)
: Pokemon(l_pokemonName, l_pokemonHealthPoint){
    m_pokemonSpecAttack = l_pokemonSpecAttack;
    m_pokemonSpecDefense= l_pokemonSpecDefense;
}

Slowpoke::Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense)
: Pokemon(l_pokemonName, l_pokemonHealthPoint, l_pokemonAttackPoint){
    m_pokemonSpecAttack = l_pokemonSpecAttack;
    m_pokemonSpecDefense= l_pokemonSpecDefense;
}

Slowpoke::Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense)
: Pokemon(l_pokemonName, l_pokemonHealthPoint, l_pokemonAttackPoint, l_pokemonDefensePoint){
    m_pokemonSpecAttack = l_pokemonSpecAttack;
    m_pokemonSpecDefense= l_pokemonSpecDefense;
}

Slowpoke::Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int l_pokemonSpeedPoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense)
: Pokemon(l_pokemonName, l_pokemonHealthPoint, l_pokemonAttackPoint, l_pokemonDefensePoint, l_pokemonSpeedPoint){
    m_pokemonSpecAttack = l_pokemonSpecAttack;
    m_pokemonSpecDefense = l_pokemonSpecDefense;
}

Slowpoke::~Slowpoke() {

}

