
/* lua_cocos2dx_3d_Ray_set(lua_State*) */

undefined8 lua_cocos2dx_3d_Ray_set(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Ray *this;
  ulong uVar3;
  ulong uVar4;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Ray *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Vec3::Vec3(aVStack_58);
    cocos2d::Vec3::Vec3(aVStack_68);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_58,"cc.Ray:set");
    uVar4 = luaval_to_vec3(param_1,3,aVStack_68,"cc.Ray:set");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::Ray::set(this,aVStack_58,aVStack_68);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Ray:set",
               iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

