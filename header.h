/*
 * header.h
 *
 *  Created on: Feb 23, 2016
 *      Author: josh
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>

struct shoppers
{
 string memberName;
 int memberNumber;
 string memberType;
 Date expireDate;
};

struct dailySales
{
	Date dateOfSale;
	int memberNumber;
	int numberOfItems;
	string itemType;
	float price;
	float quantity;
};

#endif /* HEADER_H_ */
