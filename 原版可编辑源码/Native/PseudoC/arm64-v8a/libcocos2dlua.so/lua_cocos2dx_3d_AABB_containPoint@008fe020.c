
/* lua_cocos2dx_3d_AABB_containPoint(lua_State*) */

void lua_cocos2dx_3d_AABB_containPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  AABB *this;
  ulong uVar4;
  undefined8 uVar5;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (AABB *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_48,"cc.AABB:containPoint");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::AABB::containPoint(this,aVStack_48);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_008fe0cc;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AABB:containPoint",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_008fe0cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

