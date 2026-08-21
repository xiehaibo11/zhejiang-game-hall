
/* ClipperLib::Clipper::Clipper(int) */

void __thiscall ClipperLib::Clipper::Clipper(Clipper *this,int param_1)

{
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined ***)this = &PTR__Clipper_01727ae8;
  *(undefined ***)(this + 0xa8) = &PTR__Clipper_01727b30;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0xa4] = (Clipper)((byte)param_1 & 1);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x98] = (Clipper)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0xc0] = (Clipper)0x0;
  this[0xa6] = (Clipper)((byte)((param_1 & 0xffU) >> 1) & 1);
  this[0xe0] = (Clipper)((byte)((param_1 & 0xffU) >> 2) & 1);
  *(Clipper **)(this + 0x70) = this + 0x78;
  this[0xe1] = (Clipper)0x0;
  return;
}

