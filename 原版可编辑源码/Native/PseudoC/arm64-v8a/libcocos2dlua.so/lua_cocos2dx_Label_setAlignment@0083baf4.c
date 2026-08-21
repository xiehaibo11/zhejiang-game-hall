
/* lua_cocos2dx_Label_setAlignment(lua_State*) */

undefined4 lua_cocos2dx_Label_setAlignment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Label *pLVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_40;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pLVar3 = (Label *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Label:setAlignment");
    if ((uVar4 & 1) == 0) goto LAB_0083bbc4;
    local_40 = *(int *)(pLVar3 + 0x454);
  }
  else if (((iVar2 != 3) ||
           (uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Label:setAlignment"), (uVar4 & 1) == 0))
          || (uVar4 = luaval_to_int32(param_1,3,&local_40,"cc.Label:setAlignment"), (uVar4 & 1) == 0
             )) {
LAB_0083bbc4:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Label:setAlignment",iVar2 + -1,1);
    uVar5 = 0;
    goto LAB_0083bbe8;
  }
  cocos2d::Label::setAlignment(pLVar3,local_3c,local_40);
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_0083bbe8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

