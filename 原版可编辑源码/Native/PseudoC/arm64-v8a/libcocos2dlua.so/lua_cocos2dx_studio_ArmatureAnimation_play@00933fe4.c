
/* lua_cocos2dx_studio_ArmatureAnimation_play(lua_State*) */

undefined4 lua_cocos2dx_studio_ArmatureAnimation_play(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  int local_68;
  int local_64;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0093400c to 00a34023 has its CatchHandler @ 009340b0 */
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00934024 to 00a34057 has its CatchHandler @ 00933f34 */
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.ArmatureAnimation:play");
    uVar4 = luaval_to_int32(param_1,3,&local_64,"ccs.ArmatureAnimation:play");
    uVar5 = luaval_to_int32(param_1,4,&local_68,"ccs.ArmatureAnimation:play");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      (**(code **)(*plVar6 + 0xd0))(plVar6,&local_60,local_64,local_68);
      lua_settop(param_1,1);
      goto LAB_00934190;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ArmatureAnimation_play\'",0);
LAB_00934208:
    uVar8 = 0;
  }
  else {
    if (iVar2 == 3) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.ArmatureAnimation:play")
      ;
                    /* catch() { ... } // from try @ 0093400c with catch @ 009340b0 */
                    /* catch() { ... } // from try @ 00933f88 with catch @ 009340b4
                       catch() { ... } // from try @ 00934058 with catch @ 009340b4 */
      uVar4 = luaval_to_int32(param_1,3,&local_64,"ccs.ArmatureAnimation:play");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_studio_ArmatureAnimation_play\'",0
                   );
        goto LAB_00934208;
      }
      (**(code **)(*plVar6 + 0xd0))(plVar6,&local_60,local_64,0xffffffff);
      lua_settop(param_1,1);
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "ccs.ArmatureAnimation:play",iVar2 + -1,1);
        uVar8 = 0;
        goto LAB_0093421c;
      }
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
                    /* try { // try from 00934058 to 00a3406b has its CatchHandler @ 009340b4 */
      uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.ArmatureAnimation:play")
      ;
      if ((uVar7 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_studio_ArmatureAnimation_play\'",0
                   );
        goto LAB_00934208;
      }
                    /* try { // try from 0093406c to 00a340cf has its CatchHandler @ 00933f34 */
      (**(code **)(*plVar6 + 0xd0))(plVar6,&local_60,0xffffffff,0xffffffff);
      lua_settop(param_1,1);
    }
LAB_00934190:
    uVar8 = 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0093421c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

