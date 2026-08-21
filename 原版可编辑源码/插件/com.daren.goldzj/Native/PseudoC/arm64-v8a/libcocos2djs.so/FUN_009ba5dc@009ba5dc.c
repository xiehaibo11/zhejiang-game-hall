
long FUN_009ba5dc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = param_2[2];
  param_2[1] = lVar3;
  plVar2 = (long *)FUN_009ba6f0(param_1,lVar3,param_2 + 2);
  uVar4 = param_1[1];
  uVar5 = param_2[1];
  uVar6 = uVar4 - 1;
  uVar1 = uVar6 & uVar4;
  if (uVar1 == 0) {
    uVar5 = uVar6 & uVar5;
  }
  else if (uVar4 <= uVar5) {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar5 / uVar4;
    }
    uVar5 = uVar5 - uVar7 * uVar4;
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
    *(long **)(*param_1 + uVar5 * 8) = plVar2;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if (uVar1 == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar5 / uVar4;
        }
        uVar5 = uVar5 - uVar1 * uVar4;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
    if (*param_2 != 0) {
                    /* try { // try from 009ba644 to 00aba727 has its CatchHandler @ 009ba4b4 */
      uVar7 = *(ulong *)(*param_2 + 8);
      if (uVar1 == 0) {
        uVar7 = uVar7 & uVar6;
      }
      else if (uVar4 <= uVar7) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar7 / uVar4;
        }
        uVar7 = uVar7 - uVar1 * uVar4;
      }
      if (uVar7 != uVar5) {
                    /* catch() { ... } // from try @ 009ba534 with catch @ 009ba6b8 */
                    /* catch() { ... } // from try @ 009ba528 with catch @ 009ba6bc */
        *(long **)(*param_1 + uVar7 * 8) = param_2;
                    /* catch() { ... } // from try @ 009ba508 with catch @ 009ba6c0 */
      }
    }
  }
                    /* catch() { ... } // from try @ 009ba540 with catch @ 009ba6d0 */
  param_1[3] = param_1[3] + 1;
  return (long)param_2;
}

