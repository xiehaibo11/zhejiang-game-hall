
/* lua_cocos2dx_physics3d_Physics3DShape_initCylinder(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_initCylinder(lua_State *param_1)

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
  
                    /* try { // try from 009b83a4 to 00ab83f7 has its CatchHandler @ 009b83a4
                       catch() { ... } // from try @ 009b83a4 with catch @ 009b83a4
                       catch() { ... } // from try @ 009b8408 with catch @ 009b83a4
                       catch() { ... } // from try @ 009b8504 with catch @ 009b83a4
                       catch() { ... } // from try @ 009b8548 with catch @ 009b83a4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Physics3DShape *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.Physics3DShape:initCylinder");
                    /* try { // try from 009b83f8 to 00ab8407 has its CatchHandler @ 009b85d8 */
                    /* try { // try from 009b8408 to 00ab847f has its CatchHandler @ 009b83a4 */
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.Physics3DShape:initCylinder");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = cocos2d::Physics3DShape::initCylinder(this,(float)dStack_50,(float)local_58);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_009b8474;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_initCylinder\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DShape:initCylinder",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009b8474:
                    /* try { // try from 009b8480 to 00ab84eb has its CatchHandler @ 009b85d8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

