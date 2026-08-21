
/* ClipperLib::Clipper::IsEvenOddFillType(ClipperLib::TEdge const&) const */

bool __thiscall ClipperLib::Clipper::IsEvenOddFillType(Clipper *this,TEdge *param_1)

{
  long lVar1;
  
  lVar1 = 0xa0;
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar1 = 0x9c;
  }
  return *(int *)(this + lVar1) == 0;
}

