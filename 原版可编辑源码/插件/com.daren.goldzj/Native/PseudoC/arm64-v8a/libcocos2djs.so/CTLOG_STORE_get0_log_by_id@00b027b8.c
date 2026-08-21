
long CTLOG_STORE_get0_log_by_id(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 00b027c4 to 00c02837 has its CatchHandler @ 00b029bc */
  iVar1 = OPENSSL_sk_num(*param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = OPENSSL_sk_value(*param_1,iVar1);
      iVar2 = memcmp((void *)(lVar3 + 8),param_2,param_3);
      if (iVar2 == 0) {
        return lVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(*param_1);
    } while (iVar1 < iVar2);
  }
  return 0;
}

