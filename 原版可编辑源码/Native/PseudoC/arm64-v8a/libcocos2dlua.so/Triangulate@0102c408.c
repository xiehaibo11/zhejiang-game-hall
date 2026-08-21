
/* p2t::CDT::Triangulate() */

void __thiscall p2t::CDT::Triangulate(CDT *this)

{
  Sweep::Triangulate(*(Sweep **)(this + 8),*(SweepContext **)this);
  return;
}

