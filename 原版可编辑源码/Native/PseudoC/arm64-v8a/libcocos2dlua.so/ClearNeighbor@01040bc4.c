
/* p2t::Triangle::ClearNeighbor(p2t::Triangle const*) */

void __thiscall p2t::Triangle::ClearNeighbor(Triangle *this,Triangle *param_1)

{
  Triangle *pTVar1;
  
  pTVar1 = this + 0x20;
  if (*(Triangle **)(this + 0x20) != param_1) {
    pTVar1 = this + 0x28;
    if (*(Triangle **)(this + 0x28) != param_1) {
      pTVar1 = this + 0x30;
    }
  }
  *(undefined8 *)pTVar1 = 0;
  return;
}

