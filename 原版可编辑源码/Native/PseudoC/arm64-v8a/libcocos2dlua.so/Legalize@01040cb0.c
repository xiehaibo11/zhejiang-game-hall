
/* p2t::Triangle::Legalize(p2t::Point&, p2t::Point&) */

void __thiscall p2t::Triangle::Legalize(Triangle *this,Point *param_1,Point *param_2)

{
  Triangle *pTVar1;
  
  pTVar1 = this + 8;
  if (*(Point **)pTVar1 == param_1) {
    *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x18);
    *(Point **)(this + 0x10) = param_1;
    *(Point **)(this + 0x18) = param_2;
    return;
  }
  if (*(Point **)(this + 0x10) == param_1) {
    *(Point **)(this + 0x10) = *(Point **)pTVar1;
    *(Point **)(this + 0x18) = param_1;
  }
  else {
    if (*(Point **)(this + 0x18) != param_1) {
      return;
    }
    pTVar1 = this + 0x10;
    *(Point **)(this + 8) = param_1;
    *(Point **)(this + 0x18) = *(Point **)(this + 0x10);
  }
  *(Point **)pTVar1 = param_2;
  return;
}

