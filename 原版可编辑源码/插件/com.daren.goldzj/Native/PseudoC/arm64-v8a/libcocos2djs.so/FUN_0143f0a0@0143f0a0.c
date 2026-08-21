
void FUN_0143f0a0(void)

{
  undefined4 uVar1;
  long in_x3;
  undefined4 in_w4;
  undefined4 in_w5;
  undefined4 *puVar2;
  undefined4 *in_x7;
  undefined4 in_w8;
  long lVar3;
  long in_x9;
  long in_x11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(in_x9 + -1) = in_w5;
  *(int *)(in_x9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(in_x9 + 0xb) = in_w8;
  puVar2 = (undefined4 *)((long)in_x7 - in_x11);
  *(undefined4 *)(in_x9 + 0x17) = in_w8;
  *(int *)(in_x9 + 0x13) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(in_x9 + 7) = (int)(in_x9 + 0x14);
  if (in_x7 != puVar2) {
    lVar3 = 7;
    while( true ) {
      uVar1 = *in_x7;
      in_x7 = in_x7 + -2;
      *(undefined4 *)(in_x9 + 0x14 + lVar3) = uVar1;
      if (in_x7 == puVar2) break;
      lVar3 = lVar3 + 4;
    }
  }
  *(undefined4 *)(in_x9 + 0xf) = in_w4;
                    /* WARNING: Could not recover jumptable at 0x0143f174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 1) * 8))();
  return;
}

