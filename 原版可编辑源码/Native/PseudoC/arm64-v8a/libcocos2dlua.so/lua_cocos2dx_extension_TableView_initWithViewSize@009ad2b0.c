
/* lua_cocos2dx_extension_TableView_initWithViewSize(lua_State*) */

void lua_cocos2dx_extension_TableView_initWithViewSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  TableView *pTVar4;
  ulong uVar5;
  ulong uVar6;
  Size *pSVar7;
  undefined8 uVar8;
  Size aSStack_60 [8];
  Size aSStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
  pSVar7 = aSStack_60;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009ad274 with catch @ 009ad2e0 */
  pTVar4 = (TableView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Size::Size(aSStack_50);
    uVar5 = luaval_to_size(param_1,2,aSStack_50,"cc.TableView:initWithViewSize");
                    /* try { // try from 009ad3a4 to 00aad3af has its CatchHandler @ 009ad520 */
                    /* try { // try from 009ad3b0 to 00aad41b has its CatchHandler @ 009ad2fc */
    if ((((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
        (uVar6 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar6 & 1) == 0)) ||
       (uVar8 = tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)) {
LAB_009ad3dc:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_TableView_initWithViewSize\'"
                  ,0);
      goto LAB_009ad414;
    }
    cocos2d::Size::Size(aSStack_60,aSStack_50);
  }
  else {
                    /* try { // try from 009ad2fc to 00aad3a3 has its CatchHandler @ 009ad2fc
                       catch() { ... } // from try @ 009ad2fc with catch @ 009ad2fc
                       catch() { ... } // from try @ 009ad3b0 with catch @ 009ad2fc
                       catch() { ... } // from try @ 009ad424 with catch @ 009ad2fc
                       catch() { ... } // from try @ 009ad468 with catch @ 009ad2fc
                       catch() { ... } // from try @ 009ad494 with catch @ 009ad2fc */
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7607,
                 iVar2 + -1,1);
LAB_009ad414:
      uVar8 = 0;
      goto LAB_009ad418;
    }
    cocos2d::Size::Size(aSStack_50);
    uVar5 = luaval_to_size(param_1,2,aSStack_50,"cc.TableView:initWithViewSize");
    if ((uVar5 & 1) == 0) goto LAB_009ad3dc;
    cocos2d::Size::Size(aSStack_58,aSStack_50);
    pSVar7 = aSStack_58;
    uVar8 = 0;
  }
  uVar3 = cocos2d::extension::TableView::initWithViewSize(pTVar4,pSVar7,uVar8);
  tolua_pushboolean(param_1,uVar3 & 1);
  uVar8 = 1;
LAB_009ad418:
                    /* try { // try from 009ad41c to 00aad423 has its CatchHandler @ 009ad4fc */
                    /* try { // try from 009ad424 to 00aad457 has its CatchHandler @ 009ad2fc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

