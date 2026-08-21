
/* cocos2d::ComponentLua::removeLuaTable() */

void __thiscall cocos2d::ComponentLua::removeLuaTable(ComponentLua *this)

{
  long lVar1;
  ComponentLua *pCVar2;
  undefined8 uVar3;
  
  if (this[0x68] != (ComponentLua)0x0) {
                    /* try { // try from 008fbf48 to 009fbf5f has its CatchHandler @ 008fc064 */
    lVar1 = LuaEngine::getInstance();
    uVar3 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x28);
    lua_pushstring(uVar3,"component");
    lua_rawget(uVar3,0xffffd8f0);
                    /* try { // try from 008fbf74 to 009fbfe3 has its CatchHandler @ 008fc060 */
    if (((byte)this[0x78] & 1) == 0) {
      pCVar2 = this + 0x79;
    }
    else {
      pCVar2 = *(ComponentLua **)(this + 0x88);
    }
    lua_pushstring(uVar3,pCVar2);
    lua_pushnil(uVar3);
    lua_rawset(uVar3,0xfffffffd);
    return;
  }
  return;
}

