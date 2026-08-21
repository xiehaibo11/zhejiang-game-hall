
void _Uaarch64_step(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  log2Console(3,"Bugly-libunwind","(cursor=%p, ip=0x%016lx, cfa=0x%016lx, ret=%d))\n",param_1,
              param_1[3],param_1[2],0xfffffff6);
  lVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = FUN_00117cbc(param_1);
  log2Console(3,"Bugly-libunwind","dwarf_step()=%d\n",uVar4);
  if ((int)uVar4 < 0) {
    if (*(int *)((long)param_1 + 0x54) == 0) {
      lVar7 = param_1[0x47];
      if (param_1[0x48] != 0 || lVar7 != 0) {
        lVar6 = param_1[1];
        if (((uint)param_1[0x48] >> 1 & 1) == 0) {
          iVar5 = (**(code **)(lVar6 + 0x18))(lVar6,lVar7,&local_50,0,*param_1);
        }
        else {
          iVar5 = (**(code **)(lVar6 + 0x20))(lVar6,lVar7,&local_50,0,*param_1);
        }
        if ((-1 < iVar5) && (local_50 != param_1[3])) {
          param_1[3] = local_50;
          goto joined_r0x00117be0;
        }
      }
    }
    if (uVar4 != 0xfffffffb) {
      uVar4 = 0;
    }
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00117b78;
  }
  else {
    local_50 = param_1[3];
joined_r0x00117be0:
    if (3 < local_50) {
      local_50 = local_50 - 4;
      param_1[3] = local_50;
    }
    if ((local_50 == uVar2) && (param_1[2] == lVar1)) {
      log2Console(3,"Bugly-libunwind","%s: ip and cfa unchanged; stopping here (ip=0x%lx)\n",
                  "_Uaarch64_step",uVar2);
      uVar4 = 0xfffffff9;
    }
    else {
      uVar4 = (uint)(local_50 != 0);
      *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + 1;
    }
    if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00117b78:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
  }
  return;
}

