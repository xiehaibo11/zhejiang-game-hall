
/* cocos2d::renderer::GraphicsHandle::~GraphicsHandle() */

void __thiscall cocos2d::renderer::GraphicsHandle::~GraphicsHandle(GraphicsHandle *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

