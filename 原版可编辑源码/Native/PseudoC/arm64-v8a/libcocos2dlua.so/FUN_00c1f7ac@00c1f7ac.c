
bool FUN_00c1f7ac(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c1ed60(param_1 + 0x18,param_2,1);
  if (iVar1 == 3) {
    *(undefined4 *)(param_2 + 4) = 0xfff90000;
  }
  return iVar1 != 0;
}

