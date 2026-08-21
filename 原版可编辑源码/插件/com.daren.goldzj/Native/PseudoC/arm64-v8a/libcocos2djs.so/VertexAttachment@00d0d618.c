
/* spine::VertexAttachment::VertexAttachment(spine::String const&) */

void __thiscall spine::VertexAttachment::VertexAttachment(VertexAttachment *this,String *param_1)

{
  uint uVar1;
  
  Attachment::Attachment((Attachment *)this,param_1);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(VertexAttachment **)(this + 0x70) = this;
  *(undefined ***)this = &PTR__VertexAttachment_01c8f9d0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8f5d0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)(this + 0x48) = &PTR__Vector_01c8d048;
  uVar1 = DAT_01d3dc10 & 0xffff;
  DAT_01d3dc10 = DAT_01d3dc10 + 1;
  *(uint *)(this + 0x78) = uVar1 << 0xb;
  return;
}

