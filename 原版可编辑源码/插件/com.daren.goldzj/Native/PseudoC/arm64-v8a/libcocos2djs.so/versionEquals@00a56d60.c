
/* cocos2d::extension::Manifest::versionEquals(cocos2d::extension::Manifest const*) const */

Manifest * __thiscall cocos2d::extension::Manifest::versionEquals(Manifest *this,Manifest *param_1)

{
  byte *__s1;
  size_t sVar1;
  size_t sVar2;
  Manifest MVar3;
  Manifest MVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  logic_error *plVar13;
  Manifest *pMVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  ulong *puVar18;
  byte *__s2;
  byte *pbVar19;
  Manifest *__s1_00;
  void *pvVar20;
  Manifest *__s2_00;
  char *__s2_01;
  void *pvVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong local_c0;
  size_t sStack_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  void *local_90 [2];
  void *local_80;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 00a56d8c to 00b56ec3 has its CatchHandler @ 00a56b40 */
  MVar3 = this[0x78];
  MVar4 = param_1[0x78];
  sVar1 = (ulong)((byte)MVar3 >> 1);
  if (((byte)MVar3 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x80);
  }
  sVar2 = (ulong)((byte)MVar4 >> 1);
  if (((byte)MVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x80);
  }
  __s1_00 = this;
  if (sVar1 == sVar2) {
    __s1_00 = *(Manifest **)(this + 0x88);
    __s2_00 = *(Manifest **)(param_1 + 0x88);
    if (((byte)MVar3 & 1) == 0) {
      __s1_00 = this + 0x79;
    }
    if (((byte)MVar4 & 1) == 0) {
      __s2_00 = param_1 + 0x79;
    }
    if (((byte)MVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pMVar14 = this + 0x79;
        lVar17 = -(ulong)((byte)MVar3 >> 1);
        do {
          if (*pMVar14 != *__s2_00) goto LAB_00a56e24;
                    /* catch() { ... } // from try @ 00a56bc4 with catch @ 00a56e04 */
          pMVar14 = pMVar14 + 1;
                    /* catch() { ... } // from try @ 00a56bb8 with catch @ 00a56e08 */
          lVar17 = lVar17 + 1;
                    /* catch() { ... } // from try @ 00a56c08 with catch @ 00a56e0c
                       catch() { ... } // from try @ 00a56cbc with catch @ 00a56e0c */
          __s2_00 = __s2_00 + 1;
        } while (lVar17 != 0);
      }
    }
    else if (sVar1 != 0) {
      uVar10 = memcmp(__s1_00,__s2_00,sVar1);
      __s1_00 = (Manifest *)(ulong)uVar10;
      if (uVar10 != 0) goto LAB_00a56e24;
    }
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_a8,(vector *)(param_1 + 0x90));
    std::__ndk1::
    unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     *)local_90,(unordered_map *)(param_1 + 0xa8));
    lVar17 = *(long *)(this + 0x90);
                    /* catch() { ... } // from try @ 00a56b98 with catch @ 00a56e5c */
    if ((long)local_a0 - (long)local_a8 == *(long *)(this + 0x98) - lVar17) {
                    /* catch() { ... } // from try @ 00a56bd0 with catch @ 00a56e6c
                       catch() { ... } // from try @ 00a56c50 with catch @ 00a56e6c
                       catch() { ... } // from try @ 00a56d50 with catch @ 00a56e6c */
      if (*(long *)(this + 0x98) != lVar17) {
        uVar23 = 0;
        pbVar24 = (byte *)((ulong)&local_c0 | 1);
        do {
          puVar18 = (ulong *)(lVar17 + uVar23 * 0x18);
          sStack_b8 = 0;
          local_b0 = (byte *)0x0;
          local_c0 = 0;
          if ((*puVar18 & 1) == 0) {
            local_b0 = (byte *)puVar18[2];
            sStack_b8 = puVar18[1];
            local_c0 = *puVar18;
          }
          else {
            lVar17 = lVar17 + uVar23 * 0x18;
                    /* try { // try from 00a56ec4 to 00b56f17 has its CatchHandler @ 00a56ec4
                       catch() { ... } // from try @ 00a56ec4 with catch @ 00a56ec4
                       catch() { ... } // from try @ 00a5708c with catch @ 00a56ec4 */
            uVar15 = *(ulong *)(lVar17 + 8);
            if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            pvVar20 = *(void **)(lVar17 + 0x10);
            if (uVar15 < 0x17) {
              local_c0 = (ulong)(byte)((int)uVar15 << 1);
              pbVar19 = pbVar24;
              if (uVar15 != 0) goto LAB_00a56f10;
            }
            else {
              uVar22 = uVar15 + 0x10 & 0xfffffffffffffff0;
              pbVar19 = operator_new(uVar22);
              local_c0 = uVar22 | 1;
              sStack_b8 = uVar15;
              local_b0 = pbVar19;
LAB_00a56f10:
                    /* try { // try from 00a56f18 to 00b56f2f has its CatchHandler @ 00a57108 */
              memcpy(pbVar19,pvVar20,uVar15);
            }
            pbVar19[uVar15] = 0;
          }
          pbVar19 = local_a8 + uVar23 * 0x18;
                    /* try { // try from 00a56f38 to 00b56f43 has its CatchHandler @ 00a57104 */
          bVar5 = *pbVar19;
          uVar15 = local_c0 >> 1 & 0x7f;
                    /* try { // try from 00a56f44 to 00b56f4f has its CatchHandler @ 00a57100 */
          sVar1 = uVar15;
          if ((local_c0 & 1) != 0) {
            sVar1 = sStack_b8;
          }
                    /* try { // try from 00a56f50 to 00b5708b has its CatchHandler @ 00a57118 */
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar19 + 8);
          }
          if (sVar1 == sVar2) {
            __s2 = *(byte **)(local_a8 + uVar23 * 0x18 + 0x10);
            __s1 = pbVar24;
            if ((local_c0 & 1) != 0) {
              __s1 = local_b0;
            }
            if ((bVar5 & 1) == 0) {
              __s2 = pbVar19 + 1;
            }
            if ((local_c0 & 1) == 0) {
              if (sVar1 != 0) {
                lVar17 = -uVar15;
                pbVar19 = pbVar24;
                do {
                  if (*pbVar19 != *__s2) goto LAB_00a57078;
                  pbVar19 = pbVar19 + 1;
                  lVar17 = lVar17 + 1;
                  __s2 = __s2 + 1;
                } while (lVar17 != 0);
              }
            }
            else if ((sVar1 != 0) && (iVar11 = memcmp(__s1,__s2,sVar1), iVar11 != 0))
            goto LAB_00a57078;
            lVar17 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                                 *)(this + 0xa8),(basic_string *)&local_c0);
            if (lVar17 == 0) {
              plVar13 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00a571c0 to 00b571d7 has its CatchHandler @ 00a57340 */
              std::logic_error::logic_error(plVar13,"unordered_map::at: key not found");
              *(undefined ***)plVar13 = &PTR__invalid_argument_01cdf878;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a571ec to 00b571ff has its CatchHandler @ 00a5733c */
              __cxa_throw(plVar13,&std::out_of_range::typeinfo,
                          std::invalid_argument::~invalid_argument);
            }
            lVar12 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                                 *)local_90,(basic_string *)&local_c0);
            if (lVar12 == 0) {
              plVar13 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00a57200 to 00b5720f has its CatchHandler @ 00a57310 */
              std::logic_error::logic_error(plVar13,"unordered_map::at: key not found");
              *(undefined ***)plVar13 = &PTR__invalid_argument_01cdf878;
                    /* try { // try from 00a57228 to 00b5722f has its CatchHandler @ 00a572f4 */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(plVar13,&std::out_of_range::typeinfo,
                          std::invalid_argument::~invalid_argument);
            }
            bVar5 = *(byte *)(lVar12 + 0x28);
            bVar6 = *(byte *)(lVar17 + 0x28);
            sVar1 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar1 = *(size_t *)(lVar17 + 0x30);
            }
            sVar2 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar2 = *(size_t *)(lVar12 + 0x30);
            }
            if (sVar1 != sVar2) goto LAB_00a57078;
            pvVar20 = *(void **)(lVar17 + 0x38);
            __s2_01 = *(char **)(lVar12 + 0x38);
            if ((bVar6 & 1) == 0) {
              pvVar20 = (void *)(lVar17 + 0x29);
            }
            if ((bVar5 & 1) == 0) {
              __s2_01 = (char *)(lVar12 + 0x29);
            }
            if ((bVar6 & 1) == 0) {
              if (sVar1 == 0) goto LAB_00a570b4;
              pcVar16 = (char *)(lVar17 + 0x29);
              lVar17 = -(ulong)(bVar6 >> 1);
              do {
                if (*pcVar16 != *__s2_01) goto LAB_00a57078;
                bVar8 = false;
                pcVar16 = pcVar16 + 1;
                lVar17 = lVar17 + 1;
                __s2_01 = __s2_01 + 1;
              } while (lVar17 != 0);
            }
            else {
              if ((sVar1 != 0) && (iVar11 = memcmp(pvVar20,__s2_01,sVar1), iVar11 != 0))
              goto LAB_00a57078;
LAB_00a570b4:
              bVar8 = false;
            }
          }
          else {
LAB_00a57078:
            bVar8 = true;
          }
          if ((local_c0 & 1) != 0) {
            operator_delete(local_b0);
          }
                    /* try { // try from 00a5708c to 00b5716f has its CatchHandler @ 00a56ec4 */
          if (bVar8) goto LAB_00a570c4;
          lVar17 = *(long *)(this + 0x90);
          uVar23 = (ulong)((int)uVar23 + 1);
          uVar15 = (*(long *)(this + 0x98) - lVar17 >> 3) * -0x5555555555555555;
        } while (uVar23 <= uVar15 && uVar15 - uVar23 != 0);
      }
      bVar8 = false;
      pvVar20 = local_90[0];
      puVar9 = local_80;
    }
    else {
LAB_00a570c4:
      bVar8 = true;
      pvVar20 = local_90[0];
      puVar9 = local_80;
    }
    while (puVar9 != (void *)0x0) {
      pvVar21 = (void *)*puVar9;
      local_90[0] = pvVar20;
      if ((*(byte *)(puVar9 + 5) & 1) != 0) {
        operator_delete((void *)puVar9[7]);
      }
      if ((*(byte *)(puVar9 + 2) & 1) != 0) {
        operator_delete((void *)puVar9[4]);
      }
      operator_delete(puVar9);
                    /* catch() { ... } // from try @ 00a56f44 with catch @ 00a57100 */
      pvVar20 = local_90[0];
      puVar9 = pvVar21;
    }
                    /* catch() { ... } // from try @ 00a56f38 with catch @ 00a57104 */
                    /* catch() { ... } // from try @ 00a56f18 with catch @ 00a57108 */
    local_90[0] = (void *)0x0;
    if (pvVar20 != (void *)0x0) {
      operator_delete(pvVar20);
    }
    pbVar24 = local_a8;
                    /* catch() { ... } // from try @ 00a56f50 with catch @ 00a57118 */
    if (local_a8 != (byte *)0x0) {
      while (pbVar19 = local_a0, pbVar19 != pbVar24) {
        local_a0 = pbVar19 + -0x18;
        if ((*local_a0 & 1) != 0) {
          operator_delete(*(void **)(pbVar19 + -8));
        }
      }
      local_a0 = pbVar24;
      operator_delete(local_a8);
    }
                    /* try { // try from 00a57170 to 00b571bf has its CatchHandler @ 00a57170
                       catch() { ... } // from try @ 00a57170 with catch @ 00a57170
                       catch() { ... } // from try @ 00a57278 with catch @ 00a57170 */
    __s1_00 = (Manifest *)(ulong)!bVar8;
    if (*(long *)(lVar7 + 0x28) != local_68) {
LAB_00a571a4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(__s1_00);
    }
  }
  else {
LAB_00a56e24:
    if (*(long *)(lVar7 + 0x28) != local_68) goto LAB_00a571a4;
    __s1_00 = (Manifest *)0x0;
  }
  return __s1_00;
}

