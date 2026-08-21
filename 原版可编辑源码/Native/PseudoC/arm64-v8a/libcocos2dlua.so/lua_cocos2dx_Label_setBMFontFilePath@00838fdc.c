
/* lua_cocos2dx_Label_setBMFontFilePath(lua_State*) */

undefined4 lua_cocos2dx_Label_setBMFontFilePath(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  double local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = 0;
    local_60 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Label:setBMFontFilePath");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_68,"cc.Label:setBMFontFilePath");
    uVar5 = luaval_to_number(param_1,4,&local_70,"cc.Label:setBMFontFilePath");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      uVar3 = (**(code **)(*plVar6 + 0x540))((float)local_70,plVar6,&local_60,&local_68);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00839188;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_setBMFontFilePath\'",0);
LAB_00839204:
    uVar8 = 0;
  }
  else {
    if (iVar2 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_68 = 0;
      local_60 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Label:setBMFontFilePath")
      ;
      uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_68,"cc.Label:setBMFontFilePath");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_setBMFontFilePath\'"
                    ,0);
        goto LAB_00839204;
      }
      uVar3 = (**(code **)(*plVar6 + 0x540))(0,plVar6,&local_60,&local_68);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "cc.Label:setBMFontFilePath",iVar2 + -1,1);
        uVar8 = 0;
        goto LAB_00839218;
      }
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Label:setBMFontFilePath")
      ;
      if ((uVar7 & 1) == 0) {
        tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_setBMFontFilePath\'"
                    ,0);
        goto LAB_00839204;
      }
      uVar3 = (**(code **)(*plVar6 + 0x540))(0,plVar6,&local_60,&cocos2d::Vec2::ZERO);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
LAB_00839188:
    uVar8 = 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00839218:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

