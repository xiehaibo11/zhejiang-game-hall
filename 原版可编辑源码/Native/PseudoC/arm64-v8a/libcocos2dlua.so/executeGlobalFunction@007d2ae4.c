
/* cocos2d::LuaStack::executeGlobalFunction(char const*) */

undefined8 __thiscall cocos2d::LuaStack::executeGlobalFunction(LuaStack *this,char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  lua_getfield(*(undefined8 *)(this + 0x28),0xffffd8ee,param_1);
  iVar1 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
  if (iVar1 == 6) {
                    /* WARNING: Could not recover jumptable at 0x007d2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)this + 0xc0))(this,0);
    return uVar2;
  }
  lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
  return 0;
}

