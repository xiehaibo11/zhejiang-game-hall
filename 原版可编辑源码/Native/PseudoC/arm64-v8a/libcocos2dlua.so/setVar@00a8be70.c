
/* fairygui::GTextField::setVar(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Value const&) */

GTextField * __thiscall
fairygui::GTextField::setVar(GTextField *this,basic_string *param_1,Value *param_2)

{
  long lVar1;
  basic_string *pbVar2;
  long lVar3;
  basic_string *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00a8bdbc with catch @ 00a8be78
                       catch() { ... } // from try @ 00a8be24 with catch @ 00a8be78 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a8be94 to 00b8bee3 has its CatchHandler @ 00a8be94
                       catch() { ... } // from try @ 00a8be94 with catch @ 00a8be94
                       catch() { ... } // from try @ 00a8bf1c with catch @ 00a8be94
                       catch() { ... } // from try @ 00a8bf60 with catch @ 00a8be94 */
  pbVar2 = *(basic_string **)(this + 0x1f8);
  if (pbVar2 == (basic_string *)0x0) {
    pbVar2 = operator_new(0x28);
    *(undefined8 *)(pbVar2 + 8) = 0;
    *(undefined8 *)pbVar2 = 0;
    *(undefined8 *)(pbVar2 + 0x18) = 0;
    *(undefined8 *)(pbVar2 + 0x10) = 0;
    *(undefined4 *)(pbVar2 + 0x20) = 0x3f800000;
    *(basic_string **)(this + 0x1f8) = pbVar2;
  }
  local_40 = param_1;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    (pbVar2,(piecewise_construct_t *)param_1,(tuple *)&DAT_013cd31c,
                     (tuple *)&local_40);
                    /* try { // try from 00a8bee4 to 00b8bf1b has its CatchHandler @ 00a8bfa0 */
  cocos2d::Value::operator=((Value *)(lVar3 + 0x28),param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

