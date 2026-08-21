
bool FUN_009c8eb0(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar8 = *param_1;
    if (*(int *)(param_2[-1] + 0x218) < *(int *)(lVar8 + 0x218)) {
      *param_1 = param_2[-1];
                    /* catch() { ... } // from try @ 009c8d3c with catch @ 009c8f14 */
      param_2[-1] = lVar8;
                    /* catch() { ... } // from try @ 009c8d30 with catch @ 009c8f18 */
    }
    break;
  case 3:
                    /* catch() { ... } // from try @ 009c8d10 with catch @ 009c8f1c */
    lVar8 = *param_1;
    lVar7 = param_1[1];
    lVar4 = param_2[-1];
    iVar9 = *(int *)(lVar7 + 0x218);
    iVar1 = *(int *)(lVar8 + 0x218);
                    /* catch() { ... } // from try @ 009c8d48 with catch @ 009c8f2c */
    if (iVar9 < iVar1) {
      if (*(int *)(lVar4 + 0x218) < iVar9) {
        *param_1 = lVar4;
      }
      else {
        *param_1 = lVar7;
        param_1[1] = lVar8;
        if (iVar1 <= *(int *)(param_2[-1] + 0x218)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = lVar8;
    }
    else if (*(int *)(lVar4 + 0x218) < iVar9) {
      param_1[1] = lVar4;
      param_2[-1] = lVar7;
      lVar8 = *param_1;
      if (*(int *)(param_1[1] + 0x218) < *(int *)(lVar8 + 0x218)) {
        *param_1 = param_1[1];
        param_1[1] = lVar8;
      }
    }
    break;
  case 4:
                    /* try { // try from 009c8f84 to 00ac8fd7 has its CatchHandler @ 009c8f84
                       catch() { ... } // from try @ 009c8f84 with catch @ 009c8f84
                       catch() { ... } // from try @ 009c9184 with catch @ 009c8f84 */
    FUN_009c8d64(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    plVar3 = param_1 + 2;
    plVar5 = param_1 + 3;
    FUN_009c8d64(param_1,param_1 + 1,plVar3,plVar5);
    lVar8 = param_1[3];
    if (*(int *)(param_2[-1] + 0x218) < *(int *)(lVar8 + 0x218)) {
      *plVar5 = param_2[-1];
      param_2[-1] = lVar8;
      lVar8 = *plVar5;
      lVar7 = *plVar3;
      iVar9 = *(int *)(lVar8 + 0x218);
                    /* try { // try from 009c8fd8 to 00ac8fef has its CatchHandler @ 009c91f0 */
      if (iVar9 < *(int *)(lVar7 + 0x218)) {
        *plVar3 = lVar8;
        *plVar5 = lVar7;
        lVar7 = param_1[1];
                    /* try { // try from 009c8ff8 to 00ac9003 has its CatchHandler @ 009c91d4 */
        if (iVar9 < *(int *)(lVar7 + 0x218)) {
          lVar4 = *param_1;
          param_1[1] = lVar8;
          param_1[2] = lVar7;
                    /* try { // try from 009c9004 to 00ac900f has its CatchHandler @ 009c91d0 */
          if (iVar9 < *(int *)(lVar4 + 0x218)) {
                    /* try { // try from 009c9010 to 00ac903b has its CatchHandler @ 009c9200 */
            *param_1 = lVar8;
            param_1[1] = lVar4;
          }
        }
      }
    }
    break;
  default:
    lVar8 = *param_1;
    lVar7 = param_1[1];
    lVar6 = param_1[2];
    iVar9 = *(int *)(lVar7 + 0x218);
    iVar1 = *(int *)(lVar8 + 0x218);
    iVar2 = *(int *)(lVar6 + 0x218);
    lVar4 = lVar6;
    if (iVar9 < iVar1) {
      if (iVar2 < iVar9) {
        *param_1 = lVar6;
      }
      else {
        *param_1 = lVar7;
        param_1[1] = lVar8;
                    /* try { // try from 009c9088 to 00ac9107 has its CatchHandler @ 009c9200 */
        if (iVar1 <= iVar2) goto LAB_009c90a0;
        param_1[1] = lVar6;
      }
      param_1[2] = lVar8;
      lVar4 = lVar8;
    }
    else if (iVar2 < iVar9) {
                    /* try { // try from 009c9050 to 00ac906b has its CatchHandler @ 009c91d8 */
      param_1[1] = lVar6;
      param_1[2] = lVar7;
      lVar4 = lVar7;
      if (iVar2 < iVar1) {
        *param_1 = lVar6;
        param_1[1] = lVar8;
      }
    }
LAB_009c90a0:
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      plVar3 = param_1 + 3;
      do {
        lVar6 = *plVar3;
        iVar1 = *(int *)(lVar6 + 0x218);
        lVar7 = lVar8;
        if (iVar1 < *(int *)(lVar4 + 0x218)) {
          do {
            lVar4 = lVar7;
            *(undefined8 *)((long)param_1 + lVar4 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar4 + 0x10);
            plVar5 = param_1;
            if (lVar4 == -0x10) goto LAB_009c9114;
            lVar7 = lVar4 + -8;
          } while (iVar1 < *(int *)(*(long *)((long)param_1 + lVar4 + 8) + 0x218));
          plVar5 = (long *)((long)param_1 + lVar4 + 0x10);
LAB_009c9114:
          iVar9 = iVar9 + 1;
          *plVar5 = lVar6;
          if (iVar9 == 8) {
            return plVar3 + 1 == param_2;
          }
        }
        if (plVar3 + 1 == param_2) {
          return true;
        }
        lVar4 = *plVar3;
        lVar8 = lVar8 + 8;
        plVar3 = plVar3 + 1;
      } while( true );
    }
  }
                    /* try { // try from 009c9140 to 00ac9183 has its CatchHandler @ 009c91d8 */
  return true;
}

