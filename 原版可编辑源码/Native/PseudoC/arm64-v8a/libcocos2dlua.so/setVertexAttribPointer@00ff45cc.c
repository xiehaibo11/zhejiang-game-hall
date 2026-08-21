
/* cocos2d::VertexAttribBinding::setVertexAttribPointer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, unsigned int,
   unsigned char, int, void*) */

void __thiscall
cocos2d::VertexAttribBinding::setVertexAttribPointer
          (VertexAttribBinding *this,basic_string *param_1,int param_2,uint param_3,uchar param_4,
          int param_5,void *param_6)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00ff4408 with catch @ 00ff45dc */
                    /* catch() { ... } // from try @ 00ff444c with catch @ 00ff45e0 */
                    /* try { // try from 00ff45fc to 010f463f has its CatchHandler @ 00ff45fc
                       catch() { ... } // from try @ 00ff45fc with catch @ 00ff45fc
                       catch() { ... } // from try @ 00ff464c with catch @ 00ff45fc
                       catch() { ... } // from try @ 00ff46b8 with catch @ 00ff45fc */
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
                      *)(this + 0x38),param_1);
  if (lVar1 != 0) {
    VertexAttribValue::setPointer
              ((VertexAttribValue *)(lVar1 + 0x28),param_2,param_3,param_4,param_5,param_6);
                    /* try { // try from 00ff4640 to 010f464b has its CatchHandler @ 00ff480c */
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 1 << (ulong)(**(uint **)(lVar1 + 0x28) & 0x1f)
    ;
  }
                    /* try { // try from 00ff464c to 010f4683 has its CatchHandler @ 00ff45fc */
  return;
}

