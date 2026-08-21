
/* lua_cocos2dx_3d_Mesh_setForce2DQueue(lua_State*) */

undefined4 lua_cocos2dx_3d_Mesh_setForce2DQueue(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00903ab4 with catch @ 00903b4c */
                    /* catch() { ... } // from try @ 00903acc with catch @ 00903b50 */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 00903a80 with catch @ 00903b80 */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"cc.Mesh:setForce2DQueue");
    if ((uVar4 & 1) != 0) {
      *(bool *)(lVar3 + 0x4a) = local_3c[0];
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00903be4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Mesh_setForce2DQueue\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:setForce2DQueue",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00903be4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

