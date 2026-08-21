
/* lua_cocos2dx_Repeat_initWithAction(lua_State*) */

void lua_cocos2dx_Repeat_initWithAction(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Repeat *this;
  ulong uVar4;
  FiniteTimeAction *pFVar5;
  undefined8 uVar6;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Repeat *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.FiniteTimeAction",0), (uVar4 & 1) == 0)) {
      luaval_to_uint32(param_1,3,&local_3c,"cc.Repeat:initWithAction");
    }
    else {
      pFVar5 = (FiniteTimeAction *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_uint32(param_1,3,&local_3c,"cc.Repeat:initWithAction");
      if ((uVar4 & 1) != 0) {
        uVar3 = cocos2d::Repeat::initWithAction(this,pFVar5,local_3c);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_008036c4;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Repeat_initWithAction\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Repeat:initWithAction",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_008036c4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

