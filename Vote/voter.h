//
//  voter.h
//  Vote
//
//  Created by James on 2015/05/04.
//  Copyright (c) 2015 James. All rights reserved.
//

#ifndef __Vote__voter__
#define __Vote__voter__

#include <string>

class Voter
{
public:
    Voter();
    Voter(std::string id_number);
    std::string getID() const;
    int getNrTimesVoted() const;
    bool getVoted() const;
    void set_voted();
    friend Voter operator++(Voter& voter);
    friend std::ostream& operator<<(std::ostream& out, const Voter& voter);
    friend std::istream& operator>>(std::istream& in, Voter& voter);
private:
    std::string ID;
    int nr_times_voted;
    bool voted;
};

#endif /* defined(__Vote__voter__) */
