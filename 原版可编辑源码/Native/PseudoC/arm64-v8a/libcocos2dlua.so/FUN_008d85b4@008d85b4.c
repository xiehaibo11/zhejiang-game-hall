
bool FUN_008d85b4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  UIEventDispatcher *this;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  bool bVar8;
  void *unaff_x22;
  uint uVar9;
  int local_5c;
  int local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (UIEventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    cocos2d::Value::Value((Value *)local_58);
                    /* try { // try from 008d86ec to 009d87c7 has its CatchHandler @ 008d8594 */
    uVar3 = luaval_to_int32(param_1,2,&local_5c,"fairygui.UIEventDispatcher:bubbleEvent");
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar5 = luaval_is_usertype(param_1,3,"cc.Ref",0), (uVar5 & 1) == 0)) {
      uVar9 = 0;
    }
    else {
      unaff_x22 = (void *)tolua_tousertype(param_1,3,0);
      uVar9 = 1;
    }
                    /* catch() { ... } // from try @ 008d869c with catch @ 008d8788 */
    uVar4 = luaval_to_ccvalue(param_1,4,(Value *)local_58,"fairygui.UIEventDispatcher:bubbleEvent");
    bVar8 = (uVar3 & uVar9 & uVar4) == 0;
    if (bVar8) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_UIEventDispatcher_bubbleEvent\'",0);
    }
    else {
                    /* catch() { ... } // from try @ 008d86d8 with catch @ 008d87a4 */
      uVar3 = fairygui::UIEventDispatcher::bubbleEvent(this,local_5c,unaff_x22,(Value *)local_58);
      tolua_pushboolean(param_1,uVar3 & 1);
                    /* try { // try from 008d87c8 to 009d889f has its CatchHandler @ 008d87c8
                       catch() { ... } // from try @ 008d87c8 with catch @ 008d87c8
                       catch() { ... } // from try @ 008d88d8 with catch @ 008d87c8
                       catch() { ... } // from try @ 008d893c with catch @ 008d87c8
                       catch() { ... } // from try @ 008d89f4 with catch @ 008d87c8
                       catch() { ... } // from try @ 008d8b34 with catch @ 008d87c8 */
    }
    bVar8 = !bVar8;
    cocos2d::Value::~Value((Value *)local_58);
    goto LAB_008d87ec;
  }
  if (iVar2 == 3) {
    uVar5 = luaval_to_int32(param_1,2,local_58,"fairygui.UIEventDispatcher:bubbleEvent");
                    /* try { // try from 008d869c to 009d86a3 has its CatchHandler @ 008d8788 */
                    /* try { // try from 008d86a4 to 009d86d7 has its CatchHandler @ 008d8594 */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       ((uVar6 = luaval_is_usertype(param_1,3,"cc.Ref",0), (uVar6 & 1) == 0 ||
        (pvVar7 = (void *)tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)))) {
LAB_008d86cc:
                    /* try { // try from 008d86d8 to 009d86eb has its CatchHandler @ 008d87a4 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_UIEventDispatcher_bubbleEvent\'",0);
      goto LAB_008d8774;
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.UIEventDispatcher:bubbleEvent",iVar2 + -1,1);
LAB_008d8774:
      bVar8 = false;
      goto LAB_008d87ec;
    }
    uVar5 = luaval_to_int32(param_1,2,local_58,"fairygui.UIEventDispatcher:bubbleEvent");
    if ((uVar5 & 1) == 0) goto LAB_008d86cc;
    pvVar7 = (void *)0x0;
  }
  uVar3 = fairygui::UIEventDispatcher::bubbleEvent
                    (this,local_58[0],pvVar7,(Value *)&cocos2d::Value::Null);
  tolua_pushboolean(param_1,uVar3 & 1);
  bVar8 = true;
LAB_008d87ec:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}

