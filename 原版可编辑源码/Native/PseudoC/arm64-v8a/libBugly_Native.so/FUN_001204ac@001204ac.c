
long FUN_001204ac(long param_1,long param_2,ulong *param_3,int param_4,ulong *param_5,
                 undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar4 = 3;
  if (param_4 != 7) {
    iVar4 = param_4;
  }
  switch(iVar4) {
  case 0:
    uVar9 = *param_3;
    *param_3 = uVar9 + 1;
    iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar9 & 0xfffffffffffffff8,&local_70,0,param_6);
    if (-1 < iVar4) {
      *param_5 = local_70 >> ((uVar9 - (uVar9 & 0xfffffffffffffff8)) * 8 & 0x3f) & 0xff;
    }
    break;
  case 1:
    uVar8 = *param_3;
    *param_3 = uVar8 + 1;
    iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar8 & 0xfffffffffffffff8,&local_70,0,param_6);
    uVar9 = local_70;
    if (iVar4 < 0) break;
    uVar7 = *param_3;
    *param_3 = uVar7 + 1;
    iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar7 & 0xfffffffffffffff8,&local_70,0,param_6);
    if (iVar4 < 0) break;
    uVar3 = (uint)(uVar9 >> ((uVar8 - (uVar8 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar6 = (uint)(local_70 >> ((uVar7 - (uVar7 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar1 = uVar3 & 0xff | uVar6 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar1 = uVar6 & 0xff | uVar3 << 8;
    }
    uVar5 = (ulong)uVar1 & 0xffff;
    goto LAB_00120980;
  case 2:
    uVar8 = *param_3;
    *param_3 = uVar8 + 1;
    iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar8 & 0xfffffffffffffff8,&local_70,0,param_6);
    uVar9 = local_70;
    if (-1 < iVar4) {
      uVar7 = *param_3;
      *param_3 = uVar7 + 1;
      iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar7 & 0xfffffffffffffff8,&local_70,0,param_6);
      if (-1 < iVar4) {
        uVar5 = *param_3;
        uVar3 = (uint)(uVar9 >> ((uVar8 - (uVar8 & 0xfffffffffffffff8)) * 8 & 0x3f));
        uVar6 = (uint)(local_70 >> ((uVar7 - (uVar7 & 0xfffffffffffffff8)) * 8 & 0x3f));
        iVar4 = *(int *)(param_1 + 0x40);
        *param_3 = uVar5 + 1;
        uVar1 = uVar3 & 0xff | uVar6 << 8;
        if (iVar4 != 0) {
          uVar1 = uVar6 & 0xff | uVar3 << 8;
        }
        iVar4 = (**(code **)(param_2 + 0x18))
                          (param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_6);
        uVar9 = local_70;
        if (-1 < iVar4) {
          uVar8 = *param_3;
          *param_3 = uVar8 + 1;
          iVar4 = (**(code **)(param_2 + 0x18))
                            (param_1,uVar8 & 0xfffffffffffffff8,&local_70,0,param_6);
          if (-1 < iVar4) {
            uVar9 = uVar9 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f);
            local_70 = local_70 >> ((uVar8 - (uVar8 & 0xfffffffffffffff8)) * 8 & 0x3f);
            if (*(int *)(param_1 + 0x40) == 0) {
              uVar9 = (ulong)uVar1 & 0xffff | (uVar9 & 0xff | (local_70 & 0xff) << 8) << 0x10;
            }
            else {
              uVar9 = local_70 & 0xff | (uVar9 & 0xff) << 8 | ((ulong)uVar1 & 0xffff) << 0x10;
            }
            iVar4 = 0;
            *param_5 = uVar9;
          }
        }
      }
    }
    break;
  case 3:
    uVar8 = *param_3;
    *param_3 = uVar8 + 1;
    iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar8 & 0xfffffffffffffff8,&local_70,0,param_6);
    uVar9 = local_70;
    if (-1 < iVar4) {
      uVar7 = *param_3;
      *param_3 = uVar7 + 1;
      iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar7 & 0xfffffffffffffff8,&local_70,0,param_6);
      if (-1 < iVar4) {
        uVar5 = *param_3;
        uVar3 = (uint)(uVar9 >> ((uVar8 - (uVar8 & 0xfffffffffffffff8)) * 8 & 0x3f));
        uVar6 = (uint)(local_70 >> ((uVar7 - (uVar7 & 0xfffffffffffffff8)) * 8 & 0x3f));
        iVar4 = *(int *)(param_1 + 0x40);
        *param_3 = uVar5 + 1;
        uVar1 = uVar3 & 0xff | uVar6 << 8;
        if (iVar4 != 0) {
          uVar1 = uVar6 & 0xff | uVar3 << 8;
        }
        iVar4 = (**(code **)(param_2 + 0x18))
                          (param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_6);
        uVar9 = local_70;
        if (-1 < iVar4) {
          uVar8 = *param_3;
          *param_3 = uVar8 + 1;
          iVar4 = (**(code **)(param_2 + 0x18))
                            (param_1,uVar8 & 0xfffffffffffffff8,&local_70,0,param_6);
          if (-1 < iVar4) {
            uVar9 = uVar9 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f);
            uVar8 = local_70 >> ((uVar8 - (uVar8 & 0xfffffffffffffff8)) * 8 & 0x3f);
            if (*(int *)(param_1 + 0x40) == 0) {
              uVar9 = (ulong)uVar1 & 0xffff | (uVar9 & 0xff | (uVar8 & 0xff) << 8) << 0x10;
            }
            else {
              uVar9 = uVar8 & 0xff | (uVar9 & 0xff) << 8 | ((ulong)uVar1 & 0xffff) << 0x10;
            }
            uVar7 = *param_3;
            *param_3 = uVar7 + 1;
            iVar4 = (**(code **)(param_2 + 0x18))
                              (param_1,uVar7 & 0xfffffffffffffff8,&local_70,0,param_6);
            uVar8 = local_70;
            if (-1 < iVar4) {
              uVar5 = *param_3;
              *param_3 = uVar5 + 1;
              iVar4 = (**(code **)(param_2 + 0x18))
                                (param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_6);
              if (-1 < iVar4) {
                uVar10 = *param_3;
                uVar3 = (uint)(uVar8 >> ((uVar7 - (uVar7 & 0xfffffffffffffff8)) * 8 & 0x3f));
                uVar6 = (uint)(local_70 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f));
                iVar4 = *(int *)(param_1 + 0x40);
                *param_3 = uVar10 + 1;
                uVar1 = uVar3 & 0xff | uVar6 << 8;
                if (iVar4 != 0) {
                  uVar1 = uVar6 & 0xff | uVar3 << 8;
                }
                iVar4 = (**(code **)(param_2 + 0x18))
                                  (param_1,uVar10 & 0xfffffffffffffff8,&local_70,0,param_6);
                uVar8 = local_70;
                if (-1 < iVar4) {
                  uVar7 = *param_3;
                  *param_3 = uVar7 + 1;
                  iVar4 = (**(code **)(param_2 + 0x18))
                                    (param_1,uVar7 & 0xfffffffffffffff8,&local_70,0,param_6);
                  if (-1 < iVar4) {
                    uVar8 = uVar8 >> ((uVar10 - (uVar10 & 0xfffffffffffffff8)) * 8 & 0x3f);
                    local_70 = local_70 >> ((uVar7 - (uVar7 & 0xfffffffffffffff8)) * 8 & 0x3f);
                    if (*(int *)(param_1 + 0x40) == 0) {
                      uVar8 = (ulong)uVar1 & 0xffff |
                              (uVar8 & 0xff | (local_70 & 0xff) << 8) << 0x10;
                    }
                    else {
                      uVar8 = local_70 & 0xff | (uVar8 & 0xff) << 8 |
                              ((ulong)uVar1 & 0xffff) << 0x10;
                    }
                    uVar7 = uVar9 | uVar8 << 0x20;
                    if (*(int *)(param_1 + 0x40) != 0) {
                      uVar7 = uVar8 | uVar9 << 0x20;
                    }
                    iVar4 = 0;
                    *param_5 = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 4:
    uVar8 = 0;
    uVar9 = 0;
    do {
      uVar7 = *param_3;
      *param_3 = uVar7 + 1;
      iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar7 & 0xfffffffffffffff8,&local_70,0,param_6);
      if (iVar4 < 0) goto LAB_00120988;
      uVar7 = local_70 >> ((uVar7 - (uVar7 & 0xfffffffffffffff8)) * 8 & 0x3f);
      uVar8 = (uVar7 & 0x7f) << (uVar9 & 0x3f) | uVar8;
      uVar9 = uVar9 + 7;
    } while ((char)uVar7 < '\0');
    iVar4 = 0;
    *param_5 = uVar8;
    break;
  case 5:
    uVar8 = 0;
    uVar9 = 0;
    do {
      uVar7 = *param_3;
      *param_3 = uVar7 + 1;
      iVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar7 & 0xfffffffffffffff8,&local_70,0,param_6);
      if (iVar4 < 0) goto LAB_00120988;
      uVar7 = local_70 >> ((uVar7 - (uVar7 & 0xfffffffffffffff8)) * 8 & 0x3f);
      uVar8 = (uVar7 & 0x7f) << (uVar9 & 0x3f) | uVar8;
      uVar9 = uVar9 + 7;
    } while (((uint)uVar7 >> 7 & 1) != 0);
    uVar5 = 0;
    if ((uVar7 & 0x40) != 0 && uVar9 < 0x40) {
      uVar5 = -1L << (uVar9 & 0x3f);
    }
    uVar5 = uVar5 | uVar8;
LAB_00120980:
    iVar4 = 0;
    *param_5 = uVar5;
    break;
  default:
    log2Console(3,"Bugly-libunwind","Unexpected operand type %d\n");
    iVar4 = -8;
  }
LAB_00120988:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (long)iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

