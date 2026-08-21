
/* lua_cocos2dx_TransitionFade_initWithDuration(lua_State*) */

void lua_cocos2dx_TransitionFade_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  TransitionFade *this;
  ulong uVar5;
  ulong uVar6;
  Scene *pSVar7;
  undefined8 uVar8;
  Color3B aCStack_58 [8];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (TransitionFade *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    uVar5 = luaval_to_number(param_1,2,&local_50,"cc.TransitionFade:initWithDuration");
    if ((((param_1 != (lua_State *)0x0) && ((uVar5 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       ((uVar6 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar6 & 1) != 0 &&
        (pSVar7 = (Scene *)tolua_tousertype(param_1,3,0), (uVar5 & 1) != 0)))) {
      cocos2d::Color3B::Color3B(aCStack_58);
      uVar5 = luaval_to_color3b(param_1,4,aCStack_58,"cc.TransitionFade:initWithDuration");
      if ((uVar5 & 1) != 0) {
        uVar4 = cocos2d::TransitionFade::initWithDuration(this,(float)local_50,pSVar7,aCStack_58);
        goto LAB_0085f73c;
      }
    }
  }
  else if (((iVar2 == 3) &&
           (uVar5 = luaval_to_number(param_1,2,&local_50,"cc.TransitionFade:initWithDuration"),
           param_1 != (lua_State *)0x0)) &&
          (((uVar5 & 1) != 0 &&
           (((iVar3 = lua_gettop(param_1), 2 < iVar3 &&
             (uVar6 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar6 & 1) != 0)) &&
            (pSVar7 = (Scene *)tolua_tousertype(param_1,3,0), (uVar5 & 1) != 0)))))) {
    uVar4 = cocos2d::TransitionFade::initWithDuration(this,(float)local_50,pSVar7);
LAB_0085f73c:
    tolua_pushboolean(param_1,uVar4 & 1);
    uVar8 = 1;
    goto LAB_0085f774;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.TransitionFade:initWithDuration",iVar2 + -1,3);
  uVar8 = 0;
LAB_0085f774:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

