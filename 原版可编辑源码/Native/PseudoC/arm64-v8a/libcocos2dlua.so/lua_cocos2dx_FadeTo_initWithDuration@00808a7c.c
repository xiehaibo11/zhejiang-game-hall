
/* lua_cocos2dx_FadeTo_initWithDuration(lua_State*) */

void lua_cocos2dx_FadeTo_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  FadeTo *this;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uchar local_54 [4];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (FadeTo *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.FadeTo:initWithDuration");
    uVar5 = luaval_to_uint16(param_1,3,(ushort *)local_54,"cc.FadeTo:initWithDuration");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = cocos2d::FadeTo::initWithDuration(this,(float)local_50,local_54[0]);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00808b64;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FadeTo_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FadeTo:initWithDuration",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00808b64:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

