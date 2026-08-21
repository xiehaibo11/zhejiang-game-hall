
/* lua_cocos2dx_studio_ActionTimelineData_create(lua_State*) */

void lua_cocos2dx_studio_ActionTimelineData_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_2c,"ccs.ActionTimelineData:create");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocostudio::timeline::ActionTimelineData::create(local_2c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccs.ActionTimelineData");
        uVar5 = 1;
      }
      goto LAB_00946dd4;
    }
    tolua_error(param_1,&DAT_012cf907,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ActionTimelineData:create",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00946dd4:
                    /* try { // try from 00946de0 to 00a46df7 has its CatchHandler @ 00946f00 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

