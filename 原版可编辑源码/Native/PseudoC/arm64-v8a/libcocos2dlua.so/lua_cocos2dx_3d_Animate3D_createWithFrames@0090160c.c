
/* lua_cocos2dx_3d_Animate3D_createWithFrames(lua_State*) */

void lua_cocos2dx_3d_Animate3D_createWithFrames(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  Animation3D *unaff_x20;
  float fVar9;
  undefined8 local_68;
  int local_60;
  int local_5c;
  long local_58;
  
                    /* try { // try from 0090160c to 00a01643 has its CatchHandler @ 009016c8 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 == 5) {
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Animation3D",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
                    /* catch() { ... } // from try @ 0090160c with catch @ 009016c8
                       catch() { ... } // from try @ 00901674 with catch @ 009016c8 */
      unaff_x20 = (Animation3D *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_int32(param_1,3,&local_5c,"cc.Animate3D:createWithFrames");
    uVar5 = luaval_to_int32(param_1,4,&local_60,"cc.Animate3D:createWithFrames");
    uVar6 = luaval_to_number(param_1,5,(double *)&local_68,"cc.Animate3D:createWithFrames");
    if (((!bVar2) || ((uVar4 & 1) == 0)) || (((uVar5 & 1) == 0 || ((uVar6 & 1) == 0)))) {
LAB_009017f8:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_Animate3D_createWithFrames\'",0);
      goto LAB_0090180c;
    }
    fVar9 = (float)(double)CONCAT44(local_68._4_4_,(int)local_68);
    local_68._0_4_ = local_5c;
    local_5c = local_60;
  }
  else {
                    /* try { // try from 00901644 to 00a01673 has its CatchHandler @ 009015bc */
    if (iVar3 != 4) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.Animate3D:createWithFrames",iVar3 + -1,3);
LAB_0090180c:
      uVar8 = 0;
      goto LAB_00901810;
    }
                    /* try { // try from 00901674 to 00a01687 has its CatchHandler @ 009016c8 */
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Animation3D",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
                    /* try { // try from 00901688 to 00a016e3 has its CatchHandler @ 009015bc */
      unaff_x20 = (Animation3D *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_int32(param_1,3,(int *)&local_68,"cc.Animate3D:createWithFrames");
    uVar5 = luaval_to_int32(param_1,4,&local_5c,"cc.Animate3D:createWithFrames");
    if (((!bVar2) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) goto LAB_009017f8;
    fVar9 = 30.0;
  }
                    /* try { // try from 009017cc to 00a0182b has its CatchHandler @ 009017cc
                       catch(type#1 @ 00000000) { ... } // from try @ 009017cc with catch @ 009017cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00901968 with catch @ 009017cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00901a3c with catch @ 009017cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00901b0c with catch @ 009017cc
                        */
  pvVar7 = (void *)cocos2d::Animate3D::createWithFrames(unaff_x20,(int)local_68,local_5c,fVar9);
  if (pvVar7 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar8 = 1;
                    /* try { // try from 00901848 to 00a01867 has its CatchHandler @ 00901a98 */
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
               "cc.Animate3D");
    uVar8 = 1;
  }
LAB_00901810:
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0090182c to 00a01843 has its CatchHandler @ 00901a9c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

