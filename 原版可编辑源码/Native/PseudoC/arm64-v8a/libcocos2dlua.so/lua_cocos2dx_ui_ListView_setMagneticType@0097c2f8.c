
/* lua_cocos2dx_ui_ListView_setMagneticType(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_setMagneticType(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *pLVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pLVar3 = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.ListView:setMagneticType");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::ListView::setMagneticType(pLVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0097c3b4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ListView_setMagneticType\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:setMagneticType",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0097c3b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

