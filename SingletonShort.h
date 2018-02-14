#ifndef __BADPROG_SINGLETONSHORT_H__
#define __BADPROG_SINGLETONSHORT_H__

// Badprog.com

class SingletonShort
{
public:	
	virtual ~SingletonShort();
	static SingletonShort &theInstance();
	SingletonShort(const SingletonShort &other) = delete; // prevents classic copy

protected:
	SingletonShort();
};

#endif // __BADPROG_SINGLETONSHORT_H__