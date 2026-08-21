
/* lua_cocos2dx_SkewBy_initWithDuration(lua_State*) */

void lua_cocos2dx_SkewBy_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  SkewBy *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double local_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (SkewBy *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.SkewBy:initWithDuration");
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.SkewBy:initWithDuration");
    uVar6 = luaval_to_number(param_1,4,&local_60,"cc.SkewBy:initWithDuration");
    if ((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      uVar3 = cocos2d::SkewBy::initWithDuration
                        (this,(float)dStack_50,(float)local_58,(float)local_60);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar7 = 1;
      goto LAB_0080640c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_SkewBy_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SkewBy:initWithDuration",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_0080640c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

