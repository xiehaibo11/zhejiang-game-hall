
/* p2t::Triangle::SetConstrainedEdgeCCW(p2t::Point const&, bool) */

void __thiscall p2t::Triangle::SetConstrainedEdgeCCW(Triangle *this,Point *param_1,bool param_2)

{
  if (*(Point **)(this + 8) == param_1) {
    this[2] = (Triangle)param_2;
    return;
  }
  if (*(Point **)(this + 0x10) != param_1) {
    this[1] = (Triangle)param_2;
    return;
  }
  *this = (Triangle)param_2;
  return;
}

