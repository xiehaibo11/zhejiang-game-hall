
/* lua_cocos2dx_ActionFloat_initWithDuration(lua_State*) */

undefined4 lua_cocos2dx_ActionFloat_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  double local_d8;
  double local_d0;
  double dStack_c8;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 4) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionFloat:initWithDuration",iVar2 + -1,4);
    uVar8 = 0;
    goto LAB_0080b5b0;
  }
  local_70 = (long *)0x0;
  uVar3 = luaval_to_number(param_1,2,&dStack_c8,"cc.ActionFloat:initWithDuration");
  uVar4 = luaval_to_number(param_1,3,&local_d0,"cc.ActionFloat:initWithDuration");
  uVar5 = luaval_to_number(param_1,4,&local_d8,"cc.ActionFloat:initWithDuration");
  if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ActionFloat_initWithDuration\'",0);
    uVar8 = 0;
  }
  else {
    if (local_70 == (long *)0x0) {
      local_a0 = (long *)0x0;
    }
    else if (alStack_90 == local_70) {
      local_a0 = alStack_c0;
      (**(code **)(*local_70 + 0x18))(local_70,alStack_c0);
    }
    else {
      local_a0 = (long *)(**(code **)(*local_70 + 0x10))();
    }
    uVar3 = cocos2d::ActionFloat::initWithDuration
                      ((ActionFloat *)(float)dStack_c8,(float)local_d0,(float)local_d8,uVar6,
                       alStack_c0);
    if (alStack_c0 == local_a0) {
      pcVar7 = *(code **)(*local_a0 + 0x20);
LAB_0080b570:
      (*pcVar7)();
    }
    else if (local_a0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_a0 + 0x28);
      goto LAB_0080b570;
    }
    tolua_pushboolean(param_1,uVar3 & 1);
    uVar8 = 1;
  }
  if (alStack_90 == local_70) {
    pcVar7 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0080b5b0;
    pcVar7 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar7)();
LAB_0080b5b0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

