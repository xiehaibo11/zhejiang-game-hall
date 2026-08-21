
void FUN_010b2f94(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  void *__src;
  long lVar8;
  int local_24;
  
                    /* try { // try from 010b2fa8 to 011b2fab has its CatchHandler @ 010b2fec */
  __src = (void *)*param_1;
  if (__src == (void *)0x0) {
    return;
  }
  lVar8 = param_1[7];
  __dest = (void *)ft_mem_alloc(lVar8,param_1[1],&local_24);
  *param_1 = (long)__dest;
  if (local_24 != 0) {
    return;
  }
  memcpy(__dest,__src,param_1[1]);
  if (0 < (int)param_1[4]) {
    plVar5 = (long *)param_1[5];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b2fa8 with catch @ 010b2fec
                        */
    plVar2 = plVar5 + (int)param_1[4];
    plVar6 = plVar2;
    if (plVar2 <= plVar5 + 1) {
      plVar6 = plVar5 + 1;
    }
    uVar1 = ((long)plVar6 + ~(ulong)plVar5 >> 3) + 1;
    lVar3 = *param_1 - (long)__src;
    plVar6 = plVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b3044 with catch @ 010b3018
                        */
    if ((3 < uVar1) && (uVar4 = uVar1 & 0x3ffffffffffffffc, uVar4 != 0)) {
      plVar6 = plVar5 + uVar4;
      plVar5 = plVar5 + 2;
      uVar7 = uVar4;
      do {
                    /* try { // try from 010b303c to 011b3043 has its CatchHandler @ 010b310c */
                    /* try { // try from 010b3044 to 011b30bf has its CatchHandler @ 010b3018 */
        if ((bool)(~(plVar5[-2] == 0) & 1)) {
          plVar5[-2] = plVar5[-2] + lVar3;
        }
        if ((bool)(~(plVar5[-1] == 0) & 1)) {
          plVar5[-1] = plVar5[-1] + lVar3;
        }
        if ((bool)(~(*plVar5 == 0) & 1)) {
          *plVar5 = *plVar5 + lVar3;
        }
        if ((bool)(~(plVar5[1] == 0) & 1)) {
          plVar5[1] = plVar5[1] + lVar3;
        }
        uVar7 = uVar7 - 4;
        plVar5 = plVar5 + 4;
      } while (uVar7 != 0);
      if (uVar1 == uVar4) goto LAB_010b30d0;
    }
    do {
      if (*plVar6 != 0) {
                    /* try { // try from 010b30c0 to 011b30c3 has its CatchHandler @ 010b3140 */
        *plVar6 = *plVar6 + lVar3;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 < plVar2);
  }
LAB_010b30d0:
  param_1[2] = param_1[1];
  ft_mem_free(lVar8,__src);
  return;
}

