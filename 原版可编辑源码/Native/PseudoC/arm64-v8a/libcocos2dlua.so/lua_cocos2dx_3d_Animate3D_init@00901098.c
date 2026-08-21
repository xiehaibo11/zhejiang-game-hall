
/* lua_cocos2dx_3d_Animate3D_init(lua_State*) */

void lua_cocos2dx_3d_Animate3D_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  Animate3D *this;
  ulong uVar5;
  Animation3D *pAVar6;
  undefined8 uVar7;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009010c4 to 00a010c7 has its CatchHandler @ 009011c8 */
  this = (Animate3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009010e0 to 00a010e7 has its CatchHandler @ 009011c0 */
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Animation3D",0), (uVar5 & 1) != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901088 with catch @ 009011c0
                       catch(type#1 @ 00000000) { ... } // from try @ 009010e0 with catch @ 009011c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0090110c with catch @ 009011c0
                       catch(type#1 @ 00000000) { ... } // from try @ 00901140 with catch @ 009011c0
                        */
      pAVar6 = (Animation3D *)tolua_tousertype(param_1,2,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009010f8 with catch @ 009011c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009010c4 with catch @ 009011c8
                        */
      uVar4 = cocos2d::Animate3D::init(this,pAVar6);
LAB_009011d0:
      tolua_pushboolean(param_1,uVar4 & 1);
                    /* try { // try from 009011dc to 00a011df has its CatchHandler @ 0090120c */
      uVar7 = 1;
                    /* try { // try from 009011e0 to 00a01223 has its CatchHandler @ 00901034 */
      goto LAB_00901208;
    }
  }
  else {
                    /* try { // try from 009010f8 to 00a010fb has its CatchHandler @ 009011c4 */
                    /* try { // try from 0090110c to 00a01117 has its CatchHandler @ 009011c0 */
                    /* try { // try from 00901118 to 00a0113f has its CatchHandler @ 00901034 */
    if (((iVar2 == 4) && (param_1 != (lua_State *)0x0)) &&
       ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
        (uVar5 = luaval_is_usertype(param_1,2,"cc.Animation3D",0), (uVar5 & 1) != 0)))) {
      pAVar6 = (Animation3D *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 00901140 to 00a01153 has its CatchHandler @ 009011c0 */
      uVar5 = luaval_to_number(param_1,3,&dStack_50,"cc.Animate3D:init");
      if (((uVar5 & 1) != 0) &&
         (uVar5 = luaval_to_number(param_1,4,&local_58,"cc.Animate3D:init"), (uVar5 & 1) != 0)) {
                    /* try { // try from 00901168 to 00a0116b has its CatchHandler @ 00901210 */
                    /* try { // try from 0090116c to 00a011db has its CatchHandler @ 00901034 */
        uVar4 = cocos2d::Animate3D::init(this,pAVar6,(float)dStack_50,(float)local_58);
        goto LAB_009011d0;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Animate3D:init"
             ,iVar2 + -1,1);
  uVar7 = 0;
LAB_00901208:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009011dc with catch @ 0090120c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901168 with catch @ 00901210
                        */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

