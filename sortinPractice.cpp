#include <iostream>
#include <string>
#include <vector> 

class clothing{
public : 
std::string type; 
std::string size; 
std::string color; 

clothing(){

}

clothing(std::string t,std::string s,std::string c) : 
type(t), size(s), color(c) {}

}; 

class store{

private : 
std::vector<clothing> storage ; 

public : 
void addItem(std::string t, std::string s, std::string c){
      storage.push_back(clothing(t,s,c)) ; 
}
void filter( std::string type = "" , std::string size = "", std::string color = "" ){
    
    for(int i = 0; i< storage.size(); i++ ){
        if(
           ( type.empty() || type == storage[i].type ) &&
           ( size.empty() || size == storage[i].size ) &&
           ( color.empty() || color == storage[i].color ) 
        ){
            std::cout<<"Type is : "<<type<<"\nsize is : "
            <<size<<"\ncolor is : "<<color<<std::endl; 
        }
        
        
    }

     
}
};

int main(){

store cloth; 
cloth.addItem("Shirt","M", "red" ); 
cloth.addItem("Shirt","s", "red" ); 
cloth.addItem("Shirt","l", "blue" ); 
cloth.addItem("Pant","M", "red" ); 
cloth.addItem("Pant","s", "blue" ); 
cloth.addItem("Pant","s", "Black" ); 
cloth.addItem("Pant","s", "Black" ); 
cloth.addItem("Shirt","M", "red" ); 

cloth.filter("Shirt", "s", "red"); 


}