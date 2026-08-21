
/* lua_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation(lua_State*) */

void lua_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"sp.SkeletonAnimation:setEmptyAnimation");
    uVar5 = luaval_to_number(param_1,3,&local_58,"sp.SkeletonAnimation:setEmptyAnimation");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      spine::SkeletonAnimation::setEmptyAnimation(iVar2,(float)local_58);
      uVar6 = 1;
      goto LAB_009525ac;
    }
    tolua_error(param_1,0x12d1e92,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d1e6b,
               iVar3 + -1,2);
  }
  uVar6 = 0;
LAB_009525ac:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

