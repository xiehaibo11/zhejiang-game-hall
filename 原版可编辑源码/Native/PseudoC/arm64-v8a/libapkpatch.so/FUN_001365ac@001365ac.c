
void FUN_001365ac(long param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5,
                 long param_6,ulong param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = *(ulong *)(param_1 + 8);
  uVar6 = *(ulong *)(param_2 + 8);
  lVar3 = (*(code *)*param_3)(param_3);
  local_80 = param_6 + param_7;
  local_90 = 0;
  local_78 = 0;
  local_88 = param_1;
  local_70 = param_7;
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      iVar2 = (*(code *)param_3[1])(param_3,&local_a8);
      if ((((iVar2 == 0) || (uVar5 < local_a0)) || (uVar5 - local_a0 < local_98)) ||
         ((uVar6 < local_a8 || (uVar6 - local_a8 < local_98)))) {
LAB_00136734:
        uVar4 = 0;
        goto LAB_0013684c;
      }
      lVar9 = local_a0 - uVar8;
      lVar3 = lVar3 + -1;
      if (local_a0 < uVar8) goto LAB_00136734;
      if (lVar9 != 0) {
        iVar2 = FUN_001364f4(&local_90,param_4,lVar9);
        while( true ) {
          if (iVar2 == 0) goto LAB_00136734;
          if (lVar9 == 0) break;
          iVar2 = FUN_00136880(param_5,0,lVar9);
          lVar9 = 0;
        }
      }
      uVar7 = local_a8;
      uVar10 = local_98;
      if (local_98 == 0) {
        uVar8 = 0;
      }
      else {
        do {
          uVar8 = uVar10;
          if (param_7 <= uVar10) {
            uVar8 = param_7;
          }
          iVar2 = (**(code **)(param_2 + 0x10))(param_2,uVar7,param_6,param_6 + uVar8);
          if (((iVar2 == 0) || (iVar2 = FUN_00136880(param_5,param_6,uVar8), iVar2 == 0)) ||
             (iVar2 = switchD_00136940::caseD_ff(&local_90,param_6,uVar8), iVar2 == 0))
          goto LAB_00136734;
          uVar10 = uVar10 - uVar8;
          uVar7 = uVar8 + uVar7;
          uVar8 = local_98;
        } while (uVar10 != 0);
      }
      uVar8 = uVar8 + local_a0;
    } while (lVar3 != 0);
  }
  lVar3 = uVar5 - uVar8;
  if (uVar5 < uVar8 || lVar3 == 0) {
LAB_00136788:
    lVar9 = local_78;
    lVar3 = local_90;
    if (local_78 != 0) {
      uVar4 = (**(code **)(local_88 + 0x18))(local_88,local_90,local_80,local_80 + local_78);
      if ((int)uVar4 == 0) goto LAB_0013684c;
      local_90 = lVar3 + lVar9;
    }
    if ((((param_5[1] == 0) && (*param_5 == 0)) &&
        (param_5[10] - param_5[9] == param_5[0xd] - param_5[0xe])) &&
       (((param_5[4] - param_5[3] == param_5[7] - param_5[8] &&
         (iVar2 = (*(code *)param_3[2])(param_3), iVar2 != 0)) &&
        ((local_90 == *(long *)(local_88 + 8) &&
         ((param_4[1] - *param_4 == param_4[4] - param_4[5] && (uVar8 == uVar5)))))))) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = FUN_001364f4(&local_90,param_4,lVar3);
    iVar2 = (int)uVar4;
    while (iVar2 != 0) {
      uVar8 = uVar5;
      if (lVar3 == 0) goto LAB_00136788;
      uVar4 = FUN_00136880(param_5,0,lVar3);
      lVar3 = 0;
      iVar2 = (int)uVar4;
    }
  }
LAB_0013684c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

