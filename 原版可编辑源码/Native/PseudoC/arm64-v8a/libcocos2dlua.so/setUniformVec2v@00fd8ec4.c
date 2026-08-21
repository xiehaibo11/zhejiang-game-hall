
/* cocos2d::GLProgramState::setUniformVec2v(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, long, cocos2d::Vec2
   const*) */

void __thiscall
cocos2d::GLProgramState::setUniformVec2v
          (GLProgramState *this,basic_string *param_1,long param_2,Vec2 *param_3)

{
  long lVar1;
  long lVar2;
  piecewise_construct_t *local_50;
  long local_48;
  
                    /* try { // try from 00fd8ed4 to 010d8edb has its CatchHandler @ 00fd8f1c */
                    /* try { // try from 00fd8edc to 010d8f37 has its CatchHandler @ 00fd8eac */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  updateUniformsAndAttributes(this);
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                      *)(this + 0x28),param_1);
  if (lVar2 != 0) {
    local_50 = (piecewise_construct_t *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00fd8ed4 with catch @ 00fd8f1c */
    lVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
            ::
            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                      ((int *)(this + 0x50),local_50,(tuple *)&DAT_0144cee0,(tuple *)&local_50);
    *(Vec2 **)(lVar2 + 0x30) = param_3;
    *(int *)(lVar2 + 0x38) = (int)param_2;
                    /* catch() { ... } // from try @ 00fd8f68 with catch @ 00fd8f38 */
    *(undefined4 *)(lVar2 + 0x28) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00fd8f60 to 010d8f67 has its CatchHandler @ 00fd8fa4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

