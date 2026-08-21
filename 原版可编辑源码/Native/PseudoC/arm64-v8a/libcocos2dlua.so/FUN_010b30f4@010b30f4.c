
int FUN_010b30f4(long *param_1,uint param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  void *__src;
  long lVar10;
  int local_54;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b303c with catch @ 010b310c
                        */
  if ((int)param_2 < 0) {
    return 6;
  }
  if ((long)param_4 < 0) {
    return 6;
  }
  if ((int)param_1[4] <= (int)param_2) {
    return 6;
  }
  uVar9 = param_1[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b30c0 with catch @ 010b3140
                        */
  if (param_1[1] + param_4 <= uVar9) goto LAB_010b32c4;
  __src = (void *)*param_1;
  uVar3 = (long)param_3 - (long)__src;
  if (uVar9 <= uVar3 || 0x7fffffffffffffff < uVar3) {
    uVar3 = 0xffffffffffffffff;
  }
  do {
    uVar9 = uVar9 + (uVar9 >> 2) + 0x400 & 0xfffffffffffffc00;
  } while (uVar9 < param_1[1] + param_4);
  lVar10 = param_1[7];
  __dest = (void *)ft_mem_alloc(lVar10,uVar9,&local_54);
  *param_1 = (long)__dest;
  if (local_54 != 0) {
    *param_1 = (long)__src;
    return local_54;
  }
  if (__src != (void *)0x0) {
    memcpy(__dest,__src,param_1[2]);
    if (0 < (int)param_1[4]) {
      plVar6 = (long *)param_1[5];
      plVar2 = plVar6 + (int)param_1[4];
      plVar7 = plVar2;
      if (plVar2 <= plVar6 + 1) {
        plVar7 = plVar6 + 1;
      }
      uVar1 = ((long)plVar7 + ~(ulong)plVar6 >> 3) + 1;
      lVar4 = *param_1 - (long)__src;
      plVar7 = plVar6;
      if ((3 < uVar1) && (uVar5 = uVar1 & 0x3ffffffffffffffc, uVar5 != 0)) {
        plVar7 = plVar6 + uVar5;
        plVar6 = plVar6 + 2;
        uVar8 = uVar5;
        do {
          if ((bool)(~(plVar6[-2] == 0) & 1)) {
            plVar6[-2] = plVar6[-2] + lVar4;
          }
          if ((bool)(~(plVar6[-1] == 0) & 1)) {
            plVar6[-1] = plVar6[-1] + lVar4;
          }
          if ((bool)(~(*plVar6 == 0) & 1)) {
            *plVar6 = *plVar6 + lVar4;
          }
          if ((bool)(~(plVar6[1] == 0) & 1)) {
            plVar6[1] = plVar6[1] + lVar4;
          }
          uVar8 = uVar8 - 4;
          plVar6 = plVar6 + 4;
        } while (uVar8 != 0);
        if (uVar1 == uVar5) goto LAB_010b32a8;
      }
      do {
        if (*plVar7 != 0) {
          *plVar7 = *plVar7 + lVar4;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 < plVar2);
    }
LAB_010b32a8:
    ft_mem_free(lVar10,__src);
  }
  param_1[2] = uVar9;
  if (-1 < (long)uVar3) {
                    /* try { // try from 010b32c0 to 011b3927 has its CatchHandler @ 010b32c0
                       catch() { ... } // from try @ 010b32c0 with catch @ 010b32c0
                       catch() { ... } // from try @ 010b3930 with catch @ 010b32c0 */
    param_3 = (void *)(*param_1 + uVar3);
  }
LAB_010b32c4:
  uVar9 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
  *(long *)(param_1[5] + uVar9) = *param_1 + param_1[1];
  *(size_t *)(param_1[6] + uVar9) = param_4;
  memcpy((void *)(*param_1 + param_1[1]),param_3,param_4);
  param_1[1] = param_1[1] + param_4;
  return 0;
}

