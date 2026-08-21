
/* lua_cocos2dx_TransitionFlipY_create(lua_State*) */

void lua_cocos2dx_TransitionFlipY_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Scene *pSVar6;
  void *pvVar7;
  undefined8 uVar8;
  int local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.TransitionFlipY:create");
    if ((((param_1 == (lua_State *)0x0) || ((uVar4 & 1) == 0)) ||
        (iVar3 = lua_gettop(param_1), iVar3 < 3)) ||
       (((uVar5 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar5 & 1) == 0 ||
         (uVar8 = tolua_tousertype(param_1,3,0), (uVar4 & 1) == 0)) ||
        (uVar4 = luaval_to_int32(param_1,4,&local_54,"cc.TransitionFlipY:create"), (uVar4 & 1) == 0)
        ))) goto LAB_0085e20c;
    pvVar7 = (void *)cocos2d::TransitionFlipY::create((float)local_50,uVar8,local_54);
  }
  else {
    if (((iVar2 != 3) ||
        (uVar4 = luaval_to_number(param_1,2,&local_50,"cc.TransitionFlipY:create"),
        param_1 == (lua_State *)0x0)) ||
       (((uVar4 & 1) == 0 ||
        (((iVar3 = lua_gettop(param_1), iVar3 < 3 ||
          (uVar5 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar5 & 1) == 0)) ||
         (pSVar6 = (Scene *)tolua_tousertype(param_1,3,0), (uVar4 & 1) == 0)))))) {
LAB_0085e20c:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                 "cc.TransitionFlipY:create",iVar2 + -1,3);
      uVar8 = 0;
      goto LAB_0085e230;
    }
    pvVar7 = (void *)cocos2d::TransitionFlipY::create((float)local_50,pSVar6);
  }
  if (pvVar7 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar8 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
               "cc.TransitionFlipY");
    uVar8 = 1;
  }
LAB_0085e230:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

