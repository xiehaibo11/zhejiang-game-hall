
/* cocos2d::experimental::AudioEngine::remove(int) */

void cocos2d::experimental::AudioEngine::remove(int param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  int local_3c [3];
  piecewise_construct_t *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_3c[0] = param_1;
  if (DAT_0178f2d0 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(DAT_0178f2d0 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_0178f2d0 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_0178f2d0 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_0178f2d0 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_0178f2d0 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_0178f2d0 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_0178f2d0 >> 8)),POPCOUNT((char)DAT_0178f2d0)))
                                                  )))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (ulong)param_1;
    if (uVar4 < 2) {
      uVar6 = DAT_0178f2d0 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_0178f2d0 <= uVar5) {
        uVar6 = 0;
        if (DAT_0178f2d0 != 0) {
          uVar6 = uVar5 / DAT_0178f2d0;
        }
        uVar6 = uVar5 - uVar6 * DAT_0178f2d0;
      }
    }
    plVar7 = *(long **)(_audioIDInfoMap + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((int)plVar7[2] == param_1) {
            if (plVar7[4] != 0) {
              std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
                        ((list<int,std::__ndk1::allocator<int>> *)(plVar7[4] + 0x28),local_3c);
            }
            local_30 = (piecewise_construct_t *)plVar7[3];
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                    ::
                    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                              ((basic_string *)&_audioPathIDMap,local_30,(tuple *)&DAT_01426e0c,
                               (tuple *)&local_30);
            std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
                      ((list<int,std::__ndk1::allocator<int>> *)(lVar3 + 0x28),local_3c);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
            ::__erase_unique<int>
                      ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
                        *)&_audioIDInfoMap,local_3c);
            break;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & DAT_0178f2d0 - 1;
          }
          else if (DAT_0178f2d0 <= uVar8) {
            uVar1 = 0;
            if (DAT_0178f2d0 != 0) {
              uVar1 = uVar8 / DAT_0178f2d0;
            }
            uVar8 = uVar8 - uVar1 * DAT_0178f2d0;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

