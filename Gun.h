class Gun{
protected:
	int magazine;
public:
	Gun();
	~Gun();
	void updateMagazine();
	void reload();

	int GetMagazine();
	int isEmpty();
};
