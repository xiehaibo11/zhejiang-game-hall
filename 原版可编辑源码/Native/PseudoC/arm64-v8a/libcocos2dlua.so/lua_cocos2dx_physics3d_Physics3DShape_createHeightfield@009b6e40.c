
/* lua_cocos2dx_physics3d_Physics3DShape_createHeightfield(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DShape_createHeightfield(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  undefined4 uVar13;
  bool local_ac [4];
  bool local_a8 [4];
  bool local_a4 [4];
  double local_a0;
  double local_98;
  double dStack_90;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  int local_70;
  int iStack_6c;
  long local_68;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b6cf8 with catch @ 009b6e54
                        */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b6b7c with catch @ 009b6e78
                        */
  if (iVar2 == 10) {
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_88 = (void *)0x0;
    uVar3 = luaval_to_int32(param_1,2,&iStack_6c,"cc.Physics3DShape:createHeightfield");
    uVar4 = luaval_to_int32(param_1,3,&local_70,"cc.Physics3DShape:createHeightfield");
    uVar5 = luaval_to_std_vector_float
                      (param_1,4,(vector *)&local_88,"cc.Physics3DShape:createHeightfield");
    uVar6 = luaval_to_number(param_1,5,&dStack_90,"cc.Physics3DShape:createHeightfield");
    uVar7 = luaval_to_number(param_1,6,&local_98,"cc.Physics3DShape:createHeightfield");
    uVar8 = luaval_to_number(param_1,7,&local_a0,"cc.Physics3DShape:createHeightfield");
    uVar9 = luaval_to_boolean(param_1,8,local_a4,"cc.Physics3DShape:createHeightfield");
                    /* try { // try from 009b70a8 to 00ab713b has its CatchHandler @ 009b6f68 */
    uVar10 = luaval_to_boolean(param_1,9,local_a8,"cc.Physics3DShape:createHeightfield");
    uVar11 = luaval_to_boolean(param_1,10,local_ac,"cc.Physics3DShape:createHeightfield");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & 1) != 0) {
                    /* catch() { ... } // from try @ 009b6fc0 with catch @ 009b7120 */
      pvVar12 = (void *)cocos2d::Physics3DShape::createHeightfield
                                  (iStack_6c,local_70,local_88,(float)dStack_90,(float)local_98,
                                   (float)local_a0,local_a4[0],local_a8[0],local_ac[0]);
      if (pvVar12 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar12 + 0xc),(int *)((long)pvVar12 + 0x10),pvVar12,
                   "cc.Physics3DShape");
      }
      goto LAB_009b71fc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_createHeightfield\'"
                ,0);
LAB_009b71a0:
    uVar13 = 0;
  }
  else {
    if (iVar2 != 9) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.Physics3DShape:createHeightfield",iVar2 + -1,8);
      uVar13 = 0;
      goto LAB_009b71b4;
    }
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_88 = (void *)0x0;
    uVar3 = luaval_to_int32(param_1,2,&iStack_6c,"cc.Physics3DShape:createHeightfield");
    uVar4 = luaval_to_int32(param_1,3,&local_70,"cc.Physics3DShape:createHeightfield");
    uVar5 = luaval_to_std_vector_float
                      (param_1,4,(vector *)&local_88,"cc.Physics3DShape:createHeightfield");
    uVar6 = luaval_to_number(param_1,5,&dStack_90,"cc.Physics3DShape:createHeightfield");
    uVar7 = luaval_to_number(param_1,6,&local_98,"cc.Physics3DShape:createHeightfield");
    uVar8 = luaval_to_number(param_1,7,&local_a0,"cc.Physics3DShape:createHeightfield");
    uVar9 = luaval_to_boolean(param_1,8,local_a4,"cc.Physics3DShape:createHeightfield");
    uVar10 = luaval_to_boolean(param_1,9,local_a8,"cc.Physics3DShape:createHeightfield");
                    /* try { // try from 009b6f68 to 00ab6fbf has its CatchHandler @ 009b6f68
                       catch() { ... } // from try @ 009b6f68 with catch @ 009b6f68
                       catch() { ... } // from try @ 009b70a8 with catch @ 009b6f68 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_createHeightfield\'"
                  ,0);
      goto LAB_009b71a0;
    }
    pvVar12 = (void *)cocos2d::Physics3DShape::createHeightfield
                                (iStack_6c,local_70,local_88,(float)dStack_90,(float)local_98,
                                 (float)local_a0,local_a4[0],local_a8[0],false);
    if (pvVar12 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009b6fc0 to 00ab70a7 has its CatchHandler @ 009b7120 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar12 + 0xc),(int *)((long)pvVar12 + 0x10),pvVar12,
                 "cc.Physics3DShape");
    }
LAB_009b71fc:
    uVar13 = 1;
  }
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
LAB_009b71b4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

