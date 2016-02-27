#include "executive.h"

executive::executive()
{
	member();
	rebateAmount = 0;

}

executive::executive(double newNum)
{
	member();
	this->rebateAmount = newNum;
}

void executive::setRebateAmount(double num)
{
	this->rebateAmount = num;
}

double executive::getRebateAmount() const
{
	return this->rebateAmount;
}

double executive::calculateRebate() const
{
	return (this->getTotal() * 0.035);
}

float executive::setDues()
{
	dues = 125.00;
	return(dues);

}
