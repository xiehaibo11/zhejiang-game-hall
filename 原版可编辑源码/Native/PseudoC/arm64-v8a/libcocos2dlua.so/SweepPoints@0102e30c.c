
/* p2t::Sweep::SweepPoints(p2t::SweepContext&) */

void __thiscall p2t::Sweep::SweepPoints(Sweep *this,SweepContext *param_1)

{
  undefined8 *puVar1;
  Point *pPVar2;
  Node *pNVar3;
  Node *pNVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
                    /* catch() { ... } // from try @ 0102e2ac with catch @ 0102e318 */
                    /* catch() { ... } // from try @ 0102e364 with catch @ 0102e334 */
  if (1 < (ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 3)) {
    uVar5 = 1;
    do {
                    /* try { // try from 0102e364 to 0112e3e7 has its CatchHandler @ 0102e334 */
      pPVar2 = (Point *)SweepContext::GetPoint(param_1,uVar5);
      pNVar3 = (Node *)SweepContext::LocateNode(param_1,pPVar2);
      pNVar4 = (Node *)NewFrontTriangle(this,param_1,pPVar2,pNVar3);
      if (*(double *)pPVar2 <= **(double **)pNVar3 + 1e-12) {
        Fill(this,param_1,pNVar3);
      }
                    /* catch() { ... } // from try @ 0102e35c with catch @ 0102e3cc */
      FillAdvancingFront(this,param_1,pNVar4);
      puVar1 = *(undefined8 **)(pPVar2 + 0x18);
      for (puVar6 = *(undefined8 **)(pPVar2 + 0x10); puVar6 != puVar1; puVar6 = puVar6 + 1) {
        EdgeEvent(this,param_1,(Edge *)*puVar6,pNVar4);
      }
      uVar5 = uVar5 + 1;
                    /* try { // try from 0102e35c to 0112e363 has its CatchHandler @ 0102e3cc */
    } while (uVar5 < (ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 3));
  }
  return;
}

