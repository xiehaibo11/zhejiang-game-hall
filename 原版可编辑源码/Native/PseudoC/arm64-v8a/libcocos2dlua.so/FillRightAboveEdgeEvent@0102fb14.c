
/* p2t::Sweep::FillRightAboveEdgeEvent(p2t::SweepContext&, p2t::Edge*, p2t::Node*) */

void __thiscall
p2t::Sweep::FillRightAboveEdgeEvent(Sweep *this,SweepContext *param_1,Edge *param_2,Node *param_3)

{
  double *pdVar1;
  Node *pNVar2;
  Node *pNVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  
  pNVar2 = *(Node **)(param_3 + 0x10);
  pdVar1 = *(double **)param_2;
  pdVar4 = *(double **)pNVar2;
  dVar6 = *pdVar1;
  dVar5 = *pdVar4;
  if (dVar5 < dVar6) {
    do {
      dVar5 = (**(double **)(param_2 + 8) - dVar6) * (pdVar4[1] - pdVar1[1]) -
              (dVar5 - dVar6) * ((*(double **)(param_2 + 8))[1] - pdVar1[1]);
      pNVar3 = pNVar2;
      if ((0.0 < dVar5) && (1e-12 <= dVar5 || dVar5 <= -1e-12)) {
        FillRightBelowEdgeEvent(this,param_1,param_2,param_3);
        pdVar1 = *(double **)param_2;
        pNVar3 = param_3;
      }
      pNVar2 = *(Node **)(pNVar3 + 0x10);
      dVar6 = *pdVar1;
      pdVar4 = *(double **)pNVar2;
      dVar5 = *pdVar4;
      param_3 = pNVar3;
    } while (dVar5 < dVar6);
  }
  return;
}

