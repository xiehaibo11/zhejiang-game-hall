
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::VertexAttribValue>,
   void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::VertexAttribValue>,
   void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::VertexAttribValue>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::VertexAttribValue>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::VertexAttribValue>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::VertexAttribValue> >
   >::__construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::VertexAttribValue>
   const&>(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::VertexAttribValue> const&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
     ::
     __construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::VertexAttribValue>const&>
               (pair *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  basic_string *in_x1;
  long *in_x8;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_50 [8];
  long local_48;
  
                    /* try { // try from 00fdb314 to 010db317 has its CatchHandler @ 00fdb328 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdb314 with catch @ 00fdb328
                        */
  pvVar3 = operator_new(0x50);
  *in_x8 = (long)pvVar3;
  in_x8[1] = (long)(param_1 + 0x10);
  *(undefined1 *)(in_x8 + 2) = 0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)pvVar3 + 0x10),in_x1);
  uVar8 = *(undefined8 *)(in_x1 + 0x20);
  uVar7 = *(undefined8 *)(in_x1 + 0x18);
  uVar10 = *(undefined8 *)(in_x1 + 0x30);
  uVar9 = *(undefined8 *)(in_x1 + 0x28);
  uVar4 = *(undefined8 *)(in_x1 + 0x38);
  lVar6 = *in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *(undefined8 *)((long)pvVar3 + 0x48) = uVar4;
                    /* try { // try from 00fdb370 to 010db373 has its CatchHandler @ 00fdb384 */
  *(undefined8 *)((long)pvVar3 + 0x40) = uVar10;
  *(undefined8 *)((long)pvVar3 + 0x38) = uVar9;
  *(undefined8 *)((long)pvVar3 + 0x30) = uVar8;
  *(undefined8 *)((long)pvVar3 + 0x28) = uVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdb370 with catch @ 00fdb384
                        */
  uVar1 = (ulong)(*(byte *)(lVar6 + 0x10) >> 1);
  pvVar3 = (void *)(lVar6 + 0x11);
  if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
    uVar1 = *(ulong *)(lVar6 + 0x18);
    pvVar3 = *(void **)(lVar6 + 0x20);
  }
  uVar4 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_50,pvVar3,uVar1);
  puVar5 = (undefined8 *)*in_x8;
  *puVar5 = 0;
  puVar5[1] = uVar4;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00fdb3c8 to 010db3cb has its CatchHandler @ 00fdb3e4 */
  return;
}

