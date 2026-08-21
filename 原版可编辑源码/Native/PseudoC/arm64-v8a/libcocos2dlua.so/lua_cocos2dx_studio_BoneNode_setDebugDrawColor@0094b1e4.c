
/* lua_cocos2dx_studio_BoneNode_setDebugDrawColor(lua_State*) */

undefined4 lua_cocos2dx_studio_BoneNode_setDebugDrawColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  Color4F aCStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4F::Color4F(aCStack_48);
    uVar4 = luaval_to_color4f(param_1,2,aCStack_48,"ccs.BoneNode:setDebugDrawColor");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x5c0))(plVar3,aCStack_48);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0094b2b0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_BoneNode_setDebugDrawColor\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.BoneNode:setDebugDrawColor",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0094b2b0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

