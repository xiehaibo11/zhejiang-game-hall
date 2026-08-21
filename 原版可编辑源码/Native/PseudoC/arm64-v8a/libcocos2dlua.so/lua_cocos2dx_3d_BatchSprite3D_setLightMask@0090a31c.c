
/* lua_cocos2dx_3d_BatchSprite3D_setLightMask(lua_State*) */

undefined8 lua_cocos2dx_3d_BatchSprite3D_setLightMask(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  BatchSprite3D *this;
  ulong uVar3;
  undefined8 uVar4;
  uint local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 0090a290 with catch @ 0090a328 */
                    /* catch() { ... } // from try @ 0090a2a8 with catch @ 0090a32c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (BatchSprite3D *)tolua_tousertype(param_1,1,0);
  if (this == (BatchSprite3D *)0x0) {
    tolua_error(param_1,
                "invalid \'cobj\' in function \'lua_cocos2dx_3d_BatchSprite3D_setLightMask\'",0);
    uVar4 = 0;
  }
  else {
    iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0090a25c with catch @ 0090a35c */
    if (iVar2 + -1 == 1) {
      uVar3 = luaval_to_uint32(param_1,2,&local_3c,"cc.BatchSprite3D:setLightMask");
      if ((uVar3 & 1) != 0) {
        cocos2d::BatchSprite3D::setLightMask(this,local_3c);
        uVar4 = 1;
        lua_settop(param_1,1);
        goto LAB_0090a3f4;
      }
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_BatchSprite3D_setLightMask\'",0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.BatchSprite3D:setLightMask",iVar2 + -1,1);
    }
    uVar4 = 0;
  }
LAB_0090a3f4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

