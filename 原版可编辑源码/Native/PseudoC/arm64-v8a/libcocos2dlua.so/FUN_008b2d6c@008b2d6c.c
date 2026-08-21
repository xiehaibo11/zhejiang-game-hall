
undefined8 FUN_008b2d6c(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  EventListenerTouchOneByOne *this;
  undefined8 uVar3;
  EventListenerTouchOneByOne *this_00;
  
  uVar3 = 0;
  if (param_1 != (lua_State *)0x0) {
    this = (EventListenerTouchOneByOne *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      this_00 = (EventListenerTouchOneByOne *)cocos2d::EventListenerTouchOneByOne::create();
      uVar3 = 0;
      if (this_00 != (EventListenerTouchOneByOne *)0x0) {
        FUN_008b3244(this,this_00,0x28);
        FUN_008b3244(this,this_00,0x29);
        FUN_008b3244(this,this_00,0x2a);
        FUN_008b3244(this,this_00,0x2b);
        bVar1 = cocos2d::EventListenerTouchOneByOne::isSwallowTouches(this);
        cocos2d::EventListenerTouchOneByOne::setSwallowTouches(this_00,(bool)(bVar1 & 1));
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(this_00 + 0xc),(int *)(this_00 + 0x10),this_00,
                   "cc.EventListenerTouchOneByOne");
        uVar3 = 1;
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerTouchOneByOne:create",iVar2 + -1,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

