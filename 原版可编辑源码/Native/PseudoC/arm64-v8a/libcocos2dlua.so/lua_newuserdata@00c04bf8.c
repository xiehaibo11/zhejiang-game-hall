
long lua_newuserdata(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80();
  }
  if (param_2 < 0x7fffff01) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (*(char *)(uVar1 + 9) == '\b') {
      uVar3 = *(undefined8 *)(uVar1 + 0x10);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
    }
    uVar2 = FUN_00c1cb88(param_1,param_2,uVar3);
    **(ulong **)(param_1 + 0x28) = uVar2 | 0xfff9800000000000;
    uVar1 = *(long *)(param_1 + 0x28) + 8;
    *(ulong *)(param_1 + 0x28) = uVar1;
    if (*(ulong *)(param_1 + 0x30) <= uVar1) {
      FUN_00bfe164(param_1);
    }
    return uVar2 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfaf54(param_1,0x4f);
}

