
undefined8 FUN_00963620(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  uVar2 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar1 = lua_gettop();
    if (iVar1 + -1 == 0) {
      pvVar3 = (void *)cocos2d::EventListenerFocus::create();
      uVar2 = 0;
      if (pvVar3 != (void *)0x0) {
                    /* try { // try from 00963680 to 00a63693 has its CatchHandler @ 00963718 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                   "cc.EventListenerFocus");
        uVar2 = 1;
      }
    }
    else {
                    /* try { // try from 0096364c to 00a6367f has its CatchHandler @ 0096374c */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerFocus:create",iVar1 + -1,1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

