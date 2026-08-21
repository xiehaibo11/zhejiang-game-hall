
/* cocos2d::network::SIOClient::fireEvent(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::network::SIOClient::fireEvent(SIOClient *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  tuple atStack_90 [8];
  basic_string *local_88;
  basic_string *local_80 [4];
  basic_string **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x50) + 0x30))(*(long **)(this + 0x50),this,param_1,param_2);
  local_80[0] = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
                      *)(this + 0x58),param_1,(piecewise_construct_t *)&DAT_0188d1a5,
                     (tuple *)local_80,(tuple *)&local_88);
  if (*(long *)(lVar2 + 0x50) != 0) {
    local_88 = param_1;
    lVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::network::SIOClient*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
                        *)(this + 0x58),param_1,(piecewise_construct_t *)&DAT_0188d1a5,
                       (tuple *)&local_88,atStack_90);
    plVar3 = *(long **)(lVar2 + 0x50);
    if (plVar3 == (long *)0x0) {
                    /* catch() { ... } // from try @ 009e62d8 with catch @ 009e6524 */
      local_60 = (basic_string **)0x0;
LAB_009e652c:
      local_88 = (basic_string *)this;
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    if ((long *)(lVar2 + 0x30) == plVar3) {
      local_60 = local_80;
                    /* try { // try from 009e6498 to 00ae64db has its CatchHandler @ 009e64f0 */
      (**(code **)(*plVar3 + 0x18))(plVar3,local_80);
      if (local_60 == (basic_string **)0x0) goto LAB_009e652c;
    }
    else {
      local_60 = (basic_string **)(**(code **)(*plVar3 + 0x10))();
      if (local_60 == (basic_string **)0x0) {
        local_60 = (basic_string **)0x0;
        goto LAB_009e652c;
      }
    }
    local_88 = (basic_string *)this;
    (**(code **)(*local_60 + 0x30))(local_60,&local_88,param_2);
    if (local_80 == local_60) {
                    /* catch() { ... } // from try @ 009e6358 with catch @ 009e64f0
                       catch() { ... } // from try @ 009e6498 with catch @ 009e64f0 */
      pcVar4 = *(code **)(*local_60 + 0x20);
    }
    else {
                    /* try { // try from 009e64dc to 00ae6593 has its CatchHandler @ 009e6254 */
      if (local_60 == (basic_string **)0x0) goto LAB_009e64f8;
      pcVar4 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar4)();
  }
LAB_009e64f8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 009e6314 with catch @ 009e6508 */
                    /* catch() { ... } // from try @ 009e62c0 with catch @ 009e650c */
                    /* catch() { ... } // from try @ 009e62b8 with catch @ 009e6514 */
                    /* catch() { ... } // from try @ 009e62ac with catch @ 009e651c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

