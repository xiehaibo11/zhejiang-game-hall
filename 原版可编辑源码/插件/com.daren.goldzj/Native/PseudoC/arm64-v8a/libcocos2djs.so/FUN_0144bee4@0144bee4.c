
void FUN_0144bee4(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long in_x3;
  int in_w4;
  long in_x5;
  undefined8 in_x6;
  long in_x7;
  uint in_w8;
  long unaff_x19;
  long unaff_x21;
  int unaff_w26;
  
  if (in_w4 == 0) {
    lVar1 = in_x7 * 4 + 0x1f;
    uVar2 = unaff_w26 + *(int *)(in_x5 + lVar1);
    uVar3 = uVar2 | in_w8;
    if (uVar2 != uVar3) {
      *(uint *)(in_x5 + lVar1) = uVar3;
      *(undefined4 *)(in_x5 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0144bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 5) * 8))(in_x6);
  return;
}

