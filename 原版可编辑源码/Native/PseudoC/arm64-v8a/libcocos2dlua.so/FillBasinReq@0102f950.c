
/* p2t::Sweep::FillBasinReq(p2t::SweepContext&, p2t::Node*) */

void __thiscall p2t::Sweep::FillBasinReq(Sweep *this,SweepContext *param_1,Node *param_2)

{
  SweepContext *pSVar1;
  Node *pNVar2;
  Node *pNVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  do {
    while( true ) {
                    /* try { // try from 0102f9a8 to 0112f9af has its CatchHandler @ 0102fa14 */
      pSVar1 = param_1 + 0x28;
                    /* try { // try from 0102f9b0 to 0112fa2f has its CatchHandler @ 0102f984 */
      if (param_1[0x38] != (SweepContext)0x0) {
        pSVar1 = param_1 + 0x18;
      }
      if (*(double *)(**(long **)pSVar1 + 8) - *(double *)(*(long *)param_2 + 8) <
          *(double *)(param_1 + 0x30)) {
        return;
      }
      Fill(this,param_1,param_2);
      pNVar2 = *(Node **)(param_2 + 0x10);
      pNVar3 = *(Node **)(param_2 + 0x18);
      if (pNVar3 == *(Node **)(param_1 + 0x18)) break;
      if (pNVar2 == *(Node **)(param_1 + 0x28)) {
                    /* catch() { ... } // from try @ 0102f9a8 with catch @ 0102fa14 */
        dVar5 = *(double *)**(undefined8 **)(pNVar3 + 0x18);
        dVar4 = ((double *)**(undefined8 **)(pNVar3 + 0x18))[1];
        auVar6._0_8_ = **(double **)pNVar3 - dVar5;
        auVar6._8_8_ = (*(double **)pNVar3)[1] - dVar4;
        auVar7 = NEON_ext(auVar6,auVar6,8,1);
                    /* catch() { ... } // from try @ 0102fa60 with catch @ 0102fa30 */
        dVar5 = (**(double **)param_2 - dVar5) * auVar7._0_8_ -
                ((*(double **)param_2)[1] - dVar4) * auVar7._8_8_;
        param_2 = pNVar3;
                    /* try { // try from 0102fa58 to 0112fa5f has its CatchHandler @ 0102fac8 */
        if ((0.0 < dVar5) && (1e-12 <= dVar5 || dVar5 <= -1e-12)) {
          return;
        }
      }
      else {
                    /* catch() { ... } // from try @ 0102f9b0 with catch @ 0102f984 */
        param_2 = pNVar3;
        if (*(double *)(*(long *)pNVar2 + 8) <= *(double *)(*(long *)pNVar3 + 8)) {
          param_2 = pNVar2;
        }
      }
    }
                    /* try { // try from 0102fa60 to 0112fae3 has its CatchHandler @ 0102fa30 */
    if (pNVar2 == *(Node **)(param_1 + 0x28)) {
      return;
    }
    dVar5 = *(double *)**(undefined8 **)(pNVar2 + 0x10);
    dVar4 = ((double *)**(undefined8 **)(pNVar2 + 0x10))[1];
    auVar7._0_8_ = **(double **)pNVar2 - dVar5;
    auVar7._8_8_ = (*(double **)pNVar2)[1] - dVar4;
    auVar7 = NEON_ext(auVar7,auVar7,8,1);
    dVar5 = (**(double **)param_2 - dVar5) * auVar7._0_8_ -
            ((*(double **)param_2)[1] - dVar4) * auVar7._8_8_;
    param_2 = pNVar2;
  } while ((0.0 < dVar5) || (dVar5 < 1e-12 && -1e-12 < dVar5));
                    /* catch() { ... } // from try @ 0102fa58 with catch @ 0102fac8 */
  return;
}

