
void FUN_00e66ed8(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  int local_64;
  void *local_60 [2];
  char local_50;
  long local_48;
  ulong uVar16;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *param_2;
  if ((uVar1 | 1) == 5) {
    lVar13 = *(long *)(param_1 + 8);
    iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    local_64 = iVar5;
    cocos2d::experimental::AudioEngine::remove(iVar5);
    uVar9 = *(ulong *)(lVar13 + 0x48);
    uVar7 = (ulong)iVar5;
    if (uVar9 != 0) {
      uVar15 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar9 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar9
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar9
                                                                                        ))))))));
      uVar14 = NEON_uaddlv(uVar15,1);
      uVar16 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14);
      if ((uVar16 & 0xffffffff) < 2) {
        uVar10 = uVar9 - 1 & uVar7;
      }
      else {
        uVar10 = uVar7;
        if (uVar9 <= uVar7) {
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = uVar7 / uVar9;
          }
          uVar10 = uVar7 - uVar10 * uVar9;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar13 + 0x40) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar7) {
            if ((int)plVar11[2] == iVar5) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
              ::__erase_unique<int>
                        ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
                          *)(lVar13 + 0x40),&local_64);
              uVar7 = (ulong)local_64;
              iVar5 = local_64;
              break;
            }
          }
          else {
            if ((uVar16 & 0xffffffff) < 2) {
              uVar12 = uVar12 & uVar9 - 1;
            }
            else if (uVar9 <= uVar12) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar2 * uVar9;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    uVar9 = *(ulong *)(lVar13 + 0x98);
    if (uVar9 != 0) {
      uVar15 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar9 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar9
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar9
                                                                                        ))))))));
      uVar14 = NEON_uaddlv(uVar15,1);
      uVar16 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14);
      if ((uVar16 & 0xffffffff) < 2) {
        uVar10 = uVar9 - 1 & uVar7;
      }
      else {
        uVar10 = uVar7;
        if (uVar9 <= uVar7) {
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = uVar7 / uVar9;
          }
          uVar10 = uVar7 - uVar10 * uVar9;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar13 + 0x90) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar7) {
            if ((int)plVar11[2] == iVar5) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
              ::__erase_unique<int>
                        ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
                          *)(lVar13 + 0x90),&local_64);
              uVar7 = (ulong)local_64;
              uVar9 = *(ulong *)(lVar13 + 0x70);
              iVar5 = local_64;
              if (uVar9 == 0) goto LAB_00e671e0;
              goto LAB_00e670a0;
            }
          }
          else {
            if ((uVar16 & 0xffffffff) < 2) {
              uVar12 = uVar12 & uVar9 - 1;
            }
            else if (uVar9 <= uVar12) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar2 * uVar9;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    uVar9 = *(ulong *)(lVar13 + 0x70);
    if (uVar9 != 0) {
LAB_00e670a0:
      uVar15 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar9 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar9
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar9
                                                                                        ))))))));
      uVar14 = NEON_uaddlv(uVar15,1);
      uVar16 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14);
      if ((uVar16 & 0xffffffff) < 2) {
        uVar10 = uVar9 - 1 & uVar7;
      }
      else {
        uVar10 = uVar7;
        if (uVar9 <= uVar7) {
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = uVar7 / uVar9;
          }
          uVar10 = uVar7 - uVar10 * uVar9;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar13 + 0x68) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar7) {
            if ((int)plVar11[2] == iVar5) {
              if (uVar1 == 5) {
                local_60[0] = (void *)CONCAT44(local_60[0]._4_4_,iVar5);
                plVar6 = (long *)plVar11[8];
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                (**(code **)(*plVar6 + 0x30))(plVar6,local_60,param_1 + 0x18);
              }
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
              ::remove(local_60,(long *)(lVar13 + 0x68),plVar11);
              pvVar4 = local_60[0];
              local_60[0] = (void *)0x0;
              if (pvVar4 != (void *)0x0) {
                if (local_50 != '\0') {
                  plVar11 = *(long **)((long)pvVar4 + 0x40);
                  if ((long *)((long)pvVar4 + 0x20) == plVar11) {
                    pcVar8 = *(code **)(*plVar11 + 0x20);
                  }
                  else {
                    if (plVar11 == (long *)0x0) goto LAB_00e671d8;
                    pcVar8 = *(code **)(*plVar11 + 0x28);
                  }
                  (*pcVar8)();
                }
LAB_00e671d8:
                operator_delete(pvVar4);
              }
              break;
            }
          }
          else {
            if ((uVar16 & 0xffffffff) < 2) {
              uVar12 = uVar12 & uVar9 - 1;
            }
            else if (uVar9 <= uVar12) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar2 * uVar9;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_00e671e0:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

