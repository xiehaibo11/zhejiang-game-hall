
/* lua_cocos2dx_3d_Sprite3D_genMaterial(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3D_genMaterial(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Sprite3D *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009066fc with catch @ 009067fc */
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.Sprite3D:genMaterial");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Sprite3D_genMaterial\'",0
                 );
      goto LAB_009068a8;
    }
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Sprite3D:genMaterial",iVar2 + -1,0);
LAB_009068a8:
      uVar4 = 0;
      goto LAB_009068ac;
    }
    local_3c[0] = false;
  }
  cocos2d::Sprite3D::genMaterial(this,local_3c[0]);
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_009068ac:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

