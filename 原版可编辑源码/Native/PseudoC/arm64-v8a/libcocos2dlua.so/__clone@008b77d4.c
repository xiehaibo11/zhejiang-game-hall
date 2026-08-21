
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void
   (cocos2d::EventCustom*)>::__clone(std::__ndk1::__function::__base<void (cocos2d::EventCustom*)>*)
   const */

void __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::__clone(__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
          *this,__base *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffe;
  *(undefined ***)param_1 = &PTR____func_0169a7a0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (this != (__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
               *)param_1) {
    uVar2 = *(undefined8 *)(this + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
                    /* catch() { ... } // from try @ 008b77b0 with catch @ 008b7818 */
    lua_rawgeti(uVar2,0xffffd8f0,*(undefined4 *)(this + 0x10));
    uVar1 = luaL_ref(*(undefined8 *)(param_1 + 8),0xffffd8f0);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
                    /* try { // try from 008b7834 to 009b788b has its CatchHandler @ 008b7834
                       catch() { ... } // from try @ 008b7834 with catch @ 008b7834
                       catch() { ... } // from try @ 008b78a4 with catch @ 008b7834 */
  return;
}

