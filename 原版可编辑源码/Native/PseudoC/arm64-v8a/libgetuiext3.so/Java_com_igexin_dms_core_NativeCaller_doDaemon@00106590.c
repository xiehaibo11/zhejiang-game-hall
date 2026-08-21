
void Java_com_igexin_dms_core_NativeCaller_doDaemon
               (long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6
               )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    uVar3 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    uVar4 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
    uVar5 = (**(code **)(*param_1 + 0x548))(param_1,param_5,0);
    uVar6 = (**(code **)(*param_1 + 0x548))(param_1,param_6,0);
    thunk_EXT_FUN_00002bb0(uVar5);
    uVar7 = thunk_EXT_FUN_00002bb0(uVar3,0);
    if ((int)uVar7 == -1) {
      uVar7 = thunk_EXT_FUN_00002bb0(uVar3,0x40,0x100);
    }
    iVar1 = thunk_EXT_FUN_00002bb0(uVar7,2);
    if (iVar1 == -1) {
      thunk_EXT_FUN_00002bb0(10000);
      uVar7 = thunk_EXT_FUN_00002bb0(uVar3,0);
      if ((int)uVar7 == -1) {
        uVar7 = thunk_EXT_FUN_00002bb0(uVar3,0x40,0x100);
      }
      iVar1 = thunk_EXT_FUN_00002bb0(uVar7,2);
      if (iVar1 == -1) {
        thunk_EXT_FUN_00002bb0(10000);
        uVar7 = thunk_EXT_FUN_00002bb0(uVar3,0);
        if ((int)uVar7 == -1) {
          uVar7 = thunk_EXT_FUN_00002bb0(uVar3,0x40,0x100);
        }
        iVar1 = thunk_EXT_FUN_00002bb0(uVar7,2);
        if (iVar1 == -1) {
          thunk_EXT_FUN_00002bb0(10000);
          return;
        }
      }
    }
    iVar1 = thunk_EXT_FUN_00002bb0(uVar5,0);
    if (iVar1 == -1) {
      thunk_EXT_FUN_00002bb0(uVar5,0x40,0x180);
    }
    iVar1 = thunk_EXT_FUN_00002bb0(uVar6,0);
    if (iVar1 == -1) {
      iVar1 = 0;
      do {
        iVar8 = iVar1;
        thunk_EXT_FUN_00002bb0(10000);
        iVar2 = thunk_EXT_FUN_00002bb0(uVar6,0);
        if (0x12a < iVar8) break;
        iVar1 = iVar8 + 1;
      } while (iVar2 == -1);
      thunk_EXT_FUN_00002bb0(uVar6);
      if (0x12a < iVar8) {
        thunk_EXT_FUN_00002bb0(uVar5);
        (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar3);
        (**(code **)(*param_1 + 0x550))(param_1,param_4,uVar4);
        (**(code **)(*param_1 + 0x550))(param_1,param_5,uVar5);
                    /* WARNING: Could not recover jumptable at 0x0010689c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x550))(param_1,param_6,uVar6);
        return;
      }
    }
    else {
      thunk_EXT_FUN_00002bb0(uVar6);
    }
    uVar3 = thunk_EXT_FUN_00002bb0(uVar4,0);
    if ((int)uVar3 == -1) {
      uVar3 = thunk_EXT_FUN_00002bb0(uVar4,0x40,0x100);
    }
    iVar1 = thunk_EXT_FUN_00002bb0(uVar3,2);
    if (iVar1 != -1) {
      thunk_EXT_FUN_00002bb0(uVar5);
      thunk_EXT_FUN_00002bb0(param_1,param_2,"onServiceDead");
      return;
    }
  }
  return;
}

