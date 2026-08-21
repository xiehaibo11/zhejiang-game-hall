
/* lua_cocos2dx_csloader_CSLoader_createTimeline(lua_State*) */

undefined4 lua_cocos2dx_csloader_CSLoader_createTimeline(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00925e04 with catch @ 00925e9c */
                    /* catch() { ... } // from try @ 00925e1c with catch @ 00925ea0 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_38 = 0;
    local_30 = (void *)0x0;
    local_40 = 0;
                    /* catch() { ... } // from try @ 00925dd0 with catch @ 00925ed0 */
    auVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_40,"cc.CSLoader:createTimeline");
    if ((auVar5._0_8_ & 1) == 0) {
      uVar4 = 0;
    }
    else {
      pvVar3 = (void *)cocos2d::CSLoader::createTimeline((CSLoader *)&local_40,auVar5._8_8_);
      if (pvVar3 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                   "ccs.ActionTimeline");
      }
      uVar4 = 1;
    }
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.CSLoader:createTimeline",iVar2 + -1,1);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

