
void FUN_01431cc8(void)

{
  long lVar1;
  uint uVar2;
  long in_x3;
  long in_x5;
  int in_w6;
  long in_x7;
  int in_w8;
  uint uVar3;
  int in_w9;
  long in_x10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(int *)(in_x10 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)(in_x10 + 3) = (double)in_w9 / (double)in_w6;
  if ((int)in_x5 != in_w8) {
    lVar1 = in_x7 * 4 + 0x1f;
    uVar3 = (int)unaff_x26 + *(int *)(in_x5 + lVar1);
    uVar2 = uVar3 | 6;
    if (uVar3 != uVar2) {
      *(uint *)(in_x5 + lVar1) = uVar2;
      *(undefined4 *)(in_x5 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01431db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 3) * 8))();
  return;
}

