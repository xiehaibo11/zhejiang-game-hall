
/* spine::MeshAttachment::MeshAttachment(spine::String const&) */

void __thiscall spine::MeshAttachment::MeshAttachment(MeshAttachment *this,String *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  VertexAttachment::VertexAttachment((VertexAttachment *)this,param_1);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined ***)this = &PTR__MeshAttachment_01c8eee0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0x178) = auVar2._8_8_;
  *(long *)(this + 0x170) = auVar2._0_8_;
  *(undefined ***)(this + 0x80) = &PTR__MeshAttachment_01c8ef10;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)(this + 0xb8) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined ***)(this + 0xd8) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)(this + 0xf8) = &PTR__Vector_01c8d128;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined ***)(this + 0x118) = &PTR__Vector_01c8d128;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)(this + 0x138) = &PTR__String_01c67868;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined ***)(this + 0x168) = &PTR__SpineObject_01c8eb68;
  uVar1 = MathUtil::clamp(1.0,0.0,1.0);
  *(undefined4 *)(this + 0x170) = uVar1;
  uVar1 = MathUtil::clamp(*(float *)(this + 0x174),0.0,1.0);
  *(undefined4 *)(this + 0x174) = uVar1;
  uVar1 = MathUtil::clamp(*(float *)(this + 0x178),0.0,1.0);
  *(undefined4 *)(this + 0x178) = uVar1;
  uVar1 = MathUtil::clamp(*(float *)(this + 0x17c),0.0,1.0);
  *(undefined4 *)(this + 0x17c) = uVar1;
  *(undefined4 *)(this + 0x180) = 0;
  this[0x184] = (MeshAttachment)0x0;
  *(undefined4 *)(this + 0x188) = 0;
  return;
}

