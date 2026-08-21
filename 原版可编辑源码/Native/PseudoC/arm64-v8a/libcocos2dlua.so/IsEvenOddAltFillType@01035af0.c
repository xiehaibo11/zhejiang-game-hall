
/* ClipperLib::Clipper::IsEvenOddAltFillType(ClipperLib::TEdge const&) const */

bool __thiscall ClipperLib::Clipper::IsEvenOddAltFillType(Clipper *this,TEdge *param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 01035ab0 with catch @ 01035b00 */
  lVar1 = 0x9c;
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar1 = 0xa0;
  }
                    /* catch() { ... } // from try @ 01035a70 with catch @ 01035b10 */
  return *(int *)(this + lVar1) == 0;
}

