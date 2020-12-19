#include <string>

class Pokemon{
    protected:
        std::string m_pokemonName;
        int m_pokemonHealthPoint;
        int m_pokemonAttackPoint;
        int m_pokemonDefensePoint;
        int m_pokemonSpeedPoint;
    public:
        Pokemon();
        Pokemon(std::string l_pokemonName);
        Pokemon(std::string l_pokemonName, int l_pokemonHealthPoint);
        Pokemon(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint);
        Pokemon(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint);
        Pokemon(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int m_pokemonSpeedPoint);
        ~Pokemon();

        void setPokemonName(std::string l_pokemonName);
        std::string getPokemonName(){return m_pokemonName; };

        void setPokemonHealthPoint(int l_pokemonHealthPoint);
        int getPokemonHealthPoint(){return m_pokemonHealthPoint; };

        void setPokemonAttackPoint(int l_pokemonAttackPoint);
        int getPokemonAttackPoint(){return m_pokemonAttackPoint; };

        void setPokemonDefensePoint(int l_pokemonDefensePoint);
        int getPokemonDefensePoint(){return m_pokemonDefensePoint; };

        void setPokemonSpeedPoint(int l_pokemonSpeedPoint);
        int getPokemonSpeedPoint(){return m_pokemonSpeedPoint; };


};

class Slowpoke : public Pokemon{
    protected:
        std::string m_pokemonSpecAttack;
        std::string m_pokemonSpecDefense;
    public:
        Slowpoke();
        Slowpoke(std::string l_pokemonName, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Slowpoke(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int m_pokemonSpeedPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        ~Slowpoke();

        void setPokemonSpecAttack(std::string l_pokemonSpecAttack);
        std::string getPokemonSpecAttack() { return m_pokemonSpecAttack; };
        void setPokemonSpecDefense(std::string pokemonSpecDefense);
        std::string  getPokemonSpecDefense() {return m_pokemonSpecDefense; };

};

class Rattata : public Pokemon{
    protected:
        std::string m_pokemonSpecAttack;
        std::string m_pokemonSpecDefense;
    public:
        Rattata();
        Rattata(std::string l_pokemonName, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Rattata(std::string l_pokemonName, int l_pokemonHealthPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Rattata(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Rattata(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Rattata(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int m_pokemonSpeedPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        ~Rattata();

        void setPokemonSpecAttack(std::string l_pokemonSpecAttack);
        std::string getPokemonSpecAttack() { return m_pokemonSpecAttack; };
        void setPokemonSpecDefense(std::string pokemonSpecDefense);
        std::string  getPokemonSpecDefense() {return m_pokemonSpecDefense; };

};

class Jigglypuff : public Pokemon{
    protected:
        std::string m_pokemonSpecAttack;
        std::string m_pokemonSpecDefense;
    public:
        Jigglypuff();
        Jigglypuff(std::string l_pokemonName, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Jigglypuff(std::string l_pokemonName, int l_pokemonHealthPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Jigglypuff(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Jigglypuff(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        Jigglypuff(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int m_pokemonSpeedPoint, std::string m_pokemonSpecAttack, std::string m_pokemonSpecDefense);
        ~Jigglypuff();

        void setPokemonSpecAttack(std::string l_pokemonSpecAttack);
        std::string getPokemonSpecAttack() { return m_pokemonSpecAttack; };
        void setPokemonSpecDefense(std::string pokemonSpecDefense);
        std::string  getPokemonSpecDefense() {return m_pokemonSpecDefense; };

};
