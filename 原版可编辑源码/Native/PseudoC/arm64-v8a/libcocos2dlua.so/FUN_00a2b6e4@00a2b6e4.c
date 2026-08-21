
int * FUN_00a2b6e4(pollfd *param_1,uint param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  pollfd *ppVar7;
  short *psVar8;
  ulong __nfds;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  __nfds = (ulong)param_2;
  if ((param_1 != (pollfd *)0x0) && (param_2 != 0)) {
    uVar3 = 0;
    ppVar7 = param_1;
    do {
      if (ppVar7->fd != -1) {
        if (param_3 < 1) {
          iVar4 = 0;
          auVar9 = ZEXT816(0);
        }
        else {
          auVar9 = FUN_00a2e828();
          iVar4 = param_3;
        }
                    /* try { // try from 00a2b778 to 00b2b7a7 has its CatchHandler @ 00a2b7f0 */
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = iVar4;
        }
        if (param_3 < 0) {
          iVar1 = -1;
        }
        uVar3 = poll(param_1,(ulong)param_2,iVar1);
        piVar5 = (int *)(ulong)uVar3;
        if (uVar3 == 0xffffffff) {
                    /* catch() { ... } // from try @ 00a2b664 with catch @ 00a2b7f8
                       catch() { ... } // from try @ 00a2b7ac with catch @ 00a2b7f8 */
          piVar6 = (int *)__errno();
                    /* catch() { ... } // from try @ 00a2b630 with catch @ 00a2b7fc */
                    /* catch() { ... } // from try @ 00a2b578 with catch @ 00a2b800 */
          piVar5 = piVar6;
          if (param_3 < 1) {
            if (param_3 == 0) {
              do {
                if (*piVar6 != 0) {
                  if (*piVar6 != 4) {
                    return (int *)0xffffffff;
                  }
                  if (DAT_017824c0 != 0) {
                    return (int *)0xffffffff;
                  }
                }
                uVar3 = poll(param_1,__nfds,0);
                piVar5 = (int *)(ulong)uVar3;
              } while (uVar3 == 0xffffffff);
            }
            else {
              do {
                if (*piVar6 != 0) {
                  if (*piVar6 != 4) {
                    return (int *)0xffffffff;
                  }
                  if (DAT_017824c0 != 0) {
                    return (int *)0xffffffff;
                  }
                }
                uVar3 = poll(param_1,__nfds,-1);
                piVar5 = (int *)(ulong)uVar3;
              } while (uVar3 == 0xffffffff);
            }
          }
          else {
            do {
              if (*piVar6 != 0) {
                piVar5 = (int *)0xffffffff;
                if (*piVar6 != 4) {
                  return (int *)0xffffffff;
                }
                if (DAT_017824c0 != 0) {
                  return (int *)0xffffffff;
                }
              }
              auVar10 = FUN_00a2e828(piVar5);
                    /* catch() { ... } // from try @ 00a2b5f4 with catch @ 00a2b830 */
                    /* catch() { ... } // from try @ 00a2b53c with catch @ 00a2b834 */
              iVar4 = FUN_00a2e888(auVar10._0_8_,auVar10._8_8_,auVar9._0_8_,auVar9._8_8_);
              if (param_3 - iVar4 < 1) {
                return (int *)0x0;
              }
              iVar1 = 0;
              if (param_3 != 0) {
                iVar1 = param_3 - iVar4;
              }
              if (param_3 < 0) {
                iVar1 = -1;
              }
              uVar3 = poll(param_1,__nfds,iVar1);
              piVar5 = (int *)(ulong)uVar3;
            } while (uVar3 == 0xffffffff);
          }
        }
        if ((int)piVar5 < 0) {
          piVar5 = (int *)0xffffffff;
        }
        else if ((int)piVar5 != 0) {
          psVar8 = &param_1->revents;
          do {
                    /* try { // try from 00a2b7ac to 00b2b7b3 has its CatchHandler @ 00a2b7f8 */
            if (((pollfd *)(psVar8 + -3))->fd != -1) {
              uVar2 = *psVar8;
              if (((uint)(int)(short)uVar2 >> 4 & 1) != 0) {
                uVar2 = uVar2 | 1;
                    /* try { // try from 00a2b7d4 to 00b2b7db has its CatchHandler @ 00a2b7f0 */
                *psVar8 = uVar2;
              }
                    /* try { // try from 00a2b7dc to 00b2b84f has its CatchHandler @ 00a2b4dc */
              if (((uint)(int)(short)uVar2 >> 3 & 1) != 0) {
                *psVar8 = uVar2 | 5;
              }
            }
            __nfds = __nfds - 1;
            psVar8 = psVar8 + 4;
                    /* catch() { ... } // from try @ 00a2b778 with catch @ 00a2b7f0
                       catch() { ... } // from try @ 00a2b7d4 with catch @ 00a2b7f0 */
          } while (__nfds != 0);
        }
        return piVar5;
      }
      uVar3 = uVar3 + 1;
      ppVar7 = ppVar7 + 1;
    } while (uVar3 < param_2);
  }
                    /* try { // try from 00a2b748 to 00b2b773 has its CatchHandler @ 00a2b7f4 */
  piVar5 = (int *)FUN_00a2b320(param_3);
  return piVar5;
}

