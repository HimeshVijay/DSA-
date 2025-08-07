//pairs
pair<int,int> p={1,2};
cout << p.first<<" "<< p.second;

pair<string, char> p={"hello",'d'};
cout << p.first<<" "<< p.second;

pair<int,pair<int,int>> p={1,{2,4}};
cout << p.first<<" "<< p.second.first;

//vector
vector<int> v;
v.push_back(1);
v.emplace_back(3);

vector<pair<int,int>> v1;
v.push_back({1,2}); //while using push back we need to use curly braces.
v.emplace_back(1,3); // not to use curly braces in emplace.

//iterator
vector<int> :: iterator it=v.begin(); // can be used to print the vector elements or used iteratively
//example
while(it!=v.end()){
cout<<*it<<" ";
it++;
}
//shorter
for(auto it=v.begin();it!=v.end(); it++){   // if u dont know the datatype just use "auto";
cout<<*it;
}

v.erase(v.begin()); //deletes the first element;
v.erase(v.begin()+2, v.begin()+4);

vector<int> v(2,100);//creates {100,100};
v.insert(v.begin()+1,300); // {300,100,100};

v.size(); // shows the size of the vector;

//{10,20}
v.pop_back();//{10}
v1.swap(v2);// swaps two vectors;

v.clear();//erase entire vector;
