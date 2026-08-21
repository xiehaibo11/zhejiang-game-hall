
void lua_concat(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      **(ulong **)(param_1 + 0x28) = *(long *)(param_1 + 0x10) + 0xa8U | 0xfffd800000000000;
      uVar1 = *(long *)(param_1 + 0x28) + 8;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (*(ulong *)(param_1 + 0x30) <= uVar1) {
        FUN_00bfe164();
        return;
      }
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    param_2 = param_2 + -1;
    do {
      lVar2 = FUN_00c1d44c(param_1,lVar2 + -8,-param_2);
      if (lVar2 == 0) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (long)param_2 * -8;
        return;
      }
      lVar3 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar2 + 0x10;
      FUN_00c175d8(param_1,lVar2,2);
      param_2 = (param_2 - (int)(lVar3 - lVar2 >> 3)) + -1;
      lVar3 = *(long *)(param_1 + 0x28);
      lVar2 = lVar3 + -0x10;
      *(long *)(param_1 + 0x28) = lVar2;
      *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar3 + -8);
    } while (0 < param_2);
  }
  return;
}

