
undefined8 FUN_00a2d8a0(char *param_1,char *param_2)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_00a33710(&DAT_01895dc4,param_2);
    if (iVar2 != 0) {
      return 1;
    }
    sVar3 = strlen(param_2);
    pcVar4 = strchr(param_1,0x3a);
                    /* try { // try from 00a2d904 to 00b2d9ef has its CatchHandler @ 00a2d610 */
    if (pcVar4 == (char *)0x0) {
      uVar6 = strlen(param_1);
    }
    else {
      uVar6 = (long)pcVar4 - (long)param_1;
    }
    if (sVar3 != 0) {
      uVar5 = 0;
      if (sVar3 != 0) goto LAB_00a2d9a4;
LAB_00a2d9bc:
      uVar1 = uVar5;
      if (uVar5 != sVar3) {
        while ((uVar1 < sVar3 &&
               ((0x3f < (ulong)(byte)param_2[uVar1] ||
                ((1L << ((ulong)(byte)param_2[uVar1] & 0x3f) & 0x100100000001U) == 0))))) {
                    /* try { // try from 00a2d9f0 to 00b2da43 has its CatchHandler @ 00a2d9f0
                       catch() { ... } // from try @ 00a2d9f0 with catch @ 00a2d9f0
                       catch() { ... } // from try @ 00a2db50 with catch @ 00a2d9f0 */
          uVar1 = uVar1 + 1;
        }
        if (param_2[uVar5] == '.') {
          uVar5 = uVar5 + 1;
        }
        uVar7 = uVar1 - uVar5;
        if (uVar7 <= uVar6) {
          iVar2 = FUN_00a33838(param_2 + uVar5,param_1 + (uVar6 - uVar7),uVar7);
          if (iVar2 != 0) {
            if (uVar7 == uVar6) {
              return 1;
            }
                    /* catch() { ... } // from try @ 00a2d698 with catch @ 00a2d980 */
                    /* catch() { ... } // from try @ 00a2d68c with catch @ 00a2d984 */
            if ((param_1 + (uVar6 - uVar7))[-1] == '.') {
              return 1;
            }
          }
        }
                    /* catch() { ... } // from try @ 00a2d66c with catch @ 00a2d988 */
        uVar5 = uVar1 + 1;
        if (sVar3 <= uVar5) {
          return 0;
        }
        for (; uVar5 < sVar3; uVar5 = uVar5 + 1) {
LAB_00a2d9a4:
          if ((0x3f < (ulong)(byte)param_2[uVar5]) ||
             ((1L << ((ulong)(byte)param_2[uVar5] & 0x3f) & 0x100100000001U) == 0)) break;
                    /* catch() { ... } // from try @ 00a2d6a4 with catch @ 00a2d998 */
        }
        goto LAB_00a2d9bc;
      }
    }
  }
  return 0;
}

