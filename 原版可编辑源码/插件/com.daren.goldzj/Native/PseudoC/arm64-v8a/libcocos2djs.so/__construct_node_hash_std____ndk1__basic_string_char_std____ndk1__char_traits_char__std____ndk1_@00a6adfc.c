
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, double>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, double>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, double>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, double>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, double>, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, double> >
   >::__construct_node_hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, double&>(unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, double&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>>
     ::
     __construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double&>
               (ulong param_1,basic_string *param_2,double *param_3)

{
  void *pvVar1;
  void *__dest;
  undefined8 *in_x3;
  undefined8 *in_x8;
  undefined8 uVar2;
  undefined8 *puVar3;
  double dVar4;
  void *__src;
  ulong uVar5;
  double dVar6;
  
                    /* catch() { ... } // from try @ 00a6ae70 with catch @ 00a6ae0c */
  pvVar1 = operator_new(0x30);
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(double *)((long)pvVar1 + 0x10) = 0.0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  if (((ulong)*param_3 & 1) == 0) {
    dVar6 = param_3[1];
    dVar4 = *param_3;
    *(double *)((long)pvVar1 + 0x20) = param_3[2];
    *(double *)((long)pvVar1 + 0x18) = dVar6;
    *(double *)((long)pvVar1 + 0x10) = dVar4;
    goto LAB_00a6aec0;
  }
                    /* try { // try from 00a6ae60 to 00b6ae6f has its CatchHandler @ 00a6af44 */
  dVar4 = param_3[1];
  if (0xffffffffffffffef < (ulong)dVar4) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_3[2];
                    /* try { // try from 00a6ae70 to 00b6af5f has its CatchHandler @ 00a6ae0c */
  if ((ulong)dVar4 < 0x17) {
    __dest = (void *)((long)pvVar1 + 0x11);
    *(char *)((long)pvVar1 + 0x10) = (char)(SUB84(dVar4,0) << 1);
    if (dVar4 != 0.0) goto LAB_00a6aeac;
  }
  else {
    uVar5 = (long)dVar4 + 0x10U & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    *(double *)((long)pvVar1 + 0x18) = dVar4;
    *(void **)((long)pvVar1 + 0x20) = __dest;
    *(ulong *)((long)pvVar1 + 0x10) = uVar5 | 1;
LAB_00a6aeac:
    memcpy(__dest,__src,(size_t)dVar4);
  }
  *(undefined1 *)((long)__dest + (long)dVar4) = 0;
LAB_00a6aec0:
  uVar2 = *in_x3;
  puVar3 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *(undefined8 *)((long)pvVar1 + 0x28) = uVar2;
  *puVar3 = 0;
  puVar3[1] = param_2;
  return;
}

