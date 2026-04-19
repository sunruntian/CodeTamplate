
/* Kruskal's Algorithm 

struct node{
	ll u,v,w;
} a[200005];
ll fa[200005];
ll n,m,ans,k;
ll find(ll x){
	if(fa[x]==x)return fa[x];
	return fa[x]=find(fa[x]);
}
void kruskal(){
	for(ll i=1;i<=n;i++){
		fa[i]=i;
	}
	for(ll i=1;i<=m;i++){
		ll x=find(a[i].u),y=find(a[i].v);
		if(x!=y) {
			ans+=a[i].w;
			fa[x]=y;
			if(++k==n-1){
				break;
			}
		}
	}
	return;
}
    


*/