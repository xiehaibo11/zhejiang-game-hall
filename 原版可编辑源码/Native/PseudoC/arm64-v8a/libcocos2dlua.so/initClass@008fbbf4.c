
/* cocos2d::ComponentLua::initClass() */

void cocos2d::ComponentLua::initClass(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_01781e94 & 1) == 0) {
    lVar1 = LuaEngine::getInstance();
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x28);
    lua_pushstring(uVar2,"component");
    lua_createtable(uVar2,0,0);
    lua_rawset(uVar2,0xffffd8f0);
    DAT_01781e94 = 1;
  }
  return;
}

