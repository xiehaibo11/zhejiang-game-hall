
void FUN_01448480(undefined8 param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  uVar2 = *(ushort *)(unaff_x20 + unaff_x19 + 5);
  uVar3 = *(undefined8 *)(unaff_x29 + (long)*(short *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar1 = *(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x20 + 7) +
                   (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 3) * 4 + 7);
  lVar4 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar4 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar4 = *(long *)(unaff_x26 + 0xa0);
  }
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_013849a0(*(undefined8 *)(unaff_x29 + -8),param_1,uVar3,unaff_x26 + (ulong)uVar1,lVar4,
               (uint)uVar2 * 2);
                    /* WARNING: Could not recover jumptable at 0x01448550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 7) * 8))();
  return;
}

