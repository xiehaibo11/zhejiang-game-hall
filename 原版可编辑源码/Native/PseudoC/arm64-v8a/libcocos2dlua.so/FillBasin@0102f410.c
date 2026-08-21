
/* p2t::Sweep::FillBasin(p2t::SweepContext&, p2t::Node&) */

void __thiscall p2t::Sweep::FillBasin(Sweep *this,SweepContext *param_1,Node *param_2)

{
  double dVar1;
  Node *pNVar2;
  double *pdVar3;
  Node *pNVar4;
  Node *pNVar5;
  double *pdVar6;
  long *plVar7;
  Node *pNVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  pNVar2 = *(Node **)(param_2 + 0x10);
  pNVar4 = *(Node **)(pNVar2 + 0x10);
                    /* catch() { ... } // from try @ 0102f3b0 with catch @ 0102f420 */
  dVar9 = **(double **)pNVar4;
  dVar1 = (*(double **)pNVar4)[1];
  auVar10._0_8_ = **(double **)pNVar2 - dVar9;
  auVar10._8_8_ = (*(double **)pNVar2)[1] - dVar1;
  auVar10 = NEON_ext(auVar10,auVar10,8,1);
  dVar9 = (**(double **)param_2 - dVar9) * auVar10._0_8_ -
          ((*(double **)param_2)[1] - dVar1) * auVar10._8_8_;
  if ((dVar9 <= 0.0) || (dVar9 < 1e-12 && -1e-12 < dVar9)) {
    *(Node **)(param_1 + 0x18) = pNVar2;
  }
  else {
    *(Node **)(param_1 + 0x18) = pNVar4;
    pNVar2 = pNVar4;
  }
  *(Node **)(param_1 + 0x20) = pNVar2;
  pNVar5 = pNVar2 + 0x10;
  plVar7 = *(long **)pNVar5;
  pNVar4 = pNVar2;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(double *)(*(long *)pNVar4 + 8) < *(double *)(*plVar7 + 8)) break;
      pNVar4 = *(Node **)pNVar5;
      *(Node **)(param_1 + 0x20) = pNVar4;
      pNVar5 = pNVar4 + 0x10;
      plVar7 = *(long **)pNVar5;
    } while (plVar7 != (long *)0x0);
    pNVar5 = pNVar4;
    if (pNVar2 != pNVar4) {
      do {
        pNVar8 = pNVar5;
        pNVar5 = *(Node **)(pNVar8 + 0x10);
        if (pNVar5 == (Node *)0x0) break;
      } while (*(double *)(*(long *)pNVar8 + 8) < *(double *)(*(long *)pNVar5 + 8));
      *(Node **)(param_1 + 0x28) = pNVar8;
      if (pNVar8 != pNVar4) {
        pdVar6 = *(double **)pNVar8;
        pdVar3 = *(double **)pNVar2;
        *(double *)(param_1 + 0x30) = *pdVar6 - *pdVar3;
        param_1[0x38] = (SweepContext)(pdVar6[1] < pdVar3[1]);
        FillBasinReq(this,param_1,pNVar4);
        return;
      }
    }
  }
  return;
}

