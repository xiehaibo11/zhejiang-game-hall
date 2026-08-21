
undefined8 SSL_CONF_cmd_argv(uint *param_1,int *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 00ae652c to 00be652f has its CatchHandler @ 00ae6530 */
                    /* catch() { ... } // from try @ 00ae64c0 with catch @ 00ae6530
                       catch() { ... } // from try @ 00ae652c with catch @ 00ae6530
                       try { // try from 00ae6530 to 00be656b has its CatchHandler @ 00ae63c8 */
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    lVar3 = *(long *)*param_3;
    if (lVar3 != 0) {
      if ((param_2 == (int *)0x0) || (1 < *param_2)) {
        lVar4 = ((long *)*param_3)[1];
      }
      else {
        lVar4 = 0;
      }
                    /* try { // try from 00ae6580 to 00be6607 has its CatchHandler @ 00ae6580
                       catch() { ... } // from try @ 00ae6580 with catch @ 00ae6580
                       catch() { ... } // from try @ 00ae6610 with catch @ 00ae6580 */
      *param_1 = *param_1 & 0xfffffffc | 1;
      uVar2 = SSL_CONF_cmd(param_1,lVar3,lVar4);
      iVar1 = (int)uVar2;
      if (0 < iVar1) {
        *param_3 = *param_3 + (long)iVar1 * 8;
        if (param_2 == (int *)0x0) {
          return uVar2;
        }
        *param_2 = *param_2 - iVar1;
        return uVar2;
      }
      if (iVar1 != -2) {
        if (iVar1 != 0) {
          return uVar2;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}

