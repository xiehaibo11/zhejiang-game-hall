
void FUN_01347360(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x26;
  undefined8 uVar5;
  
  if ((long)((param_1 + 1) * 8) < (long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50)) {
    lVar1 = (param_1 + 2 & 0xfffffffffffffffe) * -8;
    uVar4 = param_1 + 1;
    param_3 = param_3 + uVar4 * -8;
    puVar2 = (undefined8 *)(param_3 + 8);
    puVar3 = (undefined8 *)(&stack0x00000000 + lVar1);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(&stack0x00000000 + lVar1) = *puVar2;
      puVar2 = (undefined8 *)(param_3 + 0x10);
      puVar3 = (undefined8 *)(&stack0x00000008 + lVar1);
      uVar4 = param_1;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 2) {
      uVar5 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
    }
    FUN_0133fcc0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
}

