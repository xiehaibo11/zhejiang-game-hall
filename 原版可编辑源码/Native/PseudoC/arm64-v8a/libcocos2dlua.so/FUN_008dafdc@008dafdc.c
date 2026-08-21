
undefined8 FUN_008dafdc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"fairygui.GObject:removeRelation");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"fairygui.GObject:removeRelation");
      if ((uVar4 & 1) != 0) {
        fairygui::GObject::removeRelation(uVar3,uVar5,local_3c);
        goto LAB_008db0e4;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_removeRelation\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:removeRelation",iVar2 + -1,2);
  }
LAB_008db0e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

