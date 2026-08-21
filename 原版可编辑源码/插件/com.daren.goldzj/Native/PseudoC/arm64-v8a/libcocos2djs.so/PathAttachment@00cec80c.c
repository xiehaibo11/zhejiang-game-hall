
/* spine::PathAttachment::PathAttachment(spine::String const&) */

void __thiscall spine::PathAttachment::PathAttachment(PathAttachment *this,String *param_1)

{
  VertexAttachment::VertexAttachment((VertexAttachment *)this,param_1);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined2 *)(this + 0xa0) = 0;
  *(undefined ***)this = &PTR__PathAttachment_01c8ef68;
  *(undefined ***)(this + 0x80) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x88) = 0;
  return;
}

