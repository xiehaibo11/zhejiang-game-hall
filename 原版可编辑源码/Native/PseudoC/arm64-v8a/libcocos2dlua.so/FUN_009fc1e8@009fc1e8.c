
long FUN_009fc1e8(long *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  char *__s1;
  int iVar3;
  size_t sVar4;
  void *__dest;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_470;
  ulong uStack_468;
  char *local_460;
  char local_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar6 = 0;
  if (param_2 == (char *)0x0) goto LAB_009fc53c;
  if (*param_2 != '.') {
    uStack_468 = 0x400;
    local_470 = 1;
    local_458[0] = '.';
    local_460 = local_458;
    sVar4 = strlen(param_2);
    __dest = (void *)FUN_009f9d60(&local_470,sVar4);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,sVar4);
      local_470 = local_470 + sVar4;
    }
    if (uStack_468 <= local_470) {
      FUN_009f9d60(&local_470,1);
    }
    __s1 = local_460;
    uVar5 = local_470 + 1;
    local_460[local_470] = '\0';
    lVar6 = 0;
    local_470 = uVar5;
    if (local_460 != (char *)0x0) {
                    /* try { // try from 009fc3d4 to 00afc3db has its CatchHandler @ 009fc4f4 */
      sVar4 = strlen(local_460);
                    /* try { // try from 009fc3dc to 00afc50f has its CatchHandler @ 009fc360 */
      uVar5 = sVar4 >> 5;
      if (uVar5 < sVar4) {
        uVar9 = sVar4 & 0xffffffff;
        uVar7 = sVar4;
        do {
          lVar6 = uVar7 - 1;
          uVar8 = (uint)uVar9;
          uVar7 = uVar7 + ~uVar5;
          uVar9 = (ulong)(uVar8 * 0x20 + (uVar8 >> 2) + (uint)(byte)__s1[lVar6] ^ uVar8);
        } while (uVar5 < uVar7);
        lVar6 = param_1[6];
        if (lVar6 != 0) goto LAB_009fc424;
LAB_009fc484:
        plVar10 = (long *)0x0;
      }
      else {
        uVar9 = sVar4 & 0xffffffff;
        lVar6 = param_1[6];
        if (lVar6 == 0) goto LAB_009fc484;
LAB_009fc424:
        plVar10 = *(long **)(lVar6 + ((int)param_1[4] - 1 & uVar9) * 8);
        while ((plVar10 != (long *)0x0 &&
               ((((int)uVar9 != (int)plVar10[1] || (sVar4 != ((ulong)plVar10[1] >> 0x20 & 0xffff)))
                || (iVar3 = memcmp(__s1,plVar10 + 2,sVar4), iVar3 != 0))))) {
          plVar10 = (long *)*plVar10;
        }
      }
      lVar1 = 0;
      if (plVar10 != (long *)0x0) {
        lVar1 = (long)plVar10 + 0x10;
      }
      lVar6 = 0;
      if ((param_1 != (long *)0x0) && (lVar1 != 0)) {
        if (*param_1 != 0) {
          uVar9 = *param_1 - 1;
          uVar5 = uVar9 & lVar1 * 0x9e3779b1;
          if ((uVar9 & lVar1 * 0x9e3779b1) == 0) {
            uVar5 = 1;
          }
          for (plVar10 = (long *)(param_1[3] + uVar5 * ((ulong)*(uint *)(param_1 + 2) & 0x7fffffff))
              ; plVar10[1] != lVar1; plVar10 = (long *)((long)plVar10 + *plVar10)) {
            if (*plVar10 == 0) goto LAB_009fc528;
          }
                    /* catch() { ... } // from try @ 009fc618 with catch @ 009fc510 */
          if (plVar10 != (long *)0x0) {
            lVar6 = 0;
            if (-1 < *(int *)(plVar10[2] + 0x70)) {
              lVar6 = plVar10[2];
            }
            goto LAB_009fc52c;
          }
        }
LAB_009fc528:
        lVar6 = 0;
      }
    }
LAB_009fc52c:
    if (local_460 != local_458) {
      free(local_460);
    }
    goto LAB_009fc53c;
  }
  sVar4 = strlen(param_2);
  uVar5 = sVar4 >> 5;
  if (uVar5 < sVar4) {
    uVar9 = sVar4 & 0xffffffff;
    uVar7 = sVar4;
    do {
      lVar6 = uVar7 - 1;
      uVar8 = (uint)uVar9;
      uVar7 = uVar7 + ~uVar5;
      uVar9 = (ulong)(uVar8 * 0x20 + (uVar8 >> 2) + (uint)(byte)param_2[lVar6] ^ uVar8);
    } while (uVar5 < uVar7);
    lVar6 = param_1[6];
    if (lVar6 != 0) goto LAB_009fc278;
LAB_009fc330:
    plVar10 = (long *)0x0;
  }
  else {
    uVar9 = sVar4 & 0xffffffff;
    lVar6 = param_1[6];
    if (lVar6 == 0) goto LAB_009fc330;
LAB_009fc278:
    plVar10 = *(long **)(lVar6 + ((int)param_1[4] - 1 & uVar9) * 8);
    while ((plVar10 != (long *)0x0 &&
           ((((int)uVar9 != (int)plVar10[1] || (sVar4 != ((ulong)plVar10[1] >> 0x20 & 0xffff))) ||
            (iVar3 = memcmp(param_2,plVar10 + 2,sVar4), iVar3 != 0))))) {
      plVar10 = (long *)*plVar10;
    }
  }
  lVar1 = 0;
  if (plVar10 != (long *)0x0) {
    lVar1 = (long)plVar10 + 0x10;
  }
  lVar6 = 0;
  if ((param_1 != (long *)0x0) && (lVar1 != 0)) {
    if (*param_1 != 0) {
                    /* try { // try from 009fc360 to 00afc3d3 has its CatchHandler @ 009fc360
                       catch() { ... } // from try @ 009fc360 with catch @ 009fc360
                       catch() { ... } // from try @ 009fc3dc with catch @ 009fc360 */
      uVar9 = *param_1 - 1;
      uVar5 = uVar9 & lVar1 * 0x9e3779b1;
      if ((uVar9 & lVar1 * 0x9e3779b1) == 0) {
        uVar5 = 1;
      }
      for (plVar10 = (long *)(param_1[3] + uVar5 * ((ulong)*(uint *)(param_1 + 2) & 0x7fffffff));
          plVar10[1] != lVar1; plVar10 = (long *)((long)plVar10 + *plVar10)) {
        if (*plVar10 == 0) goto LAB_009fc508;
      }
      if (plVar10 != (long *)0x0) {
                    /* catch() { ... } // from try @ 009fc3d4 with catch @ 009fc4f4 */
        lVar6 = 0;
        if (-1 < *(int *)(plVar10[2] + 0x70)) {
          lVar6 = plVar10[2];
        }
        goto LAB_009fc53c;
      }
    }
LAB_009fc508:
    lVar6 = 0;
  }
LAB_009fc53c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

