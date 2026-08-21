
undefined8 ossl_statem_app_data_allowed(long param_1)

{
  int iVar1;
  
                    /* try { // try from 00ade278 to 00bde27f has its CatchHandler @ 00ade42c */
  if ((((*(uint *)(param_1 + 0x48) | 2) != 2) && (*(int *)(*(long *)(param_1 + 0x90) + 0x108) != 0))
     && (*(int *)(*(long *)(param_1 + 0x90) + 0x100) != 0)) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x38) == 0) {
      if (iVar1 == 0xc) {
        return 1;
      }
    }
    else if ((iVar1 == 0) || (iVar1 == 0x14)) {
      return 1;
    }
  }
                    /* try { // try from 00ade280 to 00bde38f has its CatchHandler @ 00addea4 */
  return 0;
}

