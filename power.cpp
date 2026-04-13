
/*



ll power(ll a,ll b,ll c){
    ll ret=1;
    a%=c; 
    while(b){
        if(b&1){ 
            ret=(ret*a)%c;
        }
        a=(a*a)%c;
        b>>=1;
    }
    return ret;
}



*/