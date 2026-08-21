
/* lua_cocos2dx_studio_GUIReader_widgetFromJsonFile(lua_State*) */

undefined4 lua_cocos2dx_studio_GUIReader_widgetFromJsonFile(lua_State *param_1)

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
  this = (GUIReader *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.GUIReader:widgetFromJsonFile");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0093d710 to 00a3d727 has its CatchHandler @ 0093d844 */
      tolua_error(param_1,&DAT_012cd74d,0);
      uVar6 = 0;
    }
    else {
                    /* try { // try from 0093d6a0 to 00a3d6b7 has its CatchHandler @ 0093d85c */
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      pvVar5 = (void *)cocostudio::GUIReader::widgetFromJsonFile(this,pcVar1);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 0093d6cc to 00a3d707 has its CatchHandler @ 0093d858 */
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
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cd72c,
               iVar3 + -1,1);
    uVar6 = 0;
  }
                    /* try { // try from 0093d72c to 00a3d743 has its CatchHandler @ 0093d840 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0093d748 to 00a3d75f has its CatchHandler @ 0093d83c */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

