
/* cocos2d::LuaValue::arrayValue(std::__ndk1::list<cocos2d::LuaValue,
   std::__ndk1::allocator<cocos2d::LuaValue> > const&) */

void __thiscall cocos2d::LuaValue::arrayValue(LuaValue *this,list *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *in_x8;
  long lVar3;
  LuaValue *pLVar4;
  
  in_x8[2] = 0;
  *in_x8 = 0;
  *(undefined4 *)(in_x8 + 1) = 5;
  plVar1 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    plVar1[2] = 0;
    for (pLVar4 = *(LuaValue **)(this + 8); this != pLVar4; pLVar4 = *(LuaValue **)(pLVar4 + 8)) {
      plVar2 = operator_new(0x28);
      *plVar2 = 0;
      copy((LuaValue *)(plVar2 + 2),pLVar4 + 0x10);
      lVar3 = *plVar1;
      *plVar2 = lVar3;
      plVar2[1] = (long)plVar1;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar1 = (long)plVar2;
      plVar1[2] = plVar1[2] + 1;
    }
  }
  *in_x8 = plVar1;
  return;
}

