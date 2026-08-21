
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void
   (cocos2d::EventCustom*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::EventCustom*&&) */

void __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::operator()(__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
             *this,EventCustom **param_1)

{
  EventCustom *pEVar1;
  
  pEVar1 = *param_1;
  lua_rawgeti(*(undefined8 *)(this + 8),0xffffd8f0,*(undefined4 *)(this + 0x10));
  if (pEVar1 == (EventCustom *)0x0) {
                    /* catch() { ... } // from try @ 008b788c with catch @ 008b78f4 */
    lua_pushnil();
  }
  else {
    toluafix_pushusertype_ccobject
              (*(lua_State **)(this + 8),*(int *)(pEVar1 + 0xc),(int *)(pEVar1 + 0x10),pEVar1,
               "cc.EventCustom");
  }
  lua_call(*(undefined8 *)(this + 8),1,0);
  return;
}

