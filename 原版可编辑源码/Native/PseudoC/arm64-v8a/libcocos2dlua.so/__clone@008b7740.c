
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void (cocos2d::EventCustom*)>::__clone() const */

__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
* __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::__clone(__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
          *this)

{
  undefined4 uVar1;
  __func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
  *p_Var2;
  undefined8 uVar3;
  __func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
  *p_Var4;
  
                    /* try { // try from 008b7758 to 009b77af has its CatchHandler @ 008b7758
                       catch() { ... } // from try @ 008b7758 with catch @ 008b7758
                       catch() { ... } // from try @ 008b77c8 with catch @ 008b7758 */
  p_Var2 = operator_new(0x18);
  *(undefined ***)p_Var2 = &PTR____func_0169a7a0;
  p_Var4 = p_Var2 + 8;
  *(undefined8 *)p_Var4 = 0;
  *(undefined4 *)(p_Var2 + 0x10) = 0xfffffffe;
  if (this != p_Var2) {
    uVar3 = *(undefined8 *)(this + 8);
    *(undefined8 *)p_Var4 = uVar3;
    lua_rawgeti(uVar3,0xffffd8f0,*(undefined4 *)(this + 0x10));
    uVar1 = luaL_ref(*(undefined8 *)p_Var4,0xffffd8f0);
    *(undefined4 *)(p_Var2 + 0x10) = uVar1;
  }
                    /* try { // try from 008b77b0 to 009b77c7 has its CatchHandler @ 008b7818 */
  return p_Var2;
}

