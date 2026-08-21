
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>
   > >::__construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   cocos2d::extension::DownloadUnit> const&>(std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   cocos2d::extension::DownloadUnit> const&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
     ::
     __construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>const&>
               (pair *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  pair *in_x1;
  long *in_x8;
  long lVar5;
  undefined8 *puVar6;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_40 [8];
  long local_38;
  
                    /* try { // try from 00a6a724 to 00b6a72b has its CatchHandler @ 00a6aa7c */
                    /* try { // try from 00a6a730 to 00b6a747 has its CatchHandler @ 00a6aa60 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a6a74c to 00b6a753 has its CatchHandler @ 00a6aa58 */
  pvVar3 = operator_new(0x78);
  *in_x8 = (long)pvVar3;
  in_x8[1] = (long)(param_1 + 0x10);
                    /* try { // try from 00a6a754 to 00b6a773 has its CatchHandler @ 00a6aa64 */
  *(undefined1 *)(in_x8 + 2) = 0;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
  ::pair((pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
          *)((long)pvVar3 + 0x10),in_x1);
  lVar5 = *in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
                    /* try { // try from 00a6a774 to 00b6a783 has its CatchHandler @ 00a6aa54 */
  uVar1 = (ulong)(*(byte *)(lVar5 + 0x10) >> 1);
  pvVar3 = (void *)(lVar5 + 0x11);
  if ((*(byte *)(lVar5 + 0x10) & 1) != 0) {
    uVar1 = *(ulong *)(lVar5 + 0x18);
    pvVar3 = *(void **)(lVar5 + 0x20);
  }
                    /* try { // try from 00a6a788 to 00b6a793 has its CatchHandler @ 00a6aa4c */
  uVar4 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_40,pvVar3,uVar1);
                    /* try { // try from 00a6a794 to 00b6a7a3 has its CatchHandler @ 00a6aa34 */
  puVar6 = (undefined8 *)*in_x8;
  *puVar6 = 0;
  puVar6[1] = uVar4;
                    /* try { // try from 00a6a7a8 to 00b6a7b3 has its CatchHandler @ 00a6aa24 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a6a7b8 to 00b6a7bf has its CatchHandler @ 00a6aa14 */
  return;
}

