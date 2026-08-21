
/* lua_cocos2dx_Label_setCharMap(lua_State*) */

void lua_cocos2dx_Label_setCharMap(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int local_6c;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_68,"cc.Label:setCharMap");
    if ((uVar6 & 1) != 0) {
      uVar4 = (**(code **)(*plVar5 + 0x558))(plVar5,&local_68);
      tolua_pushboolean(param_1,uVar4 & 1);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
LAB_0083a8f0:
      uVar7 = 1;
      goto LAB_0083a92c;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else if (iVar2 == 5) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar6 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,2,0);
      uVar6 = luaval_to_int32(param_1,3,(int *)&local_68,"cc.Label:setCharMap");
      if ((((uVar6 & 1) != 0) &&
          (uVar6 = luaval_to_int32(param_1,4,&iStack_4c,"cc.Label:setCharMap"), (uVar6 & 1) != 0))
         && (uVar6 = luaval_to_int32(param_1,5,&local_50,"cc.Label:setCharMap"), (uVar6 & 1) != 0))
      {
        uVar4 = (**(code **)(*plVar5 + 0x550))
                          (plVar5,uVar7,local_68 & 0xffffffff,iStack_4c,local_50);
        tolua_pushboolean(param_1,uVar4 & 1);
        uVar7 = 1;
        goto LAB_0083a92c;
      }
    }
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_68,"cc.Label:setCharMap");
    if ((((uVar6 & 1) == 0) ||
        (uVar6 = luaval_to_int32(param_1,3,&iStack_4c,"cc.Label:setCharMap"), (uVar6 & 1) == 0)) ||
       ((uVar6 = luaval_to_int32(param_1,4,&local_50,"cc.Label:setCharMap"), (uVar6 & 1) == 0 ||
        (uVar6 = luaval_to_int32(param_1,5,&local_6c,"cc.Label:setCharMap"), (uVar6 & 1) == 0)))) {
      iVar8 = 4;
      iVar3 = 4;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x548))(plVar5,&local_68,iStack_4c,local_50,local_6c);
      tolua_pushboolean(param_1,uVar4 & 1);
      iVar8 = 1;
      iVar3 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
      iVar3 = iVar8;
    }
    if (iVar3 != 4) goto LAB_0083a8f0;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Label:setCharMap",iVar2 + -1,1);
  uVar7 = 0;
LAB_0083a92c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

