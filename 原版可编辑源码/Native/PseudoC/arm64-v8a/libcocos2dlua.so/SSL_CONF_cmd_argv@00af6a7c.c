
undefined8 SSL_CONF_cmd_argv(uint *param_1,int *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    lVar3 = *(long *)*param_3;
    if (lVar3 != 0) {
      if ((param_2 == (int *)0x0) || (1 < *param_2)) {
        lVar4 = ((long *)*param_3)[1];
      }
      else {
        lVar4 = 0;
      }
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

