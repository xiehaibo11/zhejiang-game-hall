
/* lua_cocos2dx_ui_TextField_setCursorFromPoint(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setCursorFromPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *this;
  ulong uVar3;
  ulong uVar4;
  Camera *pCVar5;
  undefined4 uVar6;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccui.TextField:setCursorFromPoint");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar4 = luaval_is_usertype(param_1,3,"cc.Camera",0), (uVar4 & 1) != 0)) &&
       (pCVar5 = (Camera *)tolua_tousertype(param_1,3,0), (uVar3 & 1) != 0)) {
      cocos2d::ui::TextField::setCursorFromPoint(this,(Vec2 *)&local_40,pCVar5);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00981fc4;
    }
    tolua_error(param_1,&DAT_012dcf21,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setCursorFromPoint",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00981fc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

