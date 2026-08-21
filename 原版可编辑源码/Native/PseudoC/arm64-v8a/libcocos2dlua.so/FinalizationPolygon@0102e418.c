
/* p2t::Sweep::FinalizationPolygon(p2t::SweepContext&) */

void __thiscall p2t::Sweep::FinalizationPolygon(Sweep *this,SweepContext *param_1)

{
  Point *pPVar1;
  ulong uVar2;
  Triangle *this_00;
  
  pPVar1 = (Point *)**(undefined8 **)(**(long **)(param_1 + 0x98) + 0x10);
  this_00 = (Triangle *)(*(undefined8 **)(**(long **)(param_1 + 0x98) + 0x10))[1];
  while (uVar2 = Triangle::GetConstrainedEdgeCW(this_00,pPVar1), (uVar2 & 1) == 0) {
    this_00 = (Triangle *)Triangle::NeighborCCW(this_00,pPVar1);
  }
  SweepContext::MeshClean(param_1,this_00);
  return;
}

