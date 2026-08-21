
/* lua_cocos2dx_extension_ScrollView_create(lua_State*) */

void lua_cocos2dx_extension_ScrollView_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  Size aSStack_60 [8];
  Size aSStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
                    /* try { // try from 009ac17c to 00aac18b has its CatchHandler @ 009ac2bc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    cocos2d::Size::Size(aSStack_50);
    uVar6 = luaval_to_size(param_1,2,aSStack_50,"cc.ScrollView:create");
                    /* catch() { ... } // from try @ 009ac1b4 with catch @ 009ac270 */
    if ((((param_1 == (lua_State *)0x0) || ((uVar6 & 1) == 0)) ||
        (iVar3 = lua_gettop(param_1), iVar3 < 3)) ||
       ((uVar7 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar7 & 1) == 0 ||
        (uVar5 = tolua_tousertype(param_1,3,0), (uVar6 & 1) == 0)))) goto LAB_009ac2cc;
    cocos2d::Size::Size(aSStack_60,aSStack_50);
                    /* catch() { ... } // from try @ 009ac17c with catch @ 009ac2bc
                       catch() { ... } // from try @ 009ac210 with catch @ 009ac2bc */
    pvVar4 = (void *)cocos2d::extension::ScrollView::create(aSStack_60,uVar5);
  }
  else {
                    /* try { // try from 009ac1b4 to 00aac1c3 has its CatchHandler @ 009ac270 */
    if (iVar2 == 2) {
      cocos2d::Size::Size(aSStack_50);
      uVar6 = luaval_to_size(param_1,2,aSStack_50,"cc.ScrollView:create");
      if ((uVar6 & 1) == 0) goto LAB_009ac2cc;
                    /* try { // try from 009ac210 to 00aac22f has its CatchHandler @ 009ac2bc */
      cocos2d::Size::Size(aSStack_58,aSStack_50);
      pvVar4 = (void *)cocos2d::extension::ScrollView::create(aSStack_58,0);
    }
    else {
      if (iVar2 != 1) {
LAB_009ac2cc:
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                   "cc.ScrollView:create",iVar2 + -1,1);
        uVar5 = 0;
        goto LAB_009ac2f0;
      }
      pvVar4 = (void *)cocos2d::extension::ScrollView::create();
                    /* try { // try from 009ac1c4 to 00aac20f has its CatchHandler @ 009ac108 */
    }
  }
  if (pvVar4 == (void *)0x0) {
                    /* try { // try from 009ac230 to 00aac2d7 has its CatchHandler @ 009ac108 */
    lua_pushnil(param_1);
    uVar5 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
               "cc.ScrollView");
    uVar5 = 1;
  }
LAB_009ac2f0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

