
/* ClipperLib::FirstIsBottomPt(ClipperLib::OutPt const*, ClipperLib::OutPt const*) */

bool ClipperLib::FirstIsBottomPt(OutPt *param_1,OutPt *param_2)

{
  long lVar1;
  OutPt *pOVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pOVar2 = param_1;
  while( true ) {
    pOVar2 = *(OutPt **)(pOVar2 + 0x20);
    lVar1 = *(long *)(pOVar2 + 8) - *(long *)(param_1 + 8);
    if (lVar1 != 0) break;
    lVar4 = *(long *)(pOVar2 + 0x10);
    lVar3 = *(long *)(param_1 + 0x10);
    if ((pOVar2 == param_1) || (lVar4 != lVar3)) goto LAB_01031618;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(pOVar2 + 0x10);
LAB_01031618:
  if (lVar4 - lVar3 == 0) {
    dVar5 = -1e+40;
  }
  else {
    dVar5 = (double)lVar1 / (double)(lVar4 - lVar3);
  }
                    /* try { // try from 01031638 to 0113163f has its CatchHandler @ 010316c4 */
  pOVar2 = param_1;
  do {
                    /* try { // try from 01031640 to 01131697 has its CatchHandler @ 01031410 */
    pOVar2 = *(OutPt **)(pOVar2 + 0x18);
    lVar1 = *(long *)(pOVar2 + 8) - *(long *)(param_1 + 8);
  } while ((lVar1 == 0 && pOVar2 != param_1) && *(long *)(pOVar2 + 0x10) == lVar3);
  lVar3 = *(long *)(pOVar2 + 0x10) - lVar3;
  if (lVar3 == 0) {
    dVar6 = -1e+40;
  }
  else {
    dVar6 = (double)lVar1 / (double)lVar3;
  }
  pOVar2 = param_2;
  do {
    pOVar2 = *(OutPt **)(pOVar2 + 0x20);
    lVar1 = *(long *)(pOVar2 + 8) - *(long *)(param_2 + 8);
    if ((lVar1 != 0) || (pOVar2 == param_2)) break;
                    /* try { // try from 01031698 to 011316a7 has its CatchHandler @ 010316c8 */
  } while (*(long *)(pOVar2 + 0x10) == *(long *)(param_2 + 0x10));
  lVar4 = *(long *)(param_2 + 0x10);
                    /* try { // try from 010316a8 to 011316bb has its CatchHandler @ 01031410 */
  lVar3 = *(long *)(pOVar2 + 0x10) - lVar4;
  if (lVar3 == 0) {
    dVar7 = -1e+40;
  }
  else {
                    /* try { // try from 010316bc to 011316c3 has its CatchHandler @ 010316c4 */
    dVar7 = (double)lVar1 / (double)lVar3;
  }
                    /* catch() { ... } // from try @ 01031638 with catch @ 010316c4
                       catch() { ... } // from try @ 010316bc with catch @ 010316c4
                       try { // try from 010316c4 to 01131777 has its CatchHandler @ 01031410 */
                    /* catch() { ... } // from try @ 01031698 with catch @ 010316c8 */
  pOVar2 = param_2;
  do {
                    /* catch() { ... } // from try @ 01031534 with catch @ 010316cc */
    pOVar2 = *(OutPt **)(pOVar2 + 0x18);
    lVar1 = *(long *)(pOVar2 + 8) - *(long *)(param_2 + 8);
  } while ((lVar1 == 0 && pOVar2 != param_2) && *(long *)(pOVar2 + 0x10) == lVar4);
  lVar4 = *(long *)(pOVar2 + 0x10) - lVar4;
  if (lVar4 == 0) {
    dVar8 = -1e+40;
  }
  else {
    dVar8 = (double)lVar1 / (double)lVar4;
  }
                    /* catch() { ... } // from try @ 01031524 with catch @ 01031700 */
  if ((ABS(dVar7) <= ABS(dVar5)) && (ABS(dVar8) <= ABS(dVar5))) {
    return true;
  }
                    /* catch() { ... } // from try @ 010314b4 with catch @ 01031720 */
  if (ABS(dVar6) < ABS(dVar7)) {
    return false;
  }
  return ABS(dVar8) <= ABS(dVar6);
}

