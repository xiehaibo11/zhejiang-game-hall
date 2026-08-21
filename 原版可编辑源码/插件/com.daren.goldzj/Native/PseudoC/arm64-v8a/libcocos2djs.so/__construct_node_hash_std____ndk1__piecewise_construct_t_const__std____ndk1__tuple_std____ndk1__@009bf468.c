
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int> >
   >::__construct_node_hash<std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(unsigned long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>&&, std::__ndk1::tuple<>&&)
    */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
::
__construct_node_hash<std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
           *this,ulong param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  void *pvVar1;
  void *__dest;
  undefined8 *in_x8;
  byte *pbVar2;
  undefined8 *puVar3;
  ulong __n;
  void *__src;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar1 = operator_new(0x30);
  *in_x8 = pvVar1;
  in_x8[1] = this + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  pbVar2 = *(byte **)param_3;
                    /* try { // try from 009bf4a4 to 00abf587 has its CatchHandler @ 009bf2b8 */
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  if ((*pbVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(pbVar2 + 8);
    uVar5 = *(undefined8 *)pbVar2;
    *(undefined8 *)((long)pvVar1 + 0x20) = *(undefined8 *)(pbVar2 + 0x10);
    *(undefined8 *)((long)pvVar1 + 0x18) = uVar6;
    *(undefined8 *)((long)pvVar1 + 0x10) = uVar5;
    goto LAB_009bf52c;
  }
  __n = *(ulong *)(pbVar2 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(pbVar2 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar1 + 0x11);
    *(char *)((long)pvVar1 + 0x10) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_009bf518;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    *(ulong *)((long)pvVar1 + 0x18) = __n;
    *(void **)((long)pvVar1 + 0x20) = __dest;
    *(ulong *)((long)pvVar1 + 0x10) = uVar4 | 1;
LAB_009bf518:
                    /* catch() { ... } // from try @ 009bf338 with catch @ 009bf518 */
                    /* catch() { ... } // from try @ 009bf32c with catch @ 009bf51c */
                    /* catch() { ... } // from try @ 009bf30c with catch @ 009bf520 */
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_009bf52c:
  puVar3 = (undefined8 *)*in_x8;
                    /* catch() { ... } // from try @ 009bf344 with catch @ 009bf530 */
  *(undefined4 *)((long)pvVar1 + 0x28) = 0;
  *(undefined1 *)(in_x8 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = param_1;
  return;
}

