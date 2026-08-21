
/* p2t::Triangle::Triangle(p2t::Point&, p2t::Point&, p2t::Point&) */

void __thiscall p2t::Triangle::Triangle(Triangle *this,Point *param_1,Point *param_2,Point *param_3)

{
  *(Point **)(this + 8) = param_1;
  *(Point **)(this + 0x10) = param_2;
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  *(Point **)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (Triangle)0x0;
  return;
}

