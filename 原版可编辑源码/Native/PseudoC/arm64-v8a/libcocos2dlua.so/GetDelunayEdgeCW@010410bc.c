
/* p2t::Triangle::GetDelunayEdgeCW(p2t::Point const&) */

Triangle __thiscall p2t::Triangle::GetDelunayEdgeCW(Triangle *this,Point *param_1)

{
  if (*(Point **)(this + 8) == param_1) {
    return this[4];
  }
  if (*(Point **)(this + 0x10) != param_1) {
    return this[3];
  }
  return this[5];
}

