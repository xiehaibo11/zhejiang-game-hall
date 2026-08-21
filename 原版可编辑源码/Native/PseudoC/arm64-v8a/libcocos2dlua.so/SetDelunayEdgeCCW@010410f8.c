
/* p2t::Triangle::SetDelunayEdgeCCW(p2t::Point const&, bool) */

void __thiscall p2t::Triangle::SetDelunayEdgeCCW(Triangle *this,Point *param_1,bool param_2)

{
  if (*(Point **)(this + 8) == param_1) {
    this[5] = (Triangle)param_2;
    return;
  }
  if (*(Point **)(this + 0x10) != param_1) {
    this[4] = (Triangle)param_2;
    return;
  }
  this[3] = (Triangle)param_2;
  return;
}

