
void FUN_0143c6c0(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  bVar1 = *(byte *)(unaff_x20 + unaff_x19 + 2);
  uVar2 = *(undefined8 *)(unaff_x29 + (long)*(char *)(unaff_x20 + unaff_x19 + 1) * 8);
  lVar3 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar3 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar3 = *(long *)(unaff_x26 + 0xa0);
  }
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  FUN_0138a3c0(*(undefined8 *)(unaff_x29 + -8),(uint)bVar1 * 2,param_1,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0143c774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 3) * 8))();
  return;
}

