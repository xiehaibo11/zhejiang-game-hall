
/* cocos2d::renderer::InputAssembler::setVertexBuffer(cocos2d::renderer::VertexBuffer*) */

void __thiscall
cocos2d::renderer::InputAssembler::setVertexBuffer(InputAssembler *this,VertexBuffer *param_1)

{
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
  *(VertexBuffer **)this = param_1;
  if (param_1 != (VertexBuffer *)0x0) {
    Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

