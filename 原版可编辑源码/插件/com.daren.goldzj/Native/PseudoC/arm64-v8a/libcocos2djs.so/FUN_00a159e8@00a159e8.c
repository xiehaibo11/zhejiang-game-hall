
/* WARNING: Type propagation algorithm not settling */

int * FUN_00a159e8(uint param_1,uint param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  ulong __nfds;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  pollfd local_78 [3];
  
  uVar1 = param_4;
  if (0x7ffffffe < (long)param_4) {
    uVar1 = 0x7fffffff;
  }
  if (((param_2 & param_1) == 0xffffffff) && (param_3 == -1)) {
    piVar6 = (int *)FUN_00a15938(uVar1 & 0xffffffff);
    return piVar6;
  }
  if ((long)param_4 < 1) {
    auVar10 = ZEXT816(0);
    iVar5 = 0;
  }
  else {
    auVar10 = FUN_00a18e40();
    iVar5 = (int)uVar1;
  }
  bVar3 = param_1 != 0xffffffff;
  if (bVar3) {
    local_78[0].events = 0xc3;
    local_78[0].revents = 0;
    local_78[0].fd = param_1;
  }
  uVar2 = (ulong)bVar3;
  __nfds = uVar2;
  if (param_2 != 0xffffffff) {
    __nfds = (ulong)(bVar3 + 1);
    local_78[uVar2].fd = param_2;
    local_78[uVar2].events = 0xc3;
    local_78[uVar2].revents = 0;
  }
  if (param_3 != -1) {
    iVar9 = (int)__nfds;
    __nfds = (ulong)(iVar9 + 1);
    local_78[iVar9].fd = param_3;
    local_78[iVar9].events = 0x104;
    local_78[iVar9].revents = 0;
  }
  iVar9 = 0;
  if (uVar1 != 0) {
    iVar9 = iVar5;
  }
  if ((long)uVar1 < 0) {
    iVar9 = -1;
  }
  uVar4 = poll(local_78,__nfds,iVar9);
  piVar6 = (int *)(ulong)uVar4;
  if (uVar4 == 0xffffffff) {
    piVar7 = (int *)__errno();
    piVar6 = piVar7;
    if ((long)param_4 < 1) {
      if (uVar1 == 0) {
        do {
          if (*piVar7 != 0) {
            if (*piVar7 != 4) {
              return (int *)&DAT_ffffffff;
            }
            if (DAT_01d38bc0 != 0) {
              return (int *)&DAT_ffffffff;
            }
          }
          uVar4 = poll(local_78,__nfds,0);
          piVar6 = (int *)(ulong)uVar4;
        } while (uVar4 == 0xffffffff);
      }
      else if ((long)uVar1 < 0) {
        do {
          if (*piVar7 != 0) {
            if (*piVar7 != 4) {
              return (int *)&DAT_ffffffff;
            }
            if (DAT_01d38bc0 != 0) {
              return (int *)&DAT_ffffffff;
            }
          }
          uVar4 = poll(local_78,__nfds,-1);
          piVar6 = (int *)(ulong)uVar4;
        } while (uVar4 == 0xffffffff);
      }
      else {
        do {
          if (*piVar7 != 0) {
            if (*piVar7 != 4) {
              return (int *)&DAT_ffffffff;
            }
            if (DAT_01d38bc0 != 0) {
              return (int *)&DAT_ffffffff;
            }
          }
          uVar4 = poll(local_78,__nfds,iVar9);
          piVar6 = (int *)(ulong)uVar4;
        } while (uVar4 == 0xffffffff);
      }
    }
    else {
      do {
        if (*piVar7 != 0) {
          piVar6 = (int *)&DAT_ffffffff;
          if (*piVar7 != 4) {
            return piVar6;
          }
          if (DAT_01d38bc0 != 0) {
            return piVar6;
          }
        }
        auVar11 = FUN_00a18e40(piVar6);
        iVar5 = FUN_00a18ea0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
        iVar5 = (int)uVar1 - iVar5;
        if (iVar5 < 1) {
          return (int *)0x0;
        }
        iVar9 = 0;
        if (uVar1 != 0) {
          iVar9 = iVar5;
        }
        if ((long)uVar1 < 0) {
          iVar9 = -1;
        }
        uVar4 = poll(local_78,__nfds,iVar9);
        piVar6 = (int *)(ulong)uVar4;
      } while (uVar4 == 0xffffffff);
    }
  }
  if ((int)piVar6 < 0) {
    piVar6 = (int *)&DAT_ffffffff;
  }
  else if ((int)piVar6 != 0) {
    if (param_1 == 0xffffffff) {
      piVar6 = (int *)0x0;
      uVar4 = 0;
      lVar8 = 0;
      iVar5 = 0;
    }
    else {
      uVar4 = (uint)((local_78[0]._4_4_ & 0x590000) != 0);
      if ((local_78[0]._4_4_ & 0xa20000) != 0) {
        uVar4 = uVar4 | 4;
      }
      piVar6 = (int *)(ulong)uVar4;
      lVar8 = 1;
      iVar5 = 1;
    }
    if (param_2 != 0xffffffff) {
      if ((local_78[lVar8].revents & 0x59U) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((local_78[lVar8].revents & 0xa2U) != 0) {
        uVar4 = uVar4 | 4;
      }
      piVar6 = (int *)(ulong)uVar4;
      iVar5 = (int)lVar8 + 1;
    }
    if (param_3 != -1) {
      uVar4 = (uint)piVar6;
      if ((local_78[iVar5].revents & 0x104U) != 0) {
        uVar4 = (uint)piVar6 | 2;
      }
      if ((local_78[iVar5].revents & 0x38U) != 0) {
        uVar4 = uVar4 | 4;
      }
      piVar6 = (int *)(ulong)uVar4;
    }
  }
  return piVar6;
}

