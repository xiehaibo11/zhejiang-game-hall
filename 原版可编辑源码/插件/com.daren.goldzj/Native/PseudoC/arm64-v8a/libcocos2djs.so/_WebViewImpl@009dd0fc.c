
/* cocos2d::WebViewImpl::~WebViewImpl() */

void __thiscall cocos2d::WebViewImpl::~WebViewImpl(WebViewImpl *this)

{
  long lVar1;
  basic_string local_40;
  undefined5 uStack_3f;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined5 uStack_37;
  undefined1 local_32;
  undefined1 uStack_31;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009dd100 to 00add10b has its CatchHandler @ 009dd19c */
                    /* try { // try from 009dd10c to 00add1b7 has its CatchHandler @ 009dd050 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__WebViewImpl_01c6bd80;
  uStack_31 = 0;
  local_40 = (basic_string)0x1a;
  local_30 = (void *)0x0;
  local_32 = 0;
  uStack_37 = 0x7765695662;
  uStack_3f = 0x766f6d6572;
  uStack_3a = 0x5765;
  uStack_38 = 0x65;
  JniHelper::callStaticVoidMethod<int>((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
  ::__erase_unique<int>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
              *)&DAT_01d38798,(int *)(this + 8));
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 009dd100 with catch @ 009dd19c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

