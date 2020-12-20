#ifndef DEF_WAVE
#define DEF_WAVE

#include <vector>
#include "Zombie.hpp"
#include <iostream>


class Wave{

	private:

		int num;
		std::vector<Zombie> listZ;

	public:

		Wave();
		~Wave();

		void UpdateListeZ();
		void NextWave();
};

#endif