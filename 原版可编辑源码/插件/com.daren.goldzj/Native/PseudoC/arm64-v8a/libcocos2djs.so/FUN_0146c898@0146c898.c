
void FUN_0146c898(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined4 param_5
                 ,undefined8 param_6,int param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(param_1 + -1) =
       *(undefined4 *)
        (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_8 + -1) + 0x13) + 0x1af);
  *(int *)(param_1 + 3) = (param_7 + 2) * 2;
  *(undefined4 *)(param_1 + 7) = param_5;
  *(int *)(param_1 + 0xb) = (int)param_8;
  if (param_3 != 0x10) {
    lVar1 = 0x10;
    uVar2 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      *(int *)(param_1 + lVar1 + -1) = (int)uVar2;
      lVar1 = lVar1 + 4;
    } while (lVar1 != param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0146c900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))(param_1);
  return;
}

