
int DSA_do_verify(uchar *dgst,int dgst_len,DSA_SIG *sig,DSA *dsa)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00b08e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)&(dsa->method_mont_p->RR).neg)((int)dgst,dgst_len);
  return iVar1;
}

