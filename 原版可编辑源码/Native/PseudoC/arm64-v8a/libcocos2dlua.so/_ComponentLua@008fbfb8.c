
/* cocos2d::ComponentLua::~ComponentLua() */

void __thiscall cocos2d::ComponentLua::~ComponentLua(ComponentLua *this)

{
  ~ComponentLua(this);
  operator_delete(this);
  return;
}

