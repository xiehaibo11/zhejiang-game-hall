
/* p2t::Sweep::IsEdgeSideOfTriangle(p2t::Triangle&, p2t::Point&, p2t::Point&) */

undefined8 __thiscall
p2t::Sweep::IsEdgeSideOfTriangle(Sweep *this,Triangle *param_1,Point *param_2,Point *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Triangle::EdgeIndex(param_1,param_2,param_3);
  if (iVar1 == -1) {
                    /* try { // try from 0102e95c to 0112e963 has its CatchHandler @ 0102e9c8 */
    uVar2 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 0102e964 with catch @ 0102e938 */
    Triangle::MarkConstrainedEdge(param_1,iVar1);
    if (*(Triangle **)(param_1 + (long)iVar1 * 8 + 0x20) != (Triangle *)0x0) {
      Triangle::MarkConstrainedEdge
                (*(Triangle **)(param_1 + (long)iVar1 * 8 + 0x20),param_2,param_3);
    }
    uVar2 = 1;
  }
                    /* try { // try from 0102e964 to 0112e9e3 has its CatchHandler @ 0102e938 */
  return uVar2;
}

