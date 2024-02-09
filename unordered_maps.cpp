#include<bits/stdc++.h>
// #include <unordered_map>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);

	freopen("output1.txt", "w", stdout);


#endif
	unordered_map<string, int> umap;
	umap["prince"] = 43;
	umap["gfg"] = 56;
	umap["helloworld"] = 195;

	// for (auto x : umap)
	// {
	// 	cout << x.first << " " << x.second << endl;
	// }

	for (auto itr = umap.begin(); itr != umap.end(); itr++)
	{
		cout << itr->first << " " << itr->second << endl;
	}

	string key = "prince";

	if (umap.find(key) != umap.end()) {
		cout << "key found"  << endl;
	} else {
		cout << "not found " << endl;
	}

	if (umap.find(key) != umap.end()) {
		auto temp = umap.find(key);
		cout << "key is " << temp->first << endl;
		cout << "value is " << temp->second << endl;
	}


	umap.insert(make_pair("mobile", 1700));

	key = "helloworld";
	umap.erase(key);

	for (auto itr = umap.begin(); itr != umap.end(); itr++)
	{
		cout << itr->first << " " << itr->second << endl;
	}

	cout << umap.size();

	int arr[] = {7, 1, 0, 3, 5, 0, 1, 3, 2, 5, 7, 3, 8, 9, 9};
	unordered_map<int, int> umapped;
	for (int i = 0; i < 15; i++)
	{
		int key = arr[i];
		umapped[key]++;
	}

	for (auto itr = umapped.begin(); itr != umapped.end(); itr++)
	{
		cout << endl << itr->first << " " << itr->second << endl;
	}



	return 0;
}