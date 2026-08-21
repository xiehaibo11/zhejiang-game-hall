
undefined8 FUN_010af774(uint *param_1,int param_2,code *param_3,ulong param_4,ulong param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x12);
  plVar7 = *(long **)(param_1 + 0xe);
  lVar2 = plVar9[(long)param_2 * 2 + 1];
  lVar8 = (long)param_2;
  if ((lVar2 <= (long)param_5) && ((long)param_4 <= plVar9[1])) {
    lVar3 = (long)(int)param_1[1];
                    /* catch() { ... } // from try @ 010af690 with catch @ 010af7c8 */
    uVar5 = plVar9[1] & -lVar3;
    if ((long)uVar5 <= (long)param_5) {
      param_5 = uVar5;
    }
    if (lVar2 < (long)param_4) {
                    /* try { // try from 010af7e4 to 011af843 has its CatchHandler @ 010af7e4
                       catch() { ... } // from try @ 010af7e4 with catch @ 010af7e4
                       catch() { ... } // from try @ 010af850 with catch @ 010af7e4 */
      cVar1 = *(char *)((long)param_1 + 0x8a);
      uVar5 = param_4;
    }
    else {
      param_4 = (lVar2 + lVar3) - 1U & -lVar3;
      if (((uint)lVar2 & param_1[1] + 0xffff & 0xffff) == 0) {
        if (*(char *)((long)param_1 + 0x8b) != '\0') {
          plVar7 = plVar7 + -1;
          *(undefined1 *)((long)param_1 + 0x8b) = 0;
        }
        *plVar7 = plVar9[lVar8 * 2];
        cVar1 = *(char *)((long)param_1 + 0x8a);
        plVar7 = plVar7 + 1;
        uVar5 = param_4 + lVar3;
      }
      else {
        cVar1 = *(char *)((long)param_1 + 0x8a);
        uVar5 = param_4;
      }
    }
    if (cVar1 != '\0') {
      *(long *)(*(long *)(param_1 + 0x24) + 0x28) = (long)param_4 >> ((ulong)*param_1 & 0x3f);
      *(undefined1 *)((long)param_1 + 0x8a) = 0;
    }
    if ((long)uVar5 <= (long)param_5) {
      plVar6 = plVar9;
      if (*(long **)(param_1 + 0xc) <=
          plVar7 + ((long)(param_5 - uVar5) >> ((ulong)*param_1 & 0x3f)) + 1) {
        *(long **)(param_1 + 0xe) = plVar7;
        param_1[0x10] = 0x62;
        return 1;
      }
      do {
        while( true ) {
          *(undefined1 *)((long)param_1 + 0x8b) = 0;
          uVar4 = plVar6[1];
          if ((long)uVar5 < (long)uVar4) break;
          if (uVar4 == uVar5) {
            *(undefined1 *)((long)param_1 + 0x8b) = 1;
            lVar3 = *plVar6;
LAB_010af8a0:
            *plVar7 = lVar3;
            uVar5 = uVar5 + (long)(int)param_1[1];
            plVar7 = plVar7 + 1;
          }
          if (((long)param_5 < (long)uVar5) || (plVar6 = plVar6 + lVar8 * -2, plVar6 < plVar9))
          goto LAB_010af8c0;
        }
                    /* try { // try from 010af844 to 011af84f has its CatchHandler @ 010af864 */
        lVar2 = uVar4 - plVar6[lVar8 * 2 + 1];
                    /* try { // try from 010af850 to 011af87f has its CatchHandler @ 010af7e4 */
        if (lVar2 < (int)param_1[4]) {
          lVar3 = 0;
          if (lVar2 != 0) {
            lVar3 = (long)((*plVar6 - plVar6[lVar8 * 2]) * (uVar5 - plVar6[lVar8 * 2 + 1])) / lVar2;
          }
          lVar3 = lVar3 + plVar6[lVar8 * 2];
          goto LAB_010af8a0;
        }
        (*param_3)(plVar6);
        plVar6 = plVar6 + lVar8 * 2;
                    /* catch() { ... } // from try @ 010af844 with catch @ 010af864 */
      } while (plVar9 <= plVar6);
    }
  }
LAB_010af8c0:
  *(long **)(param_1 + 0xe) = plVar7;
  *(long *)(param_1 + 0x12) = *(long *)(param_1 + 0x12) + lVar8 * -0x10;
  return 0;
}

