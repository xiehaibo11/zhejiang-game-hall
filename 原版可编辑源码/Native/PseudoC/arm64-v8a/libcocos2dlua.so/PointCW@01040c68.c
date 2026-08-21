
/* p2t::Triangle::PointCW(p2t::Point const&) */

Point * __thiscall p2t::Triangle::PointCW(Triangle *this,Point *param_1)

{
  Point *pPVar1;
  
  if (*(Point **)(this + 8) == param_1) {
    return *(Point **)(this + 0x18);
  }
  pPVar1 = *(Point **)(this + 8);
  if ((*(Point **)(this + 0x10) != param_1) &&
     (pPVar1 = *(Point **)(this + 0x10), *(Point **)(this + 0x18) != param_1)) {
    pPVar1 = (Point *)0x0;
  }
  return pPVar1;
}

