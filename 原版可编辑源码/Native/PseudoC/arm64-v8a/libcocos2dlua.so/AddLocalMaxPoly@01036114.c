
/* ClipperLib::Clipper::AddLocalMaxPoly(ClipperLib::TEdge*, ClipperLib::TEdge*, ClipperLib::IntPoint
   const&) */

void __thiscall
ClipperLib::Clipper::AddLocalMaxPoly(Clipper *this,TEdge *param_1,TEdge *param_2,IntPoint *param_3)

{
  TEdge *pTVar1;
  
  AddOutPt(this,param_1,param_3);
  if (*(int *)(param_2 + 0x50) == 0) {
    AddOutPt(this,param_2,param_3);
  }
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_2 + 0x5c)) {
    pTVar1 = param_2;
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_2 + 0x5c)) {
      pTVar1 = param_1;
      param_1 = param_2;
    }
    AppendPolygon(this,pTVar1,param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
  return;
}

