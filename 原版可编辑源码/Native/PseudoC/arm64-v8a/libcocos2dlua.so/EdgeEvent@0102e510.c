
/* p2t::Sweep::EdgeEvent(p2t::SweepContext&, p2t::Edge*, p2t::Node*) */

void __thiscall p2t::Sweep::EdgeEvent(Sweep *this,SweepContext *param_1,Edge *param_2,Node *param_3)

{
  Point *pPVar1;
  Point *pPVar2;
  int iVar3;
  Triangle *this_00;
  
  *(Edge **)(param_1 + 0x40) = param_2;
  pPVar1 = *(Point **)param_2;
  pPVar2 = *(Point **)(param_2 + 8);
                    /* try { // try from 0102e540 to 0112e56f has its CatchHandler @ 0102e540
                       catch() { ... } // from try @ 0102e540 with catch @ 0102e540
                       catch() { ... } // from try @ 0102e580 with catch @ 0102e540
                       catch() { ... } // from try @ 0102e61c with catch @ 0102e540 */
  param_1[0x48] = (SweepContext)(*(double *)pPVar2 < *(double *)pPVar1);
  this_00 = *(Triangle **)(param_3 + 8);
  iVar3 = Triangle::EdgeIndex(this_00,pPVar1,pPVar2);
  if (iVar3 == -1) {
    FillEdgeEvent(this,param_1,param_2,param_3);
                    /* try { // try from 0102e5e8 to 0112e5ef has its CatchHandler @ 0102e640 */
    EdgeEvent(this,param_1,*(Point **)param_2,*(Point **)(param_2 + 8),*(Triangle **)(param_3 + 8),
              *(Point **)(param_2 + 8));
    return;
  }
                    /* try { // try from 0102e570 to 0112e57f has its CatchHandler @ 0102e664 */
  Triangle::MarkConstrainedEdge(this_00,iVar3);
                    /* try { // try from 0102e580 to 0112e5e7 has its CatchHandler @ 0102e540 */
  if (*(Triangle **)(this_00 + (long)iVar3 * 8 + 0x20) != (Triangle *)0x0) {
    Triangle::MarkConstrainedEdge(*(Triangle **)(this_00 + (long)iVar3 * 8 + 0x20),pPVar1,pPVar2);
    return;
  }
                    /* try { // try from 0102e5f0 to 0112e61b has its CatchHandler @ 0102e660 */
  return;
}

