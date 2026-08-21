
/* p2t::Triangle::GetConstrainedEdgeCCW(p2t::Point const&) */

Triangle __thiscall p2t::Triangle::GetConstrainedEdgeCCW(Triangle *this,Point *param_1)

{
  if (*(Point **)(this + 8) != param_1) {
    if (*(Point **)(this + 0x10) != param_1) {
      this = this + 1;
    }
    return *this;
  }
  return this[2];
}

