
/* cocos2d::experimental::ui::WebViewImpl::~WebViewImpl() */

void __thiscall cocos2d::experimental::ui::WebViewImpl::~WebViewImpl(WebViewImpl *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__WebViewImpl_016e5928;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"removeWebView");
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01788a38,(basic_string *)local_40,*(int *)(this + 8));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>>>
  ::__erase_unique<int>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>>>
              *)&DAT_01788a80,(int *)(this + 8));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

