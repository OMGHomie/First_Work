#include <map>
#include <iostream>
#include <string>
#include <utility>
#include "stdint.h"

enum DBType{kMysql};
typedef struct conf{
    DBType dbtype_;
    std::string name_;
    int port_;
    conf():name_(""), port_(0), dbtype_(kMysql){std::cout << "default construct\n";}
    conf(const std::string& name, const uint32_t port, const DBType dbtype = kMysql):
        name_(name), port_(port), dbtype_(dbtype){std::cout<<"opeat construct\n";}
    conf(const conf& config){
        std::cout << "copy construct\n"; 
        name_ = config.name_;
        port_ = config.port_;
        dbtype_ = config.dbtype_;
    }
     
} DBConfig;

int main(){
    std::map<int, DBConfig> db_config_;
    //db_config_[1] = DBConfig("a", 1, kMysql);
    db_config_.insert(std::pair<int, DBConfig>(1, DBConfig("a", 1, kMysql)));
    std::cout << "map <int ,struct> is ok!\n";
    return 0;
}