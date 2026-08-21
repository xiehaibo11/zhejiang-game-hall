
int DH_compute_key(uchar *key,BIGNUM *pub_key,DH *dh)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00b1583c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(long *)&(dh->ex_data).dummy + 0x10))((int)key);
  return iVar1;
}

