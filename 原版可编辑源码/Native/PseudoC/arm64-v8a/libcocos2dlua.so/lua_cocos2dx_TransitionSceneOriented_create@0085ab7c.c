
/* lua_cocos2dx_TransitionSceneOriented_create(lua_State*) */

void lua_cocos2dx_TransitionSceneOriented_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  int local_44;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.TransitionSceneOriented:create");
    if (param_1 == (lua_State *)0x0) {
LAB_0085ac8c:
      luaval_to_int32(param_1,4,&local_44,"cc.TransitionSceneOriented:create");
    }
    else {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar5 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar5 & 1) == 0))
      goto LAB_0085ac8c;
      uVar6 = tolua_tousertype(param_1,3,0);
      uVar4 = luaval_to_int32(param_1,4,&local_44,"cc.TransitionSceneOriented:create");
      if ((uVar3 & uVar4 & 1) != 0) {
        pvVar7 = (void *)cocos2d::TransitionSceneOriented::create((float)local_40,uVar6,local_44);
        if (pvVar7 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar6 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                     "cc.TransitionSceneOriented");
          uVar6 = 1;
        }
        goto LAB_0085acbc;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TransitionSceneOriented_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.TransitionSceneOriented:create",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_0085acbc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

