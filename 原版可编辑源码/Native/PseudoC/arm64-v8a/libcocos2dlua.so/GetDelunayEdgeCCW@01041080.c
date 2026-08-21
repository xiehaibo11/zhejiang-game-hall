
/* p2t::Triangle::GetDelunayEdgeCCW(p2t::Point const&) */

Triangle __thiscall p2t::Triangle::GetDelunayEdgeCCW(Triangle *this,Point *param_1)

{
  if (*(Point **)(this + 8) == param_1) {
    return this[5];
  }
  if (*(Point **)(this + 0x10) != param_1) {
    return this[4];
  }
  return this[3];
}

