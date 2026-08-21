
/* lua_cocos2dx_Sprite_initWithFile(lua_State*) */

void lua_cocos2dx_Sprite_initWithFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  Rect aRStack_60 [16];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  int iVar8;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Sprite:initWithFile");
    if ((uVar5 & 1) == 0) {
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      goto LAB_00856e04;
    }
    uVar3 = (**(code **)(*plVar4 + 0x620))(plVar4,&local_50);
    tolua_pushboolean(param_1,uVar3 & 1);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
LAB_00856dec:
    uVar6 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Sprite:initWithFile");
      if ((uVar5 & 1) == 0) {
LAB_00856dd0:
        iVar8 = 2;
        iVar7 = 2;
      }
      else {
        cocos2d::Rect::Rect(aRStack_60);
        uVar5 = luaval_to_rect(param_1,3,aRStack_60,"cc.Sprite:initWithFile");
        if ((uVar5 & 1) == 0) goto LAB_00856dd0;
        uVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,&local_50,aRStack_60);
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar8 = 1;
        iVar7 = 1;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
        iVar7 = iVar8;
      }
      if (iVar7 != 2) goto LAB_00856dec;
    }
LAB_00856e04:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite:initWithFile",iVar2 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

