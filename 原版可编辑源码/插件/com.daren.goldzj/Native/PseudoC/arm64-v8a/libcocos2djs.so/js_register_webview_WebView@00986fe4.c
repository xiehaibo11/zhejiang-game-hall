
/* js_register_webview_WebView(se::Object*) */

undefined8 js_register_webview_WebView(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0098700c to 00a87033 has its CatchHandler @ 00987040 */
  uStack_3f = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0xe;
  uStack_47 = 0x77656956626557;
  uStack_40 = 0;
                    /* try { // try from 00987034 to 00a87043 has its CatchHandler @ 00986fb0 */
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_webview_WebView_constructorRegistry);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098700c with catch @ 00987040
                        */
                    /* try { // try from 00987044 to 00a87047 has its CatchHandler @ 0098704c */
  if (((byte)local_48 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00987044 with catch @ 0098704c
                        */
    operator_delete(local_38);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009870f4 with catch @ 00987050
                       catch(type#1 @ 00000000) { ... } // from try @ 00987154 with catch @ 00987050
                       catch(type#1 @ 00000000) { ... } // from try @ 00987164 with catch @ 00987050
                        */
  se::Class::defineFunction
            (this,"setOnShouldStartLoading",js_webview_WebView_setOnShouldStartLoadingRegistry);
  se::Class::defineFunction
            (this,"setOnDidFailLoading",js_webview_WebView_setOnDidFailLoadingRegistry);
  se::Class::defineFunction(this,"canGoBack",js_webview_WebView_canGoBackRegistry);
                    /* try { // try from 009870a8 to 00a870ab has its CatchHandler @ 00987128 */
  se::Class::defineFunction(this,"loadHTMLString",js_webview_WebView_loadHTMLStringRegistry);
  se::Class::defineFunction(this,"goForward",js_webview_WebView_goForwardRegistry);
                    /* try { // try from 009870d0 to 00a870f3 has its CatchHandler @ 00987130 */
  se::Class::defineFunction(this,"goBack",js_webview_WebView_goBackRegistry);
                    /* try { // try from 009870f4 to 00a8714f has its CatchHandler @ 00987050 */
  se::Class::defineFunction(this,"setScalesPageToFit",js_webview_WebView_setScalesPageToFitRegistry)
  ;
  se::Class::defineFunction
            (this,"getOnDidFailLoading",js_webview_WebView_getOnDidFailLoadingRegistry);
  se::Class::defineFunction(this,"loadFile",js_webview_WebView_loadFileRegistry);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009870a8 with catch @ 00987128
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009870d0 with catch @ 00987130
                        */
  se::Class::defineFunction(this,"loadURL",js_webview_WebView_loadURLRegistry);
                    /* try { // try from 00987150 to 00a87153 has its CatchHandler @ 0098715c */
                    /* try { // try from 00987154 to 00a8715f has its CatchHandler @ 00987050 */
  se::Class::defineFunction(this,"setBounces",js_webview_WebView_setBouncesRegistry);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00987150 with catch @ 0098715c
                        */
                    /* try { // try from 00987160 to 00a87163 has its CatchHandler @ 0098716c */
                    /* try { // try from 00987164 to 00a8716f has its CatchHandler @ 00987050 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00987160 with catch @ 0098716c
                        */
  se::Class::defineFunction(this,"evaluateJS",js_webview_WebView_evaluateJSRegistry);
  se::Class::defineFunction(this,"setOnJSCallback",js_webview_WebView_setOnJSCallbackRegistry);
  se::Class::defineFunction
            (this,"setBackgroundTransparent",js_webview_WebView_setBackgroundTransparentRegistry);
  se::Class::defineFunction(this,"getOnJSCallback",js_webview_WebView_getOnJSCallbackRegistry);
  se::Class::defineFunction(this,"canGoForward",js_webview_WebView_canGoForwardRegistry);
  se::Class::defineFunction
            (this,"getOnShouldStartLoading",js_webview_WebView_getOnShouldStartLoadingRegistry);
  se::Class::defineFunction(this,"stopLoading",js_webview_WebView_stopLoadingRegistry);
  se::Class::defineFunction(this,"setFrame",js_webview_WebView_setFrameRegistry);
  se::Class::defineFunction(this,"setVisible",js_webview_WebView_setVisibleRegistry);
  se::Class::defineFunction(this,"reload",js_webview_WebView_reloadRegistry);
  se::Class::defineFunction(this,"loadData",js_webview_WebView_loadDataRegistry);
  se::Class::defineFunction
            (this,"setJavascriptInterfaceScheme",
             js_webview_WebView_setJavascriptInterfaceSchemeRegistry);
  se::Class::defineFunction
            (this,"setOnDidFinishLoading",js_webview_WebView_setOnDidFinishLoadingRegistry);
  se::Class::defineFunction
            (this,"getOnDidFinishLoading",js_webview_WebView_getOnDidFinishLoadingRegistry);
  se::Class::defineFunction(this,"destroy",js_cocos2d_WebView_destroyRegistry);
  se::Class::defineStaticFunction(this,"create",js_webview_WebView_createRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_WebView_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188ce01;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_WebView_proto = se::Class::getProto(this);
  __jsb_cocos2d_WebView_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

