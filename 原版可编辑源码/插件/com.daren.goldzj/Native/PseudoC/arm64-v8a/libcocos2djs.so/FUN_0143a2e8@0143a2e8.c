
void FUN_0143a2e8(void)

{
  long lVar1;
  uint in_w3;
  long in_x4;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  lVar2 = *(long *)(in_x4 + -0x18);
  lVar3 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(in_x4 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar3 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar3 = *(long *)(unaff_x26 + 0xa0);
  }
  if ((int)lVar3 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = (ulong)*(byte *)(lVar2 + unaff_x19 + 2) * 4 + 0x1f;
    uVar4 = (int)unaff_x26 + *(int *)(lVar3 + lVar1);
    in_w3 = uVar4 | in_w3;
    if (uVar4 != in_w3) {
      *(uint *)(lVar3 + lVar1) = in_w3;
      *(undefined4 *)(lVar3 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0143a364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(lVar2 + unaff_x19 + 3) * 8))();
  return;
}

