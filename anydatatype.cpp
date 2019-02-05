#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class AnyDatatype {
    private:
        string _data;
        bool _is_boolean;
        bool _is_string;
        bool _is_int;
        bool _is_float;
        bool _is_double;

        void _init();
    public:
        AnyDatatype();
        AnyDatatype(bool b);
        AnyDatatype(string s);        
        AnyDatatype(int i);
        AnyDatatype(float f);
        AnyDatatype(double x);        
};

void AnyDatatype::_init() {
    _data.clear();
    _is_boolean=false;
    _is_string=false;
    _is_int=false;
    _is_float=false;;
    _is_double=false;
}

AnyDatatype::AnyDatatype() {    
    _init();
}

AnyDatatype::AnyDatatype(bool b) {
    _init();
    ostringstream convert;
    convert << b;
    _data = convert.str();    
    _is_boolean=true;    
}

AnyDatatype::AnyDatatype(string s) {
    _init();    
    _data.assign(s);    
    _is_string=true;    
}

AnyDatatype::AnyDatatype(int i) {
    _init();
    ostringstream convert;
    convert << i;
    _data = convert.str();    
    _is_int=true;    
}

AnyDatatype::AnyDatatype(float f) {
    _init();
    ostringstream convert;
    convert << f;
    _data = convert.str();    
    _is_float=true;    
}

AnyDatatype::AnyDatatype(double x) {
    _init();
    ostringstream convert;
    convert << x;
    _data = convert.str();    
    _is_double=true;    
}