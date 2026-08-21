
/* p2t::Sweep::FillRightConvexEdgeEvent(p2t::SweepContext&, p2t::Edge*, p2t::Node&) */

void __thiscall
p2t::Sweep::FillRightConvexEdgeEvent(Sweep *this,SweepContext *param_1,Edge *param_2,Node *param_3)

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
  
  pNVar1 = *(Node **)(param_3 + 0x10);
  pdVar4 = *(double **)*(Node **)(pNVar1 + 0x10);
  pNVar2 = *(Node **)(pNVar1 + 0x10);
  pdVar3 = *(double **)pNVar1;
  dVar10 = **(double **)pNVar1;
  dVar6 = *pdVar4;
  dVar8 = pdVar4[1];
  do {
                    /* catch() { ... } // from try @ 0103001c with catch @ 0102fff0 */
    pdVar5 = *(double **)*(Node **)(pNVar2 + 0x10);
    dVar7 = *pdVar5;
    dVar9 = pdVar5[1];
                    /* try { // try from 01030014 to 0113001b has its CatchHandler @ 01030080 */
    dVar10 = (dVar10 - dVar7) * (dVar8 - dVar9) - (pdVar3[1] - dVar9) * (dVar6 - dVar7);
                    /* try { // try from 0103001c to 0113009b has its CatchHandler @ 0102fff0 */
    if ((0.0 < dVar10) && (1e-12 <= dVar10 || dVar10 <= -1e-12)) {
      FillRightConcaveEdgeEvent(this,param_1,param_2,pNVar1);
      return;
    }
    dVar11 = **(double **)param_2;
    dVar10 = (*(double **)param_2)[1];
    dVar11 = (**(double **)(param_2 + 8) - dVar11) * (dVar8 - dVar10) -
             (dVar6 - dVar11) * ((*(double **)(param_2 + 8))[1] - dVar10);
  } while ((0.0 < dVar11) &&
          (pNVar1 = pNVar2, pNVar2 = *(Node **)(pNVar2 + 0x10), pdVar3 = pdVar4, pdVar4 = pdVar5,
          dVar10 = dVar6, dVar6 = dVar7, dVar8 = dVar9, 1e-12 <= dVar11 || dVar11 <= -1e-12
                    /* catch() { ... } // from try @ 01030014 with catch @ 01030080 */));
  return;
}

