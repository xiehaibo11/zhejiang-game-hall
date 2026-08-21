
/* WARNING: Removing unreachable block (ram,0x00a58170) */
/* WARNING: Removing unreachable block (ram,0x00a58184) */
/* WARNING: Removing unreachable block (ram,0x00a581c0) */
/* WARNING: Removing unreachable block (ram,0x00a581d4) */
/* cocos2d::extension::Manifest::genResumeAssetsList(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   cocos2d::extension::DownloadUnit> > >*) const */

void cocos2d::extension::Manifest::genResumeAssetsList(unordered_map *param_1)

{
  char *pcVar1;
  long lVar2;
  basic_string *in_x1;
  basic_string *in_x2;
  long *plVar3;
  ulong local_118;
  void *local_108;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined4 local_b8;
  ManifestAsset local_a8 [16];
  void *local_98;
  basic_string local_90 [16];
  void *local_80;
  undefined4 local_74;
  uint local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0xf8);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00a580cc to 00b58127 has its CatchHandler @ 00a580cc
                       catch() { ... } // from try @ 00a580cc with catch @ 00a580cc
                       catch() { ... } // from try @ 00a58304 with catch @ 00a580cc */
    do {
      ManifestAsset::ManifestAsset(local_a8,(ManifestAsset *)(plVar3 + 5));
      if ((local_70 & 0xfffffffe) != 2) {
        local_c0 = (void *)0x0;
        uStack_c8 = 0;
        local_d0 = 0;
                    /* try { // try from 00a58128 to 00b5813f has its CatchHandler @ 00a58388 */
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_d0 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2)) {
          in_x2 = (basic_string *)plVar3[3];
          pcVar1 = (char *)plVar3[4];
          if ((*(byte *)(plVar3 + 2) & 1) == 0) {
            pcVar1 = (char *)((long)plVar3 + 0x11);
            in_x2 = (basic_string *)(ulong)(*(byte *)(plVar3 + 2) >> 1);
          }
                    /* try { // try from 00a58148 to 00b58153 has its CatchHandler @ 00a58384 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_d0,pcVar1,(ulong)in_x2);
        }
                    /* try { // try from 00a58154 to 00b5815f has its CatchHandler @ 00a58380 */
        std::__ndk1::operator+((__ndk1 *)(param_1 + 0x30),local_90,in_x2);
                    /* try { // try from 00a58160 to 00b58303 has its CatchHandler @ 00a58398 */
        std::__ndk1::operator+((__ndk1 *)(param_1 + 0x18),local_90,in_x2);
        local_b8 = local_74;
        in_x2 = (basic_string *)&local_d0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::DownloadUnit&>
                  (in_x1,(basic_string *)&local_d0,(DownloadUnit *)&local_d0);
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_118 & 1) != 0) {
          operator_delete(local_108);
        }
        if ((local_118 & 1) != 0) {
          operator_delete(local_108);
        }
      }
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

