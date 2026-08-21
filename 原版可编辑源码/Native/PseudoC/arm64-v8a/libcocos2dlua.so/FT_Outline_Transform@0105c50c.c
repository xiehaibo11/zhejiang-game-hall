
void FT_Outline_Transform(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (long)*(short *)(param_1 + 2))) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar1 = uVar2 + (long)*(short *)(param_1 + 2) * 0x10;
    do {
      FT_Vector_Transform(uVar2,param_2);
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}

