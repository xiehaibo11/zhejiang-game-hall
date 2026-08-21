
/* cocos2d::ui::LayoutParameter::~LayoutParameter() */

void __thiscall cocos2d::ui::LayoutParameter::~LayoutParameter(LayoutParameter *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

