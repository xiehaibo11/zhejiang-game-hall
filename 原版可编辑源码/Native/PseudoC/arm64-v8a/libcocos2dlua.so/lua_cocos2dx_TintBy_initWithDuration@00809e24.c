
/* lua_cocos2dx_TintBy_initWithDuration(lua_State*) */

void lua_cocos2dx_TintBy_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  TintBy *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  short local_6c [2];
  short local_68 [2];
  short asStack_64 [2];
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (TintBy *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    uVar4 = luaval_to_number(param_1,2,&local_60,"cc.TintBy:initWithDuration");
    uVar5 = luaval_to_int32(param_1,3,(int *)asStack_64,"cc.TintBy:initWithDuration");
    uVar6 = luaval_to_int32(param_1,4,(int *)local_68,"cc.TintBy:initWithDuration");
    uVar7 = luaval_to_int32(param_1,5,(int *)local_6c,"cc.TintBy:initWithDuration");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      uVar3 = cocos2d::TintBy::initWithDuration
                        (this,(float)local_60,asStack_64[0],local_68[0],local_6c[0]);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar8 = 1;
      goto LAB_00809f4c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TintBy_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TintBy:initWithDuration",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_00809f4c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

