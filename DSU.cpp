
/*

ll f[2000010],ht[2000010];
ll a,b,c,n,m;
ll Find(ll k){
    if(f[k]==k) return k;
    else{
        f[k]=Find(f[k]);
        return f[k];
	}
}
void Union(ll a,ll b){
	a=Find(a),b=Find(b);
	if(ht[a]>ht[b]) swap(a,b);
	ht[b]=max(ht[b],ht[a]+1);
	f[a]=b;
}
bool check(ll a,ll b){
	if(Find(a)==Find(b)) return true;
	return false;
}

*/