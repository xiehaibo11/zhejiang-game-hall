
/* lua_cocos2dx_Waves3D_setAmplitudeRate(lua_State*) */

undefined4 lua_cocos2dx_Waves3D_setAmplitudeRate(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.Waves3D:setAmplitudeRate");
    if ((uVar4 & 1) != 0) {
      *(float *)(lVar3 + 0x70) = (float)local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00828570;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Waves3D_setAmplitudeRate\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Waves3D:setAmplitudeRate",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00828570:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

