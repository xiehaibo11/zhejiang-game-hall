
undefined8 FUN_008b2a88(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  uVar2 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar1 = lua_gettop();
    if (iVar1 + -1 == 0) {
      pvVar3 = (void *)cocos2d::EventListenerTouchOneByOne::create();
      uVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                   "cc.EventListenerTouchOneByOne");
        uVar2 = 1;
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerTouchOneByOne:create",iVar1 + -1,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

