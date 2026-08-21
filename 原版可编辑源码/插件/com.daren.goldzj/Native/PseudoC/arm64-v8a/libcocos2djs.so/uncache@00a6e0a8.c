
/* cocos2d::AudioEngine::uncache(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::AudioEngine::uncache(basic_string *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *****ppppplVar5;
  ulong uVar6;
  ulong uVar7;
  long ****pppplVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *****ppppplVar13;
  long lVar14;
  int local_74;
  long ****local_70;
  long ****local_68;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                      *)&_audioPathIDMap,param_1);
  if (lVar4 != 0) {
    local_68 = (long ****)&local_70;
    local_60 = 0;
    lVar12 = *(long *)(lVar4 + 0x30);
    local_70 = (long ****)&local_70;
    if (lVar4 + 0x28 != lVar12) {
      lVar14 = 0;
      ppppplVar13 = &local_70;
      do {
                    /* try { // try from 00a6e110 to 00b6e1f3 has its CatchHandler @ 00a6e00c */
        ppppplVar5 = operator_new(0x18);
        uVar1 = *(undefined4 *)(lVar12 + 0x10);
        *ppppplVar5 = (long ****)ppppplVar13;
        ppppplVar5[1] = (long ****)&local_70;
        lVar14 = lVar14 + 1;
        *(undefined4 *)(ppppplVar5 + 2) = uVar1;
        ppppplVar13[1] = (long ****)ppppplVar5;
        lVar12 = *(long *)(lVar12 + 8);
        ppppplVar13 = ppppplVar5;
      } while (lVar4 + 0x28 != lVar12);
      local_60 = lVar14;
      local_70 = (long ****)ppppplVar5;
    }
    for (ppppplVar13 = (long *****)local_68; &local_70 != ppppplVar13;
        ppppplVar13 = (long *****)ppppplVar13[1]) {
      local_74 = *(int *)(ppppplVar13 + 2);
      AudioEngineImpl::stop(_audioEngineImpl,local_74);
      if (DAT_01d38cc0 != 0) {
        uVar6 = (ulong)local_74;
                    /* catch() { ... } // from try @ 00a6e08c with catch @ 00a6e184 */
        uVar7 = DAT_01d38cc0 - 1;
                    /* catch() { ... } // from try @ 00a6e080 with catch @ 00a6e188 */
                    /* catch() { ... } // from try @ 00a6e060 with catch @ 00a6e18c */
        if ((uVar7 & DAT_01d38cc0) == 0) {
          uVar9 = uVar7 & uVar6;
        }
        else {
          uVar9 = uVar6;
          if (DAT_01d38cc0 <= uVar6) {
                    /* catch() { ... } // from try @ 00a6e098 with catch @ 00a6e19c */
            uVar9 = 0;
            if (DAT_01d38cc0 != 0) {
              uVar9 = uVar6 / DAT_01d38cc0;
            }
            uVar9 = uVar6 - uVar9 * DAT_01d38cc0;
          }
        }
        plVar10 = *(long **)(_audioIDInfoMap + uVar9 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_00a6e224;
              uVar11 = plVar10[1];
              if (uVar11 != uVar6) break;
              if (*(int *)(plVar10 + 2) == local_74) {
                if (plVar10[4] != 0) {
                  std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
                            ((list<int,std::__ndk1::allocator<int>> *)(plVar10[4] + 0x28),&local_74)
                  ;
                }
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>>>
                ::__erase_unique<int>
                          ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::AudioEngine::AudioInfo>>>
                            *)&_audioIDInfoMap,&local_74);
                goto LAB_00a6e224;
              }
            }
            if ((uVar7 & DAT_01d38cc0) == 0) {
                    /* try { // try from 00a6e1f4 to 00b6e247 has its CatchHandler @ 00a6e1f4
                       catch() { ... } // from try @ 00a6e1f4 with catch @ 00a6e1f4
                       catch() { ... } // from try @ 00a6e2f8 with catch @ 00a6e1f4 */
              uVar11 = uVar11 & uVar7;
            }
            else if (DAT_01d38cc0 <= uVar11) {
              uVar2 = 0;
              if (DAT_01d38cc0 != 0) {
                uVar2 = uVar11 / DAT_01d38cc0;
              }
              uVar11 = uVar11 - uVar2 * DAT_01d38cc0;
            }
          } while (uVar11 == uVar9);
        }
      }
LAB_00a6e224:
    }
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                        *)&_audioPathIDMap,param_1);
    if (lVar4 != 0) {
                    /* try { // try from 00a6e248 to 00b6e25f has its CatchHandler @ 00a6e374 */
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
      ::erase((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
               *)&_audioPathIDMap,lVar4);
    }
    if (local_60 != 0) {
                    /* try { // try from 00a6e268 to 00b6e273 has its CatchHandler @ 00a6e370 */
      pppplVar8 = (long ****)*local_68;
      pppplVar8[1] = local_70[1];
                    /* try { // try from 00a6e274 to 00b6e27f has its CatchHandler @ 00a6e36c */
      *local_70[1] = (long **)pppplVar8;
      local_60 = 0;
      ppppplVar13 = (long *****)local_68;
                    /* try { // try from 00a6e280 to 00b6e2f7 has its CatchHandler @ 00a6e384 */
      while (ppppplVar13 != &local_70) {
        ppppplVar5 = (long *****)ppppplVar13[1];
        operator_delete(ppppplVar13);
        ppppplVar13 = ppppplVar5;
      }
    }
  }
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
    AudioEngineImpl::uncache(_audioEngineImpl,param_1);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

