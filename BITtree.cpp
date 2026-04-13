/*



ll lowbit(ll x){
	return x&-x;
}
ll bit[1000005];ll n;
void add(ll x,ll k){
    for(ll i=x;i<=n;i+=lowbit(i))
        bit[i]+=k;
}
ll sum(ll k){
    ll ret=0;
    for(ll i=k;i;i-=lowbit(i))
        ret+=bit[i];
    return ret;
}
ll query(ll l,ll r){
    return sum(r)-sum(l-1);
}


*/