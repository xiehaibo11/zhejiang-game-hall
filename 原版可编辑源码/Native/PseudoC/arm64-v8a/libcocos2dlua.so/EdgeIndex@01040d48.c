
/* p2t::Triangle::EdgeIndex(p2t::Point const*, p2t::Point const*) */

undefined8 __thiscall p2t::Triangle::EdgeIndex(Triangle *this,Point *param_1,Point *param_2)

{
  Point *pPVar1;
  Point *pPVar2;
  
  pPVar1 = *(Point **)(this + 8);
  pPVar2 = *(Point **)(this + 0x10);
  if (pPVar1 == param_1) {
    if (pPVar2 == param_2) {
      return 2;
    }
    if (*(Point **)(this + 0x18) == param_2) {
      return 1;
    }
  }
  else if (pPVar2 == param_1) {
    if (*(Point **)(this + 0x18) == param_2) {
      return 0;
    }
    if (pPVar1 == param_2) {
      return 2;
    }
  }
  else if (*(Point **)(this + 0x18) == param_1) {
    if (pPVar1 == param_2) {
      return 1;
    }
    if (pPVar2 == param_2) {
      return 0;
    }
  }
  return 0xffffffff;
}

