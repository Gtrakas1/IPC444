/*****************************
Name: George Trakas
ID: 108459173
Date: June 6th,2018
Purpose: Lab3 OOP345
*****************************/

template<typename K, typename V, int N>
class KVList {
	K keys[N];
	V Values[N];
	size_t Size;
public:
	KVList()
	{
		Size = 0;
	}

	size_t size() const {
		return Size;
	}
	const K& key(int i) const {
		return keys[i];
	}
	const V& value(int i) const {
		return Values[i];
	}
	KVList& add(const K& k, const V& v)
	{
		if (Size < N)
		{
			keys[Size] = k;
			Values[Size] = v;
			Size++;
		}
		return *this;
	}
	int find(const K& k) const {
		for (size_t i = 0; i < Size; i++)
		{
			if (keys[i] == k)
			{
				return i;
			}
		}
		return 0;
	}
	KVList& replace(int i, const K& k, const V& v) {
			keys[i] = k;
			Values[i] = v;
		
		return *this;
	}
};
