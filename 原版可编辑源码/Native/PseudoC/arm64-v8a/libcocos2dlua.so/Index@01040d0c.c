
/* p2t::Triangle::Index(p2t::Point const*) */

undefined4 __thiscall p2t::Triangle::Index(Triangle *this,Point *param_1)

{
  undefined4 uVar1;
  
  if (*(Point **)(this + 8) == param_1) {
    return 0;
  }
  if (*(Point **)(this + 0x10) != param_1) {
    uVar1 = 2;
    if (*(Point **)(this + 0x18) != param_1) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 1;
}

