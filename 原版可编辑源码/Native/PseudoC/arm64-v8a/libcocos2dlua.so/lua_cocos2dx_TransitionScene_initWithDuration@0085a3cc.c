
/* lua_cocos2dx_TransitionScene_initWithDuration(lua_State*) */

void lua_cocos2dx_TransitionScene_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  TransitionScene *this;
  ulong uVar4;
  ulong uVar5;
  Scene *pSVar6;
  undefined8 uVar7;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TransitionScene *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.TransitionScene:initWithDuration");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar5 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar5 & 1) != 0)) &&
       (pSVar6 = (Scene *)tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) {
      uVar3 = cocos2d::TransitionScene::initWithDuration(this,(float)local_40,pSVar6);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar7 = 1;
      goto LAB_0085a4d4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TransitionScene_initWithDuration\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TransitionScene:initWithDuration",iVar2 + -1,2);
  }
  uVar7 = 0;
LAB_0085a4d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

