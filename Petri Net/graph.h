//
//  graph.h
//  Petri Net
//
//  Created by adore on 14-6-28.
//  Copyright (c) 2014年 adore. All rights reserved.
//

#ifndef __Petri_Net__graph__
#define __Petri_Net__graph__

#include <iostream>
#include <vector>
#include <initializer_list>
#include <string>
#include <random>
#include "place.h"
#include "token.h"
#include "solveconfig.h"
#include "light.h"
#include "transition.h"
class graph
{
private:
    place p1;
    transition t2;
    place p3;
    transition t4;
    place p5, p52;
    transition t6, t62;
    place p7, p72;
    transition t8, t82;
    place p9, p921, p922;
    float flux[4][4];
    std::random_device real_r;          //真随机数
    std::default_random_engine r;       //假随机数
    
public:
    graph(solveconfig config);
    void act(int variety = 0);         //输入流量是否可变
    void add1Car(bool realrandom = 0);
    void add1Car(std::vector<std::vector<float> > flux = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}});
    void print_graph(int i) const;
    void print_graph_nth(int i, const char* a) const;
    void print_light() const;
    float get_delay_time() const;
    int get_arrive_cars() const;
    int get_cross_cars() const;
    std::vector<std::vector<int> > get_wait_cars() const;
};
#endif /* defined(__Petri_Net__graph__) */
