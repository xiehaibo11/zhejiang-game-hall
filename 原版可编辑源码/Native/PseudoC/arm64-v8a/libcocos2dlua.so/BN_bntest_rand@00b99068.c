
int BN_bntest_rand(BIGNUM *rnd,int bits,int top,int bottom)

{
  int iVar1;
  
                    /* try { // try from 00b99080 to 00c9908b has its CatchHandler @ 00b990d8 */
                    /* try { // try from 00b9908c to 00c9910f has its CatchHandler @ 00b99048 */
  iVar1 = FUN_00b98df8(2,rnd,bits,top,bottom);
  return iVar1;
}

