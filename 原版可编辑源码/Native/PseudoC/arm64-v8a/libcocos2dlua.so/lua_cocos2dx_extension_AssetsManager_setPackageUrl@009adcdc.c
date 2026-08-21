
/* lua_cocos2dx_extension_AssetsManager_setPackageUrl(lua_State*) */

undefined4 lua_cocos2dx_extension_AssetsManager_setPackageUrl(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  AssetsManager *this;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009adb68 with catch @ 009adcec */
                    /* catch() { ... } // from try @ 009adb38 with catch @ 009adcf0 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009add14 to 00aadda7 has its CatchHandler @ 009add14
                       catch() { ... } // from try @ 009add14 with catch @ 009add14
                       catch() { ... } // from try @ 009addb4 with catch @ 009add14 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.AssetsManager:setPackageUrl");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 009adda8 to 00aaddb3 has its CatchHandler @ 009ade0c */
                    /* try { // try from 009addb4 to 00aade27 has its CatchHandler @ 009add14 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_AssetsManager_setPackageUrl\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      cocos2d::extension::AssetsManager::setPackageUrl(this,pcVar1);
      uVar5 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:setPackageUrl",iVar3 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

