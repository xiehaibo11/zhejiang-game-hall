
/* cocos2d::LuaStack::addSearchPath(char const*) */

void __thiscall cocos2d::LuaStack::addSearchPath(LuaStack *this,char *param_1)

{
  undefined8 uVar1;
  
  lua_getfield(*(undefined8 *)(this + 0x28),0xffffd8ee,"package");
  lua_getfield(*(undefined8 *)(this + 0x28),0xffffffff,&DAT_0145a62a);
  uVar1 = lua_tolstring(*(undefined8 *)(this + 0x28),0xffffffff,0);
  lua_pushfstring(*(undefined8 *)(this + 0x28),&DAT_01276af0,uVar1,param_1);
  lua_setfield(*(undefined8 *)(this + 0x28),0xfffffffd,&DAT_0145a62a);
  lua_settop(*(undefined8 *)(this + 0x28),0xfffffffd);
  return;
}

