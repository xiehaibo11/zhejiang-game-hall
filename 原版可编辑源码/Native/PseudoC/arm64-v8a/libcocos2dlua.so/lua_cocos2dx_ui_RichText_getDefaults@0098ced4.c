
/* lua_cocos2dx_ui_RichText_getDefaults(lua_State*) */

void lua_cocos2dx_ui_RichText_getDefaults(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  RichText *this;
  undefined8 uVar5;
  void *pvVar6;
  void *local_60 [2];
  void *local_50;
  long local_38;
  
                    /* try { // try from 0098cee0 to 00a8d57f has its CatchHandler @ 0098cee0
                       catch() { ... } // from try @ 0098cee0 with catch @ 0098cee0
                       catch() { ... } // from try @ 0098d600 with catch @ 0098cee0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocos2d::ui::RichText::getDefaults(this);
    ccvaluemap_to_luaval(param_1,(unordered_map *)local_60);
    pvVar2 = local_60[0];
    puVar3 = local_50;
    while (puVar3 != (void *)0x0) {
      pvVar6 = (void *)*puVar3;
      local_60[0] = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_60[0];
      puVar3 = pvVar6;
    }
    local_60[0] = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:getDefaults",iVar4 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

