
/* cocostudio::BinLocalizationManager::initLanguageData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

undefined4 __thiscall
cocostudio::BinLocalizationManager::initLanguageData
          (BinLocalizationManager *this,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  void *pvVar14;
  ulong uVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [8];
  ulong local_b0;
  char *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  void *local_90;
  Data aDStack_88 [24];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x20) != 0) {
    puVar6 = *(void **)(this + 0x18);
    while (puVar6 != (void *)0x0) {
      pvVar14 = (void *)*puVar6;
      if ((*(byte *)(puVar6 + 5) & 1) != 0) {
        operator_delete((void *)puVar6[7]);
      }
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        operator_delete((void *)puVar6[4]);
      }
      operator_delete(puVar6);
      puVar6 = pvVar14;
    }
    lVar10 = *(long *)(this + 0x10);
    *(undefined8 *)(this + 0x18) = 0;
    if (lVar10 != 0) {
      lVar12 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 8) + lVar12 * 8) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  plVar7 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar7 + 0x28))(aDStack_88,plVar7,param_2);
  uVar8 = cocos2d::Data::isNull(aDStack_88);
  if ((uVar8 & 1) == 0) {
    puVar9 = (uint *)cocos2d::Data::getBytes(aDStack_88);
    piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((ushort *)((long)piVar1 - (long)*piVar1))[2];
      puVar9 = (uint *)((long)piVar1 + (ulong)uVar3);
      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
      if (*puVar9 != 0) {
        puVar2 = (uint *)0x0;
        if (uVar3 != 0 && 4 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
          puVar2 = puVar9;
        }
        uVar8 = (ulong)*puVar2;
        if (0 < (int)*puVar2) {
          lVar10 = (long)puVar2 + 10;
          do {
            uVar15 = (ulong)*(uint *)(lVar10 + -6);
            lVar12 = lVar10 + (uVar15 - (long)*(int *)(lVar10 + uVar15 + -6));
            if (*(ushort *)(lVar12 + -6) < 5) {
              lVar12 = 0;
            }
            else {
              uVar11 = (ulong)*(ushort *)(lVar12 + -2);
              lVar12 = 0;
              if (uVar11 != 0) {
                lVar12 = uVar15 + uVar11;
                lVar12 = lVar10 + lVar12 + (ulong)*(uint *)(lVar10 + lVar12 + -6) + -6;
              }
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_a0,(char *)(lVar12 + 4));
            lVar12 = uVar15 - (long)*(int *)(lVar10 + uVar15 + -6);
            if (*(ushort *)(lVar10 + lVar12 + -6) < 7) {
              lVar12 = 0;
            }
            else {
              uVar11 = (ulong)*(ushort *)(lVar10 + lVar12);
              lVar12 = 0;
              if (uVar11 != 0) {
                lVar12 = uVar15 + uVar11;
                lVar12 = lVar10 + lVar12 + (ulong)*(uint *)(lVar10 + lVar12 + -6) + -6;
              }
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_b8,(char *)(lVar12 + 4));
            uVar15 = (ulong)((byte)local_a0[0] >> 1);
            if (((byte)local_a0[0] & 1) != 0) {
              uVar15 = local_98;
            }
            if (uVar15 != 0) {
              local_70 = local_a0;
              lVar12 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       ::
                       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                 ((basic_string *)(this + 8),(piecewise_construct_t *)local_a0,
                                  (tuple *)&DAT_01417093,(tuple *)&local_70);
              if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (lVar12 + 0x28) != local_b8) {
                uVar15 = (ulong)((byte)local_b8[0] >> 1);
                pcVar5 = (char *)((ulong)local_b8 | 1);
                if (((byte)local_b8[0] & 1) != 0) {
                  uVar15 = local_b0;
                  pcVar5 = local_a8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(lVar12 + 0x28),pcVar5,uVar15);
              }
            }
            if (((byte)local_b8[0] & 1) != 0) {
              operator_delete(local_a8);
            }
            if (((byte)local_a0[0] & 1) != 0) {
              operator_delete(local_90);
            }
            uVar8 = uVar8 - 1;
            lVar10 = lVar10 + 4;
          } while (uVar8 != 0);
        }
        uVar13 = 1;
        goto LAB_00cd2cc0;
      }
    }
  }
  uVar13 = 0;
LAB_00cd2cc0:
  cocos2d::Data::~Data(aDStack_88);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}

