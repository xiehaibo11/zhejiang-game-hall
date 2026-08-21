
/* WARNING: Removing unreachable block (ram,0x00dfc784) */
/* WARNING: Removing unreachable block (ram,0x00dfc798) */
/* WARNING: Removing unreachable block (ram,0x00dfc7d4) */
/* WARNING: Removing unreachable block (ram,0x00dfc7e8) */
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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x110);
  if (plVar3 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfc55c with catch @ 00dfc6d8
                        */
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_b0,(basic_string *)(plVar3 + 5));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_98,(basic_string *)(plVar3 + 8));
      local_78 = *(uint *)(plVar3 + 0xc);
      local_80 = plVar3[0xb];
      if ((local_78 & 0xfffffffe) != 2) {
        local_c0 = (void *)0x0;
        uStack_c8 = 0;
        local_d0 = 0;
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
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_d0,pcVar1,(ulong)in_x2);
        }
        std::__ndk1::operator+((__ndk1 *)(param_1 + 0x48),(basic_string *)local_98,in_x2);
        std::__ndk1::operator+((__ndk1 *)(param_1 + 0x30),(basic_string *)local_98,in_x2);
        local_b8 = local_80._4_4_;
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
                    /* try { // try from 00dfc87c to 00efc883 has its CatchHandler @ 00dfcb5c */
        }
        if ((local_118 & 1) != 0) {
          operator_delete(local_108);
        }
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

