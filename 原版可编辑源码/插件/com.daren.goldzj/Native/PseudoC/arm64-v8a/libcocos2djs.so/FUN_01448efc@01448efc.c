
void FUN_01448efc(double param_1,double param_2)

{
  long lVar1;
  uint uVar2;
  long in_x3;
  long in_x5;
  long in_x6;
  long in_x7;
  int in_w8;
  uint uVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(int *)(in_x6 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)(in_x6 + 3) = param_2 - param_1;
  if (in_w8 == 0) {
    lVar1 = in_x7 * 4 + 0x1f;
    uVar3 = (int)unaff_x26 + *(int *)(in_x5 + lVar1);
    uVar2 = uVar3 | 0xe;
    if (uVar3 != uVar2) {
      *(uint *)(in_x5 + lVar1) = uVar2;
      *(undefined4 *)(in_x5 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01448f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 5) * 8))(in_x6);
  return;
}

