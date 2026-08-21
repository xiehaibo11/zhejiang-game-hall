
/* lua_cocos2dx_SplitCols_initWithDuration(lua_State*) */

void lua_cocos2dx_SplitCols_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  SplitCols *this;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (SplitCols *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.SplitCols:initWithDuration");
    uVar5 = luaval_to_uint32(param_1,3,&local_54,"cc.SplitCols:initWithDuration");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = cocos2d::SplitCols::initWithDuration(this,(float)local_50,local_54);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00833564;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_SplitCols_initWithDuration\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SplitCols:initWithDuration",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00833564:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

