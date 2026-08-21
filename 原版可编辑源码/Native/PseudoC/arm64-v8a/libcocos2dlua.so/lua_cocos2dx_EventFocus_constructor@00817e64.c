
/* lua_cocos2dx_EventFocus_constructor(lua_State*) */

undefined8 lua_cocos2dx_EventFocus_constructor(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  Widget *pWVar4;
  EventFocus *this;
  Widget *unaff_x20;
  
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) || (uVar3 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar3 & 1) == 0))
      {
        bVar1 = false;
      }
      else {
        unaff_x20 = (Widget *)tolua_tousertype(param_1,2,0);
        bVar1 = true;
      }
      iVar2 = lua_gettop(param_1);
      if (((2 < iVar2) && (uVar3 = luaval_is_usertype(param_1,3,"ccui.Widget",0), (uVar3 & 1) != 0))
         && (pWVar4 = (Widget *)tolua_tousertype(param_1,3,0), bVar1)) {
        this = operator_new(0x48);
        cocos2d::EventFocus::EventFocus(this,unaff_x20,pWVar4);
        cocos2d::Ref::autorelease((Ref *)this);
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.EventFocus");
        return 1;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_EventFocus_constructor\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventFocus:EventFocus",iVar2 + -1,2);
  }
  return 0;
}

