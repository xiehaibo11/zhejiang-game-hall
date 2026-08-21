
void FUN_01431278(void)

{
  byte bVar1;
  uint uVar2;
  long in_x3;
  int in_w4;
  long in_x5;
  long lVar3;
  long in_x7;
  int in_w8;
  uint uVar4;
  long in_x9;
  int in_w11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(int *)(in_x9 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)(in_x9 + 3) = (double)in_w4 - (double)in_w11;
  if (in_w8 == 0) {
    lVar3 = in_x7 * 4 + 0x1f;
    uVar4 = (int)unaff_x26 + *(int *)(in_x5 + lVar3);
    uVar2 = uVar4 | 0xe;
    if (uVar4 != uVar2) {
      *(uint *)(in_x5 + lVar3) = uVar2;
      *(undefined4 *)(in_x5 + 0x17) = 0;
    }
  }
  lVar3 = *(long *)(in_x3 + -0x18);
  bVar1 = *(byte *)(lVar3 + unaff_x19 + 3);
  if (bVar1 == 0x26) {
    *(long *)(in_x3 + (long)*(char *)(lVar3 + unaff_x19 + 4) * 8) = in_x9;
    bVar1 = *(byte *)(lVar3 + unaff_x19 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x0143137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar1 * 8))();
  return;
}

