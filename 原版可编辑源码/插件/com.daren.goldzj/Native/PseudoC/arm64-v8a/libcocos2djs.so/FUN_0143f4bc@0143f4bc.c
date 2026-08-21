
void FUN_0143f4bc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long in_x3;
  undefined4 in_w4;
  undefined4 *puVar3;
  long in_x5;
  undefined4 *puVar4;
  long in_x7;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(param_1 + -1) = in_w4;
  iVar2 = (int)in_x7 * 2;
  *(int *)(param_1 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(param_1 + 0xb) = iVar2;
  *(int *)(param_1 + 0x13) = iVar2;
  *(int *)(param_1 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(param_1 + 7) = (int)(param_1 + 0x10);
  puVar4 = (undefined4 *)(in_x5 + in_x7 * 8 + 8);
  puVar3 = puVar4 + in_x7 * -2;
  if (puVar4 != puVar3) {
    lVar5 = 7;
    while( true ) {
      uVar1 = *puVar4;
      puVar4 = puVar4 + -2;
      *(undefined4 *)(param_1 + 0x10 + lVar5) = uVar1;
      if (puVar4 == puVar3) break;
      lVar5 = lVar5 + 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0143f57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 1) * 8))(param_1)
  ;
  return;
}

