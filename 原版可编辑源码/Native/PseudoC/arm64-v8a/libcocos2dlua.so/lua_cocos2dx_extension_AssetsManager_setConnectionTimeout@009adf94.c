
/* lua_cocos2dx_extension_AssetsManager_setConnectionTimeout(lua_State*) */

undefined4 lua_cocos2dx_extension_AssetsManager_setConnectionTimeout(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  AssetsManager *this;
  ulong uVar3;
  undefined4 uVar4;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 009adf94 to 00aadf9f has its CatchHandler @ 009ae4a0 */
                    /* try { // try from 009adfa0 to 00aadfc3 has its CatchHandler @ 009adea4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009adfc4 to 00aadfcf has its CatchHandler @ 009ae49c */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009adfd0 to 00aadff3 has its CatchHandler @ 009adea4 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"cc.AssetsManager:setConnectionTimeout");
                    /* try { // try from 009adff4 to 00aadfff has its CatchHandler @ 009ae498 */
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 009ae000 to 00aae023 has its CatchHandler @ 009adea4 */
      cocos2d::extension::AssetsManager::setConnectionTimeout(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009ae050;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_AssetsManager_setConnectionTimeout\'"
                ,0);
  }
  else {
                    /* try { // try from 009ae024 to 00aae02f has its CatchHandler @ 009ae494 */
                    /* try { // try from 009ae030 to 00aae053 has its CatchHandler @ 009adea4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:setConnectionTimeout",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009ae050:
                    /* try { // try from 009ae054 to 00aae05f has its CatchHandler @ 009ae490 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009ae060 to 00aae0bb has its CatchHandler @ 009adea4 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

