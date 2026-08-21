
/* cocos2d::LuaStack::executeFunctionByHandler(int, int) */

undefined4 __thiscall
cocos2d::LuaStack::executeFunctionByHandler(LuaStack *this,int param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)this + 0xb8))(this,param_1);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (0 < param_2) {
      lua_insert(*(undefined8 *)(this + 0x28),~param_2);
    }
    uVar1 = (**(code **)(*(long *)this + 0xc0))(this,param_2);
  }
  lua_settop(*(undefined8 *)(this + 0x28),0);
  return uVar1;
}

