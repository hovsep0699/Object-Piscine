#ifndef __PACKAGEREDUCTIONDISCOUNT_HPP__
#define __PACKAGEREDUCTIONDISCOUNT_HPP__

#include "command.hpp"
#include <iostream>

class PackageReductionDiscountCommand : public Command
{
    public:
        PackageReductionDiscountCommand(int p_id, const std::string& p_date, const std::string& p_client, const std::map<std::string, int>& p_articles)
            :   Command(p_id, p_date, p_client, p_articles)
        {}

        void get_total_price()
        {
            std::cout << "Discount of 10 euro if the total command value exceed 150 euros" << std::endl;
        }
};



#endif