
void _Uaarch64_resume(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  log2Console(3,"Bugly-libunwind","(cursor=%p)\n",param_1);
  if (param_1[3] == 0) {
    log2Console(3,"Bugly-libunwind","refusing to resume execution at address 0\n");
    uVar5 = 0xfffffff8;
  }
  else {
    uVar5 = *param_1;
    lVar1 = param_1[1];
    log2Console(3,"Bugly-libunwind","copying out cursor state\n");
    iVar8 = 0;
    do {
      uVar4 = _Uaarch64_regname(iVar8);
      log2Console(3,"Bugly-libunwind","copying %s %d\n",uVar4,iVar8);
      iVar3 = _Uaarch64_is_fpreg(iVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_001175c0(param_1,iVar8,auStack_78,0);
        if (-1 < iVar3) {
          pcVar7 = *(code **)(lVar1 + 0x20);
          puVar6 = auStack_78;
          goto LAB_001183f0;
        }
      }
      else {
        iVar3 = FUN_00117778(param_1,iVar8,auStack_70,0);
        if (-1 < iVar3) {
          pcVar7 = *(code **)(lVar1 + 0x28);
          puVar6 = auStack_70;
LAB_001183f0:
          (*pcVar7)(lVar1,iVar8,puVar6,1,uVar5);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x22);
    uVar5 = (**(code **)(param_1[1] + 0x30))(param_1[1],param_1,*param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

