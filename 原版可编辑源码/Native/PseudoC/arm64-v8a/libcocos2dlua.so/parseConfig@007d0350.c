
/* cocos2d::LuaEngine::parseConfig(cocos2d::ScriptEngineProtocol::ConfigType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

bool __thiscall cocos2d::LuaEngine::parseConfig(LuaEngine *this,undefined4 param_2,byte *param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  
  lua_getfield(*(undefined8 *)(*(long *)(this + 8) + 0x28),0xffffd8ee,"__onParseConfig");
  iVar2 = lua_type(*(undefined8 *)(*(long *)(this + 8) + 0x28),0xffffffff);
  plVar3 = *(long **)(this + 8);
  if (iVar2 == 6) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
    pbVar4 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar4 = param_3 + 1;
    }
    (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),pbVar4);
    iVar2 = (**(code **)(**(long **)(this + 8) + 0xc0))(*(long **)(this + 8),2);
    bVar1 = iVar2 != 0;
  }
  else {
    lua_settop(plVar3[5],0xfffffffe);
    bVar1 = false;
  }
  return bVar1;
}

