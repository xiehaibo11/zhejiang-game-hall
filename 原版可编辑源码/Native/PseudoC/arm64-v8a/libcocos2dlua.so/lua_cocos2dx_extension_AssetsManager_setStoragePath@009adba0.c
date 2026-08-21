
/* lua_cocos2dx_extension_AssetsManager_setStoragePath(lua_State*) */

undefined4 lua_cocos2dx_extension_AssetsManager_setStoragePath(lua_State *param_1)

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
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009adbcc to 00aadbd3 has its CatchHandler @ 009adc98 */
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009adbd4 to 00aadc3f has its CatchHandler @ 009ada40 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.AssetsManager:setStoragePath");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_AssetsManager_setStoragePath\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      cocos2d::extension::AssetsManager::setStoragePath(this,pcVar1);
      uVar5 = 1;
      lua_settop(param_1,1);
                    /* try { // try from 009adc40 to 00aadc4f has its CatchHandler @ 009adc94 */
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 009adc50 to 00aadd13 has its CatchHandler @ 009ada40 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:setStoragePath",iVar3 + -1,1);
    uVar5 = 0;
  }
                    /* catch() { ... } // from try @ 009adc40 with catch @ 009adc94 */
                    /* catch() { ... } // from try @ 009adbcc with catch @ 009adc98 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

