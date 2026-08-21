
/* dtQueryFilter::dtQueryFilter() */

void __thiscall dtQueryFilter::dtQueryFilter(dtQueryFilter *this)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0x100) = 0xffff;
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(this + 8) = uVar3;
  uVar1 = auVar2._0_8_;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x50) = uVar3;
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x70) = uVar3;
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 *)(this + 0x80) = uVar3;
  *(undefined8 *)(this + 0x78) = uVar1;
  *(undefined8 *)(this + 0x90) = uVar3;
  *(undefined8 *)(this + 0x88) = uVar1;
  *(undefined8 *)(this + 0xa0) = uVar3;
  *(undefined8 *)(this + 0x98) = uVar1;
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined8 *)(this + 0xa8) = uVar1;
  *(undefined8 *)(this + 0xc0) = uVar3;
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 0xd0) = uVar3;
  *(undefined8 *)(this + 200) = uVar1;
  *(undefined8 *)(this + 0xe0) = uVar3;
  *(undefined8 *)(this + 0xd8) = uVar1;
  *(undefined8 *)(this + 0xf0) = uVar3;
  *(undefined8 *)(this + 0xe8) = uVar1;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x30) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0xf8) = uVar1;
  return;
}

