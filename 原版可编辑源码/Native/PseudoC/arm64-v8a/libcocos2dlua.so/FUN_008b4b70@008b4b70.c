
undefined8 FUN_008b4b70(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  uVar3 = 0;
  if (param_1 != (lua_State *)0x0) {
    uVar2 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pvVar4 = (void *)cocos2d::EventListenerMouse::create();
      uVar3 = 0;
      if (pvVar4 != (void *)0x0) {
        FUN_008b5180(uVar2,pvVar4,0x30);
        FUN_008b5180(uVar2,pvVar4,0x32);
        FUN_008b5180(uVar2,pvVar4,0x33);
        FUN_008b5180(uVar2,pvVar4,0x31);
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.EventListenerMouse");
        uVar3 = 1;
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerMouse:clone",iVar1 + -1,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

