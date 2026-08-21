
/* cocos2d::renderer::VertexBuffer::setFormat(cocos2d::renderer::VertexFormat*) */

void __thiscall cocos2d::renderer::VertexBuffer::setFormat(VertexBuffer *this,VertexFormat *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x18);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(VertexFormat **)(this + 0x18) = param_1;
    if (param_1 != (VertexFormat *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

