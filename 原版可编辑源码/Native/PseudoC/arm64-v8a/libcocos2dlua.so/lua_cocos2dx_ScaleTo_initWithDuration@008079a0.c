
/* lua_cocos2dx_ScaleTo_initWithDuration(lua_State*) */

void lua_cocos2dx_ScaleTo_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ScaleTo *this;
  ulong uVar4;
  undefined8 uVar5;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScaleTo *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_number(param_1,2,&dStack_40,"cc.ScaleTo:initWithDuration");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_number(param_1,3,&local_48,"cc.ScaleTo:initWithDuration"),
       (uVar4 & 1) != 0)) {
      uVar3 = cocos2d::ScaleTo::initWithDuration(this,(float)dStack_40,(float)local_48);
LAB_00807b64:
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_00807ba8;
    }
  }
  else if (iVar2 == 5) {
    uVar4 = luaval_to_number(param_1,2,&dStack_40,"cc.ScaleTo:initWithDuration");
    if (((((uVar4 & 1) != 0) &&
         (uVar4 = luaval_to_number(param_1,3,&local_48,"cc.ScaleTo:initWithDuration"),
         (uVar4 & 1) != 0)) &&
        (uVar4 = luaval_to_number(param_1,4,&local_50,"cc.ScaleTo:initWithDuration"),
        (uVar4 & 1) != 0)) &&
       (uVar4 = luaval_to_number(param_1,5,&local_58,"cc.ScaleTo:initWithDuration"),
       (uVar4 & 1) != 0)) {
      uVar3 = cocos2d::ScaleTo::initWithDuration
                        (this,(float)dStack_40,(float)local_48,(float)local_50,(float)local_58);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_00807ba8;
    }
  }
  else if (((iVar2 == 4) &&
           (uVar4 = luaval_to_number(param_1,2,&dStack_40,"cc.ScaleTo:initWithDuration"),
           (uVar4 & 1) != 0)) &&
          ((uVar4 = luaval_to_number(param_1,3,&local_48,"cc.ScaleTo:initWithDuration"),
           (uVar4 & 1) != 0 &&
           (uVar4 = luaval_to_number(param_1,4,&local_50,"cc.ScaleTo:initWithDuration"),
           (uVar4 & 1) != 0)))) {
    uVar3 = cocos2d::ScaleTo::initWithDuration
                      (this,(float)dStack_40,(float)local_48,(float)local_50);
    goto LAB_00807b64;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.ScaleTo:initWithDuration",iVar2 + -1,4);
  uVar5 = 0;
LAB_00807ba8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

