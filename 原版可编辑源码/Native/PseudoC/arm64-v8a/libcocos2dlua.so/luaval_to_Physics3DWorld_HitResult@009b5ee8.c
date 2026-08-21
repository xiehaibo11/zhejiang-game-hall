
/* luaval_to_Physics3DWorld_HitResult(lua_State*, int, cocos2d::Physics3DWorld::HitResult*, char
   const*) */

void luaval_to_Physics3DWorld_HitResult
               (lua_State *param_1,int param_2,HitResult *param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (HitResult *)0x0)) {
                    /* catch() { ... } // from try @ 009b5e84 with catch @ 009b5f28 */
                    /* catch() { ... } // from try @ 009b5e24 with catch @ 009b5f2c */
    iVar2 = tolua_istable(param_1,param_2,0,auStack_48);
    if (iVar2 != 0) {
      lua_pushstring(param_1,"hitPosition");
                    /* try { // try from 009b5f48 to 00ab6027 has its CatchHandler @ 009b5f48
                       catch() { ... } // from try @ 009b5f48 with catch @ 009b5f48
                       catch() { ... } // from try @ 009b6030 with catch @ 009b5f48
                       catch() { ... } // from try @ 009b6178 with catch @ 009b5f48
                       catch() { ... } // from try @ 009b6194 with catch @ 009b5f48 */
      lua_gettable(param_1,param_2);
      iVar2 = lua_type(param_1,0xffffffff);
      if (iVar2 == 5) {
        iVar2 = lua_gettop(param_1);
        luaval_to_vec3(param_1,iVar2,(Vec3 *)param_3,"");
      }
      else {
        cocos2d::Vec3::Vec3((Vec3 *)&local_58);
        *(undefined4 *)(param_3 + 8) = local_50;
        *(undefined8 *)param_3 = local_58;
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"hitNormal");
      lua_gettable(param_1,param_2);
      iVar2 = lua_type(param_1,0xffffffff);
      if (iVar2 == 5) {
        iVar2 = lua_gettop(param_1);
        luaval_to_vec3(param_1,iVar2,(Vec3 *)(param_3 + 0xc),"");
      }
      else {
        cocos2d::Vec3::Vec3((Vec3 *)&local_58);
        *(undefined4 *)(param_3 + 0x14) = local_50;
        *(undefined8 *)(param_3 + 0xc) = local_58;
      }
      lua_settop(param_1,0xfffffffe);
                    /* try { // try from 009b6028 to 00ab602f has its CatchHandler @ 009b61a4 */
                    /* try { // try from 009b6030 to 00ab6073 has its CatchHandler @ 009b5f48 */
      lua_pushstring(param_1,"hitObj");
      lua_gettable(param_1,param_2);
      iVar2 = tolua_isusertype(param_1,0xffffffff,"cc.Physics3DObject",0,auStack_48);
      if (iVar2 == 0) {
        *(undefined8 *)(param_3 + 0x18) = 0;
      }
      else {
        uVar3 = lua_gettop(param_1);
                    /* try { // try from 009b6074 to 00ab6083 has its CatchHandler @ 009b61b8 */
        uVar4 = tolua_tousertype(param_1,uVar3,0);
        *(undefined8 *)(param_3 + 0x18) = uVar4;
      }
                    /* try { // try from 009b6084 to 00ab60b7 has its CatchHandler @ 009b61c8 */
      lua_settop(param_1,0xfffffffe);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

