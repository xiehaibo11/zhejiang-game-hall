
/* universe::network::Everywhere::Everywhere() */

void __thiscall universe::network::Everywhere::Everywhere(Everywhere *this)

{
  OStream *this_00;
  OStream *this_01;
  
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  this_00 = operator_new(0x18);
  OStream::OStream(this_00,(char *)0x0,0);
  this_01 = *(OStream **)(this + 0x30);
  *(OStream **)(this + 0x30) = this_00;
  if (this_01 != (OStream *)0x0) {
    OStream::~OStream(this_01);
    operator_delete(this_01);
    return;
  }
  return;
}

