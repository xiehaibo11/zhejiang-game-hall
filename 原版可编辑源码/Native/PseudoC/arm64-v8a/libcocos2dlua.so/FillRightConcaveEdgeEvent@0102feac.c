
/* p2t::Sweep::FillRightConcaveEdgeEvent(p2t::SweepContext&, p2t::Edge*, p2t::Node&) */

void __thiscall
p2t::Sweep::FillRightConcaveEdgeEvent(Sweep *this,SweepContext *param_1,Edge *param_2,Node *param_3)

{
  Node *pNVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  pNVar1 = *(Node **)(param_3 + 0x10);
  while( true ) {
    Fill(this,param_1,pNVar1);
    pNVar1 = *(Node **)(param_3 + 0x10);
    pdVar3 = *(double **)param_2;
    pdVar2 = *(double **)pNVar1;
    if (pdVar2 == pdVar3) {
      return;
    }
    dVar4 = (**(double **)(param_2 + 8) - *pdVar3) * (pdVar2[1] - pdVar3[1]) -
            ((*(double **)(param_2 + 8))[1] - pdVar3[1]) * (*pdVar2 - *pdVar3);
    if (dVar4 <= 0.0) {
      return;
    }
    if (dVar4 < 1e-12 && -1e-12 < dVar4) {
      return;
    }
    dVar5 = *(double *)**(long **)(pNVar1 + 0x10);
    dVar4 = ((double *)**(long **)(pNVar1 + 0x10))[1];
    dVar4 = (**(double **)param_3 - dVar5) * (pdVar2[1] - dVar4) -
            (*pdVar2 - dVar5) * ((*(double **)param_3)[1] - dVar4);
    if (dVar4 <= 0.0) break;
    if (dVar4 < 1e-12 && -1e-12 < dVar4) {
      return;
    }
  }
  return;
}

