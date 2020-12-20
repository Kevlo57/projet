#ifndef DEF_GUN
#define DEF_GUN

#include "Bullets.hpp"
#include <iostream>


class Gun{

	private:

		Bullets* magazine[6];

	public:


		Gun();
		~Gun();
		
		void Shot();
		void GetMagazine();
		int GetMagazineState();
		void Reload();
		int IsEmpty();
};

#endif