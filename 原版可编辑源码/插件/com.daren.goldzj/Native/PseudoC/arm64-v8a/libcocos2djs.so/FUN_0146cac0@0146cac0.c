
void FUN_0146cac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  int iVar2;
  int unaff_w19;
  long unaff_x21;
  long unaff_x26;
  
  iVar2 = (unaff_w19 + -1) * 2;
  *(int *)(param_7 + -0x20) = iVar2;
  FUN_01347860();
  lVar1 = unaff_x26 + (ulong)*(uint *)(*(long *)(param_7 + -0x10) + 0x13);
  param_4 = (*(int *)(lVar1 + 7) + -9) - param_4;
  if (param_4 < 0) {
    *(int *)(param_7 + -0x20) = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1ff0));
  }
  *(int *)(lVar1 + 7) = param_4;
                    /* WARNING: Could not recover jumptable at 0x0146cb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_7 + -0x18) + param_8) * 8))(param_1);
  return;
}

