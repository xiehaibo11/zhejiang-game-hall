
/* p2t::Sweep::FillLeftConvexEdgeEvent(p2t::SweepContext&, p2t::Edge*, p2t::Node&) */

void __thiscall
p2t::Sweep::FillLeftConvexEdgeEvent(Sweep *this,SweepContext *param_1,Edge *param_2,Node *param_3)

{
  Node *pNVar1;
  Node *pNVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
                    /* try { // try from 01030354 to 0113035b has its CatchHandler @ 010303c0 */
  pNVar1 = *(Node **)(param_3 + 0x18);
                    /* try { // try from 0103035c to 011303db has its CatchHandler @ 01030330 */
  pdVar4 = *(double **)*(Node **)(pNVar1 + 0x18);
  pNVar2 = *(Node **)(pNVar1 + 0x18);
  pdVar3 = *(double **)pNVar1;
  dVar10 = **(double **)pNVar1;
  dVar6 = *pdVar4;
  dVar8 = pdVar4[1];
  do {
    pdVar5 = *(double **)*(Node **)(pNVar2 + 0x18);
    dVar7 = *pdVar5;
    dVar9 = pdVar5[1];
    dVar10 = (dVar10 - dVar7) * (dVar8 - dVar9) - (pdVar3[1] - dVar9) * (dVar6 - dVar7);
                    /* catch() { ... } // from try @ 01030354 with catch @ 010303c0 */
    if ((dVar10 <= 0.0) && (1e-12 <= dVar10 || dVar10 <= -1e-12)) {
      FillLeftConcaveEdgeEvent(this,param_1,param_2,pNVar1);
      return;
    }
                    /* catch() { ... } // from try @ 0103040c with catch @ 010303dc */
    dVar11 = **(double **)param_2;
    dVar10 = (*(double **)param_2)[1];
    dVar11 = (**(double **)(param_2 + 8) - dVar11) * (dVar8 - dVar10) -
             (dVar6 - dVar11) * ((*(double **)(param_2 + 8))[1] - dVar10);
                    /* try { // try from 01030404 to 0113040b has its CatchHandler @ 01030474 */
                    /* try { // try from 0103040c to 0113048f has its CatchHandler @ 010303dc */
  } while ((dVar11 <= 0.0) &&
          (pNVar1 = pNVar2, pNVar2 = *(Node **)(pNVar2 + 0x18), pdVar3 = pdVar4, pdVar4 = pdVar5,
          dVar10 = dVar6, dVar6 = dVar7, dVar8 = dVar9, 1e-12 <= dVar11 || dVar11 <= -1e-12));
  return;
}

