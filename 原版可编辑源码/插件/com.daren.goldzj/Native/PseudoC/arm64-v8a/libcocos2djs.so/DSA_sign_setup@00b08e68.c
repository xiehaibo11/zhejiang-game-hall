
int DSA_sign_setup(DSA *dsa,BN_CTX *ctx_in,BIGNUM **kinvp,BIGNUM **rp)

{
  int iVar1;
  
                    /* try { // try from 00b08e68 to 00c08e6f has its CatchHandler @ 00b08eb4 */
                    /* WARNING: Could not recover jumptable at 0x00b08e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00b08e70 to 00c08efb has its CatchHandler @ 00b08da4 */
  iVar1 = (**(code **)&(dsa->method_mont_p->RR).top)();
  return iVar1;
}

