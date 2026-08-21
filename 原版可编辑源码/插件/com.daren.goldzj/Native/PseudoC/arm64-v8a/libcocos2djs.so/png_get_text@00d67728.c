
int png_get_text(long param_1,long param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x94);
    if (0 < iVar1) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_2 + 0xa0);
      }
      if (param_4 == (int *)0x0) {
        return iVar1;
      }
      *param_4 = iVar1;
      return iVar1;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
    return 0;
  }
  return 0;
}

