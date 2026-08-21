
/* std::__ndk1::list<cocos2d::LuaValue, std::__ndk1::allocator<cocos2d::LuaValue>
   >::push_back(cocos2d::LuaValue const&) */

void __thiscall
std::__ndk1::list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>>::push_back
          (list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> *this,LuaValue *param_1
          )

{
  long *plVar1;
  long lVar2;
  
  plVar1 = operator_new(0x28);
  *plVar1 = 0;
  cocos2d::LuaValue::copy((LuaValue *)(plVar1 + 2),param_1);
  lVar2 = *(long *)this;
  *plVar1 = lVar2;
  plVar1[1] = (long)this;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)this = plVar1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}

