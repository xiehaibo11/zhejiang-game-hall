
void FUN_013475c0(ulong param_1)

{
  long lVar1;
  long in_x4;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x26;
  undefined8 uVar4;
  
  if ((long)((param_1 + 1) * 8) < (long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50)) {
    lVar1 = (param_1 + 2 & 0xfffffffffffffffe) * -8;
    *(undefined8 *)(&stack0x00000000 + param_1 * 8 + lVar1) = *(undefined8 *)(unaff_x26 + 0xa0);
    in_x4 = in_x4 + param_1 * -8;
    puVar2 = (undefined8 *)(in_x4 + 8);
    puVar3 = (undefined8 *)(&stack0x00000000 + lVar1);
    if ((param_1 & 1) != 0) {
      param_1 = param_1 - 1;
      *(undefined8 *)(&stack0x00000000 + lVar1) = *puVar2;
      puVar2 = (undefined8 *)(in_x4 + 0x10);
      puVar3 = (undefined8 *)(&stack0x00000008 + lVar1);
    }
    for (; param_1 != 0; param_1 = param_1 - 2) {
      uVar4 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
    }
    FUN_0136dac0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
}

