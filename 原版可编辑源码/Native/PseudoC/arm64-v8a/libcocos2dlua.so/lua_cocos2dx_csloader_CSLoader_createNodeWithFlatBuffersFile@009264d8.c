
/* lua_cocos2dx_csloader_CSLoader_createNodeWithFlatBuffersFile(lua_State*) */

undefined4 lua_cocos2dx_csloader_CSLoader_createNodeWithFlatBuffersFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CSLoader *this;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (CSLoader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00926538 to 00a26583 has its CatchHandler @ 00926538
                       catch() { ... } // from try @ 00926538 with catch @ 00926538
                       catch() { ... } // from try @ 00926588 with catch @ 00926538 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "cc.CSLoader:createNodeWithFlatBuffersFile");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_csloader_CSLoader_createNodeWithFlatBuffersFile\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)cocos2d::CSLoader::createNodeWithFlatBuffersFile
                                 (this,(basic_string *)&local_50);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Node");
      }
                    /* try { // try from 009265f0 to 00a266bf has its CatchHandler @ 009265f0
                       catch() { ... } // from try @ 009265f0 with catch @ 009265f0
                       catch() { ... } // from try @ 00926740 with catch @ 009265f0 */
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00926584 to 00a26587 has its CatchHandler @ 009265dc */
                    /* try { // try from 00926588 to 00a265ef has its CatchHandler @ 00926538 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CSLoader:createNodeWithFlatBuffersFile",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00926584 with catch @ 009265dc */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

