#pragma once
#include <list>
#include <string>
#pragma region MyRegion

const std::string a = R"(
   ,==========Y===
   ||  /      |
   || /       |
   ||/        O
   ||        /|\
   ||        /|
   ||
  /||
 //||
===================)";

const std::string z = R"(
   ,==========Y===
   ||  /      |
   || /       |
   ||/        O
   ||        /|\
   ||        /
   ||
  /||
 //||
===================)";

const std::string e = R"(
   ,==========Y===
   ||  /      |
   || /       |
   ||/        O
   ||        /|\
   ||        
   ||
  /||
 //||
===================)";

const std::string r = R"(
   ,==========Y===
   ||  /      |
   || /       |
   ||/        O
   ||        /|
   ||        
   ||
  /||
 //||
===================)";

const std::string t = R"(
   ,==========Y===
   ||  /      |
   || /       |
   ||/        O
   ||         |
   ||        
   ||
  /||
 //||
===================)";

const std::string y = R"(
   ,==========Y===
   ||  /      |
   || /       |
   ||/        O
   ||         
   ||        
   ||
  /||
 //||
===================)";

const std::string u = R"(
   ,==========Y===
   ||  /      |
   || /       |
   ||/        
   ||         
   ||        
   ||
  /||
 //||
===================)";

const std::string i = R"(
   ,==============
   ||  /      
   || /       
   ||/        
   ||         
   ||        
   ||
  /||
 //||
===================)";

const std::string o = R"(
   
   ||  /      
   || /       
   ||/        
   ||         
   ||        
   ||
  /||
 //||
===================)";

const std::string p = R"(
   
   ||      
   ||       
   ||       
   ||         
   ||        
   ||
   ||
   ||
===================)";

const std::string q = R"(
   
         
          
          
          
         
   
   
   
===================)";
#pragma endregion

const std::string error[] = { a,z,r,t,y,u,i,o,p,q };
const int errorSize = std::size(error);