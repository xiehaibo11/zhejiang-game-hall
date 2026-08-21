
/* ClipperLib::IntersectPoint(ClipperLib::TEdge&, ClipperLib::TEdge&, ClipperLib::IntPoint&, bool)
    */

undefined8 ClipperLib::IntersectPoint(TEdge *param_1,TEdge *param_2,IntPoint *param_3,bool param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
                    /* try { // try from 010311e4 to 0113122b has its CatchHandler @ 010311e4
                       catch() { ... } // from try @ 010311e4 with catch @ 010311e4
                       catch() { ... } // from try @ 010312d4 with catch @ 010311e4 */
  uVar1 = SlopesEqual(param_1,param_2,param_4);
  if ((uVar1 & 1) != 0) {
LAB_01031214:
    if (*(long *)(param_1 + 8) < *(long *)(param_2 + 8)) {
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)param_2;
    }
    else {
                    /* try { // try from 0103122c to 0113123b has its CatchHandler @ 01031348 */
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)param_1;
    }
    *(undefined8 *)(param_3 + 8) = uVar6;
    *(undefined8 *)param_3 = uVar5;
    return 0;
  }
  dVar7 = *(double *)(param_1 + 0x40);
  dVar8 = *(double *)(param_2 + 0x40);
  if (dVar7 == dVar8) goto LAB_01031214;
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar3 = *(long *)param_1;
    *(long *)param_3 = lVar3;
    lVar2 = *(long *)(param_2 + 8);
                    /* try { // try from 010312d4 to 01131383 has its CatchHandler @ 010311e4 */
    if (*(long *)(param_2 + 0x38) != 0) {
      dVar9 = (double)lVar2 - (double)*(long *)param_2 / dVar8;
      dVar10 = (double)lVar3 / dVar8;
LAB_01031328:
      dVar11 = -0.5;
      if (0.0 <= dVar10 + dVar9) {
        dVar11 = 0.5;
      }
                    /* catch() { ... } // from try @ 01031274 with catch @ 01031338 */
      lVar2 = (long)(dVar10 + dVar9 + dVar11);
    }
LAB_0103133c:
    *(long *)(param_3 + 8) = lVar2;
  }
  else {
    if (*(long *)(param_2 + 0x30) == 0) {
      lVar3 = *(long *)param_2;
      *(long *)param_3 = lVar3;
      lVar2 = *(long *)(param_1 + 8);
      if (*(long *)(param_1 + 0x38) != 0) {
        dVar9 = (double)lVar2 - (double)*(long *)param_1 / dVar7;
        dVar10 = (double)lVar3 / dVar7;
        goto LAB_01031328;
      }
      goto LAB_0103133c;
    }
                    /* try { // try from 01031274 to 01131283 has its CatchHandler @ 01031338 */
    dVar9 = (double)*(long *)param_1 - dVar7 * (double)*(long *)(param_1 + 8);
    dVar10 = (double)*(long *)param_2 - dVar8 * (double)*(long *)(param_2 + 8);
    dVar11 = (dVar10 - dVar9) / (dVar7 - dVar8);
    dVar12 = -0.5;
    if (0.0 <= dVar11) {
      dVar12 = 0.5;
    }
    lVar2 = (long)(dVar11 + dVar12);
    *(long *)(param_3 + 8) = lVar2;
    if (ABS(dVar8) <= ABS(dVar7)) {
                    /* catch() { ... } // from try @ 0103122c with catch @ 01031348 */
      dVar9 = dVar10 + dVar8 * dVar11;
    }
    else {
                    /* try { // try from 010312b8 to 011312d3 has its CatchHandler @ 01031350 */
      dVar9 = dVar9 + dVar7 * dVar11;
    }
                    /* catch() { ... } // from try @ 010312b8 with catch @ 01031350 */
    dVar10 = -0.5;
    if (0.0 <= dVar9) {
      dVar10 = 0.5;
    }
    *(long *)param_3 = (long)(dVar9 + dVar10);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_2 + 0x28);
  if ((lVar3 <= lVar2) && (lVar4 <= lVar2)) {
    return 1;
  }
  if (lVar3 <= lVar4) {
    lVar3 = lVar4;
  }
                    /* catch() { ... } // from try @ 010313b4 with catch @ 01031384 */
  *(long *)(param_3 + 8) = lVar3;
  if (ABS(dVar8) <= ABS(dVar7)) {
    if (*(long *)(param_2 + 0x28) == lVar3) {
                    /* try { // try from 010313ac to 011313b3 has its CatchHandler @ 010313f4 */
      lVar2 = *(long *)(param_2 + 0x20);
      goto LAB_010313ec;
    }
    lVar2 = *(long *)param_2;
    dVar7 = dVar8 * (double)(lVar3 - *(long *)(param_2 + 8));
  }
  else {
    if (*(long *)(param_1 + 0x28) == lVar3) {
      lVar2 = *(long *)(param_1 + 0x20);
      goto LAB_010313ec;
    }
                    /* try { // try from 010313b4 to 0113140f has its CatchHandler @ 01031384 */
    lVar2 = *(long *)param_1;
    dVar7 = dVar7 * (double)(lVar3 - *(long *)(param_1 + 8));
  }
  dVar8 = -0.5;
  if (0.0 <= dVar7) {
    dVar8 = 0.5;
  }
  lVar2 = lVar2 + (long)(dVar7 + dVar8);
LAB_010313ec:
  *(long *)param_3 = lVar2;
  return 1;
                    /* catch() { ... } // from try @ 010313ac with catch @ 010313f4 */
}

