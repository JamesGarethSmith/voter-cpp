//
//  voter.cpp
//  Vote
//
//  Created by James on 2015/05/04.
//  Copyright (c) 2015 James. All rights reserved.
//

#include "voter.h"
#include <string>
#include <iostream>

Voter::Voter()
{
    ID = "";
    nr_times_voted = 0;
    voted = false;
}

Voter::Voter(std::string id_number)
{
    ID = id_number;
    nr_times_voted = 0;
    voted = false;
}

std::string Voter::getID() const
{
    return ID;
}

int Voter::getNrTimesVoted() const
{
    return nr_times_voted;
}

bool Voter::getVoted() const
{
    return voted;
}

void Voter::set_voted()
{
    voted = true;
}

Voter operator++(Voter& voter)
{
    voter.nr_times_voted++;
    return voter;
}

std::ostream& operator<<(std::ostream& out, const Voter& voter)
{
    std::cout << voter.ID << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, Voter& voter)
{
    std::cin >> voter.ID;
    return in;
}