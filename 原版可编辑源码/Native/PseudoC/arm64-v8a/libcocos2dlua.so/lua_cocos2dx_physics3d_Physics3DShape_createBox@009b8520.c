
/* lua_cocos2dx_physics3d_Physics3DShape_createBox(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_createBox(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  Vec3 aVStack_38 [16];
  long local_28;
  
                    /* try { // try from 009b852c to 00ab8547 has its CatchHandler @ 009b85d8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 009b8548 to 00ab860f has its CatchHandler @ 009b83a4 */
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_38);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_38,"cc.Physics3DShape:createBox");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::Physics3DShape::createBox(aVStack_38);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Physics3DShape");
        uVar5 = 1;
      }
      goto LAB_009b85dc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_createBox\'",
                0);
  }
  else {
                    /* catch() { ... } // from try @ 009b84ec with catch @ 009b85a4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Physics3DShape:createBox",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 009b83f8 with catch @ 009b85d8
                       catch() { ... } // from try @ 009b8480 with catch @ 009b85d8
                       catch() { ... } // from try @ 009b852c with catch @ 009b85d8 */
  uVar5 = 0;
LAB_009b85dc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

