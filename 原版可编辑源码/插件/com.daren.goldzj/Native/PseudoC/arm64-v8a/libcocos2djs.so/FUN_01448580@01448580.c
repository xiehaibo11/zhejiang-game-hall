
void FUN_01448580(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  uVar1 = *(ushort *)(unaff_x20 + unaff_x19 + 5);
  uVar2 = *(undefined8 *)(unaff_x29 + (long)*(short *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar4 = *(undefined8 *)(unaff_x29 + (long)*(short *)(unaff_x20 + unaff_x19 + 3) * 8);
  lVar3 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar3 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar3 = *(long *)(unaff_x26 + 0xa0);
  }
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_013860a0(param_1,uVar2,uVar4,lVar3,(uint)uVar1 * 2);
                    /* WARNING: Could not recover jumptable at 0x01448640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 7) * 8))();
  return;
}

