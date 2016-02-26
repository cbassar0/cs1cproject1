/*
 * member.h
 *
 *  Created on: Feb 23, 2016
 *      Author: josh
 */

#ifndef MEMBER_H_
#define MEMBER_H_

#include <string>
#include "date.h"
using namespace std;

class member {
private:
	string name;
	string type;
	double id;
	double total;
	float taxRate;
	Date exprDate;

protected:
	float dues;

public:
	// constructors
	member();
	member(string name, double id, float dues);
	member(string name, string type, double id, double total, Date exprDate, float newTaxRate, float newDues);
	// setters
	void setName(string name);
	void setType(string type);
	void setId(double id);
	void setTotal(double total);
	float setTaxRate(float newTaxRate);
	float setDues();
	float getTax();
	float getDues();
	void setExprDate(int month, int day, int year);
	// getters
	string getName() const;
	string getType() const;
	double  getId() const;
	double  getTotal() const;
	Date getExprDate() const;

};




#endif /* MEMBER_H_ */
