
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getConstraint(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DRigidBody_getConstraint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DRigidBody *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"cc.Physics3DRigidBody:getConstraint");
    if ((uVar3 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb670 with catch @ 009bb600
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb6a0 with catch @ 009bb600
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb6d0 with catch @ 009bb600
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb6f8 with catch @ 009bb600
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb724 with catch @ 009bb600
                        */
      pvVar4 = (void *)cocos2d::Physics3DRigidBody::getConstraint(this,local_3c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
                    /* try { // try from 009bb694 to 00abb69f has its CatchHandler @ 009bb764 */
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Physics3DConstraint");
        uVar5 = 1;
      }
      goto LAB_009bb664;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_getConstraint\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getConstraint",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009bb664:
                    /* try { // try from 009bb668 to 00abb66f has its CatchHandler @ 009bb764 */
                    /* try { // try from 009bb670 to 00abb693 has its CatchHandler @ 009bb600 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

