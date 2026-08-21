
/* p2t::Triangle::GetConstrainedEdgeCW(p2t::Point const&) */

Triangle __thiscall p2t::Triangle::GetConstrainedEdgeCW(Triangle *this,Point *param_1)

{
  if (*(Point **)(this + 8) == param_1) {
    return this[1];
  }
  if (*(Point **)(this + 0x10) != param_1) {
    return *this;
  }
  return this[2];
}

