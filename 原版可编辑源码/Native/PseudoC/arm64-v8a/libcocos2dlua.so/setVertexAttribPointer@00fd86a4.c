
/* cocos2d::GLProgramState::setVertexAttribPointer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, unsigned int,
   unsigned char, int, void*) */

void __thiscall
cocos2d::GLProgramState::setVertexAttribPointer
          (GLProgramState *this,basic_string *param_1,int param_2,uint param_3,uchar param_4,
          int param_5,void *param_6)

{
  long lVar1;
  
                    /* try { // try from 00fd86a4 to 010d86f3 has its CatchHandler @ 00fd8678 */
                    /* catch() { ... } // from try @ 00fd869c with catch @ 00fd86d8 */
  updateUniformsAndAttributes(this);
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
                      *)(this + 0x78),param_1);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x38) = param_2;
    *(uint *)(lVar1 + 0x3c) = param_3;
    *(uchar *)(lVar1 + 0x40) = param_4;
    *(int *)(lVar1 + 0x44) = param_5;
    *(void **)(lVar1 + 0x48) = param_6;
    *(undefined1 *)(lVar1 + 0x31) = 1;
                    /* catch() { ... } // from try @ 00fd8740 with catch @ 00fd8714 */
    *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 1 << (ulong)(**(uint **)(lVar1 + 0x28) & 0x1f)
    ;
  }
                    /* try { // try from 00fd8738 to 010d873f has its CatchHandler @ 00fd8774 */
  return;
}

