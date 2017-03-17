#include<string>

class Cbook
{
private:
	char *m_pcName;
	int m_nPages=100;
	int m_nEdition=100;
	std::string s1 = "ASDF";

	void SetBookName(char* pName);
	void SetTotalPages(int nPages);
	void SetBookEdition(int nEdition);
public:
	char* GetBookName();
	int GetTotalPages();
	int GetBookEdition();

	
	Cbook(int a,int b,char* str)
	{
		m_nPages = a;
		m_nEdition = b;
		m_pcName = new char[120];
		m_pcName = str;
	}
	Cbook()
	{
		m_nEdition = 0;
		m_nPages = 0;
		m_pcName = new char[100];
		m_pcName = "#########";
	}
	~Cbook(){
		printf("End\n");
		//delete[] m_pcName;
		//free(m_pcName);
	}

};
void  Cbook::SetTotalPages(int tp)
{
	Cbook::m_nPages = tp;
}
void Cbook::SetBookEdition(int be)
{
	Cbook::m_nEdition = be;
}
char* Cbook::GetBookName()
{
	return Cbook::m_pcName;
}
int Cbook::GetBookEdition()
{
	return Cbook::m_nEdition;
}
int Cbook::GetTotalPages()
{
	return Cbook::m_nPages;
}