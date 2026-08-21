
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
   >::__construct_node_hash<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   const&>(unsigned long, std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   const&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __construct_node_hash<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
               (ulong param_1,pair *param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *in_x2;
  undefined8 *in_x8;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pvVar1 = operator_new(0x40);
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  if ((*in_x2 & 1) == 0) {
    uVar8 = *(undefined8 *)(in_x2 + 8);
    uVar7 = *(undefined8 *)in_x2;
    *(undefined8 *)((long)pvVar1 + 0x20) = *(undefined8 *)(in_x2 + 0x10);
    *(undefined8 *)((long)pvVar1 + 0x18) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x10) = uVar7;
  }
  else {
    uVar5 = *(ulong *)(in_x2 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(in_x2 + 0x10);
    if (uVar5 < 0x17) {
                    /* try { // try from 00a5e2b8 to 00b5e2fb has its CatchHandler @ 00a5e350 */
      pvVar2 = (void *)((long)pvVar1 + 0x11);
      *(char *)((long)pvVar1 + 0x10) = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00a5e2e8;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar2 = operator_new(uVar6);
      *(ulong *)((long)pvVar1 + 0x18) = uVar5;
      *(void **)((long)pvVar1 + 0x20) = pvVar2;
      *(ulong *)((long)pvVar1 + 0x10) = uVar6 | 1;
LAB_00a5e2e8:
      memcpy(pvVar2,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar2 + uVar5) = 0;
  }
                    /* try { // try from 00a5e2fc to 00b5e3cf has its CatchHandler @ 00a5e144 */
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  *(undefined8 *)((long)pvVar1 + 0x38) = 0;
  if ((in_x2[0x18] & 1) == 0) {
    uVar8 = *(undefined8 *)(in_x2 + 0x20);
    uVar7 = *(undefined8 *)(in_x2 + 0x18);
    *(undefined8 *)((long)pvVar1 + 0x38) = *(undefined8 *)(in_x2 + 0x28);
    *(undefined8 *)((long)pvVar1 + 0x30) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x28) = uVar7;
    goto LAB_00a5e388;
  }
  uVar5 = *(ulong *)(in_x2 + 0x20);
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = *(void **)(in_x2 + 0x28);
  if (uVar5 < 0x17) {
    pvVar2 = (void *)((long)pvVar1 + 0x29);
                    /* catch() { ... } // from try @ 00a5e1c4 with catch @ 00a5e348 */
    *(char *)((long)pvVar1 + 0x28) = (char)((int)uVar5 << 1);
                    /* catch() { ... } // from try @ 00a5e1b8 with catch @ 00a5e34c */
    if (uVar5 != 0) goto LAB_00a5e374;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar6);
                    /* catch() { ... } // from try @ 00a5e198 with catch @ 00a5e368 */
    *(ulong *)((long)pvVar1 + 0x30) = uVar5;
    *(void **)((long)pvVar1 + 0x38) = pvVar2;
    *(ulong *)((long)pvVar1 + 0x28) = uVar6 | 1;
LAB_00a5e374:
                    /* catch() { ... } // from try @ 00a5e1d0 with catch @ 00a5e378
                       catch() { ... } // from try @ 00a5e228 with catch @ 00a5e378 */
    memcpy(pvVar2,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar2 + uVar5) = 0;
LAB_00a5e388:
  puVar3 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = param_2;
  return;
}

