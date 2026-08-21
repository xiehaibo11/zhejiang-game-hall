
/* p2t::SweepContext::MapTriangleToNodes(p2t::Triangle&) */

void __thiscall p2t::SweepContext::MapTriangleToNodes(SweepContext *this,Triangle *param_1)

{
  Point *pPVar1;
  long lVar2;
  AdvancingFront *pAVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0102cd60 with catch @ 0102cd84
                        */
    pAVar3 = *(AdvancingFront **)(this + 0x98);
    pPVar1 = (Point *)Triangle::PointCW(param_1,*(Point **)(param_1 + 8));
    lVar2 = AdvancingFront::LocatePoint(pAVar3,pPVar1);
    if (lVar2 != 0) {
      *(Triangle **)(lVar2 + 8) = param_1;
    }
  }
                    /* catch() { ... } // from try @ 0102ce04 with catch @ 0102cda8 */
  if (*(long *)(param_1 + 0x28) == 0) {
    pAVar3 = *(AdvancingFront **)(this + 0x98);
    pPVar1 = (Point *)Triangle::PointCW(param_1,*(Point **)(param_1 + 0x10));
    lVar2 = AdvancingFront::LocatePoint(pAVar3,pPVar1);
    if (lVar2 != 0) {
      *(Triangle **)(lVar2 + 8) = param_1;
    }
  }
                    /* try { // try from 0102cdd8 to 0112cddf has its CatchHandler @ 0102ce40 */
  if (*(long *)(param_1 + 0x30) == 0) {
    pAVar3 = *(AdvancingFront **)(this + 0x98);
    pPVar1 = (Point *)Triangle::PointCW(param_1,*(Point **)(param_1 + 0x18));
    lVar2 = AdvancingFront::LocatePoint(pAVar3,pPVar1);
    if (lVar2 != 0) {
      *(Triangle **)(lVar2 + 8) = param_1;
    }
  }
                    /* try { // try from 0102ce00 to 0112ce03 has its CatchHandler @ 0102ce30 */
                    /* try { // try from 0102ce04 to 0112ce5b has its CatchHandler @ 0102cda8 */
  return;
}

