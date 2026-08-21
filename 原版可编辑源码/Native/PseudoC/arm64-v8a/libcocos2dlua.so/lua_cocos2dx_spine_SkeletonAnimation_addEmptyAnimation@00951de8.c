
/* lua_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation(lua_State*) */

void lua_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  double local_60;
  int local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00951d84 with catch @ 00951e1c */
                    /* catch() { ... } // from try @ 00951d9c with catch @ 00951e20 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 4) {
    uVar4 = luaval_to_int32(param_1,2,&local_54,"sp.SkeletonAnimation:addEmptyAnimation");
    uVar5 = luaval_to_number(param_1,3,&local_50,"sp.SkeletonAnimation:addEmptyAnimation");
    uVar6 = luaval_to_number(param_1,4,&local_60,"sp.SkeletonAnimation:addEmptyAnimation");
    if ((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) {
LAB_00951f04:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation\'"
                  ,0);
      goto LAB_00951f3c;
    }
    fVar8 = (float)local_60;
  }
  else {
    if (iVar3 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "sp.SkeletonAnimation:addEmptyAnimation",iVar3 + -1,2);
LAB_00951f3c:
      uVar7 = 0;
      goto LAB_00951f40;
    }
                    /* catch() { ... } // from try @ 00951d50 with catch @ 00951e50 */
    uVar4 = luaval_to_int32(param_1,2,(int *)&local_60,"sp.SkeletonAnimation:addEmptyAnimation");
    uVar5 = luaval_to_number(param_1,3,&local_50,"sp.SkeletonAnimation:addEmptyAnimation");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) goto LAB_00951f04;
    fVar8 = 0.0;
  }
  spine::SkeletonAnimation::addEmptyAnimation(iVar2,(float)local_50,fVar8);
  uVar7 = 1;
LAB_00951f40:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

