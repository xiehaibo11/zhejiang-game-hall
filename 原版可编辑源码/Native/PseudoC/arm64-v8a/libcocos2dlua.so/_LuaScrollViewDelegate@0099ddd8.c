
/* LuaScrollViewDelegate::~LuaScrollViewDelegate() */

void __thiscall LuaScrollViewDelegate::~LuaScrollViewDelegate(LuaScrollViewDelegate *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

