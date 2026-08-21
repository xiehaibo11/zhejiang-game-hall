
ulong FUN_001175c0(undefined8 *param_1,uint param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_30;
  ulong local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(ulong *)(lVar2 + 0x28);
  if (param_2 - 4 < 0x1b) {
LAB_001175ec:
    lVar5 = param_1[(long)(int)param_2 * 2 + 0xb];
    lVar7 = param_1[(long)(int)param_2 * 2 + 0xc];
    if (param_4 == 0) {
LAB_001176ec:
      if (lVar5 != 0 || lVar7 != 0) {
        lVar6 = param_1[1];
        if (((uint)lVar7 >> 1 & 1) == 0) {
          uVar4 = (**(code **)(lVar6 + 0x18))(lVar6,lVar5,param_3,0,*param_1);
        }
        else {
          uVar4 = (**(code **)(lVar6 + 0x20))(lVar6,lVar5,param_3,0,*param_1);
        }
        uVar3 = *(ulong *)(lVar2 + 0x28);
        if (uVar3 == local_28) {
          return uVar4;
        }
        goto LAB_00117774;
      }
    }
    else {
      local_30 = *param_3;
      if (lVar7 != 0 || lVar5 != 0) {
        lVar6 = param_1[1];
        if (((uint)lVar7 >> 1 & 1) == 0) {
          uVar3 = (**(code **)(lVar6 + 0x18))(lVar6,lVar5,&local_30,1,*param_1);
          uVar3 = uVar3 & 0xffffffff;
        }
        else {
          uVar3 = (**(code **)(lVar6 + 0x20))(lVar6,lVar5,&local_30,1,*param_1);
          uVar3 = uVar3 & 0xffffffff;
        }
        goto LAB_00117718;
      }
    }
    uVar3 = 0xfffffffd;
  }
  else if (param_2 < 4) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if (param_4 == 0) {
      lVar7 = (long)(int)param_2;
      if ((*(uint *)(param_1 + 10) & uVar1) == 0) {
        lVar5 = param_1[lVar7 * 2 + 0xb];
        lVar7 = param_1[lVar7 * 2 + 0xc];
        goto LAB_001176ec;
      }
      uVar8 = param_1[lVar7 + 6];
LAB_00117768:
      uVar3 = 0;
      *param_3 = uVar8;
    }
    else {
      uVar3 = 0;
      param_1[(long)(int)param_2 + 6] = *param_3;
      *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | uVar1;
    }
  }
  else {
    if (param_2 - 0x20 < 2) goto LAB_001175ec;
    if (param_2 == 0x1f) {
      if (param_4 == 0) {
        uVar8 = param_1[2];
        goto LAB_00117768;
      }
      uVar3 = 0xfffffffc;
    }
    else {
      log2Console(3,"Bugly-libunwind","bad register number %u\n",param_2);
      uVar3 = 0xfffffffd;
    }
  }
LAB_00117718:
  if (*(ulong *)(lVar2 + 0x28) == local_28) {
    return uVar3;
  }
LAB_00117774:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

