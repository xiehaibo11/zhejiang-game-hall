
/* lua_cocos2dx_extension_AssetsManagerEx_constructor(lua_State*) */

bool lua_cocos2dx_extension_AssetsManagerEx_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  AssetsManagerEx *this;
  bool bVar5;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 009b16b4 to 00ab16b7 has its CatchHandler @ 009b17c8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b16bc to 00ab16c7 has its CatchHandler @ 009b17c4 */
  iVar2 = lua_gettop();
                    /* try { // try from 009b16d0 to 00ab16df has its CatchHandler @ 009b1794 */
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
                    /* try { // try from 009b16f0 to 00ab171f has its CatchHandler @ 009b17dc */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.AssetsManagerEx:AssetsManagerEx");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,"cc.AssetsManagerEx:AssetsManagerEx");
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
                    /* catch() { ... } // from try @ 009b16d0 with catch @ 009b1794 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_AssetsManagerEx_constructor\'"
                  ,0);
    }
    else {
                    /* try { // try from 009b1720 to 00ab17ff has its CatchHandler @ 009b162c */
      this = operator_new(0x250);
      cocos2d::extension::AssetsManagerEx::AssetsManagerEx
                (this,(basic_string *)&local_50,(basic_string *)&local_68);
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.AssetsManagerEx");
    }
    bVar5 = !bVar5;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManagerEx:AssetsManagerEx",iVar2 + -1,2);
    bVar5 = false;
  }
                    /* catch() { ... } // from try @ 009b16bc with catch @ 009b17c4 */
                    /* catch() { ... } // from try @ 009b16b4 with catch @ 009b17c8 */
                    /* catch() { ... } // from try @ 009b167c with catch @ 009b17cc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009b16f0 with catch @ 009b17dc */
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

