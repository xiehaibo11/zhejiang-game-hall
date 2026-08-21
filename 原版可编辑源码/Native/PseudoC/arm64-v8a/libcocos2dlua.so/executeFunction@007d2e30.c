
/* cocos2d::LuaStack::executeFunction(int) */

undefined4 __thiscall cocos2d::LuaStack::executeFunction(LuaStack *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = lua_type(*(undefined8 *)(this + 0x28),~param_1);
  uVar4 = *(undefined8 *)(this + 0x28);
  if (iVar1 == 6) {
    lua_getfield(uVar4,0xffffd8ee,"__G__TRACKBACK__");
    iVar1 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
    if (iVar1 == 6) {
      iVar1 = -2 - param_1;
      lua_insert(*(undefined8 *)(this + 0x28),iVar1);
    }
    else {
      lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
      iVar1 = 0;
    }
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
    iVar2 = lua_pcall(*(undefined8 *)(this + 0x28),param_1,1,iVar1);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
    if (iVar2 == 0) {
      iVar2 = lua_isnumber(*(undefined8 *)(this + 0x28),0xffffffff);
      if (iVar2 == 0) {
        iVar2 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
        if (iVar2 == 1) {
          uVar3 = lua_toboolean(*(undefined8 *)(this + 0x28),0xffffffff);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = lua_tointeger(*(undefined8 *)(this + 0x28));
      }
      lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
      if (iVar1 == 0) {
        return uVar3;
      }
      lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
      return uVar3;
    }
    uVar4 = *(undefined8 *)(this + 0x28);
    if (iVar1 == 0) {
      iVar1 = -2;
    }
    else {
      iVar1 = -3;
    }
  }
  else {
    iVar1 = -2 - param_1;
  }
  lua_settop(uVar4,iVar1);
  return 0;
}

