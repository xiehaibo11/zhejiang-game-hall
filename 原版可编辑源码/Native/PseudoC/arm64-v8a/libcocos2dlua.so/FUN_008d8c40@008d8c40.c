
void FUN_008d8c40(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  UIEventDispatcher *this;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int local_58 [2];
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008d8904 with catch @ 008d8c6c */
  this = (UIEventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_int32(param_1,2,&iStack_4c,"fairygui.UIEventDispatcher:hasEventListener");
    uVar6 = luaval_to_int32(param_1,3,&local_50,"fairygui.UIEventDispatcher:hasEventListener");
    if (((uVar4 & 1) != 0) && ((uVar6 & 1) != 0)) {
      fairygui::EventTag::EventTag((EventTag *)local_58,local_50);
      uVar3 = fairygui::UIEventDispatcher::hasEventListener(this,iStack_4c,(EventTag *)local_58);
      lua_pushboolean(param_1,uVar3 & 1);
      fairygui::EventTag::~EventTag((EventTag *)local_58);
      uVar5 = 1;
                    /* try { // try from 008d8d44 to 009d8d4f has its CatchHandler @ 008d9108 */
      goto LAB_008d8d78;
    }
LAB_008d8d48:
                    /* try { // try from 008d8d50 to 009d8d57 has its CatchHandler @ 008d9104 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_fairygui_UIEventDispatcher_hasEventListener\'",
                0);
  }
  else {
                    /* catch() { ... } // from try @ 008d88a0 with catch @ 008d8c88 */
    if (iVar2 == 2) {
      uVar4 = luaval_to_int32(param_1,2,local_58,"fairygui.UIEventDispatcher:hasEventListener");
      if ((uVar4 & 1) != 0) {
        uVar3 = fairygui::UIEventDispatcher::hasEventListener
                          (this,local_58[0],(EventTag *)&fairygui::EventTag::None);
        lua_pushboolean(param_1,uVar3 & 1);
        uVar5 = 1;
                    /* try { // try from 008d8cd0 to 009d8d43 has its CatchHandler @ 008d8cd0
                       catch() { ... } // from try @ 008d8cd0 with catch @ 008d8cd0
                       catch() { ... } // from try @ 008d908c with catch @ 008d8cd0 */
        goto LAB_008d8d78;
      }
      goto LAB_008d8d48;
    }
    luaL_error(param_1,
               "\'hasEventListener\' function of UIEventDispatcher has wrong number of arguments: %d, was expecting 1~2\n"
               ,iVar2 + -1);
  }
  uVar5 = 0;
LAB_008d8d78:
                    /* try { // try from 008d8d78 to 009d8dff has its CatchHandler @ 008d922c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

