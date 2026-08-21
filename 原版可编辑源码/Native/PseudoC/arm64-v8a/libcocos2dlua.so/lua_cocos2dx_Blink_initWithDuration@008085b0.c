
/* lua_cocos2dx_Blink_initWithDuration(lua_State*) */

void lua_cocos2dx_Blink_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Blink *this;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Blink *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.Blink:initWithDuration");
    uVar5 = luaval_to_int32(param_1,3,&local_54,"cc.Blink:initWithDuration");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = cocos2d::Blink::initWithDuration(this,(float)local_50,local_54);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00808698;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Blink_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Blink:initWithDuration",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00808698:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

