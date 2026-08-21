
/* cocos2d::experimental::RenderTargetBase::~RenderTargetBase() */

void __thiscall cocos2d::experimental::RenderTargetBase::~RenderTargetBase(RenderTargetBase *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

