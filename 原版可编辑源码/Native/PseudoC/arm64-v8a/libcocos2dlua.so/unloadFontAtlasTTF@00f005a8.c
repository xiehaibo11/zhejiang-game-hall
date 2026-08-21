
/* cocos2d::FontAtlasCache::unloadFontAtlasTTF(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::FontAtlasCache::unloadFontAtlasTTF(basic_string *param_1)

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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f004ac with catch @ 00f005b0
                        */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (DAT_0178f7b0 != (long *)0x0) {
    plVar7 = DAT_0178f7b0;
    do {
      while( true ) {
        if ((*(byte *)(plVar7 + 2) & 1) == 0) {
          pvVar9 = (void *)((long)plVar7 + 0x11);
          uVar6 = (ulong)(*(byte *)(plVar7 + 2) >> 1);
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f002f0 with catch @ 00f0061c
                        */
          uVar6 = plVar7[3];
          pvVar9 = (void *)plVar7[4];
        }
                    /* try { // try from 00f00620 to 0100065f has its CatchHandler @ 00f00620
                       catch() { ... } // from try @ 00f00620 with catch @ 00f00620
                       catch() { ... } // from try @ 00f00688 with catch @ 00f00620 */
        __s2 = param_1 + 1;
        __n = (ulong)((byte)*param_1 >> 1);
        if (((byte)*param_1 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
          __n = *(size_t *)(param_1 + 8);
        }
        if (__n == 0) break;
        if ((long)__n <= (long)uVar6) {
          bVar2 = *__s2;
          pvVar1 = (void *)((long)pvVar9 + uVar6);
          pvVar5 = pvVar9;
          do {
                    /* try { // try from 00f00660 to 0100066b has its CatchHandler @ 00f006f0 */
            if ((0xfffffffffffffffe < uVar6 - __n) ||
               (pvVar5 = memchr(pvVar5,(uint)(byte)bVar2,(uVar6 - __n) + 1), pvVar5 == (void *)0x0))
            break;
                    /* try { // try from 00f00670 to 0100067b has its CatchHandler @ 00f006d8 */
            iVar4 = memcmp(pvVar5,__s2,__n);
            if (iVar4 == 0) {
              if ((pvVar5 != pvVar1) && ((long)pvVar5 - (long)pvVar9 != -1)) goto LAB_00f006a4;
              break;
            }
            pvVar5 = (void *)((long)pvVar5 + 1);
            uVar6 = (long)pvVar1 - (long)pvVar5;
                    /* try { // try from 00f00684 to 01000687 has its CatchHandler @ 00f006b8 */
                    /* try { // try from 00f00688 to 01000707 has its CatchHandler @ 00f00620 */
          } while ((long)__n <= (long)uVar6);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_00f006fc;
      }
LAB_00f006a4:
      if ((Ref *)plVar7[5] != (Ref *)0x0) {
        Ref::release((Ref *)plVar7[5]);
        plVar7[5] = 0;
      }
      plVar8 = (long *)*plVar7;
                    /* catch() { ... } // from try @ 00f00684 with catch @ 00f006b8 */
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::FontAtlas*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::FontAtlas*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::FontAtlas*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::FontAtlas*>>>
      ::remove(local_80,&_atlasMap,plVar7);
      pvVar9 = local_80[0];
      local_80[0] = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00f00670 with catch @ 00f006d8 */
        if ((local_70 != '\0') && ((*(byte *)((long)pvVar9 + 0x10) & 1) != 0)) {
          operator_delete(*(void **)((long)pvVar9 + 0x20));
        }
                    /* catch() { ... } // from try @ 00f00660 with catch @ 00f006f0 */
        operator_delete(pvVar9);
      }
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_00f006fc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

