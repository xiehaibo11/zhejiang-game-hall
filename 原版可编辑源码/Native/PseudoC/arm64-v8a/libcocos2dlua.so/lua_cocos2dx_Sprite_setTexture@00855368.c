
/* lua_cocos2dx_Sprite_setTexture(lua_State*) */

undefined4 lua_cocos2dx_Sprite_setTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar4 + 0x548))(plVar4,uVar6);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_008554a8;
    }
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"cc.Sprite:setTexture");
    if ((uVar5 & 1) != 0) {
      (**(code **)(*plVar4 + 0x540))(plVar4,local_50);
      lua_settop(param_1,1);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar7 = 1;
      goto LAB_008554a8;
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Sprite:setTexture",iVar2 + -1,1);
  uVar7 = 0;
LAB_008554a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

