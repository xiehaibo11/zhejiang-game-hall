
undefined8 FUN_0012c5a0(long param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = (0x300 << (ulong)((uint)param_2[1] + (uint)*param_2 & 0x1f)) + 0x7c0;
  if ((*(long *)(param_1 + 8) == 0) || (uVar1 != *(uint *)(param_1 + 0x60))) {
    (*(code *)param_3[1])(param_3);
    pcVar4 = (code *)*param_3;
    *(undefined8 *)(param_1 + 8) = 0;
    lVar3 = (*pcVar4)(param_3,(ulong)uVar1 << 1);
    *(long *)(param_1 + 8) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
      *(long *)(param_1 + 0x10) = lVar3 + 0xd00;
      *(uint *)(param_1 + 0x60) = uVar1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

