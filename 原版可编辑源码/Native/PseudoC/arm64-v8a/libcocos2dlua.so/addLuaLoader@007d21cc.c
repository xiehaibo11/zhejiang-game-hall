
/* cocos2d::LuaStack::addLuaLoader(int (*)(lua_State*)) */

void __thiscall cocos2d::LuaStack::addLuaLoader(LuaStack *this,_func_int_lua_State_ptr *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (_func_int_lua_State_ptr *)0x0) {
    return;
  }
  lua_getfield(*(undefined8 *)(this + 0x28),0xffffd8ee,"package");
  lua_getfield(*(undefined8 *)(this + 0x28),0xffffffff,"loaders");
  lua_pushcclosure(*(undefined8 *)(this + 0x28),param_1,0);
  iVar2 = lua_objlen(*(undefined8 *)(this + 0x28),0xfffffffe);
  uVar3 = *(undefined8 *)(this + 0x28);
  iVar1 = iVar2 + 1;
  while (2 < iVar1) {
    lua_rawgeti(uVar3,0xfffffffe,iVar2);
    lua_rawseti(*(undefined8 *)(this + 0x28),0xfffffffd,iVar2 + 1);
    uVar3 = *(undefined8 *)(this + 0x28);
    iVar1 = iVar2;
    iVar2 = iVar2 + -1;
  }
  lua_rawseti(uVar3,0xfffffffe,2);
  lua_setfield(*(undefined8 *)(this + 0x28),0xfffffffe,"loaders");
  lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
  return;
}

