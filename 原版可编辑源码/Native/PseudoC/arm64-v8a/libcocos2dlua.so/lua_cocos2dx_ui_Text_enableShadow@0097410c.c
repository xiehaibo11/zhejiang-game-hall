
/* lua_cocos2dx_ui_Text_enableShadow(lua_State*) */

ulong lua_cocos2dx_ui_Text_enableShadow(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color4B *pCVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  Color4B *pCVar7;
  uint uVar8;
  int local_5c;
  Color4B aCStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
                    /* try { // try from 00974118 to 00a74177 has its CatchHandler @ 00974118
                       catch() { ... } // from try @ 00974118 with catch @ 00974118
                       catch() { ... } // from try @ 009741d4 with catch @ 00974118
                       catch() { ... } // from try @ 00974290 with catch @ 00974118 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pCVar3 = (Color4B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2 + -1) {
  case 0:
                    /* try { // try from 00974178 to 00a741d3 has its CatchHandler @ 009742a4 */
    cocos2d::Size::Size(aSStack_50,2.0,-2.0);
    pCVar7 = (Color4B *)&cocos2d::Color4B::BLACK;
    goto LAB_00974290;
  case 1:
    cocos2d::Color4B::Color4B(aCStack_58);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_58,"ccui.Text:enableShadow");
    if ((uVar4 & 1) == 0) {
code_r0x009742b4:
      tolua_error(param_1,&DAT_012d95a7,0);
      goto LAB_009742e8;
    }
                    /* try { // try from 0097427c to 00a7428f has its CatchHandler @ 009742a4 */
    cocos2d::Size::Size(aSStack_50,2.0,-2.0);
    break;
  case 2:
    cocos2d::Color4B::Color4B(aCStack_58);
    cocos2d::Size::Size(aSStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_58,"ccui.Text:enableShadow");
    uVar5 = luaval_to_size(param_1,3,aSStack_50,"ccui.Text:enableShadow");
    if ((uVar4 & 1) == 0) goto code_r0x009742b4;
                    /* try { // try from 009741d4 to 00a7427b has its CatchHandler @ 00974118 */
    if ((uVar5 & 1) == 0) {
      uVar4 = FUN_009742b4();
      return uVar4;
    }
    break;
  case 3:
    cocos2d::Color4B::Color4B(aCStack_58);
    cocos2d::Size::Size(aSStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_58,"ccui.Text:enableShadow");
    uVar5 = luaval_to_size(param_1,3,aSStack_50,"ccui.Text:enableShadow");
    uVar6 = luaval_to_int32(param_1,4,&local_5c,"ccui.Text:enableShadow");
    if ((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) goto code_r0x009742b4;
    pCVar7 = aCStack_58;
    iVar2 = (int)aSStack_50;
    goto FUN_0097429c;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:enableShadow",iVar2 + -1,0);
LAB_009742e8:
    uVar8 = 0;
    goto LAB_009742ec;
  }
  pCVar7 = aCStack_58;
LAB_00974290:
                    /* try { // try from 00974290 to 00a7430b has its CatchHandler @ 00974118 */
  iVar2 = (int)aSStack_50;
FUN_0097429c:
  cocos2d::ui::Text::enableShadow(pCVar3,(Size *)pCVar7,iVar2);
  uVar8 = 1;
  lua_settop(param_1,1);
LAB_009742ec:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)uVar8;
}

