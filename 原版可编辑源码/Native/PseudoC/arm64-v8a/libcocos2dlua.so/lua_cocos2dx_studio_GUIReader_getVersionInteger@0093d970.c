
/* lua_cocos2dx_studio_GUIReader_getVersionInteger(lua_State*) */

undefined4 lua_cocos2dx_studio_GUIReader_getVersionInteger(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  GUIReader *this;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0093d994 to 00a3d9ab has its CatchHandler @ 0093dc5c */
  this = (GUIReader *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
                    /* try { // try from 0093d9b8 to 00a3d9cf has its CatchHandler @ 0093dc24 */
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
                    /* try { // try from 0093d9d4 to 00a3d9eb has its CatchHandler @ 0093dc1c */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.GUIReader:getVersionInteger");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_GUIReader_getVersionInteger\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
                    /* try { // try from 0093d9f0 to 00a3da07 has its CatchHandler @ 0093dc18 */
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      iVar3 = cocostudio::GUIReader::getVersionInteger(this,pcVar1);
      tolua_pushnumber((double)iVar3,param_1);
      uVar5 = 1;
                    /* try { // try from 0093da0c to 00a3da23 has its CatchHandler @ 0093dc14 */
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 0093da30 to 00a3da5b has its CatchHandler @ 0093dc10 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.GUIReader:getVersionInteger",iVar3 + -1,1);
    uVar5 = 0;
  }
                    /* try { // try from 0093da68 to 00a3da7f has its CatchHandler @ 0093dc58 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0093da8c to 00a3daa3 has its CatchHandler @ 0093dc28 */
  __stack_chk_fail();
}

