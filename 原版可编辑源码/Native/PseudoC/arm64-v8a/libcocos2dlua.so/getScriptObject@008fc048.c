
/* cocos2d::ComponentLua::getScriptObject() const */

undefined8 __thiscall cocos2d::ComponentLua::getScriptObject(ComponentLua *this)

{
  long lVar1;
  ComponentLua *pCVar2;
  undefined8 uVar3;
  
  lVar1 = LuaEngine::getInstance();
                    /* catch() { ... } // from try @ 008fbf74 with catch @ 008fc060 */
                    /* catch() { ... } // from try @ 008fbf48 with catch @ 008fc064 */
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x28);
  lua_pushstring(uVar3,"component");
  lua_rawget(uVar3,0xffffd8f0);
  if (((byte)this[0x78] & 1) == 0) {
    pCVar2 = this + 0x79;
  }
  else {
    pCVar2 = *(ComponentLua **)(this + 0x88);
  }
  lua_pushstring(uVar3,pCVar2);
  lua_rawget(uVar3,0xfffffffe);
  return 0;
}

