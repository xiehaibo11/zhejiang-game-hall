
void FUN_01460560(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  uVar3 = *(undefined8 *)(unaff_x29 + (long)*(int *)(unaff_x20 + unaff_x19 + 1) * 8);
  lVar4 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar4 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar4 = *(long *)(unaff_x26 + 0xa0);
  }
  if ((int)lVar4 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = (ulong)*(uint *)(unaff_x20 + unaff_x19 + 5) * 4 + 0x1f;
    uVar5 = (int)unaff_x26 + *(int *)(lVar4 + lVar1);
    uVar2 = uVar5 | 0xfe;
    if (uVar5 != uVar2) {
      *(uint *)(lVar4 + lVar1) = uVar2;
      *(undefined4 *)(lVar4 + 0x17) = 0;
    }
  }
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_01392a60(param_1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0146063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 9) * 8))();
  return;
}

