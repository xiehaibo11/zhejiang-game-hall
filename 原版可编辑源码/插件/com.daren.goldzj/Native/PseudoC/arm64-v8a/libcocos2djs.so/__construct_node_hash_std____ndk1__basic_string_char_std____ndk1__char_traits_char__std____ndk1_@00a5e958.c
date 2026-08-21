
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff> >
   >::__construct_node_hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, cocos2d::extension::Manifest::AssetDiff&>(unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   cocos2d::extension::Manifest::AssetDiff&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
     ::
     __construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
               (ulong param_1,basic_string *param_2,AssetDiff *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  void *__dest;
  ManifestAsset *in_x3;
  undefined8 *in_x8;
  undefined8 *puVar3;
  ulong __n;
  void *__src;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar2 = operator_new(0x70);
  *in_x8 = pvVar2;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
                    /* try { // try from 00a5e99c to 00b5e9ef has its CatchHandler @ 00a5e99c
                       catch() { ... } // from try @ 00a5e99c with catch @ 00a5e99c
                       catch() { ... } // from try @ 00a5ebf8 with catch @ 00a5e99c */
  *(undefined8 *)((long)pvVar2 + 0x10) = 0;
  *(undefined8 *)((long)pvVar2 + 0x18) = 0;
  *(undefined8 *)((long)pvVar2 + 0x20) = 0;
  if (((byte)*param_3 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_3;
    *(undefined8 *)((long)pvVar2 + 0x20) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)((long)pvVar2 + 0x18) = uVar6;
    *(undefined8 *)((long)pvVar2 + 0x10) = uVar5;
    goto LAB_00a5ea24;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar2 + 0x11);
    *(char *)((long)pvVar2 + 0x10) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00a5ea10;
  }
  else {
                    /* try { // try from 00a5e9f0 to 00b5ea07 has its CatchHandler @ 00a5ec88 */
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    *(ulong *)((long)pvVar2 + 0x18) = __n;
    *(void **)((long)pvVar2 + 0x20) = __dest;
    *(ulong *)((long)pvVar2 + 0x10) = uVar4 | 1;
LAB_00a5ea10:
                    /* try { // try from 00a5ea10 to 00b5ea1b has its CatchHandler @ 00a5ec84 */
                    /* try { // try from 00a5ea1c to 00b5ea27 has its CatchHandler @ 00a5ec80 */
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00a5ea24:
                    /* try { // try from 00a5ea28 to 00b5ea5b has its CatchHandler @ 00a5ec98 */
  cocos2d::extension::ManifestAsset::ManifestAsset((ManifestAsset *)((long)pvVar2 + 0x28),in_x3);
  uVar1 = *(undefined4 *)(in_x3 + 0x40);
  puVar3 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *(undefined4 *)((long)pvVar2 + 0x68) = uVar1;
  *puVar3 = 0;
  puVar3[1] = param_2;
                    /* try { // try from 00a5ea60 to 00b5ea73 has its CatchHandler @ 00a5ec70 */
  return;
}

