
undefined8 FUN_00b66d68(int param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00b66d6c to 00c66d73 has its CatchHandler @ 00b671e8 */
                    /* try { // try from 00b66d74 to 00c66dd7 has its CatchHandler @ 00b66b8c */
  if (param_1 == 5) {
    lVar2 = *param_2;
    puVar3 = (undefined8 *)(lVar2 + 0x10);
    EVP_PKEY_free((EVP_PKEY *)*puVar3);
    ERR_set_mark();
    iVar1 = FUN_00b665e4(puVar3,lVar2);
    if (iVar1 == -1) {
      return 0;
    }
    ERR_pop_to_mark();
  }
  else if (param_1 == 3) {
    EVP_PKEY_free(*(EVP_PKEY **)(*param_2 + 0x10));
  }
  return 1;
}

