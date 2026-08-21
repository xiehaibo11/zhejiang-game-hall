
/* lua_cocos2dx_3d_Mesh_setVisible(lua_State*) */

undefined4 lua_cocos2dx_3d_Mesh_setVisible(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Mesh *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.Mesh:setVisible");
    if ((uVar3 & 1) != 0) {
      cocos2d::Mesh::setVisible(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00903efc;
    }
                    /* try { // try from 00903ee8 to 00a03f33 has its CatchHandler @ 00903ee8
                       catch() { ... } // from try @ 00903ee8 with catch @ 00903ee8
                       catch() { ... } // from try @ 00903f38 with catch @ 00903ee8 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Mesh_setVisible\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:setVisible",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00903efc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

