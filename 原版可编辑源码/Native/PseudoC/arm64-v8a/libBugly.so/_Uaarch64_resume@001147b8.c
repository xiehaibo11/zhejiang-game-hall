
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_resume(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  log2Console(3,"Bugly-libunwind","(cursor=%p)\n",param_1);
  if (param_1[3] == 0) {
    log2Console(3,"Bugly-libunwind","refusing to resume execution at address 0\n");
    uVar5 = 0xfffffff8;
  }
  else {
    lVar4 = param_1[1];
    uVar5 = *param_1;
    log2Console(3,"Bugly-libunwind","copying out cursor state\n");
    iVar3 = 0;
LAB_00114884:
    do {
      uVar2 = _Uaarch64_regname(iVar3);
      log2Console(3,"Bugly-libunwind","copying %s %d\n",uVar2,iVar3);
      iVar1 = _Uaarch64_is_fpreg(iVar3);
      if (iVar1 == 0) {
        iVar1 = FUN_00113958(param_1,iVar3,auStack_28,0);
        if (-1 < iVar1) {
          iVar1 = iVar3 + 1;
          (**(code **)(lVar4 + 0x20))(lVar4,iVar3,auStack_28,1,uVar5);
          iVar3 = iVar1;
          if (iVar1 == 0x22) break;
          goto LAB_00114884;
        }
      }
      else {
        iVar1 = FUN_00113b0c(param_1,iVar3,auStack_20,0);
        if (-1 < iVar1) {
          (**(code **)(lVar4 + 0x28))(lVar4,iVar3,auStack_20,1,uVar5);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x22);
    uVar5 = (**(code **)(param_1[1] + 0x30))(param_1[1],param_1,*param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

