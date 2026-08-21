
void FUN_014342a4(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long in_x3;
  int in_w4;
  long lVar4;
  long in_x5;
  undefined8 in_x6;
  long in_x7;
  uint in_w8;
  long unaff_x19;
  long unaff_x21;
  int unaff_w26;
  
  if (in_w4 == 0) {
    lVar4 = in_x7 * 4 + 0x1f;
    uVar1 = unaff_w26 + *(int *)(in_x5 + lVar4);
    uVar3 = uVar1 | in_w8;
    if (uVar1 != uVar3) {
      *(uint *)(in_x5 + lVar4) = uVar3;
      *(undefined4 *)(in_x5 + 0x17) = 0;
    }
  }
  lVar4 = *(long *)(in_x3 + -0x18);
  bVar2 = *(byte *)(lVar4 + unaff_x19 + 3);
  if (bVar2 == 0x26) {
    *(undefined8 *)(in_x3 + (long)*(char *)(lVar4 + unaff_x19 + 4) * 8) = in_x6;
    bVar2 = *(byte *)(lVar4 + unaff_x19 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x0143430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar2 * 8))(in_x6);
  return;
}

