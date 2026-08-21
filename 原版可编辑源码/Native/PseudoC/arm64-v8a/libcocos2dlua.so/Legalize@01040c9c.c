
/* p2t::Triangle::Legalize(p2t::Point&) */

void __thiscall p2t::Triangle::Legalize(Triangle *this,Point *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  *(Point **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}

