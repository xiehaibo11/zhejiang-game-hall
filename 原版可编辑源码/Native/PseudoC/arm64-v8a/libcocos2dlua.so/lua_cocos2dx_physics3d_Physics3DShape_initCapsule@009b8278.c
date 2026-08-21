
/* lua_cocos2dx_physics3d_Physics3DShape_initCapsule(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_initCapsule(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Physics3DShape *this;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double local_58;
  double dStack_50;
  long local_48;
  
                    /* try { // try from 009b827c to 00ab8293 has its CatchHandler @ 009b8334 */
  lVar1 = tpidr_el0;
                    /* try { // try from 009b8294 to 00ab82bb has its CatchHandler @ 009b8130 */
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Physics3DShape *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009b82bc to 00ab82d7 has its CatchHandler @ 009b836c */
  if (iVar2 + -1 == 2) {
                    /* try { // try from 009b82d8 to 00ab83a3 has its CatchHandler @ 009b8130 */
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.Physics3DShape:initCapsule");
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.Physics3DShape:initCapsule");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = cocos2d::Physics3DShape::initCapsule(this,(float)dStack_50,(float)local_58);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_009b8360;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_initCapsule\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 009b827c with catch @ 009b8334 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DShape:initCapsule",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009b8360:
                    /* catch() { ... } // from try @ 009b8180 with catch @ 009b8368 */
                    /* catch() { ... } // from try @ 009b8188 with catch @ 009b836c
                       catch() { ... } // from try @ 009b8210 with catch @ 009b836c
                       catch() { ... } // from try @ 009b82bc with catch @ 009b836c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

