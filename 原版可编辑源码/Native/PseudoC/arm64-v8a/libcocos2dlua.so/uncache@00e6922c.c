
/* cocos2d::experimental::AudioEngine::uncache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::experimental::AudioEngine::uncache(basic_string *param_1)

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
  undefined2 uVar15;
  undefined8 uVar16;
  int local_74;
  long ****local_70;
  long ****local_68;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
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
        if (DAT_0178f2d0 != 0) {
          uVar6 = (ulong)local_74;
          uVar16 = CONCAT17(POPCOUNT((char)(DAT_0178f2d0 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(DAT_0178f2d0 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(DAT_0178f2d0 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(DAT_0178f2d0 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(DAT_0178f2d0 >> 0x18
                                                                               )),
                                                                CONCAT12(POPCOUNT((char)(
                                                  DAT_0178f2d0 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)(DAT_0178f2d0 >> 8)),
                                                           POPCOUNT((char)DAT_0178f2d0))))))));
          uVar15 = NEON_uaddlv(uVar16,1);
          uVar7 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
          if (uVar7 < 2) {
            uVar9 = DAT_0178f2d0 - 1 & uVar6;
          }
          else {
            uVar9 = uVar6;
            if (DAT_0178f2d0 <= uVar6) {
              uVar9 = 0;
              if (DAT_0178f2d0 != 0) {
                uVar9 = uVar6 / DAT_0178f2d0;
              }
              uVar9 = uVar6 - uVar9 * DAT_0178f2d0;
            }
          }
          plVar10 = *(long **)(_audioIDInfoMap + uVar9 * 8);
          if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
            do {
              uVar11 = plVar10[1];
              if (uVar11 == uVar6) {
                if ((int)plVar10[2] == local_74) {
                  if (plVar10[4] != 0) {
                    std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
                              ((list<int,std::__ndk1::allocator<int>> *)(plVar10[4] + 0x28),
                               &local_74);
                  }
                  std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
                  ::__erase_unique<int>
                            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
                              *)&_audioIDInfoMap,&local_74);
                  break;
                }
              }
              else {
                if (uVar7 < 2) {
                  uVar11 = uVar11 & DAT_0178f2d0 - 1;
                }
                else if (DAT_0178f2d0 <= uVar11) {
                  uVar2 = 0;
                  if (DAT_0178f2d0 != 0) {
                    uVar2 = uVar11 / DAT_0178f2d0;
                  }
                  uVar11 = uVar11 - uVar2 * DAT_0178f2d0;
                }
                if (uVar11 != uVar9) break;
              }
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
      }
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                          *)&_audioPathIDMap,param_1);
      if (lVar4 != 0) {
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
        ::erase((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                 *)&_audioPathIDMap,lVar4);
      }
      if (local_60 != 0) {
        pppplVar8 = (long ****)*local_68;
        pppplVar8[1] = local_70[1];
        *local_70[1] = (long **)pppplVar8;
        local_60 = 0;
        ppppplVar13 = (long *****)local_68;
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
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

