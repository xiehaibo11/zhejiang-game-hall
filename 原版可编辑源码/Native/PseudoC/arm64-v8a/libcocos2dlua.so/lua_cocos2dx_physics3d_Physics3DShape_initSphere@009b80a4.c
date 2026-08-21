
/* lua_cocos2dx_physics3d_Physics3DShape_initSphere(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_initSphere(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Physics3DShape *this;
  ulong uVar4;
  undefined8 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009b8008 with catch @ 009b80c4 */
  this = (Physics3DShape *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 009b7ef4 with catch @ 009b80f8
                       catch() { ... } // from try @ 009b7f7c with catch @ 009b80f8
                       catch() { ... } // from try @ 009b804c with catch @ 009b80f8 */
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.Physics3DShape:initSphere");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::Physics3DShape::initSphere(this,(float)local_40);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_009b8164;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_initSphere\'"
                ,0);
  }
  else {
                    /* try { // try from 009b8130 to 00ab817f has its CatchHandler @ 009b8130
                       catch() { ... } // from try @ 009b8130 with catch @ 009b8130
                       catch() { ... } // from try @ 009b8198 with catch @ 009b8130
                       catch() { ... } // from try @ 009b8294 with catch @ 009b8130
                       catch() { ... } // from try @ 009b82d8 with catch @ 009b8130 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DShape:initSphere",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009b8164:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009b8180 to 00ab8187 has its CatchHandler @ 009b8368 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009b8188 to 00ab8197 has its CatchHandler @ 009b836c */
  __stack_chk_fail(uVar5);
}

