
/* cocos2d::ComponentLua::~ComponentLua() */

void __thiscall cocos2d::ComponentLua::~ComponentLua(ComponentLua *this)

{
  *(undefined ***)this = &PTR__ComponentLua_0169be28;
  removeLuaTable(this);
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  Component::~Component((Component *)this);
  return;
}

