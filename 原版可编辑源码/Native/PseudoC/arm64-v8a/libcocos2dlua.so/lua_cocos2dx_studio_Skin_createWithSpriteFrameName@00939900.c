
/* lua_cocos2dx_studio_Skin_createWithSpriteFrameName(lua_State*) */

undefined4 lua_cocos2dx_studio_Skin_createWithSpriteFrameName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00939914 to 00a39937 has its CatchHandler @ 00939cb4 */
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_38 = 0;
    local_30 = (void *)0x0;
    local_40 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_40,"ccs.Skin:createWithSpriteFrameName");
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 009399ac to 00a399c3 has its CatchHandler @ 00939ce8 */
      tolua_error(param_1,0x12ccb42,0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)cocostudio::Skin::createWithSpriteFrameName((basic_string *)&local_40);
                    /* try { // try from 00939960 to 00a39967 has its CatchHandler @ 00939c90 */
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 00939968 to 00a399ab has its CatchHandler @ 00939278 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccs.Skin");
      }
      uVar5 = 1;
    }
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012ccb1f,
               iVar2 + -1,1);
    uVar5 = 0;
  }
                    /* try { // try from 009399d0 to 00a399e7 has its CatchHandler @ 00939cb0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009399ec to 00a39a03 has its CatchHandler @ 00939c74 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

