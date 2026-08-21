
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, se::Class*>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, se::Class*>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, se::Class*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, se::Class*>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, se::Class*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, se::Class*> >
   >::__construct_node<char const*&, se::Class*&>(char const*&, se::Class*&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
     ::__construct_node<char_const*&,se::Class*&>(char **param_1,Class **param_2)

{
  long lVar1;
  void *pvVar2;
  size_t __n;
  void *__dest;
  undefined8 *in_x2;
  undefined8 *in_x8;
  undefined8 uVar3;
  undefined8 *puVar4;
  Class *__s;
  ulong uVar5;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x30);
  *in_x8 = pvVar2;
  in_x8[1] = param_1 + 2;
  *(undefined1 *)(in_x8 + 2) = 0;
  __s = *param_2;
  *(undefined8 *)((long)pvVar2 + 0x10) = 0;
  *(undefined8 *)((long)pvVar2 + 0x18) = 0;
  *(undefined8 *)((long)pvVar2 + 0x20) = 0;
  __n = strlen((char *)__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar2 + 0x11);
    *(char *)((long)pvVar2 + 0x10) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_008a4524;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    *(size_t *)((long)pvVar2 + 0x18) = __n;
    *(void **)((long)pvVar2 + 0x20) = __dest;
    *(ulong *)((long)pvVar2 + 0x10) = uVar5 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_008a4524:
  *(undefined1 *)((long)__dest + __n) = 0;
  uVar3 = *in_x2;
  puVar4 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *(undefined8 *)((long)pvVar2 + 0x28) = uVar3;
  uVar5 = (ulong)(*(byte *)(puVar4 + 2) >> 1);
  pvVar2 = (void *)((long)puVar4 + 0x11);
  if ((*(byte *)(puVar4 + 2) & 1) != 0) {
    uVar5 = puVar4[3];
    pvVar2 = (void *)puVar4[4];
  }
  uVar3 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_60,pvVar2,uVar5);
  *puVar4 = 0;
  puVar4[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

