
/* v8::internal::FrameDescription::FrameDescription(unsigned int, int) */

void __thiscall
v8::internal::FrameDescription::FrameDescription(FrameDescription *this,uint param_1,int param_2)

{
  uint uVar1;
  
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(int *)(this + 8) = param_2;
  *(ulong *)this = (ulong)param_1;
  *(undefined8 *)(this + 0x230) = 0xbeeddead;
  *(undefined8 *)(this + 0x218) = 0xbeeddead;
  *(undefined8 *)(this + 0x210) = 0xbeeddead;
  *(undefined8 *)(this + 0x228) = 0xbeeddead;
  *(undefined8 *)(this + 0x220) = 0xbeeddead;
  *(undefined8 *)(this + 0x18) = 0xbeeddead;
  *(undefined8 *)(this + 0x10) = 0xbeeddead;
  *(undefined8 *)(this + 0x28) = 0xbeeddead;
  *(undefined8 *)(this + 0x20) = 0xbeeddead;
  *(undefined8 *)(this + 0x38) = 0xbeeddead;
  *(undefined8 *)(this + 0x30) = 0xbeeddead;
  *(undefined8 *)(this + 0x48) = 0xbeeddead;
  *(undefined8 *)(this + 0x40) = 0xbeeddead;
  *(undefined8 *)(this + 0x58) = 0xbeeddead;
  *(undefined8 *)(this + 0x50) = 0xbeeddead;
  *(undefined8 *)(this + 0x68) = 0xbeeddead;
  *(undefined8 *)(this + 0x60) = 0xbeeddead;
  *(undefined8 *)(this + 0x78) = 0xbeeddead;
  *(undefined8 *)(this + 0x70) = 0xbeeddead;
  *(undefined8 *)(this + 0x88) = 0xbeeddead;
  *(undefined8 *)(this + 0x80) = 0xbeeddead;
  *(undefined8 *)(this + 0x98) = 0xbeeddead;
  *(undefined8 *)(this + 0x90) = 0xbeeddead;
  *(undefined8 *)(this + 0xa8) = 0xbeeddead;
  *(undefined8 *)(this + 0xa0) = 0xbeeddead;
  *(undefined8 *)(this + 0xb8) = 0xbeeddead;
  *(undefined8 *)(this + 0xb0) = 0xbeeddead;
  *(undefined8 *)(this + 200) = 0xbeeddead;
  *(undefined8 *)(this + 0xc0) = 0xbeeddead;
  *(undefined8 *)(this + 0xd8) = 0xbeeddead;
  *(undefined8 *)(this + 0xd0) = 0xbeeddead;
  *(undefined8 *)(this + 0xe8) = 0xbeeddead;
  *(undefined8 *)(this + 0xe0) = 0xbeeddead;
  *(undefined8 *)(this + 0xf8) = 0xbeeddead;
  *(undefined8 *)(this + 0xf0) = 0xbeeddead;
  *(undefined8 *)(this + 0x108) = 0xbeeddead;
  *(undefined8 *)(this + 0x100) = 0xbeeddead;
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      *(undefined8 *)(this + (ulong)uVar1 + 0x240) = 0xbeeddead;
      uVar1 = uVar1 + 8;
    } while (uVar1 < param_1);
  }
  return;
}

