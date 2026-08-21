
/* lua_cocos2dx_physics3d_Physics3DShape_createMesh(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DShape_createMesh(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int local_54;
  Vec3 *local_50;
  Vec3 *local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 009b6cf8 to 00ab6cff has its CatchHandler @ 009b6e54 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_48 = (Vec3 *)0x0;
    uStack_40 = 0;
    local_50 = (Vec3 *)0x0;
    uVar3 = luaval_to_std_vector_vec3(param_1,2,(vector *)&local_50,"cc.Physics3DShape:createMesh");
                    /* try { // try from 009b6d54 to 00ab6d5b has its CatchHandler @ 009b6e3c */
    uVar4 = luaval_to_int32(param_1,3,&local_54,"cc.Physics3DShape:createMesh");
                    /* try { // try from 009b6d5c to 00ab6e7b has its CatchHandler @ 009b6b2c */
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_createMesh\'"
                  ,0);
      uVar6 = 0;
    }
    else {
      pvVar5 = (void *)cocos2d::Physics3DShape::createMesh(local_50,local_54);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.Physics3DShape");
      }
      uVar6 = 1;
    }
    if (local_50 != (Vec3 *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Physics3DShape:createMesh",iVar2 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

