
/* lua_cocos2dx_EventController_constructor(lua_State*) */

void lua_cocos2dx_EventController_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  EventController *this;
  int iStack_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 3) {
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.EventController:EventController");
    if ((((param_1 == (lua_State *)0x0) || ((uVar4 & 1) == 0)) ||
        (iVar3 = lua_gettop(param_1), iVar3 < 3)) ||
       (((uVar5 = luaval_is_usertype(param_1,3,"cc.Controller",0), (uVar5 & 1) == 0 ||
         (uVar6 = tolua_tousertype(param_1,3,0), (uVar4 & 1) == 0)) ||
        (uVar4 = luaval_to_boolean(param_1,4,(bool *)&iStack_50,"cc.EventController:EventController"
                                  ), (uVar4 & 1) == 0)))) {
      uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.EventController:EventController");
      if (((param_1 == (lua_State *)0x0) || ((uVar4 & 1) == 0)) ||
         ((iVar3 = lua_gettop(param_1), iVar3 < 3 ||
          (((uVar5 = luaval_is_usertype(param_1,3,"cc.Controller",0), (uVar5 & 1) == 0 ||
            (uVar6 = tolua_tousertype(param_1,3,0), (uVar4 & 1) == 0)) ||
           (uVar4 = luaval_to_int32(param_1,4,&iStack_50,"cc.EventController:EventController"),
           (uVar4 & 1) == 0)))))) goto LAB_0081acac;
      this = operator_new(0x50);
      cocos2d::EventController::EventController(this,local_4c,uVar6,iStack_50);
    }
    else {
      this = operator_new(0x50);
      cocos2d::EventController::EventController(this,local_4c,uVar6,iStack_50._0_1_);
    }
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.EventController");
    uVar6 = 1;
  }
  else {
LAB_0081acac:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventController:EventController",iVar2 + -1,3);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

