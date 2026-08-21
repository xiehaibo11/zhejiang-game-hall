
/* cocos2d::FontAtlas::findNewCharacters(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&,
   std::__ndk1::unordered_map<unsigned int, unsigned int, std::__ndk1::hash<unsigned int>,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   unsigned int> > >&) */

void __thiscall
cocos2d::FontAtlas::findNewCharacters(FontAtlas *this,basic_string *param_1,unordered_map *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  basic_string bVar5;
  ulong uVar6;
  long lVar7;
  basic_string *pbVar8;
  long lVar9;
  basic_string *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  basic_string *pbVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  basic_string *pbVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [8];
  ulong uVar22;
  ulong uVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 local_94;
  undefined1 local_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [4];
  undefined8 uStack_7c;
  undefined4 *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  auStack_88 = (undefined1  [8])0x0;
  _auStack_80 = (undefined4 *)0x0;
  local_90 = (undefined1  [8])0x0;
  iVar2 = *(int *)(*(long *)(this + 0x88) + 0x38);
  bVar5 = *param_1;
  if (*(long *)(this + 0x68) != 0) {
    uVar1 = (ulong)((byte)bVar5 >> 1);
    if (((byte)bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    std::__ndk1::
    basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
    reserve((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
             *)local_90,uVar1);
    if (uVar1 != 0) {
      uVar22 = 0;
      do {
        pbVar10 = param_1 + 4;
        if (((byte)*param_1 & 1) != 0) {
          pbVar10 = *(basic_string **)(param_1 + 0x10);
        }
        uVar11 = *(ulong *)(this + 0x58);
        uVar4 = *(uint *)(pbVar10 + uVar22 * 4);
        uVar23 = (ulong)uVar4;
        if (uVar11 != 0) {
          uVar25 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar11 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar11 >> 8)),POPCOUNT((char)uVar11))))))));
          uVar24 = NEON_uaddlv(uVar25,1);
          uVar14 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
          if (uVar14 < 2) {
            uVar15 = (ulong)((int)uVar11 - 1U & uVar4);
          }
          else {
            uVar15 = uVar23;
            if (uVar11 <= uVar23) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar23 / uVar11;
              }
              uVar15 = uVar23 - uVar15 * uVar11;
            }
          }
          plVar16 = *(long **)(*(long *)(this + 0x50) + uVar15 * 8);
          if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
            do {
              uVar19 = plVar16[1];
              if (uVar19 == uVar23) {
                if (*(uint *)(plVar16 + 2) == uVar4) goto LAB_00efd4ec;
              }
              else {
                if (uVar14 < 2) {
                  uVar19 = uVar19 & uVar11 - 1;
                }
                else if (uVar11 <= uVar19) {
                  uVar6 = 0;
                  if (uVar11 != 0) {
                    uVar6 = uVar19 / uVar11;
                  }
                  uVar19 = uVar19 - uVar6 * uVar11;
                }
                if (uVar19 != uVar15) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
        if (((ulong)local_90 & 1) == 0) {
          auVar21 = (undefined1  [8])((ulong)local_90 >> 1 & 0x7f);
          uVar11 = 4;
          if (auVar21 == (undefined1  [8])0x4) goto LAB_00efd4b0;
LAB_00efd48c:
          if (((ulong)local_90 & 1) != 0) goto LAB_00efd490;
LAB_00efd4d4:
          local_90[0] = SUB81(auVar21,0) * '\x02' + '\x02';
          puVar12 = (undefined4 *)((ulong)local_90 | 4);
        }
        else {
          uVar11 = ((ulong)local_90 & 0xfffffffffffffffe) - 1;
          auVar21 = auStack_88;
          if (auStack_88 != (undefined1  [8])uVar11) goto LAB_00efd48c;
LAB_00efd4b0:
          std::__ndk1::
          basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
          ::__grow_by((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                       *)local_90,uVar11,1,uVar11,uVar11,0,0);
          if (((ulong)local_90 & 1) == 0) goto LAB_00efd4d4;
LAB_00efd490:
          auStack_88 = (undefined1  [8])((long)auVar21 + 1);
          puVar12 = _auStack_80;
        }
        puVar12[(long)auVar21] = uVar4;
        (puVar12 + (long)auVar21)[1] = 0;
LAB_00efd4ec:
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar1);
    }
    goto LAB_00efd5e4;
  }
  pbVar10 = param_1 + 4;
  uVar1 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    pbVar10 = *(basic_string **)(param_1 + 0x10);
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (3 < uVar1 && uVar1 - 4 != 0) {
                    /* try { // try from 00efd520 to 00ffd52f has its CatchHandler @ 00efd5b8 */
                    /* try { // try from 00efd530 to 00ffd5bb has its CatchHandler @ 00efd000 */
    std::__ndk1::
    basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
    __grow_by_and_replace
              ((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                *)local_90,4,uVar1 - 4,0,0,0,uVar1,(wchar32 *)pbVar10);
    goto LAB_00efd5e4;
  }
  if (uVar1 == 0) goto LAB_00efd5e4;
  pbVar13 = (basic_string *)((ulong)local_90 | 4);
  uVar22 = uVar1;
  if ((uVar1 < 8) ||
     ((pbVar13 < pbVar10 + uVar1 * 4 && (pbVar10 < (basic_string *)(local_90 + uVar1 * 4 + 4))))) {
LAB_00efd5c0:
    do {
      uVar22 = uVar22 - 1;
      *(wchar32 *)pbVar13 = *(wchar32 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar13 = pbVar13 + 4;
    } while (uVar22 != 0);
  }
  else {
    uVar11 = uVar1 & 0xfffffffffffffff8;
    pbVar17 = pbVar10 + 0x10;
    pbVar10 = pbVar10 + uVar11 * 4;
    pbVar13 = (basic_string *)((ulong)(local_90 + uVar11 * 4) | 4);
    puVar18 = (undefined8 *)(auStack_80 + 4);
    uVar22 = uVar11;
    do {
      pbVar8 = pbVar17 + -8;
      uVar25 = *(undefined8 *)(pbVar17 + -0x10);
      uVar27 = *(undefined8 *)(pbVar17 + 8);
      uVar26 = *(undefined8 *)pbVar17;
      pbVar17 = pbVar17 + 0x20;
      uVar22 = uVar22 - 8;
      puVar18[-1] = *(undefined8 *)pbVar8;
      puVar18[-2] = uVar25;
      puVar18[1] = uVar27;
      *puVar18 = uVar26;
      puVar18 = puVar18 + 4;
    } while (uVar22 != 0);
                    /* catch() { ... } // from try @ 00efd520 with catch @ 00efd5b8 */
    uVar22 = uVar1 - uVar11;
                    /* catch() { ... } // from try @ 00efd9f0 with catch @ 00efd5bc */
    if (uVar1 != uVar11) goto LAB_00efd5c0;
  }
  local_90._1_7_ = 0;
  local_90[0] = (byte)((int)uVar1 << 1);
  *(undefined4 *)(local_90 + uVar1 * 4 + 4) = 0;
LAB_00efd5e4:
  auVar21 = (undefined1  [8])((ulong)local_90 >> 1 & 0x7f);
  if (((ulong)local_90 & 1) != 0) {
    auVar21 = auStack_88;
  }
  if (auVar21 != (undefined1  [8])0x0) {
    if (iVar2 == 0x67622020) {
      conversionU32TOGB2312(this,(basic_string *)local_90,param_2);
    }
    else {
                    /* try { // try from 00efd610 to 00ffd9ef has its CatchHandler @ 00efdf4c */
      if (iVar2 == 0x756e6963) {
        lVar20 = (long)auVar21 << 2;
        puVar12 = (undefined4 *)((ulong)local_90 | 4);
        if (((ulong)local_90 & 1) != 0) {
          puVar12 = _auStack_80;
        }
        do {
          uVar3 = *puVar12;
          local_94 = uVar3;
          local_70 = &local_94;
          lVar9 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
                  ::
                  __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int&&>,std::__ndk1::tuple<>>
                            ((uint *)param_2,(piecewise_construct_t *)&local_94,
                             (tuple *)&DAT_0143a342,(tuple *)&local_70);
          lVar20 = lVar20 + -4;
          *(undefined4 *)(lVar9 + 0x14) = uVar3;
          puVar12 = puVar12 + 1;
        } while (lVar20 != 0);
      }
    }
  }
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(_auStack_80);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

