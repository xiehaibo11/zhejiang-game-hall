
/* lua_cocos2dx_3d_Ray_transform(lua_State*) */

undefined8 lua_cocos2dx_3d_Ray_transform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Ray *this;
  ulong uVar3;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Ray *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Ray:transform");
    if ((uVar3 & 1) != 0) {
      cocos2d::Ray::transform(this,aMStack_78);
    }
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Ray:transform",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

