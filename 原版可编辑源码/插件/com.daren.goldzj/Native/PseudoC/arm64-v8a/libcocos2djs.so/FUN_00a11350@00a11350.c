
uint FUN_00a11350(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_00a47ed4();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_00a22d50(param_1,param_2), (uVar2 & 1) == 0)) {
    uVar1 = FUN_00a159e8(*(undefined4 *)(param_1 + (long)param_2 * 4 + 0x260),0xffffffff,0xffffffff,
                         0);
    uVar1 = 0 < (int)uVar1 & uVar1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

