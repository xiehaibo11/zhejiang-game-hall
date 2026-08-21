
/* lua_cocos2dx_physics3d_Physics3DShape_initBox(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_initBox(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Physics3DShape *this;
  ulong uVar4;
  undefined8 uVar5;
  Vec3 aVStack_48 [16];
  long local_38;
  
                    /* try { // try from 009b8198 to 00ab820f has its CatchHandler @ 009b8130 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DShape *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_48,"cc.Physics3DShape:initBox");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::Physics3DShape::initBox(this,aVStack_48);
      tolua_pushboolean(param_1,uVar3 & 1);
                    /* try { // try from 009b8210 to 00ab827b has its CatchHandler @ 009b836c */
      uVar5 = 1;
      goto LAB_009b8250;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_initBox\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DShape:initBox",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009b8250:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

