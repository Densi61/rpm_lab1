#include <string>

class Pokemon{
    protected:
        std::string m_pokemonName;
        int m_pokemonHealthPoint;
        int m_pokemonAttackPoint;
        int m_pokemonDefensePoint;
        int m_pokemonSpeedPoint;
    public:
        Pokemon(std::string l_pokemonName, int l_pokemonHealthPoint, int l_pokemonAttackPoint, int l_pokemonDefensePoint, int m_pokemonSpeedPoint);

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
