
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::EventDispatcher::DirtyFlag>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::DirtyFlag>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::DirtyFlag>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::EventDispatcher::DirtyFlag> > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 00fa6f44 to 010a6f4b has its CatchHandler @ 00fa6fdc */
                    /* try { // try from 00fa6f4c to 010a6f53 has its CatchHandler @ 00fa6fd8 */
  if (param_1 - 1 == 0) {
                    /* try { // try from 00fa6f54 to 010a6f5b has its CatchHandler @ 00fa6fc4 */
    param_1 = 2;
  }
  else {
                    /* try { // try from 00fa6f5c to 010a6f63 has its CatchHandler @ 00fa6fc0 */
                    /* try { // try from 00fa6f64 to 010a6f6b has its CatchHandler @ 00fa6fbc */
    if ((param_1 & param_1 - 1) != 0) {
                    /* try { // try from 00fa6f6c to 010a6f73 has its CatchHandler @ 00fa6fb8 */
      param_1 = __next_prime(param_1);
    }
  }
                    /* catch() { ... } // from try @ 00fa6ec4 with catch @ 00fa6f74
                       try { // try from 00fa6f74 to 010a7157 has its CatchHandler @ 00fa55a4 */
  uVar2 = *(ulong *)(this + 8);
  if (param_1 <= uVar2) {
    if (param_1 < uVar2) {
                    /* catch() { ... } // from try @ 00fa6e70 with catch @ 00fa6f90 */
                    /* catch() { ... } // from try @ 00fa6e1c with catch @ 00fa6fa0 */
      uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
                    /* catch() { ... } // from try @ 00fa6cf0 with catch @ 00fa6fb8
                       catch() { ... } // from try @ 00fa6f6c with catch @ 00fa6fb8 */
                    /* catch() { ... } // from try @ 00fa6bac with catch @ 00fa6fbc
                       catch() { ... } // from try @ 00fa6f64 with catch @ 00fa6fbc */
                    /* catch() { ... } // from try @ 00fa6a68 with catch @ 00fa6fc0
                       catch() { ... } // from try @ 00fa6f5c with catch @ 00fa6fc0 */
      if ((uVar2 < 3) ||
         (uVar4 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                           CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                    CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                             CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                      CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                               CONCAT12(POPCOUNT((char)(uVar2 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar2 >> 8)),
                                                                  POPCOUNT((char)uVar2)))))))),
         uVar3 = NEON_uaddlv(uVar4,1), 1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3))) {
        uVar1 = __next_prime(uVar1);
      }
      else {
                    /* catch() { ... } // from try @ 00fa6924 with catch @ 00fa6fc4
                       catch() { ... } // from try @ 00fa6f54 with catch @ 00fa6fc4 */
        if (1 < uVar1) {
                    /* catch() { ... } // from try @ 00fa67ec with catch @ 00fa6fd8
                       catch() { ... } // from try @ 00fa6f4c with catch @ 00fa6fd8 */
                    /* catch() { ... } // from try @ 00fa66b0 with catch @ 00fa6fdc
                       catch() { ... } // from try @ 00fa6f44 with catch @ 00fa6fdc */
          uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
        }
      }
                    /* catch() { ... } // from try @ 00fa65c0 with catch @ 00fa6fec
                       catch() { ... } // from try @ 00fa6f34 with catch @ 00fa6fec */
      if (uVar1 <= param_1) {
        uVar1 = param_1;
      }
                    /* catch() { ... } // from try @ 00fa5818 with catch @ 00fa6ff0
                       catch() { ... } // from try @ 00fa6f2c with catch @ 00fa6ff0 */
      param_1 = uVar1;
                    /* catch() { ... } // from try @ 00fa5cc8 with catch @ 00fa6ff4 */
      if (uVar1 < uVar2) goto LAB_00fa6ffc;
    }
    return;
  }
LAB_00fa6ffc:
  __rehash(this,param_1);
  return;
}

