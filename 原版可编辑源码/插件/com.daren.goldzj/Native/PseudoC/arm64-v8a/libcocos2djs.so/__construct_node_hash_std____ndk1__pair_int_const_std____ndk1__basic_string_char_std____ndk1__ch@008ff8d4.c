
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   void*> > > > std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<int>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__construct_node_hash<std::__ndk1::pair<int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&>(unsigned long,
   std::__ndk1::pair<int const, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __construct_node_hash<std::__ndk1::pair<int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
               (ulong param_1,pair *param_2)

{
  void *pvVar1;
  void *__dest;
  undefined4 *in_x2;
  undefined8 *in_x8;
  undefined8 *puVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar1 = operator_new(0x30);
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(undefined4 *)((long)pvVar1 + 0x10) = *in_x2;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  if ((*(byte *)(in_x2 + 2) & 1) == 0) {
    uVar5 = *(undefined8 *)(in_x2 + 4);
    uVar4 = *(undefined8 *)(in_x2 + 2);
    *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(in_x2 + 6);
    *(undefined8 *)((long)pvVar1 + 0x20) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0x18) = uVar4;
    goto LAB_008ff9a0;
  }
  __n = *(ulong *)(in_x2 + 4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(in_x2 + 6);
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar1 + 0x19);
    *(char *)((long)pvVar1 + 0x18) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_008ff98c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    *(ulong *)((long)pvVar1 + 0x20) = __n;
    *(void **)((long)pvVar1 + 0x28) = __dest;
    *(ulong *)((long)pvVar1 + 0x18) = uVar3 | 1;
LAB_008ff98c:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_008ff9a0:
  puVar2 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *puVar2 = 0;
  puVar2[1] = param_2;
  return;
}

