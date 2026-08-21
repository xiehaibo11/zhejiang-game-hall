
void FUN_0125183c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[1];
  if (param_3 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)uVar2 >> 8;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(*param_3 + lVar3);
    }
  }
  uVar1 = 2;
  if ((uVar2 & 2) != 0) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x01251878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_2,(long)param_3 + lVar3,uVar1);
  return;
}

