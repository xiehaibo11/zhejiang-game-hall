
/* lua_cocos2dx_physics3d_Physics3DWorld_rayCast(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DWorld_rayCast(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Vec3 *pVVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  Vec3 aVStack_88 [12];
  Vec3 aVStack_7c [20];
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b6b84 with catch @ 009b6b2c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b6d5c with catch @ 009b6b2c
                        */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pVVar4 = (Vec3 *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    cocos2d::Vec3::Vec3(aVStack_58);
                    /* try { // try from 009b6b7c to 00ab6b83 has its CatchHandler @ 009b6e78 */
    cocos2d::Vec3::Vec3(aVStack_68);
                    /* try { // try from 009b6b84 to 00ab6cf7 has its CatchHandler @ 009b6b2c */
    cocos2d::Vec3::Vec3(aVStack_88);
    cocos2d::Vec3::Vec3(aVStack_7c);
    pcVar9 = "cc.Physics3DWorld:rayCast";
    uVar5 = luaval_to_vec3(param_1,2,aVStack_58,"cc.Physics3DWorld:rayCast");
    uVar6 = luaval_to_vec3(param_1,3,aVStack_68,"cc.Physics3DWorld:rayCast");
    uVar7 = luaval_to_Physics3DWorld_HitResult(param_1,4,(HitResult *)aVStack_88,pcVar9);
    if ((((uVar5 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      uVar3 = cocos2d::Physics3DWorld::rayCast(pVVar4,aVStack_58,(HitResult *)aVStack_68);
      tolua_pushboolean(param_1,uVar3 & 1);
      Physics3DWorld_HitResult_to_luaval(param_1,(HitResult *)aVStack_88);
      uVar8 = 2;
      goto LAB_009b6c54;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DWorld_rayCast\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DWorld:rayCast",iVar2 + -1,3);
  }
  uVar8 = 0;
LAB_009b6c54:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

