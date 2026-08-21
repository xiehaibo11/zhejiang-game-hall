
/* p2t::Sweep::Triangulate(p2t::SweepContext&) */

void __thiscall p2t::Sweep::Triangulate(Sweep *this,SweepContext *param_1)

{
  Point *pPVar1;
  ulong uVar2;
  Triangle *this_00;
  
                    /* catch() { ... } // from try @ 0102e2b4 with catch @ 0102e288 */
  SweepContext::InitTriangulation(param_1);
                    /* try { // try from 0102e2ac to 0112e2b3 has its CatchHandler @ 0102e318 */
  SweepContext::CreateAdvancingFront((vector *)param_1);
                    /* try { // try from 0102e2b4 to 0112e333 has its CatchHandler @ 0102e288 */
  SweepPoints(this,param_1);
  pPVar1 = (Point *)**(undefined8 **)(**(long **)(param_1 + 0x98) + 0x10);
  this_00 = (Triangle *)(*(undefined8 **)(**(long **)(param_1 + 0x98) + 0x10))[1];
  while (uVar2 = Triangle::GetConstrainedEdgeCW(this_00,pPVar1), (uVar2 & 1) == 0) {
    this_00 = (Triangle *)Triangle::NeighborCCW(this_00,pPVar1);
  }
  SweepContext::MeshClean(param_1,this_00);
  return;
}

