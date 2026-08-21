
/* lua_cocos2dx_3d_AABB_updateMinMax(lua_State*) */

undefined8 lua_cocos2dx_3d_AABB_updateMinMax(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  AABB *this;
  ulong uVar3;
  Vec3 *pVVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (AABB *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Vec3",0), (uVar3 & 1) == 0)) {
      luaval_to_ssize(param_1,3,&local_40,"cc.AABB:updateMinMax");
    }
    else {
      pVVar4 = (Vec3 *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_ssize(param_1,3,&local_40,"cc.AABB:updateMinMax");
      if ((uVar3 & 1) != 0) {
        cocos2d::AABB::updateMinMax(this,pVVar4,local_40);
      }
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AABB:updateMinMax",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

