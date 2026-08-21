
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__construct_node_hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&>(unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
               (ulong param_1,basic_string *param_2,basic_string *param_3)

{
  void *pvVar1;
  void *pvVar2;
  byte *in_x3;
  undefined8 *in_x8;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* catch() { ... } // from try @ 00a5fc90 with catch @ 00a5fddc */
  pvVar1 = operator_new(0x40);
                    /* catch() { ... } // from try @ 00a5fb8c with catch @ 00a5fde4 */
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
                    /* catch() { ... } // from try @ 00a5fb30 with catch @ 00a5fdfc */
  if (((byte)*param_3 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar7 = *(undefined8 *)param_3;
                    /* catch() { ... } // from try @ 00a5fb20 with catch @ 00a5fe0c */
    *(undefined8 *)((long)pvVar1 + 0x20) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)((long)pvVar1 + 0x18) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x10) = uVar7;
                    /* catch() { ... } // from try @ 00a5fb08 with catch @ 00a5fe14 */
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
                    /* catch() { ... } // from try @ 00a5fb5c with catch @ 00a5fe1c
                       catch() { ... } // from try @ 00a5fbb0 with catch @ 00a5fe1c */
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
                    /* catch() { ... } // from try @ 00a5fc98 with catch @ 00a5fe24 */
    pvVar4 = *(void **)(param_3 + 0x10);
    if (uVar5 < 0x17) {
      pvVar2 = (void *)((long)pvVar1 + 0x11);
      *(char *)((long)pvVar1 + 0x10) = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00a5fe64;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar2 = operator_new(uVar6);
      *(ulong *)((long)pvVar1 + 0x18) = uVar5;
      *(void **)((long)pvVar1 + 0x20) = pvVar2;
      *(ulong *)((long)pvVar1 + 0x10) = uVar6 | 1;
LAB_00a5fe64:
      memcpy(pvVar2,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar2 + uVar5) = 0;
  }
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  *(undefined8 *)((long)pvVar1 + 0x38) = 0;
  if ((*in_x3 & 1) == 0) {
    uVar8 = *(undefined8 *)(in_x3 + 8);
    uVar7 = *(undefined8 *)in_x3;
    *(undefined8 *)((long)pvVar1 + 0x38) = *(undefined8 *)(in_x3 + 0x10);
    *(undefined8 *)((long)pvVar1 + 0x30) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x28) = uVar7;
    goto LAB_00a5ff00;
  }
  uVar5 = *(ulong *)(in_x3 + 8);
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = *(void **)(in_x3 + 0x10);
  if (uVar5 < 0x17) {
    pvVar2 = (void *)((long)pvVar1 + 0x29);
    *(char *)((long)pvVar1 + 0x28) = (char)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_00a5feec;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar6);
    *(ulong *)((long)pvVar1 + 0x30) = uVar5;
    *(void **)((long)pvVar1 + 0x38) = pvVar2;
    *(ulong *)((long)pvVar1 + 0x28) = uVar6 | 1;
LAB_00a5feec:
                    /* try { // try from 00a5fef0 to 00b5ff9f has its CatchHandler @ 00a5fef0
                       catch() { ... } // from try @ 00a5fef0 with catch @ 00a5fef0
                       catch() { ... } // from try @ 00a5ffdc with catch @ 00a5fef0 */
    memcpy(pvVar2,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar2 + uVar5) = 0;
LAB_00a5ff00:
  puVar3 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = param_2;
  return;
}

