
/* p2t::Sweep::FillAdvancingFront(p2t::SweepContext&, p2t::Node&) */

void __thiscall p2t::Sweep::FillAdvancingFront(Sweep *this,SweepContext *param_1,Node *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  double *pdVar4;
  Node *pNVar5;
  Node *pNVar6;
  double dVar7;
  
  pNVar5 = *(Node **)(param_2 + 0x10);
  pNVar6 = pNVar5 + 0x10;
  lVar2 = *(long *)pNVar6;
  while ((lVar2 != 0 && (uVar1 = LargeHole_DontFill(this,pNVar5), (uVar1 & 1) == 0))) {
    Fill(this,param_1,pNVar5);
    pNVar5 = *(Node **)pNVar6;
    pNVar6 = pNVar5 + 0x10;
    lVar2 = *(long *)pNVar6;
  }
  pNVar5 = *(Node **)(param_2 + 0x18);
  while ((*(long *)(pNVar5 + 0x18) != 0 &&
         (uVar1 = LargeHole_DontFill(this,pNVar5), (uVar1 & 1) == 0))) {
    Fill(this,param_1,pNVar5);
    pNVar5 = *(Node **)(pNVar5 + 0x18);
  }
  if (((*(long *)(param_2 + 0x10) != 0) &&
      (plVar3 = *(long **)(*(long *)(param_2 + 0x10) + 0x10), plVar3 != (long *)0x0)) &&
     (pdVar4 = (double *)*plVar3,
     dVar7 = atan2((*(double **)param_2)[1] - pdVar4[1],**(double **)param_2 - *pdVar4),
     dVar7 < 2.356194490192345)) {
    FillBasin(this,param_1,param_2);
    return;
  }
  return;
}

