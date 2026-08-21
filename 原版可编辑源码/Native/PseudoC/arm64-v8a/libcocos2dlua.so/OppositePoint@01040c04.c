
/* p2t::Triangle::OppositePoint(p2t::Triangle&, p2t::Point const&) */

Point * __thiscall p2t::Triangle::OppositePoint(Triangle *this,Triangle *param_1,Point *param_2)

{
  Point *pPVar1;
  Point *pPVar2;
  
  if (*(Point **)(param_1 + 8) == param_2) {
    pPVar2 = *(Point **)(param_1 + 0x18);
  }
  else {
    pPVar2 = *(Point **)(param_1 + 8);
    if ((*(Point **)(param_1 + 0x10) != param_2) &&
       (pPVar2 = *(Point **)(param_1 + 0x10), *(Point **)(param_1 + 0x18) != param_2)) {
      pPVar2 = (Point *)0x0;
    }
  }
  if (*(Point **)(this + 8) == pPVar2) {
    return *(Point **)(this + 0x18);
  }
  pPVar1 = *(Point **)(this + 8);
  if ((*(Point **)(this + 0x10) != pPVar2) &&
     (pPVar1 = *(Point **)(this + 0x10), *(Point **)(this + 0x18) != pPVar2)) {
    pPVar1 = (Point *)0x0;
  }
  return pPVar1;
}

