
/* cocos2d::FontAtlasCache::purgeCachedData() */

void cocos2d::FontAtlasCache::purgeCachedData(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  void *pvVar10;
  void *local_60 [2];
  undefined8 *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::
  unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::FontAtlas*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::FontAtlas*>>>
  ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::FontAtlas*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::FontAtlas*>>>
                   *)local_60,(unordered_map *)&_atlasMap);
  for (plVar9 = local_50; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    iVar6 = Ref::getReferenceCount((Ref *)plVar9[5]);
    Ref::release((Ref *)plVar9[5]);
    if (iVar6 != 1) {
      FontAtlas::purgeTexturesAtlas((FontAtlas *)plVar9[5]);
    }
  }
  lVar2 = DAT_0178f7a8;
  puVar3 = DAT_0178f7b0;
  pvVar10 = local_60[0];
  puVar4 = local_50;
  uVar5 = 0;
  if (DAT_0178f7b8 != 0) {
    while (DAT_0178f7a8 = lVar2, puVar3 != (void *)0x0) {
      pvVar10 = (void *)*puVar3;
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eff730 with catch @ 00eff840
                        */
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      lVar2 = DAT_0178f7a8;
      puVar3 = pvVar10;
    }
    DAT_0178f7b0 = (undefined8 *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eff574 with catch @ 00eff854
                        */
    if (lVar2 != 0) {
                    /* try { // try from 00eff858 to 00fff89b has its CatchHandler @ 00eff858
                       catch() { ... } // from try @ 00eff858 with catch @ 00eff858
                       catch() { ... } // from try @ 00eff8d4 with catch @ 00eff858 */
      lVar7 = 0;
      do {
        *(undefined8 *)(_atlasMap + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
    }
    DAT_0178f7b8 = 0;
    pvVar10 = local_60[0];
    puVar4 = local_50;
    uVar5 = DAT_0178f7b8;
  }
  while (DAT_0178f7b8 = uVar5, puVar4 != (void *)0x0) {
    pvVar8 = (void *)*puVar4;
    local_60[0] = pvVar10;
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
                    /* try { // try from 00eff89c to 00fff8a7 has its CatchHandler @ 00eff970 */
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar10 = local_60[0];
    puVar4 = pvVar8;
    uVar5 = DAT_0178f7b8;
  }
                    /* try { // try from 00eff8ac to 00fff8b7 has its CatchHandler @ 00eff958 */
  local_60[0] = (void *)0x0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
                    /* try { // try from 00eff8c0 to 00fff8c7 has its CatchHandler @ 00eff938 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00eff8d0 to 00fff8d3 has its CatchHandler @ 00eff904 */
                    /* try { // try from 00eff8d4 to 00fff983 has its CatchHandler @ 00eff858 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

