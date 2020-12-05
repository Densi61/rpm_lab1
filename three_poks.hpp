#include "pokemon.hpp"

class Slowpoke : public Pokemon {
protected:
    std::string slowpokeSpecAttack;
    std::string slowpokeSpecDefense;
public:
    Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int l_pokemonSpeedPoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense);

    void setSpecialAttack(std::string l_pokemonSpecAttack) {
        slowpokeSpecAttack = l_pokemonSpecAttack;
    }

    void setSpecialDefense(std::string l_pokemonSpecDefense) {
        slowpokeSpecDefense = l_pokemonSpecDefense;
    }

    std::string getSpecialAttack() {
        return slowpokeSpecAttack;
    }

    std::string getSpecialDefense() {
        return slowpokeSpecDefense;
    }
};

class Jigglypuff : public Pokemon {
protected:
    std::string jigglypuffSpecAttack;
    std::string jigglypuffSpecDefense;
public:
    Jigglypuff(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int l_pokemonSpeedPoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefense);

    void setSpecialAttack(std::string l_pokemonSpecAttack) {
        jigglypuffSpecAttack = l_pokemonSpecAttack;
    }

    void setSpecialDefense(std::string l_pokemonSpecDefense) {
        jigglypuffSpecDefense = l_pokemonSpecDefense;
    }

    std::string getSpecialAttack() {
        return jigglypuffSpecAttack;
    }

    std::string getSpecialDefense() {
        return jigglypuffSpecDefense;
    }
};

class Rattata : public Pokemon {
protected:
    std::string rattataSpecAttack;
    std::string rattataSpecDefense;
public:
    Rattata(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int l_pokemonSpeedPoint, std::string l_pokemonSpecAttack, std::string l_pokemonSpecDefence);

    void setSpecialAttack(std::string l_pokemonSpecAttack) {
        rattataSpecAttack = l_pokemonSpecAttack;
    }

    void setSpecialDefense(std::string l_pokemonSpecDefense) {
        rattataSpecDefense = l_pokemonSpecDefense;
    }

    std::string getSpecialAttack() {
        return rattataSpecAttack;
    }

    std::string getSpecialDefense() {
        return rattataSpecDefense;
    }
};



