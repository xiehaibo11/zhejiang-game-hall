
/* lua_cocos2dx_3d_BillBoard_createWithTexture(lua_State*) */

void lua_cocos2dx_3d_BillBoard_createWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
                    /* try { // try from 00902d84 to 00a02e1f has its CatchHandler @ 00902c1c */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar3 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00902d04 with catch @ 00902e04 */
      luaval_to_int32(param_1,3,&local_3c,"cc.BillBoard:createWithTexture");
    }
    else {
      uVar4 = tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.BillBoard:createWithTexture");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::BillBoard::createWithTexture(uVar4,local_3c);
        goto joined_r0x00902dc4;
      }
    }
LAB_00902e14:
                    /* try { // try from 00902e20 to 00a02e6f has its CatchHandler @ 00902e20
                       catch(type#1 @ 00000000) { ... } // from try @ 00902e20 with catch @ 00902e20
                       catch(type#1 @ 00000000) { ... } // from try @ 00902ea4 with catch @ 00902e20
                       catch(type#1 @ 00000000) { ... } // from try @ 00902efc with catch @ 00902e20
                       catch(type#1 @ 00000000) { ... } // from try @ 00902f68 with catch @ 00902e20
                        */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_3d_BillBoard_createWithTexture\'",0);
  }
  else {
    if (iVar2 == 2) {
                    /* try { // try from 00902d04 to 00a02d37 has its CatchHandler @ 00902e04 */
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar3 & 1) != 0)) {
        uVar4 = tolua_tousertype(param_1,2,0);
        pvVar5 = (void *)cocos2d::BillBoard::createWithTexture(uVar4,0);
joined_r0x00902dc4:
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
                    /* catch() { ... } // from try @ 00902d38 with catch @ 00902dd0 */
          uVar4 = 1;
                    /* catch() { ... } // from try @ 00902d50 with catch @ 00902dd4 */
        }
        else {
                    /* try { // try from 00902d38 to 00a02d4b has its CatchHandler @ 00902dd0 */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.BillBoard");
                    /* try { // try from 00902d50 to 00a02d83 has its CatchHandler @ 00902dd4 */
          uVar4 = 1;
        }
        goto LAB_00902e2c;
      }
      goto LAB_00902e14;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.BillBoard:createWithTexture",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00902e2c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

