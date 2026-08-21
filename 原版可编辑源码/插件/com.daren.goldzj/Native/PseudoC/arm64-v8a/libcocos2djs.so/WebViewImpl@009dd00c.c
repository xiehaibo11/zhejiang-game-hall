
/* cocos2d::WebViewImpl::WebViewImpl(cocos2d::WebView*) */

void __thiscall cocos2d::WebViewImpl::WebViewImpl(WebViewImpl *this,WebView *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  piecewise_construct_t *ppVar6;
  _jclass *local_58;
  _jmethodID *p_Stack_50;
  undefined8 local_48;
  long local_38;
  
                    /* catch() { ... } // from try @ 009dcfd4 with catch @ 009dd018 */
                    /* catch() { ... } // from try @ 009dcfb8 with catch @ 009dd01c */
                    /* catch() { ... } // from try @ 009dcfb0 with catch @ 009dd020 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 009dcf8c with catch @ 009dd024 */
                    /* catch() { ... } // from try @ 009dcf84 with catch @ 009dd028 */
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009dcf60 with catch @ 009dd02c */
  uVar3 = 0xffffffff;
                    /* catch() { ... } // from try @ 009dcf58 with catch @ 009dd03c */
  *(undefined ***)this = &PTR__WebViewImpl_01c6bd80;
  ppVar6 = (piecewise_construct_t *)(this + 8);
  *(undefined4 *)ppVar6 = 0xffffffff;
  *(WebView **)(this + 0x10) = param_1;
                    /* try { // try from 009dd050 to 00add0ff has its CatchHandler @ 009dd050
                       catch() { ... } // from try @ 009dd050 with catch @ 009dd050
                       catch() { ... } // from try @ 009dd10c with catch @ 009dd050 */
  pcVar1 = DAT_01d38760;
  if (((byte)DAT_01d38750 & 1) == 0) {
    pcVar1 = (char *)((long)&DAT_01d38750 + 1);
  }
  uVar4 = JniHelper::getStaticMethodInfo((JniMethodInfo_ *)&local_58,pcVar1,"createWebView","()I");
  if ((uVar4 & 1) != 0) {
    uVar3 = _JNIEnv::CallStaticIntMethod(local_58,p_Stack_50,local_48);
    (**(code **)(*(long *)local_58 + 0xb8))(local_58,p_Stack_50);
  }
  *(undefined4 *)(this + 8) = uVar3;
  local_58 = (_jclass *)ppVar6;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)&DAT_01d38798,ppVar6,(tuple *)&DAT_0188ce2c,(tuple *)&local_58);
  *(WebViewImpl **)(lVar5 + 0x18) = this;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

