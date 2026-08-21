
void FUN_0143f764(long param_1)

{
  undefined4 uVar1;
  long in_x3;
  undefined4 *puVar2;
  long in_x5;
  undefined4 *puVar3;
  long in_x6;
  long in_x7;
  long lVar4;
  undefined4 in_w9;
  int in_w10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(in_x6 + -1) = in_w9;
  *(int *)(in_x6 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(in_x6 + 0xb) = in_w10 * 2;
  *(int *)(in_x6 + 0x13) = in_w10 * 2;
  *(int *)(in_x6 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  in_x5 = in_x5 + in_x7 * 8 + 8;
  puVar3 = (undefined4 *)(in_x5 + param_1 * -8);
  *(int *)(in_x6 + 7) = (int)(in_x6 + 0x10);
  puVar2 = (undefined4 *)(in_x5 + in_x7 * -8);
  if (puVar3 != puVar2) {
    lVar4 = 7;
    while( true ) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + -2;
      *(undefined4 *)(in_x6 + 0x10 + lVar4) = uVar1;
      if (puVar3 == puVar2) break;
      lVar4 = lVar4 + 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0143f828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 1) * 8))(in_x6);
  return;
}

