
/* lua_cocos2dx_3d_Animate3D_initWithFrames(lua_State*) */

void lua_cocos2dx_3d_Animate3D_initWithFrames(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Animate3D *this;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  Animation3D *unaff_x21;
  double local_68;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00900dc8 to 00a00dcb has its CatchHandler @ 00900e6c */
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00900dcc to 00a00e37 has its CatchHandler @ 00900ca0 */
  this = (Animate3D *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 4) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00900d5c with catch @ 00900e20
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00900cf4 with catch @ 00900e24
                       catch(type#1 @ 00000000) { ... } // from try @ 00900da0 with catch @ 00900e24
                        */
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Animation3D",0), (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (Animation3D *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 00900e38 to 00a00e3b has its CatchHandler @ 00900e68 */
                    /* try { // try from 00900e3c to 00a00e7f has its CatchHandler @ 00900ca0 */
      bVar2 = true;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00900e38 with catch @ 00900e68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00900dc8 with catch @ 00900e6c
                        */
    uVar5 = luaval_to_int32(param_1,3,&iStack_5c,"cc.Animate3D:initWithFrames");
    uVar6 = luaval_to_int32(param_1,4,&local_60,"cc.Animate3D:initWithFrames");
    uVar7 = luaval_to_number(param_1,5,&local_68,"cc.Animate3D:initWithFrames");
    if (((bVar2) && ((uVar5 & 1) != 0)) && (((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)))) {
      uVar4 = cocos2d::Animate3D::initWithFrames(this,unaff_x21,iStack_5c,local_60,(float)local_68);
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar8 = 1;
      goto LAB_00900f08;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Animate3D_initWithFrames\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:initWithFrames",iVar3 + -1,4);
  }
  uVar8 = 0;
LAB_00900f08:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

