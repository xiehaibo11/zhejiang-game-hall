
/* lua_cocos2dx_studio_GUIReader_widgetFromBinaryFile(lua_State*) */

undefined4 lua_cocos2dx_studio_GUIReader_widgetFromBinaryFile(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  GUIReader *this;
  ulong uVar4;
  void *pvVar5;
  undefined4 uVar6;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 0093d76c with catch @ 0093d838 */
                    /* catch() { ... } // from try @ 0093d748 with catch @ 0093d83c */
  this = (GUIReader *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0093d72c with catch @ 0093d840 */
                    /* catch() { ... } // from try @ 0093d710 with catch @ 0093d844 */
                    /* catch() { ... } // from try @ 0093d620 with catch @ 0093d848 */
  iVar3 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0093d5fc with catch @ 0093d84c */
                    /* catch() { ... } // from try @ 0093d5e0 with catch @ 0093d850 */
                    /* catch() { ... } // from try @ 0093d5c4 with catch @ 0093d854 */
  if (iVar3 + -1 == 1) {
                    /* catch() { ... } // from try @ 0093d6cc with catch @ 0093d858 */
    local_48 = 0;
    local_40 = (char *)0x0;
                    /* catch() { ... } // from try @ 0093d6a0 with catch @ 0093d85c */
    local_50 = 0;
                    /* catch() { ... } // from try @ 0093d5a8 with catch @ 0093d860 */
                    /* catch() { ... } // from try @ 0093d550 with catch @ 0093d864 */
                    /* catch() { ... } // from try @ 0093d534 with catch @ 0093d868 */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.GUIReader:widgetFromBinaryFile");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,0x12cd7db,0);
      uVar6 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
                    /* catch() { ... } // from try @ 0093d584 with catch @ 0093d898 */
      pvVar5 = (void *)cocostudio::GUIReader::widgetFromBinaryFile(this,pcVar1);
                    /* catch() { ... } // from try @ 0093d510 with catch @ 0093d89c */
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccui.Widget");
      }
      uVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cd7b8,
               iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0093d94c to 00a3d993 has its CatchHandler @ 0093d94c
                       catch() { ... } // from try @ 0093d94c with catch @ 0093d94c
                       catch() { ... } // from try @ 0093dad4 with catch @ 0093d94c
                       catch() { ... } // from try @ 0093dbfc with catch @ 0093d94c */
  __stack_chk_fail();
}

