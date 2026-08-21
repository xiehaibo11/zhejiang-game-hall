
bool FUN_008d8334(lua_State *param_1)

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
  
                    /* try { // try from 008d8344 to 009d835b has its CatchHandler @ 008d8404 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008d835c to 009d843b has its CatchHandler @ 008d802c */
  this = (UIEventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    cocos2d::Value::Value((Value *)local_58);
    uVar3 = luaval_to_int32(param_1,2,&local_5c,"fairygui.UIEventDispatcher:dispatchEvent");
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar5 = luaval_is_usertype(param_1,3,"cc.Ref",0), (uVar5 & 1) == 0)) {
      uVar9 = 0;
    }
    else {
      unaff_x22 = (void *)tolua_tousertype(param_1,3,0);
      uVar9 = 1;
    }
    uVar4 = luaval_to_ccvalue(param_1,4,(Value *)local_58,"fairygui.UIEventDispatcher:dispatchEvent"
                             );
    bVar8 = (uVar3 & uVar9 & uVar4) == 0;
    if (bVar8) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_UIEventDispatcher_dispatchEvent\'",0
                 );
    }
    else {
      uVar3 = fairygui::UIEventDispatcher::dispatchEvent(this,local_5c,unaff_x22,(Value *)local_58);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar8 = !bVar8;
    cocos2d::Value::~Value((Value *)local_58);
    goto LAB_008d856c;
  }
  if (iVar2 == 3) {
                    /* catch() { ... } // from try @ 008d82c4 with catch @ 008d83e4 */
                    /* catch() { ... } // from try @ 008d81ac with catch @ 008d83e8 */
    uVar5 = luaval_to_int32(param_1,2,local_58,"fairygui.UIEventDispatcher:dispatchEvent");
                    /* catch() { ... } // from try @ 008d812c with catch @ 008d83ec */
                    /* catch() { ... } // from try @ 008d80ac with catch @ 008d83f0 */
                    /* catch() { ... } // from try @ 008d80a0 with catch @ 008d83f4 */
                    /* catch() { ... } // from try @ 008d8100 with catch @ 008d8404
                       catch() { ... } // from try @ 008d8150 with catch @ 008d8404
                       catch() { ... } // from try @ 008d81d4 with catch @ 008d8404
                       catch() { ... } // from try @ 008d8298 with catch @ 008d8404
                       catch() { ... } // from try @ 008d82ec with catch @ 008d8404
                       catch() { ... } // from try @ 008d8344 with catch @ 008d8404 */
                    /* catch() { ... } // from try @ 008d80cc with catch @ 008d8408 */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       ((uVar6 = luaval_is_usertype(param_1,3,"cc.Ref",0), (uVar6 & 1) == 0 ||
        (pvVar7 = (void *)tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)))) {
LAB_008d844c:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_UIEventDispatcher_dispatchEvent\'",0
                 );
      goto LAB_008d84f4;
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.UIEventDispatcher:dispatchEvent",iVar2 + -1,1);
LAB_008d84f4:
      bVar8 = false;
      goto LAB_008d856c;
    }
    uVar5 = luaval_to_int32(param_1,2,local_58,"fairygui.UIEventDispatcher:dispatchEvent");
    if ((uVar5 & 1) == 0) goto LAB_008d844c;
    pvVar7 = (void *)0x0;
  }
  uVar3 = fairygui::UIEventDispatcher::dispatchEvent
                    (this,local_58[0],pvVar7,(Value *)&cocos2d::Value::Null);
                    /* catch() { ... } // from try @ 008d8328 with catch @ 008d83c0 */
                    /* catch() { ... } // from try @ 008d826c with catch @ 008d83c4 */
  tolua_pushboolean(param_1,uVar3 & 1);
  bVar8 = true;
LAB_008d856c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 008d8594 to 009d869b has its CatchHandler @ 008d8594
                       catch() { ... } // from try @ 008d8594 with catch @ 008d8594
                       catch() { ... } // from try @ 008d86a4 with catch @ 008d8594
                       catch() { ... } // from try @ 008d86ec with catch @ 008d8594 */
  return bVar8;
}

