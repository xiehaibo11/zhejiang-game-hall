
/* std::__ndk1::list<cocos2d::LuaValue, std::__ndk1::allocator<cocos2d::LuaValue>
   >::list(std::__ndk1::list<cocos2d::LuaValue, std::__ndk1::allocator<cocos2d::LuaValue> > const&)
    */

void __thiscall
std::__ndk1::list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>>::list
          (list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> *this,list *param_1)

{
  list *plVar1;
  
  *(list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> **)this = this;
  *(list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> **)(this + 8) = this;
  *(undefined8 *)(this + 0x10) = 0;
  for (plVar1 = *(list **)(param_1 + 8); param_1 != plVar1; plVar1 = *(list **)(plVar1 + 8)) {
    push_back(this,(LuaValue *)(plVar1 + 0x10));
  }
  return;
}

