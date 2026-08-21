
/* lua_cocos2dx_extension_ControlStepper_create(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlStepper_create(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  Sprite *pSVar4;
  void *pvVar5;
  Sprite *unaff_x20;
  
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) || (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) == 0)) {
        bVar1 = false;
      }
      else {
        unaff_x20 = (Sprite *)tolua_tousertype(param_1,2,0);
        bVar1 = true;
      }
      iVar2 = lua_gettop(param_1);
      if (((2 < iVar2) && (uVar3 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar3 & 1) != 0))
         && (pSVar4 = (Sprite *)tolua_tousertype(param_1,3,0), bVar1)) {
        pvVar5 = (void *)cocos2d::extension::ControlStepper::create(unaff_x20,pSVar4);
        if (pvVar5 != (void *)0x0) {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.ControlStepper");
          return 1;
        }
        lua_pushnil(param_1);
        return 1;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlStepper_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ControlStepper:create",iVar2 + -1,2);
  }
  return 0;
}

