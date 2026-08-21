
/* WARNING: Type propagation algorithm not settling */

int * FUN_00a2b3d0(uint param_1,uint param_2,int param_3,ulong param_4)

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
  
                    /* try { // try from 00a2b3f8 to 00b2b3ff has its CatchHandler @ 00a2b414 */
                    /* try { // try from 00a2b400 to 00b2b463 has its CatchHandler @ 00a2b278 */
  uVar1 = param_4;
  if (0x7ffffffe < (long)param_4) {
    uVar1 = 0x7fffffff;
  }
                    /* catch() { ... } // from try @ 00a2b340 with catch @ 00a2b414
                       catch() { ... } // from try @ 00a2b3f8 with catch @ 00a2b414 */
                    /* catch() { ... } // from try @ 00a2b2cc with catch @ 00a2b418 */
  if (((param_2 & param_1) == 0xffffffff) && (param_3 == -1)) {
    piVar6 = (int *)FUN_00a2b320(uVar1 & 0xffffffff);
    return piVar6;
                    /* catch() { ... } // from try @ 00a2b308 with catch @ 00a2b428
                       catch() { ... } // from try @ 00a2b394 with catch @ 00a2b428 */
  }
  if ((long)param_4 < 1) {
    auVar10 = ZEXT816(0);
    iVar5 = 0;
  }
  else {
    auVar10 = FUN_00a2e828();
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
                    /* try { // try from 00a2b578 to 00b2b593 has its CatchHandler @ 00a2b800 */
    piVar7 = (int *)__errno();
    piVar6 = piVar7;
    if ((long)param_4 < 1) {
      if (uVar1 == 0) {
        do {
          if (*piVar7 != 0) {
            if (*piVar7 != 4) {
              return (int *)0xffffffff;
            }
            if (DAT_017824c0 != 0) {
              return (int *)0xffffffff;
            }
          }
                    /* try { // try from 00a2b690 to 00b2b747 has its CatchHandler @ 00a2b4dc */
          uVar4 = poll(local_78,__nfds,0);
          piVar6 = (int *)(ulong)uVar4;
        } while (uVar4 == 0xffffffff);
      }
      else {
                    /* try { // try from 00a2b5f4 to 00b2b60f has its CatchHandler @ 00a2b830 */
        if ((long)uVar1 < 0) {
          do {
            if (*piVar7 != 0) {
              if (*piVar7 != 4) {
                return (int *)0xffffffff;
              }
              if (DAT_017824c0 != 0) {
                return (int *)0xffffffff;
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
                return (int *)0xffffffff;
              }
              if (DAT_017824c0 != 0) {
                return (int *)0xffffffff;
              }
            }
            uVar4 = poll(local_78,__nfds,iVar9);
            piVar6 = (int *)(ulong)uVar4;
          } while (uVar4 == 0xffffffff);
        }
      }
    }
    else {
      do {
        if (*piVar7 != 0) {
          piVar6 = (int *)0xffffffff;
          if (*piVar7 != 4) {
            return (int *)0xffffffff;
          }
          if (DAT_017824c0 != 0) {
            return (int *)0xffffffff;
          }
        }
        auVar11 = FUN_00a2e828(piVar6);
        iVar5 = FUN_00a2e888(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
                    /* try { // try from 00a2b5b8 to 00b2b5bf has its CatchHandler @ 00a2b7f4 */
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
    piVar6 = (int *)0xffffffff;
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
                    /* try { // try from 00a2b4dc to 00b2b53b has its CatchHandler @ 00a2b4dc
                       catch() { ... } // from try @ 00a2b4dc with catch @ 00a2b4dc
                       catch() { ... } // from try @ 00a2b690 with catch @ 00a2b4dc
                       catch() { ... } // from try @ 00a2b7dc with catch @ 00a2b4dc */
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
                    /* try { // try from 00a2b53c to 00b2b557 has its CatchHandler @ 00a2b834 */
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
                    /* try { // try from 00a2b664 to 00b2b68f has its CatchHandler @ 00a2b7f8 */
  return piVar6;
}

