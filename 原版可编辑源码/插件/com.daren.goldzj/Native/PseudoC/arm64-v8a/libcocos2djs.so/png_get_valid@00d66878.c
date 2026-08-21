
uint png_get_valid(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(uint *)(param_2 + 8) & param_3;
  }
  return uVar1;
}

