
/* p2t::Sweep::FillLeftBelowEdgeEvent(p2t::SweepContext&, p2t::Edge*, p2t::Node&) */

void __thiscall
p2t::Sweep::FillLeftBelowEdgeEvent(Sweep *this,SweepContext *param_1,Edge *param_2,Node *param_3)

{
  Node *pNVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  Node *pNVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
                    /* catch() { ... } // from try @ 010300cc with catch @ 0103009c */
  pdVar2 = *(double **)param_3;
  pdVar3 = *(double **)param_2;
  dVar12 = *pdVar2;
  dVar7 = *pdVar3;
  if (dVar7 < dVar12) {
    do {
      pNVar1 = *(Node **)(param_3 + 0x18);
      pNVar5 = *(Node **)(pNVar1 + 0x18);
      pdVar4 = *(double **)pNVar5;
      dVar9 = **(double **)pNVar1;
      dVar11 = (*(double **)pNVar1)[1];
      dVar8 = *pdVar4;
      dVar10 = pdVar4[1];
                    /* catch() { ... } // from try @ 010300c4 with catch @ 01030134 */
      dVar12 = (dVar12 - dVar8) * (dVar11 - dVar10) - (pdVar2[1] - dVar10) * (dVar9 - dVar8);
      if ((dVar12 <= 0.0) && (1e-12 <= dVar12 || dVar12 <= -1e-12)) {
        FillLeftConcaveEdgeEvent(this,param_1,param_2,param_3);
        return;
      }
      while( true ) {
        dVar12 = dVar8;
        pdVar6 = *(double **)*(Node **)(pNVar5 + 0x18);
        dVar8 = *pdVar6;
        dVar13 = pdVar6[1];
        dVar9 = (dVar9 - dVar8) * (dVar10 - dVar13) - (dVar12 - dVar8) * (dVar11 - dVar13);
        if ((dVar9 <= 0.0) && (1e-12 <= dVar9 || dVar9 <= -1e-12)) break;
        dVar9 = (**(double **)(param_2 + 8) - dVar7) * (dVar10 - pdVar3[1]) -
                (dVar12 - dVar7) * ((*(double **)(param_2 + 8))[1] - pdVar3[1]);
        if ((0.0 < dVar9) || (dVar9 < 1e-12 && -1e-12 < dVar9)) goto LAB_010300fc;
        dVar11 = pdVar4[1];
        pNVar1 = pNVar5;
        pdVar4 = pdVar6;
        pNVar5 = *(Node **)(pNVar5 + 0x18);
        dVar9 = dVar12;
        dVar10 = dVar13;
      }
      FillLeftConcaveEdgeEvent(this,param_1,param_2,pNVar1);
      pdVar2 = *(double **)param_3;
      pdVar3 = *(double **)param_2;
LAB_010300fc:
      dVar12 = *pdVar2;
      dVar7 = *pdVar3;
    } while (dVar7 < dVar12);
  }
  return;
}

