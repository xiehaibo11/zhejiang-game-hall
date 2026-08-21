
/* lua_cocos2dx_3d_BatchSprite3D_setTransparentEnable(lua_State*) */

undefined8 lua_cocos2dx_3d_BatchSprite3D_setTransparentEnable(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  BatchSprite3D *this;
  ulong uVar3;
  undefined8 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (BatchSprite3D *)tolua_tousertype(param_1,1,0);
  if (this == (BatchSprite3D *)0x0) {
                    /* try { // try from 0090a5d0 to 00a0a603 has its CatchHandler @ 0090a6d0 */
    tolua_error(param_1,
                "invalid \'cobj\' in function \'lua_cocos2dx_3d_BatchSprite3D_setTransparentEnable\'"
                ,0);
    uVar4 = 0;
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 1) {
      uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.BatchSprite3D:setTransparentEnable");
      if ((uVar3 & 1) != 0) {
        cocos2d::BatchSprite3D::setTransparentEnable(this,local_3c[0]);
        uVar4 = 1;
        lua_settop(param_1,1);
        goto LAB_0090a614;
      }
                    /* try { // try from 0090a604 to 00a0a617 has its CatchHandler @ 0090a69c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_BatchSprite3D_setTransparentEnable\'"
                  ,0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.BatchSprite3D:setTransparentEnable",iVar2 + -1,1);
    }
    uVar4 = 0;
  }
LAB_0090a614:
                    /* try { // try from 0090a61c to 00a0a64f has its CatchHandler @ 0090a6a0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

