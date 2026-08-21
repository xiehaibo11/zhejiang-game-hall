
/* lua_cocos2dx_extension_ScrollView_initWithViewSize(lua_State*) */

void lua_cocos2dx_extension_ScrollView_initWithViewSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ScrollView *pSVar4;
  ulong uVar5;
  ulong uVar6;
  Size *pSVar7;
  undefined8 uVar8;
  Size aSStack_60 [8];
  Size aSStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
  pSVar7 = aSStack_60;
                    /* try { // try from 009ab0d4 to 00aab16f has its CatchHandler @ 009ab204 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pSVar4 = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
                    /* try { // try from 009ab170 to 00aab217 has its CatchHandler @ 009ab010 */
    cocos2d::Size::Size(aSStack_50);
    uVar5 = luaval_to_size(param_1,2,aSStack_50,"cc.ScrollView:initWithViewSize");
    if ((((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
        (uVar6 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar6 & 1) == 0)) ||
       (uVar8 = tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)) {
LAB_009ab1f8:
                    /* catch() { ... } // from try @ 009ab0d4 with catch @ 009ab204 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_initWithViewSize\'"
                  ,0);
      goto LAB_009ab230;
    }
                    /* catch() { ... } // from try @ 009ab05c with catch @ 009ab1e0 */
    cocos2d::Size::Size(aSStack_60,aSStack_50);
                    /* catch() { ... } // from try @ 009ab054 with catch @ 009ab1e8 */
                    /* catch() { ... } // from try @ 009ab064 with catch @ 009ab1ec */
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 009ab218 to 00aab23f has its CatchHandler @ 009ab218
                       catch() { ... } // from try @ 009ab218 with catch @ 009ab218
                       catch() { ... } // from try @ 009ab94c with catch @ 009ab218 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.ScrollView:initWithViewSize",iVar2 + -1,1);
LAB_009ab230:
      uVar8 = 0;
      goto LAB_009ab234;
    }
    cocos2d::Size::Size(aSStack_50);
    uVar5 = luaval_to_size(param_1,2,aSStack_50,"cc.ScrollView:initWithViewSize");
    if ((uVar5 & 1) == 0) goto LAB_009ab1f8;
    cocos2d::Size::Size(aSStack_58,aSStack_50);
    pSVar7 = aSStack_58;
    uVar8 = 0;
  }
  uVar3 = cocos2d::extension::ScrollView::initWithViewSize(pSVar4,pSVar7,uVar8);
  tolua_pushboolean(param_1,uVar3 & 1);
  uVar8 = 1;
LAB_009ab234:
                    /* try { // try from 009ab240 to 00aab247 has its CatchHandler @ 009ab99c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009ab248 to 00aab24f has its CatchHandler @ 009ab994 */
                    /* try { // try from 009ab250 to 00aab257 has its CatchHandler @ 009ab990 */
                    /* try { // try from 009ab258 to 00aab94b has its CatchHandler @ 009ab9a4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

