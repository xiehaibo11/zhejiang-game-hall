
/* lua_cocos2dx_studio_ScaleFrame_setScaleX(lua_State*) */

undefined4 lua_cocos2dx_studio_ScaleFrame_setScaleX(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00942484 with catch @ 00942538 */
                    /* catch() { ... } // from try @ 00942444 with catch @ 0094253c
                       catch() { ... } // from try @ 009424c8 with catch @ 0094253c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"ccs.ScaleFrame:setScaleX");
    if ((uVar4 & 1) != 0) {
      *(float *)(lVar3 + 0x58) = (float)local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009425e8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ScaleFrame_setScaleX\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ScaleFrame:setScaleX",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009425e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

