
/* lua_cocos2dx_3d_Terrain_getHeight(lua_State*) */

void lua_cocos2dx_3d_Terrain_getHeight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Terrain *this;
  ulong uVar4;
  ulong uVar5;
  Vec3 *pVVar6;
  undefined8 uVar7;
  float fVar8;
  double local_68 [2];
  double local_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.Terrain:getHeight");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_number(param_1,3,&local_58,"cc.Terrain:getHeight"), (uVar4 & 1) != 0)) {
                    /* try { // try from 008fd808 to 009fd80b has its CatchHandler @ 008fd844 */
      cocos2d::Vec3::Vec3((Vec3 *)local_68);
                    /* try { // try from 008fd80c to 009fd857 has its CatchHandler @ 008fd7bc */
      uVar4 = luaval_to_vec3(param_1,4,(Vec3 *)local_68,"");
      if ((uVar4 & 1) != 0) {
        fVar8 = (float)cocos2d::Terrain::getHeight
                                 (this,(float)local_50,(float)local_58,(Vec3 *)local_68);
                    /* catch() { ... } // from try @ 008fd808 with catch @ 008fd844 */
        tolua_pushnumber((double)fVar8,param_1);
        pVVar6 = (Vec3 *)local_68;
        goto LAB_008fd854;
      }
    }
  }
  else if (iVar2 == 3) {
    local_68[0] = 0.0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)local_68,"cc.Terrain:getHeight");
    if ((((param_1 != (lua_State *)0x0) && ((uVar4 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       ((uVar5 = luaval_is_usertype(param_1,3,"cc.Vec3",0), (uVar5 & 1) != 0 &&
        (pVVar6 = (Vec3 *)tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)))) {
      fVar8 = (float)cocos2d::Terrain::getHeight(this,(Vec2 *)local_68,pVVar6);
                    /* try { // try from 008fd7bc to 009fd807 has its CatchHandler @ 008fd7bc
                       catch() { ... } // from try @ 008fd7bc with catch @ 008fd7bc
                       catch() { ... } // from try @ 008fd80c with catch @ 008fd7bc */
      tolua_pushnumber((double)fVar8,param_1);
LAB_008fd854:
      vec3_to_luaval(param_1,pVVar6);
                    /* try { // try from 008fd858 to 009fd9e3 has its CatchHandler @ 008fd858
                       catch() { ... } // from try @ 008fd858 with catch @ 008fd858
                       catch() { ... } // from try @ 008fda64 with catch @ 008fd858 */
      uVar7 = 2;
      goto LAB_008fd8ec;
    }
    uVar4 = luaval_to_number(param_1,2,local_68,"cc.Terrain:getHeight");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_number(param_1,3,&local_50,"cc.Terrain:getHeight"), (uVar4 & 1) != 0)) {
      fVar8 = (float)cocos2d::Terrain::getHeight
                               (this,(float)local_68[0],(float)local_50,(Vec3 *)0x0);
      goto LAB_008fd8b4;
    }
  }
  else if (iVar2 == 2) {
    local_68[0] = 0.0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)local_68,"cc.Terrain:getHeight");
    if ((uVar4 & 1) != 0) {
      fVar8 = (float)cocos2d::Terrain::getHeight(this,(Vec2 *)local_68,(Vec3 *)0x0);
LAB_008fd8b4:
      tolua_pushnumber((double)fVar8,param_1);
      uVar7 = 1;
      goto LAB_008fd8ec;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Terrain:getHeight",iVar2 + -1,2);
  uVar7 = 0;
LAB_008fd8ec:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

