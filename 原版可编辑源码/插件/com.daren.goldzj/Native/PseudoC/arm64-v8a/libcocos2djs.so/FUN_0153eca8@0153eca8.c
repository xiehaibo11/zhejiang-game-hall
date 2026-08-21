
void FUN_0153eca8(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  
  bVar2 = (param_4 & 1) == 0;
  uVar1 = param_3;
  if (bVar2) {
    uVar1 = param_2;
  }
  uVar4 = 0x77;
  if (bVar2) {
    uVar4 = 0x57;
  }
  uVar3 = (**(code **)(*param_1 + 200))(param_1,uVar4,uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x58))(param_1,0x7a,param_3);
  (**(code **)(*param_1 + 0x60))(param_1,0x30,param_3);
  (**(code **)(*param_1 + 0x58))(param_1,0x60,param_2);
  (**(code **)(*param_1 + 0x60))(param_1,0x3a,param_2);
  (**(code **)(*param_1 + 0x60))(param_1,0x41,param_3);
  (**(code **)(*param_1 + 0x60))(param_1,0x5b,param_2);
  if ((param_4 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x90);
    param_2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0153edc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,0x5f,param_2);
  return;
}

