
/* cocos2d::FontFreeType::releaseFont(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::FontFreeType::releaseFont(basic_string *param_1)

{
  void *pvVar1;
  basic_string *__s2;
  basic_string bVar2;
  long lVar3;
  size_t __n;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  void *local_80 [2];
  char local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (DAT_0178f810 != (long *)0x0) {
    plVar7 = DAT_0178f810;
    do {
      while( true ) {
        if ((*(byte *)(plVar7 + 2) & 1) == 0) {
          pvVar9 = (void *)((long)plVar7 + 0x11);
          uVar6 = (ulong)(*(byte *)(plVar7 + 2) >> 1);
                    /* try { // try from 00f06688 to 0100669f has its CatchHandler @ 00f06270 */
        }
        else {
          uVar6 = plVar7[3];
          pvVar9 = (void *)plVar7[4];
        }
        __s2 = param_1 + 1;
        __n = (ulong)((byte)*param_1 >> 1);
                    /* try { // try from 00f066a0 to 010066a3 has its CatchHandler @ 00f066d4 */
        if (((byte)*param_1 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
          __n = *(size_t *)(param_1 + 8);
        }
                    /* try { // try from 00f066a4 to 010066ab has its CatchHandler @ 00f066c0 */
        if (__n == 0) break;
                    /* try { // try from 00f066ac to 010066af has its CatchHandler @ 00f066b0 */
                    /* catch() { ... } // from try @ 00f06548 with catch @ 00f066b0
                       catch() { ... } // from try @ 00f066ac with catch @ 00f066b0
                       try { // try from 00f066b0 to 0100672f has its CatchHandler @ 00f06270 */
        if ((long)__n <= (long)uVar6) {
          bVar2 = *__s2;
          pvVar1 = (void *)((long)pvVar9 + uVar6);
          pvVar5 = pvVar9;
          do {
                    /* catch() { ... } // from try @ 00f064b8 with catch @ 00f066c0
                       catch() { ... } // from try @ 00f066a4 with catch @ 00f066c0 */
                    /* catch() { ... } // from try @ 00f06670 with catch @ 00f066d0 */
                    /* catch() { ... } // from try @ 00f06598 with catch @ 00f066d4
                       catch() { ... } // from try @ 00f066a0 with catch @ 00f066d4 */
            if ((0xfffffffffffffffe < uVar6 - __n) ||
               (pvVar5 = memchr(pvVar5,(uint)(byte)bVar2,(uVar6 - __n) + 1), pvVar5 == (void *)0x0))
            break;
            iVar4 = memcmp(pvVar5,__s2,__n);
            if (iVar4 == 0) {
              if ((pvVar5 != pvVar1) && ((long)pvVar5 - (long)pvVar9 != -1)) goto LAB_00f06714;
              break;
            }
            pvVar5 = (void *)((long)pvVar5 + 1);
            uVar6 = (long)pvVar1 - (long)pvVar5;
          } while ((long)__n <= (long)uVar6);
        }
        plVar7 = (long *)*plVar7;
                    /* try { // try from 00f06670 to 01006687 has its CatchHandler @ 00f066d0 */
        if (plVar7 == (long *)0x0) goto LAB_00f06764;
      }
LAB_00f06714:
                    /* catch() { ... } // from try @ 00f063fc with catch @ 00f06714 */
      plVar8 = (long *)*plVar7;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
      ::remove(local_80,&DAT_0178f800,plVar7);
      pvVar9 = local_80[0];
      local_80[0] = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        if ((local_70 != '\0') &&
           (Data::~Data((Data *)((long)pvVar9 + 0x28)), (*(byte *)((long)pvVar9 + 0x10) & 1) != 0))
        {
          operator_delete(*(void **)((long)pvVar9 + 0x20));
        }
        operator_delete(pvVar9);
      }
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_00f06764:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

