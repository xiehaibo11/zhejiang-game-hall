
void FUN_00e831c0(undefined8 *param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  int local_34;
  
  uVar3 = param_1[5];
  if (uVar3 == param_1[3]) {
    local_34 = 0;
    uVar5 = param_1[2];
    uVar1 = param_1[4] + uVar3;
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = 0x7fffffffffffffff / uVar5;
    }
    if (uVar1 <= uVar3) {
      lVar2 = FUN_00e13bcc(*param_1,1,param_1[6],uVar5 * uVar1,param_1[7],&local_34);
      param_1[7] = lVar2;
      if (local_34 == 0) {
        uVar3 = param_1[5];
        param_1[3] = uVar1;
        param_1[6] = uVar5 * uVar1;
        if (uVar1 < uVar3) {
          piVar4 = (int *)param_1[1];
          if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
            *piVar4 = 0x82;
          }
          param_1[5] = uVar1;
          return;
        }
        goto LAB_00e83254;
      }
    }
    piVar4 = (int *)param_1[1];
    if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
      *piVar4 = 0x40;
    }
  }
  else {
    lVar2 = param_1[7];
LAB_00e83254:
    memcpy((void *)(lVar2 + param_1[2] * uVar3),param_2,param_1[2]);
    param_1[5] = param_1[5] + 1;
  }
  return;
}

