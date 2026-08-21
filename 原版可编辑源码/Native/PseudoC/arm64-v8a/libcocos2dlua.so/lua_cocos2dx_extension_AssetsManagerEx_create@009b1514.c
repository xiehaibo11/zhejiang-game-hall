
/* lua_cocos2dx_extension_AssetsManagerEx_create(lua_State*) */

undefined4 lua_cocos2dx_extension_AssetsManagerEx_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 009b1520 to 00ab1533 has its CatchHandler @ 009b15f0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b1534 to 00ab162b has its CatchHandler @ 009b141c */
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.AssetsManagerEx:create");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.AssetsManagerEx:create");
    if ((uVar3 & uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 009b14ac with catch @ 009b15e8 */
                    /* catch() { ... } // from try @ 009b14a4 with catch @ 009b15ec */
                    /* catch() { ... } // from try @ 009b1520 with catch @ 009b15f0 */
      tolua_error(param_1,&DAT_012e8035,0);
      uVar6 = 0;
    }
    else {
      pvVar5 = (void *)cocos2d::extension::AssetsManagerEx::create
                                 ((basic_string *)&local_50,(basic_string *)&local_68);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* catch() { ... } // from try @ 009b1500 with catch @ 009b15b0 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.AssetsManagerEx");
      }
      uVar6 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
                    /* catch() { ... } // from try @ 009b146c with catch @ 009b1610 */
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 009b14f8 with catch @ 009b15d0 */
                    /* catch() { ... } // from try @ 009b14c0 with catch @ 009b15d4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.AssetsManagerEx:create",iVar2 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009b162c to 00ab167b has its CatchHandler @ 009b162c
                       catch() { ... } // from try @ 009b162c with catch @ 009b162c
                       catch() { ... } // from try @ 009b1720 with catch @ 009b162c */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

