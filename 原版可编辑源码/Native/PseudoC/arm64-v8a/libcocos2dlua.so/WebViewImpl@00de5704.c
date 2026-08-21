
/* cocos2d::experimental::ui::WebViewImpl::WebViewImpl(cocos2d::experimental::ui::WebView*) */

void __thiscall
cocos2d::experimental::ui::WebViewImpl::WebViewImpl(WebViewImpl *this,WebView *param_1)

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
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00de564c with catch @ 00de5724 */
                    /* catch() { ... } // from try @ 00de55b0 with catch @ 00de5728 */
  uVar3 = 0xffffffff;
                    /* catch() { ... } // from try @ 00de5544 with catch @ 00de5738 */
  *(undefined ***)this = &PTR__WebViewImpl_016e5928;
  ppVar6 = (piecewise_construct_t *)(this + 8);
  *(undefined4 *)ppVar6 = 0xffffffff;
  *(WebView **)(this + 0x10) = param_1;
                    /* catch() { ... } // from try @ 00de54d8 with catch @ 00de5748 */
                    /* catch() { ... } // from try @ 00de546c with catch @ 00de5758 */
  pcVar1 = DAT_01788a48;
  if ((DAT_01788a38 & 1) == 0) {
    pcVar1 = &DAT_01788a39;
  }
                    /* catch() { ... } // from try @ 00de5400 with catch @ 00de5768 */
  uVar4 = JniHelper::getStaticMethodInfo((JniMethodInfo_ *)&local_58,pcVar1,"createWebView","()I");
                    /* catch() { ... } // from try @ 00de55b8 with catch @ 00de5778
                       catch() { ... } // from try @ 00de5678 with catch @ 00de5778 */
  if ((uVar4 & 1) != 0) {
    uVar3 = _JNIEnv::CallStaticIntMethod(local_58,p_Stack_50,local_48);
    (**(code **)(*(long *)local_58 + 0xb8))(local_58,p_Stack_50);
  }
  *(undefined4 *)(this + 8) = uVar3;
  local_58 = (_jclass *)ppVar6;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)&DAT_01788a80,ppVar6,(tuple *)&DAT_014205b7,(tuple *)&local_58);
  *(WebViewImpl **)(lVar5 + 0x18) = this;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

