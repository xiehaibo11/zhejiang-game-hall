
/* lua_cocos2dx_3d_Sprite3D_setCullFace(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3D_setCullFace(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Sprite3D *this;
  ulong uVar3;
  undefined4 uVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"cc.Sprite3D:setCullFace");
    if ((uVar3 & 1) != 0) {
      cocos2d::Sprite3D::setCullFace(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00905cd8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Sprite3D_setCullFace\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:setCullFace",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00905cd8:
                    /* try { // try from 00905ce4 to 00a05d17 has its CatchHandler @ 00905de4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

