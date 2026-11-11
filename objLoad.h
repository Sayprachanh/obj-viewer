#include <vector>
#include <string>

using namespace std;

struct vec3 {float x,y,z;};
struct face {int v1,v2,v3;};

bool load(const string &path, vector<vec3> &vertex, vector<face> &face);
