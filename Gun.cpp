#include "Gun.hpp"

	Gun::Gun(){
		for(int i=0 ; i<6 ; i++){
			magazine[i] = new Bullets();
		}
	}

	Gun::~Gun(){

	}

	int Gun::IsEmpty(){
		return magazine==0;
	}

	int Gun::GetMagazineState(){
		int s=0;
		for(int i=0 ; i<6 ; i++){
			if(magazine[i]->GetP()){
				s++;
			}
		}
		return s;
	}

	void Gun::Reload(){
		int s = GetMagazineState();
		for(int j=5 ; j>s-1 ;j--){
			magazine[j]->Reset();
		}
	}

	void Gun::Shot(){
		int s = GetMagazineState();
		if(s != 0){
			magazine[s-1]->Used();
		}else{
			Reload();
		}
	}