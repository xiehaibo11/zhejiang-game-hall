
int ECDSA_do_verify(uchar *dgst,int dgst_len,ECDSA_SIG *sig,EC_KEY *eckey)

{
  int iVar1;
  
  if (*(code **)(*(long *)eckey + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b222c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)eckey + 0x70))(dgst,dgst_len);
    return iVar1;
  }
  ERR_put_error(0x10,0xfc,0x98,"crypto/ec/ecdsa_vrf.c",0x19);
  return 0;
}

