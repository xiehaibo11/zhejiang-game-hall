
/* lua_cocos2dx_MoveTo_initWithDuration(lua_State*) */

void lua_cocos2dx_MoveTo_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  MoveTo *this;
  ulong uVar4;
  undefined8 uVar5;
  double local_50 [2];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (MoveTo *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.MoveTo:initWithDuration");
    if ((uVar4 & 1) != 0) {
      cocos2d::Vec3::Vec3((Vec3 *)local_50);
      uVar4 = luaval_to_vec3(param_1,3,(Vec3 *)local_50,"cc.MoveTo:initWithDuration");
      if ((uVar4 & 1) == 0) goto LAB_00805908;
      uVar3 = cocos2d::MoveTo::initWithDuration(this,(float)local_40,(Vec3 *)local_50);
LAB_00805958:
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_00805990;
    }
LAB_00805908:
    uVar4 = luaval_to_number(param_1,2,local_50,"cc.MoveTo:initWithDuration");
    if ((uVar4 & 1) != 0) {
      local_40 = 0.0;
      uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_40,"cc.MoveTo:initWithDuration");
      if ((uVar4 & 1) != 0) {
        uVar3 = cocos2d::MoveTo::initWithDuration(this,(float)local_50[0],(Vec2 *)&local_40);
        goto LAB_00805958;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.MoveTo:initWithDuration",iVar2 + -1,2);
  uVar5 = 0;
LAB_00805990:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

