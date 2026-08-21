
/* std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>,
   std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*> > > >
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   const&>(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

void std::__ndk1::
     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
               (pair *param_1)

{
  void *pvVar1;
  void *pvVar2;
  byte *in_x1;
  undefined8 *in_x8;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
                    /* try { // try from 009a6c28 to 00aa6d0f has its CatchHandler @ 009a6a68 */
  pvVar1 = operator_new(0x50);
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 8;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  if ((*in_x1 & 1) == 0) {
    uVar7 = *(undefined8 *)(in_x1 + 8);
    uVar6 = *(undefined8 *)in_x1;
    *(undefined8 *)((long)pvVar1 + 0x30) = *(undefined8 *)(in_x1 + 0x10);
    *(undefined8 *)((long)pvVar1 + 0x28) = uVar7;
    *(undefined8 *)((long)pvVar1 + 0x20) = uVar6;
  }
  else {
    uVar4 = *(ulong *)(in_x1 + 8);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(in_x1 + 0x10);
    if (uVar4 < 0x17) {
      pvVar2 = (void *)((long)pvVar1 + 0x21);
      *(char *)((long)pvVar1 + 0x20) = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_009a6cbc;
    }
    else {
                    /* catch() { ... } // from try @ 009a6aec with catch @ 009a6ca0 */
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 009a6ae0 with catch @ 009a6ca4 */
                    /* catch() { ... } // from try @ 009a6ac0 with catch @ 009a6ca8 */
      pvVar2 = operator_new(uVar5);
      *(ulong *)((long)pvVar1 + 0x28) = uVar4;
      *(void **)((long)pvVar1 + 0x30) = pvVar2;
                    /* catch() { ... } // from try @ 009a6af8 with catch @ 009a6cb8 */
      *(ulong *)((long)pvVar1 + 0x20) = uVar5 | 1;
LAB_009a6cbc:
      memcpy(pvVar2,pvVar3,uVar4);
    }
    *(undefined1 *)((long)pvVar2 + uVar4) = 0;
  }
  *(undefined8 *)((long)pvVar1 + 0x38) = 0;
  *(undefined8 *)((long)pvVar1 + 0x40) = 0;
  *(undefined8 *)((long)pvVar1 + 0x48) = 0;
  if ((in_x1[0x18] & 1) == 0) {
    uVar7 = *(undefined8 *)(in_x1 + 0x20);
    uVar6 = *(undefined8 *)(in_x1 + 0x18);
    *(undefined8 *)((long)pvVar1 + 0x48) = *(undefined8 *)(in_x1 + 0x28);
    *(undefined8 *)((long)pvVar1 + 0x40) = uVar7;
    *(undefined8 *)((long)pvVar1 + 0x38) = uVar6;
    goto LAB_009a6d5c;
  }
  uVar4 = *(ulong *)(in_x1 + 0x20);
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009a6d84 to 00aa6d8f has its CatchHandler @ 009a6f48 */
    __basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(in_x1 + 0x28);
                    /* try { // try from 009a6d10 to 00aa6d63 has its CatchHandler @ 009a6d10
                       catch() { ... } // from try @ 009a6d10 with catch @ 009a6d10
                       catch() { ... } // from try @ 009a6ed0 with catch @ 009a6d10 */
  if (uVar4 < 0x17) {
    pvVar2 = (void *)((long)pvVar1 + 0x39);
    *(char *)((long)pvVar1 + 0x38) = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_009a6d48;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar5);
    *(ulong *)((long)pvVar1 + 0x40) = uVar4;
    *(void **)((long)pvVar1 + 0x48) = pvVar2;
    *(ulong *)((long)pvVar1 + 0x38) = uVar5 | 1;
LAB_009a6d48:
    memcpy(pvVar2,pvVar3,uVar4);
  }
  *(undefined1 *)((long)pvVar2 + uVar4) = 0;
LAB_009a6d5c:
  *(undefined1 *)(in_x8 + 2) = 1;
                    /* try { // try from 009a6d64 to 00aa6d7b has its CatchHandler @ 009a6f4c */
  return;
}

