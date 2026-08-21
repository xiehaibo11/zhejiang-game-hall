
/* lua_cocos2dx_experimental_webview_WebView_loadHTMLString(lua_State*) */

bool lua_cocos2dx_experimental_webview_WebView_loadHTMLString(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  WebView *this;
  ulong uVar5;
  bool bVar6;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (WebView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
                    /* try { // try from 0099bd64 to 00a9bd6b has its CatchHandler @ 0099bdd4 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccexp.WebView:loadHTMLString")
    ;
                    /* try { // try from 0099bd78 to 00a9bd83 has its CatchHandler @ 0099bdd0 */
                    /* try { // try from 0099bd84 to 00a9bdeb has its CatchHandler @ 0099bc8c */
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccexp.WebView:loadHTMLString")
    ;
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_experimental_webview_WebView_loadHTMLString\'"
                  ,0);
    }
    else {
      cocos2d::experimental::ui::WebView::loadHTMLString
                (this,(basic_string *)&local_50,(basic_string *)&local_68);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 0099bd78 with catch @ 0099bdd0 */
                    /* catch() { ... } // from try @ 0099bce8 with catch @ 0099bdd4
                       catch() { ... } // from try @ 0099bd64 with catch @ 0099bdd4 */
                    /* catch() { ... } // from try @ 0099bd0c with catch @ 0099bdd8 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012e281c,
                 iVar2 + -1,1);
      bVar6 = false;
      goto LAB_0099be14;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0099bce8 to 00a9bcf3 has its CatchHandler @ 0099bdd4 */
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccexp.WebView:loadHTMLString")
    ;
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_experimental_webview_WebView_loadHTMLString\'"
                  ,0);
      bVar6 = false;
    }
    else {
                    /* try { // try from 0099bd0c to 00a9bd5b has its CatchHandler @ 0099bdd8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_68,"");
      cocos2d::experimental::ui::WebView::loadHTMLString
                (this,(basic_string *)&local_50,(basic_string *)&local_68);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      bVar6 = true;
      lua_settop(param_1,1);
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0099be14:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}

