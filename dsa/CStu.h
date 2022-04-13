#include <sstream>
#include <string>
using namespace std;
class CStu {
private:
	int _studentID;
	string _name;
	float _age;
	double _score;
public:
	CStu(int id, const string& name, float age, double score) :_name(name) {
		_studentID = id; _age = age; _score = score;
	}
	CStu(int id, const char* name, float age, double score) : _name(name) {
		_studentID = id; _age = age; _score = score;
	}
	CStu() :_name("unknown") {
		_studentID = 0; _age = 0.0; _score = -1.0;
	}

	CStu(const CStu& s) :_name(s._name) {
		_studentID = s._studentID;
		_age = s._age; _score = s._score;
	}

	const CStu& operator = (const CStu& rhs)
	{
		if (this != &rhs)
		{
			_studentID = rhs._studentID;
			_age = rhs._age;
			_score = rhs._score;
			_name = rhs._name;
		}
		return *this;
	}

	CStu& operator =(CStu&& rhs) noexcept {
		if (this != &rhs)
		{
			_studentID = rhs._studentID;
			_age = rhs._age;
			_score = rhs._score;
			_name = move(rhs._name);
		}
		return *this;
	}

	CStu(CStu&& s)noexcept { *this = move(s); }

	bool operator<(const CStu& y)const {
		return _studentID < y._studentID;
	}
	int id() const { return _studentID; }
	int& id() { return _studentID; }

	string name() const { return _name; }
	string& name() { return _name; }

	float age() const { return _age; }
	float& age() { return _age; }
	double score() const { return _score; }
	double& score() { return _score; }

	string str() const {
		ostringstream ss;
		ss << _studentID << '-' << _name << '-' << _age << '-' << _score;
		return ss.str();
	}
	~CStu() {}
};

ostream& operator<<(ostream& os, const CStu& stu) {
	os << stu.name() << '(' << stu.id() << ')';
	return os;
}