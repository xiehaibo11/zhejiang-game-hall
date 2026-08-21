
/* lua_cocos2dx_CustomGUIReader_create(lua_State*) */

void lua_cocos2dx_CustomGUIReader_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00920b74 to 00a20b87 has its CatchHandler @ 00920c0c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 00920b8c to 00a20bbf has its CatchHandler @ 00920c10 */
  if (iVar2 + -1 == 3) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"ccs.CustomGUIReader:create");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 00920bc0 to 00a20c5b has its CatchHandler @ 00920a88 */
      iVar2 = toluafix_ref_function(param_1,3,0);
      iVar3 = toluafix_ref_function(param_1,4,0);
      pvVar5 = (void *)cocostudio::CustomGUIReader::create((basic_string *)local_50,iVar2,iVar3);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccs.CustomGUIReader");
      }
                    /* catch() { ... } // from try @ 00920b74 with catch @ 00920c0c */
                    /* catch() { ... } // from try @ 00920b8c with catch @ 00920c10 */
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar6 = 1;
      goto LAB_00920c58;
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
                    /* catch() { ... } // from try @ 00920b40 with catch @ 00920c40 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "ccs.CustomGUIReader:create",iVar2 + -1,1);
  uVar6 = 0;
LAB_00920c58:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

