
bool X509_CRL_up_ref(long param_1)

{
  int iVar1;
  int local_14;
  
                    /* try { // try from 00b63418 to 00c634df has its CatchHandler @ 00b630ac */
  iVar1 = CRYPTO_atomic_add(param_1 + 0x80,1,&local_14,*(undefined8 *)(param_1 + 0xe0));
  return 0 < iVar1 && 1 < local_14;
}

