
/* se::Class* JSBClassType::findClass<cocos2d::WebView>(cocos2d::WebView const*) */

Class * JSBClassType::findClass<cocos2d::WebView>(WebView *param_1)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  Class *pCVar4;
  char *__s;
  void *__dest;
  ulong uVar5;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (WebView *)0x0) {
    __cxa_bad_typeid();
LAB_00987a60:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __s = *(char **)(*(long *)(*(long *)param_1 + -8) + 8);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) goto LAB_00987a60;
  if (sVar2 < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar2 << 1));
    if (sVar2 != 0) goto LAB_009879ac;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_60 = uVar5 | 1;
    local_58 = sVar2;
    local_50 = __dest;
LAB_009879ac:
    memcpy(__dest,__s,sVar2);
  }
  *(undefined1 *)((long)__dest + sVar2) = 0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (__jsbClassTypeMap,(basic_string *)&local_60);
  if (lVar3 == 0) {
    sVar2 = strlen("N7cocos2d7WebViewE");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_60,"N7cocos2d7WebViewE",sVar2);
                    /* try { // try from 00987a04 to 00a87a37 has its CatchHandler @ 00987a04
                       catch() { ... } // from try @ 00987a04 with catch @ 00987a04
                       catch() { ... } // from try @ 00987a58 with catch @ 00987a04 */
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (__jsbClassTypeMap,(basic_string *)&local_60);
    if (lVar3 == 0) {
                    /* try { // try from 00987a4c to 00a87a57 has its CatchHandler @ 00987a68 */
      pCVar4 = (Class *)0x0;
      goto joined_r0x00987a14;
    }
  }
  pCVar4 = *(Class **)(lVar3 + 0x28);
joined_r0x00987a14:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00987a38 to 00a87a43 has its CatchHandler @ 00987a78 */
    return pCVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00987a4c with catch @ 00987a68 */
  __stack_chk_fail();
}

