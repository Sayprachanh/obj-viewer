#include "objLoad.h"
#include <fstream> // file
#include <iostream> //console
#include <sstream> // string

using namespace std;

bool load(const string &path, vector<vec3> &vertex, vector<face> &face){

    ifstream file(path);
    if(!file.is_open()){
	cerr << "fail to load file: " << path << endl;
	return false;
    }

    string line;
    while(getline(file, line)){
	stringstream ss(line);
	string lineType;
	
	if(lineType == "v"){
	    Vec3 v;
	    ss >> v.x >> v.y >> v.z;
	    vertex.push_back(v);
	}else if(lineType == "f"){
	    face f;
	    ss >> f.v1 >> f.v2 >> f.v3;

	    f.v1--;
	    f.v2--;
	    f.v3--;
	    face.push_back(f);
	}
    }
file.close();
return true;

}
