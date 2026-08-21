
/* cocos2d::renderer::Pass::~Pass() */

void __thiscall cocos2d::renderer::Pass::~Pass(Pass *this)

{
  ~Pass(this);
  operator_delete(this);
  return;
}

