
undefined2 FT_Get_Sfnt_Name_Count(long param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
      return 0;
    }
    uVar1 = *(undefined2 *)(param_1 + 0x230);
  }
  return uVar1;
}

