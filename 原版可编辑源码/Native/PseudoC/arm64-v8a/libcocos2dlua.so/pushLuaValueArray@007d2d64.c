
/* cocos2d::LuaStack::pushLuaValueArray(std::__ndk1::list<cocos2d::LuaValue,
   std::__ndk1::allocator<cocos2d::LuaValue> > const&) */

void __thiscall cocos2d::LuaStack::pushLuaValueArray(LuaStack *this,list *param_1)

{
  int iVar1;
  list *plVar2;
  
  lua_createtable(*(undefined8 *)(this + 0x28),0,0);
  plVar2 = *(list **)(param_1 + 8);
  if (param_1 != plVar2) {
    iVar1 = 1;
    do {
      (**(code **)(*(long *)this + 0xa0))(this,plVar2 + 0x10);
      lua_rawseti(*(undefined8 *)(this + 0x28),0xfffffffe,iVar1);
      plVar2 = *(list **)(plVar2 + 8);
      iVar1 = iVar1 + 1;
    } while (param_1 != plVar2);
  }
  return;
}

