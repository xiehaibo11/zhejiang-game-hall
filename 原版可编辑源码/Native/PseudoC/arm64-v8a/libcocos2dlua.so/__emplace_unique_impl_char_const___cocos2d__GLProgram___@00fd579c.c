
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::GLProgram*>, void*>*>,
   bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::GLProgram*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::GLProgram*>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::GLProgram*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::GLProgram*> >
   >::__emplace_unique_impl<char const*&, cocos2d::GLProgram*&>(char const*&, cocos2d::GLProgram*&)
    */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
::__emplace_unique_impl<char_const*&,cocos2d::GLProgram*&>(char **param_1,GLProgram **param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  void *local_50;
  char local_40;
  
                    /* try { // try from 00fd57ac to 010d57b3 has its CatchHandler @ 00fd57f0 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00fd57b4 to 010d580b has its CatchHandler @ 00fd5788 */
  lVar2 = *(long *)(lVar1 + 0x28);
  __construct_node<char_const*&,cocos2d::GLProgram*&>(param_1,param_2);
  auVar3 = FUN_00fd5950(param_1,local_50);
  if (((auVar3._8_8_ & 1) == 0) && (local_50 != (void *)0x0)) {
                    /* catch() { ... } // from try @ 00fd57ac with catch @ 00fd57f0 */
    if ((local_40 != '\0') && ((*(byte *)((long)local_50 + 0x10) & 1) != 0)) {
      operator_delete(*(void **)((long)local_50 + 0x20));
    }
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 00fd5848 with catch @ 00fd5818 */
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00fd5840 to 010d5847 has its CatchHandler @ 00fd5880 */
    __stack_chk_fail();
  }
  return auVar3;
}

