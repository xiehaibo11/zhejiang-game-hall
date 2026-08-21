
/* lua_cocos2dx_Timer_setupTimerWithInterval(lua_State*) */

undefined4 lua_cocos2dx_Timer_setupTimerWithInterval(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Timer *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  double local_60;
  uint local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Timer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_50,"cc.Timer:setupTimerWithInterval");
    uVar4 = luaval_to_uint32(param_1,3,&local_54,"cc.Timer:setupTimerWithInterval");
    uVar5 = luaval_to_number(param_1,4,&local_60,"cc.Timer:setupTimerWithInterval");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      cocos2d::Timer::setupTimerWithInterval(this,(float)local_50,local_54,(float)local_60);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_007f5f60;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_Timer_setupTimerWithInterval\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Timer:setupTimerWithInterval",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_007f5f60:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

