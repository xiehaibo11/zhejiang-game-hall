
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_step(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  log2Console(3,"Bugly-libunwind","(cursor=%p, ip=0x%016lx, cfa=0x%016lx, ret=%d))\n",param_1,
              param_1[3],param_1[2],0xfffffff6);
  uVar5 = param_1[3];
  lVar6 = param_1[2];
  iVar1 = FUN_001140c8(param_1);
  log2Console(3,"Bugly-libunwind","dwarf_step()=%d\n",iVar1);
  if (iVar1 < 0) {
    if (*(int *)((long)param_1 + 0x54) == 0) {
      lVar4 = param_1[0x47];
      if (param_1[0x48] != 0 || lVar4 != 0) {
        if (((uint)param_1[0x48] >> 1 & 1) == 0) {
          iVar3 = (**(code **)(param_1[1] + 0x18))(param_1[1],lVar4,&local_10,0,*param_1);
        }
        else {
          iVar3 = (**(code **)(param_1[1] + 0x20))(param_1[1],lVar4,&local_10,0,*param_1);
        }
        if ((-1 < iVar3) && (param_1[3] != local_10)) {
          param_1[3] = local_10;
          goto LAB_00113edc;
        }
      }
    }
    uVar2 = 0;
    if (iVar1 == -5) {
      uVar2 = 0xfffffffb;
    }
  }
  else {
    local_10 = param_1[3];
LAB_00113edc:
    if (3 < local_10) {
      local_10 = local_10 - 4;
      param_1[3] = local_10;
    }
    if ((uVar5 == local_10) && (param_1[2] == lVar6)) {
      log2Console(3,"Bugly-libunwind","%s: ip and cfa unchanged; stopping here (ip=0x%lx)\n",
                  "_Uaarch64_step",uVar5);
      uVar2 = 0xfffffff9;
    }
    else {
      *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + 1;
      uVar2 = (uint)(param_1[3] != 0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

