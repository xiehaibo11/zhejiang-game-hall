
/* LuaJavaBridge::CallInfo::pushReturnValue(lua_State*) */

undefined8 __thiscall LuaJavaBridge::CallInfo::pushReturnValue(CallInfo *this,lua_State *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    switch(*(undefined4 *)(this + 0x70)) {
    case 1:
      iVar1 = *(int *)(this + 0x78);
      goto LAB_007c6518;
    case 2:
      lua_pushnumber((double)*(float *)(this + 0x78),param_1);
      break;
    case 3:
      lua_pushboolean(param_1,*(undefined4 *)(this + 0x78));
      break;
    case 4:
      pbVar2 = *(byte **)(this + 0x78);
      if (pbVar2 == (byte *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        if ((*pbVar2 & 1) == 0) {
          pbVar2 = pbVar2 + 1;
        }
        else {
          pbVar2 = *(byte **)(pbVar2 + 0x10);
        }
        lua_pushstring(param_1,pbVar2);
      }
      break;
    default:
      return 0;
    }
  }
  else {
LAB_007c6518:
    lua_pushinteger(param_1,(long)iVar1);
  }
  return 1;
}

