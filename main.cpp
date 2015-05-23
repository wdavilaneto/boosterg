//
// main.cpp
// ~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <iostream>
#include <server/header.hpp>

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/lexical_cast.hpp>
#include "server/server.hpp"
#include "server/conf/syntax_shugar.hpp"
#include <boost/property_tree/json_parser.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

class Bla {
public:
    int valor;
    std::string nome;
public:
    ~Bla(){
        std::cout << "fui destruido" << std::endl;
    }
};

void doStuff (boost::shared_ptr<Bla> bla) {
    //
}


int main(int argc, char* argv[]) {

    try {
        //http::server::server s("localhost", "8080", "static", 4);
        boost::shared_ptr<Bla> bla = boost::make_shared<Bla>();

    } catch (std::exception& e) {
        std::cerr << "exception: " << e.what() << "\n";
    }

    return 0;
}

