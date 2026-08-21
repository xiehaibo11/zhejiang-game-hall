
void FUN_00a72284(long param_1,uint *param_2)

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
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  int local_64;
  undefined8 local_60;
  char local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *param_2;
  if ((uVar1 | 1) == 5) {
                    /* try { // try from 00a722bc to 00b7230f has its CatchHandler @ 00a722bc
                       catch() { ... } // from try @ 00a722bc with catch @ 00a722bc
                       catch() { ... } // from try @ 00a724a8 with catch @ 00a722bc */
    lVar14 = *(long *)(param_1 + 8);
    iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    local_64 = iVar5;
    cocos2d::AudioEngine::remove(iVar5);
    uVar9 = *(ulong *)(lVar14 + 0x30);
    uVar7 = (ulong)iVar5;
    if (uVar9 != 0) {
      uVar10 = uVar9 - 1;
      if ((uVar10 & uVar9) == 0) {
                    /* try { // try from 00a72310 to 00b72327 has its CatchHandler @ 00a724dc */
        uVar11 = uVar10 & uVar7;
      }
      else {
        uVar11 = uVar7;
        if (uVar9 <= uVar7) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar7 / uVar9;
          }
          uVar11 = uVar7 - uVar11 * uVar9;
        }
      }
      plVar12 = *(long **)(*(long *)(lVar14 + 0x28) + uVar11 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_00a7237c;
            uVar13 = plVar12[1];
                    /* try { // try from 00a72330 to 00b7233b has its CatchHandler @ 00a724c0 */
            if (uVar13 != uVar7) break;
                    /* try { // try from 00a7233c to 00b72347 has its CatchHandler @ 00a724bc */
            if (*(int *)(plVar12 + 2) == iVar5) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
              ::__erase_unique<int>
                        ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
                          *)(lVar14 + 0x28),&local_64);
              uVar7 = (ulong)local_64;
              iVar5 = local_64;
              goto LAB_00a7237c;
            }
          }
          if ((uVar10 & uVar9) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else {
                    /* try { // try from 00a72348 to 00b72387 has its CatchHandler @ 00a724ec */
            if (uVar9 <= uVar13) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar2 * uVar9;
            }
          }
        } while (uVar13 == uVar11);
      }
    }
LAB_00a7237c:
    uVar9 = *(ulong *)(lVar14 + 0x80);
    if (uVar9 != 0) {
      uVar10 = uVar9 - 1;
                    /* try { // try from 00a72388 to 00b7239b has its CatchHandler @ 00a724c4 */
      if ((uVar10 & uVar9) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      else {
        uVar11 = uVar7;
        if (uVar9 <= uVar7) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar7 / uVar9;
          }
          uVar11 = uVar7 - uVar11 * uVar9;
        }
      }
      plVar12 = *(long **)(*(long *)(lVar14 + 0x78) + uVar11 * 8);
                    /* try { // try from 00a723b8 to 00b723f3 has its CatchHandler @ 00a724ec */
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_00a72404;
            uVar13 = plVar12[1];
            if (uVar13 != uVar7) break;
            if (*(int *)(plVar12 + 2) == iVar5) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
              ::__erase_unique<int>
                        ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
                          *)(lVar14 + 0x78),&local_64);
              uVar7 = (ulong)local_64;
                    /* try { // try from 00a724a8 to 00b72543 has its CatchHandler @ 00a722bc */
              uVar9 = *(ulong *)(lVar14 + 0x58);
              iVar5 = local_64;
              goto joined_r0x00a724ac;
            }
          }
          if ((uVar10 & uVar9) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar9 <= uVar13) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar2 * uVar9;
          }
        } while (uVar13 == uVar11);
      }
    }
LAB_00a72404:
    uVar9 = *(ulong *)(lVar14 + 0x58);
joined_r0x00a724ac:
    if (uVar9 != 0) {
      uVar10 = uVar9 - 1;
      if ((uVar10 & uVar9) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      else {
        uVar11 = uVar7;
        if (uVar9 <= uVar7) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar7 / uVar9;
          }
          uVar11 = uVar7 - uVar11 * uVar9;
        }
      }
      plVar12 = *(long **)(*(long *)(lVar14 + 0x50) + uVar11 * 8);
      if (plVar12 != (long *)0x0) {
        for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          uVar13 = plVar12[1];
          if (uVar13 == uVar7) {
            if (*(int *)(plVar12 + 2) == iVar5) {
              if (uVar1 == 5) {
                uVar7 = (ulong)local_60 >> 0x20;
                    /* catch() { ... } // from try @ 00a7233c with catch @ 00a724bc */
                local_60 = (void *)CONCAT44((int)uVar7,iVar5);
                    /* catch() { ... } // from try @ 00a72330 with catch @ 00a724c0 */
                plVar6 = (long *)plVar12[8];
                    /* catch() { ... } // from try @ 00a72388 with catch @ 00a724c4
                       catch() { ... } // from try @ 00a72464 with catch @ 00a724c4 */
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_008589d0();
                }
                (**(code **)(*plVar6 + 0x30))(plVar6,&local_60,param_1 + 0x18);
              }
                    /* catch() { ... } // from try @ 00a72310 with catch @ 00a724dc */
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
              ::remove(&local_60,(long *)(lVar14 + 0x50),plVar12);
              pvVar4 = local_60;
                    /* catch() { ... } // from try @ 00a72348 with catch @ 00a724ec
                       catch() { ... } // from try @ 00a723b8 with catch @ 00a724ec */
              local_60 = (void *)0x0;
              if (pvVar4 != (void *)0x0) {
                if (local_50 != '\0') {
                  plVar12 = *(long **)((long)pvVar4 + 0x40);
                  if ((long *)((long)pvVar4 + 0x20) == plVar12) {
                    pcVar8 = *(code **)(*plVar12 + 0x20);
                  }
                  else {
                    if (plVar12 == (long *)0x0) goto LAB_00a7252c;
                    pcVar8 = *(code **)(*plVar12 + 0x28);
                  }
                  (*pcVar8)();
                }
LAB_00a7252c:
                operator_delete(pvVar4);
              }
              break;
            }
          }
          else {
            if ((uVar10 & uVar9) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar9 <= uVar13) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar2 * uVar9;
            }
            if (uVar13 != uVar11) break;
          }
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a72544 to 00b72597 has its CatchHandler @ 00a72544
                       catch() { ... } // from try @ 00a72544 with catch @ 00a72544
                       catch() { ... } // from try @ 00a72730 with catch @ 00a72544 */
  return;
}

