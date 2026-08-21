
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::GLProgram*>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::GLProgram*>, void*> > >
   > std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
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
   >::__construct_node<char const*&, cocos2d::GLProgram*&>(char const*&, cocos2d::GLProgram*&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
     ::__construct_node<char_const*&,cocos2d::GLProgram*&>(char **param_1,GLProgram **param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *in_x2;
  undefined8 *in_x8;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_50 [8];
  long local_48;
  
                    /* catch() { ... } // from try @ 00fd5840 with catch @ 00fd5880 */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar7 = operator_new(0x30);
  *in_x8 = puVar7;
  in_x8[1] = param_1 + 2;
  *(undefined1 *)(in_x8 + 2) = 0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (puVar7 + 2),(char *)*param_2);
  bVar4 = *(byte *)(puVar7 + 2);
  uVar3 = puVar7[3];
  bVar6 = (bVar4 & 1) != 0;
  puVar7[5] = *in_x2;
  pvVar1 = (void *)((long)puVar7 + 0x11);
  if (bVar6) {
    pvVar1 = (void *)puVar7[4];
  }
  *(undefined1 *)(in_x8 + 2) = 1;
  uVar2 = (ulong)(bVar4 >> 1);
  if (bVar6) {
    uVar2 = uVar3;
  }
  uVar8 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_50,pvVar1,uVar2);
  *puVar7 = 0;
  puVar7[1] = uVar8;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

