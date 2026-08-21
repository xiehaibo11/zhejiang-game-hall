
/* cocos2d::ComponentLua::getScriptObjectInternal() const */

void __thiscall cocos2d::ComponentLua::getScriptObjectInternal(ComponentLua *this)

{
  long lVar1;
  ComponentLua *pCVar2;
  undefined8 uVar3;
  
                    /* try { // try from 008fbfe4 to 009fc07f has its CatchHandler @ 008fbe6c */
  lVar1 = LuaEngine::getInstance();
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
  return;
}

