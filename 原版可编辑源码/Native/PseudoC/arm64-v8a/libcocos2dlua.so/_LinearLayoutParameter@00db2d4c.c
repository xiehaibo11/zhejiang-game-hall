
/* cocos2d::ui::LinearLayoutParameter::~LinearLayoutParameter() */

void __thiscall
cocos2d::ui::LinearLayoutParameter::~LinearLayoutParameter(LinearLayoutParameter *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

