//
//  CITY.h
//  connor's project
//
//  Created by BEC Tutoring Staff on 1/30/16.
//  Copyright (c) 2016 BEC Tutoring Staff. All rights reserved.
//

#ifndef connor_s_project_CITY_h
#define connor_s_project_CITY_h


class city{
    
    private:
    
    int population;
    
    string name;
    
    
    


    public:
    
    city(){};
    
    city(string n, int p){
        name = n;
        population = p;
    }
    
    int getpopulation(){
        return population;
    }
    string getname(){
        return name;
    }
    void setname(string n){
        name = n;
    }
    void setpopulation(int p){
        population = p;
    }
};

#endif
