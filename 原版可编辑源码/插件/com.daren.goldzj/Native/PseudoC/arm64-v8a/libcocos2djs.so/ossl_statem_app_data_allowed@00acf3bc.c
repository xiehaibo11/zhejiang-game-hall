
undefined8 ossl_statem_app_data_allowed(long param_1)

{
  int iVar1;
  
  if ((((*(uint *)(param_1 + 0x48) | 2) != 2) && (*(int *)(*(long *)(param_1 + 0x90) + 0x108) != 0))
     && (*(int *)(*(long *)(param_1 + 0x90) + 0x100) != 0)) {
                    /* try { // try from 00acf3ec to 00bcf403 has its CatchHandler @ 00acf440 */
    iVar1 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x38) == 0) {
      if (iVar1 == 0xc) {
        return 1;
      }
    }
    else if ((iVar1 == 0) || (iVar1 == 0x14)) {
                    /* try { // try from 00acf404 to 00bcf453 has its CatchHandler @ 00acf304 */
      return 1;
    }
  }
  return 0;
}

