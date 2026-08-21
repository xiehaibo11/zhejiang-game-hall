
/* lua_cocos2dx_Label_getShadowColor(lua_State*) */

void lua_cocos2dx_Label_getShadowColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    uStack_48 = *(undefined8 *)(lVar3 + 0x620);
    local_50 = *(undefined8 *)(lVar3 + 0x618);
    color4f_to_luaval(param_1,(Color4F *)&local_50);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Label:getShadowColor",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

