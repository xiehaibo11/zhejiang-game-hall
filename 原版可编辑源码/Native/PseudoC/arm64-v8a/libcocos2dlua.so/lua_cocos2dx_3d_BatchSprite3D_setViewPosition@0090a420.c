
/* lua_cocos2dx_3d_BatchSprite3D_setViewPosition(lua_State*) */

undefined8 lua_cocos2dx_3d_BatchSprite3D_setViewPosition(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  if (lVar3 == 0) {
    tolua_error(param_1,
                "invalid \'cobj\' in function \'lua_cocos2dx_3d_BatchSprite3D_setViewPosition\'",0);
    uVar5 = 0;
  }
  else {
    iVar2 = lua_gettop(param_1);
                    /* try { // try from 0090a464 to 00a0a4af has its CatchHandler @ 0090a464
                       catch() { ... } // from try @ 0090a464 with catch @ 0090a464
                       catch() { ... } // from try @ 0090a4b4 with catch @ 0090a464 */
    if (iVar2 + -1 == 1) {
      cocos2d::Vec3::Vec3((Vec3 *)&local_48);
      uVar4 = luaval_to_vec3(param_1,2,(Vec3 *)&local_48,"cc.BatchSprite3D:setViewPosition");
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(lVar3 + 0x338);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x294) = local_48;
          *(undefined4 *)(lVar3 + 0x29c) = local_40;
        }
                    /* try { // try from 0090a4b0 to 00a0a4b3 has its CatchHandler @ 0090a504 */
                    /* try { // try from 0090a4b4 to 00a0a517 has its CatchHandler @ 0090a464 */
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_0090a510;
      }
                    /* catch() { ... } // from try @ 0090a4b0 with catch @ 0090a504 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_BatchSprite3D_setViewPosition\'",
                  0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.BatchSprite3D:setViewPosition",iVar2 + -1,1);
    }
    uVar5 = 0;
  }
LAB_0090a510:
                    /* try { // try from 0090a518 to 00a0a5cf has its CatchHandler @ 0090a518
                       catch() { ... } // from try @ 0090a518 with catch @ 0090a518
                       catch() { ... } // from try @ 0090a650 with catch @ 0090a518 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

