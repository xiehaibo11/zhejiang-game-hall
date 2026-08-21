
/* cocos2d::extension::Manifest::versionEquals(cocos2d::extension::Manifest const*) const */

Manifest * __thiscall cocos2d::extension::Manifest::versionEquals(Manifest *this,Manifest *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  size_t sVar3;
  Manifest MVar4;
  Manifest MVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  size_t sVar16;
  ulong uVar17;
  Manifest *pMVar18;
  char *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  Manifest *__s1;
  void *pvVar22;
  Manifest *__s2;
  char *__s2_00;
  void *pvVar23;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  size_t local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  void *local_80 [2];
  undefined8 *local_70;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
                    /* try { // try from 00dfb7b8 to 00efb7e3 has its CatchHandler @ 00dfb7b8
                       catch() { ... } // from try @ 00dfb7b8 with catch @ 00dfb7b8
                       catch() { ... } // from try @ 00dfb7ec with catch @ 00dfb7b8 */
  MVar4 = this[0x90];
  MVar5 = param_1[0x90];
  uVar15 = (ulong)((byte)MVar4 >> 1);
  sVar3 = uVar15;
  if (((byte)MVar4 & 1) != 0) {
    sVar3 = *(size_t *)(this + 0x98);
  }
  sVar16 = (ulong)((byte)MVar5 >> 1);
  if (((byte)MVar5 & 1) != 0) {
    sVar16 = *(size_t *)(param_1 + 0x98);
  }
  __s1 = this;
                    /* try { // try from 00dfb7e4 to 00efb7eb has its CatchHandler @ 00dfb8e4 */
  if (sVar3 == sVar16) {
    __s1 = *(Manifest **)(this + 0xa0);
                    /* try { // try from 00dfb7ec to 00efb8f7 has its CatchHandler @ 00dfb7b8 */
    __s2 = *(Manifest **)(param_1 + 0xa0);
    if (((byte)MVar4 & 1) == 0) {
      __s1 = this + 0x91;
    }
    if (((byte)MVar5 & 1) == 0) {
      __s2 = param_1 + 0x91;
    }
    if (((byte)MVar4 & 1) == 0) {
      if (sVar3 != 0) {
        pMVar18 = this + 0x91;
        do {
          if (*pMVar18 != *__s2) goto LAB_00dfb844;
          uVar15 = uVar15 - 1;
          pMVar18 = pMVar18 + 1;
          __s2 = __s2 + 1;
        } while (uVar15 != 0);
      }
    }
    else if (sVar3 != 0) {
      uVar11 = memcmp(__s1,__s2,sVar3);
      __s1 = (Manifest *)(ulong)uVar11;
      if (uVar11 != 0) goto LAB_00dfb844;
    }
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_98,(vector *)(param_1 + 0xa8));
    std::__ndk1::
    unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     *)local_80,(unordered_map *)(param_1 + 0xc0));
    lVar13 = *(long *)(this + 0xa8);
    if ((long)local_90 - (long)local_98 == *(long *)(this + 0xb0) - lVar13) {
      if (*(long *)(this + 0xb0) != lVar13) {
        uVar15 = 0;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_b0,(basic_string *)(lVar13 + uVar15 * 0x18));
          pbVar21 = local_98 + uVar15 * 0x18;
          bVar6 = *pbVar21;
          sVar16 = (size_t)((byte)local_b0[0] >> 1);
          sVar3 = sVar16;
          if (((byte)local_b0[0] & 1) != 0) {
            sVar3 = local_a8;
          }
                    /* catch() { ... } // from try @ 00dfb7e4 with catch @ 00dfb8e4 */
          sVar1 = (ulong)(bVar6 >> 1);
          if ((bVar6 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar21 + 8);
          }
          if (sVar3 == sVar1) {
            pbVar20 = *(byte **)(local_98 + uVar15 * 0x18 + 0x10);
            pbVar2 = (byte *)((ulong)local_b0 | 1);
            if (((byte)local_b0[0] & 1) != 0) {
              pbVar2 = local_a0;
            }
            if ((bVar6 & 1) == 0) {
              pbVar20 = pbVar21 + 1;
            }
            pbVar21 = (byte *)((ulong)local_b0 | 1);
            if (((byte)local_b0[0] & 1) == 0) {
              while (sVar3 != 0) {
                if (*pbVar21 != *pbVar20) goto LAB_00dfb954;
                pbVar20 = pbVar20 + 1;
                sVar16 = sVar16 - 1;
                pbVar21 = pbVar21 + 1;
                sVar3 = sVar16;
              }
            }
            else if ((sVar3 != 0) && (iVar12 = memcmp(pbVar2,pbVar20,sVar3), iVar12 != 0))
            goto LAB_00dfb954;
            lVar13 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                                 *)(this + 0xc0),(basic_string *)local_b0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_007d44e0("unordered_map::at: key not found");
            }
            lVar14 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                                 *)local_80,(basic_string *)local_b0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_007d44e0("unordered_map::at: key not found");
            }
            bVar6 = *(byte *)(lVar14 + 0x28);
            bVar7 = *(byte *)(lVar13 + 0x28);
            uVar17 = (ulong)(bVar7 >> 1);
            sVar3 = uVar17;
            if ((bVar7 & 1) != 0) {
              sVar3 = *(size_t *)(lVar13 + 0x30);
            }
            sVar16 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar16 = *(size_t *)(lVar14 + 0x30);
            }
            if (sVar3 == sVar16) {
              pvVar22 = *(void **)(lVar13 + 0x38);
              __s2_00 = *(char **)(lVar14 + 0x38);
              if ((bVar7 & 1) == 0) {
                pvVar22 = (void *)(lVar13 + 0x29);
              }
              if ((bVar6 & 1) == 0) {
                __s2_00 = (char *)(lVar14 + 0x29);
              }
              if ((bVar7 & 1) == 0) {
                if (sVar3 != 0) {
                  pcVar19 = (char *)(lVar13 + 0x29);
                  do {
                    if (*pcVar19 != *__s2_00) goto LAB_00dfba18;
                    bVar9 = false;
                    uVar17 = uVar17 - 1;
                    pcVar19 = pcVar19 + 1;
                    __s2_00 = __s2_00 + 1;
                  } while (uVar17 != 0);
                  goto joined_r0x00dfba5c;
                }
              }
              else {
                    /* try { // try from 00dfba0c to 00efba0f has its CatchHandler @ 00dfba9c */
                if ((sVar3 != 0) && (iVar12 = memcmp(pvVar22,__s2_00,sVar3), iVar12 != 0))
                goto LAB_00dfba18;
              }
              bVar9 = false;
            }
            else {
LAB_00dfba18:
              bVar9 = true;
            }
          }
          else {
LAB_00dfb954:
            bVar9 = true;
          }
joined_r0x00dfba5c:
          if (((byte)local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          if (bVar9) goto LAB_00dfba64;
          lVar13 = *(long *)(this + 0xa8);
          uVar15 = (ulong)((int)uVar15 + 1);
          uVar17 = (*(long *)(this + 0xb0) - lVar13 >> 3) * -0x5555555555555555;
        } while (uVar15 <= uVar17 && uVar17 - uVar15 != 0);
      }
      bVar9 = false;
      pvVar22 = local_80[0];
      puVar10 = local_70;
    }
    else {
LAB_00dfba64:
      bVar9 = true;
      pvVar22 = local_80[0];
      puVar10 = local_70;
    }
    while (puVar10 != (void *)0x0) {
      pvVar23 = (void *)*puVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfba0c with catch @ 00dfba9c
                        */
      local_80[0] = pvVar22;
      if ((*(byte *)(puVar10 + 5) & 1) != 0) {
        operator_delete((void *)puVar10[7]);
      }
      if ((*(byte *)(puVar10 + 2) & 1) != 0) {
        operator_delete((void *)puVar10[4]);
      }
      operator_delete(puVar10);
      pvVar22 = local_80[0];
      puVar10 = pvVar23;
    }
    local_80[0] = (void *)0x0;
    if (pvVar22 != (void *)0x0) {
      operator_delete(pvVar22);
    }
    pbVar21 = local_98;
    if (local_98 != (byte *)0x0) {
      if (local_90 != local_98) {
        bVar6 = local_90[-0x18];
        pbVar20 = local_90 + -0x18;
        while( true ) {
          pbVar2 = pbVar20;
          if ((bVar6 & 1) != 0) {
            operator_delete(*(void **)(local_90 + -8));
          }
          if (pbVar21 == pbVar2) break;
          bVar6 = pbVar2[-0x18];
          pbVar20 = pbVar2 + -0x18;
          local_90 = pbVar2;
        }
      }
      local_90 = pbVar21;
      operator_delete(local_98);
    }
    __s1 = (Manifest *)(ulong)!bVar9;
    if (*(long *)(lVar8 + 0x28) != local_58) {
LAB_00dfbb54:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(__s1);
    }
  }
  else {
LAB_00dfb844:
    if (*(long *)(lVar8 + 0x28) != local_58) goto LAB_00dfbb54;
    __s1 = (Manifest *)0x0;
  }
  return __s1;
}

