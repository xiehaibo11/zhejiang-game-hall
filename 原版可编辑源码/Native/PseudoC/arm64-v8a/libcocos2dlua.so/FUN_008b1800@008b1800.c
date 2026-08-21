
undefined8 FUN_008b1800(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = lua_gettop();
    if (iVar1 + -1 == 0) {
      uVar2 = cocos2d::UserDefault::getInstance();
      tolua_pushusertype(param_1,uVar2,"cc.UserDefault");
      uVar2 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.UserDefault:getInstance",iVar1 + -1,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

