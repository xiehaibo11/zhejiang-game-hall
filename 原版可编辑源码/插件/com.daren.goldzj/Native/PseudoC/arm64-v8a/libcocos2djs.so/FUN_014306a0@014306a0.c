
void FUN_014306a0(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  bVar2 = *(byte *)(unaff_x20 + unaff_x19 + 3);
  uVar3 = *(undefined8 *)(unaff_x29 + (long)*(char *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar1 = *(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x20 + 7) +
                   (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2) * 4 + 7);
  lVar4 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar4 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar4 = *(long *)(unaff_x26 + 0xa0);
  }
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  FUN_013849a0(*(undefined8 *)(unaff_x29 + -8),param_1,uVar3,unaff_x26 + (ulong)uVar1,lVar4,
               (uint)bVar2 * 2);
                    /* WARNING: Could not recover jumptable at 0x0143076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 4) * 8))();
  return;
}

