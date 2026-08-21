
long * FUN_009feb68(long *param_1,long param_2)

{
  long *__dest;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *__src;
  
                    /* try { // try from 009feb80 to 00afeb87 has its CatchHandler @ 009febe4 */
                    /* try { // try from 009feb88 to 00afebff has its CatchHandler @ 009fea08 */
  if (*param_1 != 0) goto LAB_009febc8;
LAB_009febb8:
  lVar2 = FUN_009fed18(param_1,0);
  if (lVar2 == 0) {
LAB_009fecc4:
    __src = (long *)0x0;
  }
  else {
LAB_009febc8:
    while (param_2 != 0) {
      lVar2 = param_1[3];
      uVar5 = *param_1 - 1;
                    /* catch() { ... } // from try @ 009feb30 with catch @ 009febdc */
      uVar6 = uVar5 & param_2 * 0x9e3779b1;
                    /* catch() { ... } // from try @ 009feaa4 with catch @ 009febe0 */
                    /* catch() { ... } // from try @ 009feb80 with catch @ 009febe4 */
      if ((uVar5 & param_2 * 0x9e3779b1) == 0) {
        uVar6 = 1;
      }
      uVar7 = (ulong)*(uint *)(param_1 + 2) & 0x7fffffff;
      __src = (long *)(lVar2 + uVar6 * uVar7);
      if (__src[1] == 0) goto LAB_009fecdc;
      uVar8 = param_1[1];
      if (uVar7 < uVar8) {
        do {
          uVar8 = uVar8 - uVar7;
          __dest = (long *)(lVar2 + uVar8);
          if ((__dest[1] == 0) && (*__dest == 0)) {
            uVar3 = __src[1] * 0x9e3779b1;
            uVar9 = uVar3 & uVar5;
            if ((uVar3 & uVar5) == 0) {
              uVar9 = 1;
            }
            param_1[1] = uVar8;
            if (uVar9 * uVar7 - uVar6 * uVar7 == 0) {
              if (*__src != 0) {
                *__dest = (long)__src + (*__src - (long)__dest);
              }
              *__src = (long)__dest - (long)__src;
              __src = __dest;
            }
            else {
              plVar1 = (long *)(lVar2 + uVar9 * uVar7);
              do {
                plVar4 = plVar1;
                plVar1 = (long *)((long)plVar4 + *plVar4);
              } while (__src != (long *)((long)plVar4 + *plVar4));
              *plVar4 = (long)__dest - (long)plVar4;
              memcpy(__dest,__src,(ulong)*(uint *)(param_1 + 2) & 0x7fffffff);
              if (*__src != 0) {
                *__dest = (long)__src + (*__dest - (long)__dest);
                *__src = 0;
              }
            }
            goto LAB_009fecdc;
          }
        } while (uVar7 < uVar8);
        param_1[1] = uVar8;
      }
      lVar2 = FUN_009fed18(param_1,*param_1 << 1);
      if (lVar2 == 0) goto LAB_009fecc4;
      if (*param_1 == 0) goto LAB_009febb8;
    }
    __src = (long *)param_1[3];
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x80000000;
LAB_009fecdc:
    __src[1] = param_2;
    if ((int)((ulong)*(uint *)(param_1 + 2) & 0x7fffffff) != 0x10) {
      memset(__src + 2,0,((ulong)*(uint *)(param_1 + 2) & 0x7fffffff) - 0x10);
    }
  }
  return __src;
}

