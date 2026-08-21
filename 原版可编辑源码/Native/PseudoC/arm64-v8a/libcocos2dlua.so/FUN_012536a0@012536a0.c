
void FUN_012536a0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[1];
  lVar3 = (long)uVar2 >> 8;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*param_3 + lVar3);
  }
  uVar1 = 2;
  if ((uVar2 & 2) != 0) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x012536d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x30))
            ((long *)*param_1,param_2,(long)param_3 + lVar3,uVar1,param_5 & 1);
  return;
}

