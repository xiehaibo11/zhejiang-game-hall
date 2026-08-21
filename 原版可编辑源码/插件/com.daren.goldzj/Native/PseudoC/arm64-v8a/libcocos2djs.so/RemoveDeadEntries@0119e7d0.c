
/* v8::internal::HeapObjectsMap::RemoveDeadEntries() */

void __thiscall v8::internal::HeapObjectsMap::RemoveDeadEntries(HeapObjectsMap *this)

{
  HeapObjectsMap *pHVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  undefined2 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  void *local_b0;
  ulong uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  void *local_80 [3];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  uStack_98 = 0;
  local_a0 = (undefined8 *)0x0;
  local_90 = 0x3f800000;
  for (plVar20 = *(long **)(this + 0x60); plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,void*>>>
    ::__emplace_unique_key_args<unsigned_long,unsigned_long_const&,void*const&>
              ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,void*>>>
                *)&local_b0,(ulong *)(plVar20 + 3),(ulong *)(plVar20 + 3),(void **)(plVar20 + 2));
  }
  lVar15 = *(long *)(this + 0x20);
  lVar17 = *(long *)(this + 0x28);
  uVar12 = (lVar17 - lVar15 >> 3) * -0x5555555555555555;
  if (uVar12 < 2) {
    uVar21 = 1;
LAB_0119ec64:
    lVar15 = lVar15 + uVar21 * 0x18;
    pvVar7 = local_b0;
    puVar8 = local_a0;
    if (lVar15 != lVar17) {
      *(long *)(this + 0x28) = lVar15;
    }
    while (puVar8 != (void *)0x0) {
      pvVar19 = (void *)*puVar8;
      local_b0 = pvVar7;
      operator_delete(puVar8);
      pvVar7 = local_b0;
      puVar8 = pvVar19;
    }
    local_b0 = (void *)0x0;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pHVar1 = this + 0x50;
  uVar21 = 1;
  uVar22 = 1;
  if (uStack_a8 != 0) goto LAB_0119e8bc;
LAB_0119e960:
  do {
    plVar20 = (long *)0x0;
LAB_0119e964:
    if (*(char *)(lVar15 + uVar22 * 0x18 + 0x14) == '\0') {
      pvVar7 = *(void **)(lVar15 + uVar22 * 0x18 + 8);
      if (((pvVar7 != (void *)0x0) &&
          (uVar2 = ~(uint)pvVar7 + (uint)pvVar7 * 0x8000, uVar2 = (uVar2 ^ uVar2 >> 0xc) * 5,
          uVar2 = (uVar2 ^ uVar2 >> 4) * 0x809, local_80[0] = pvVar7,
          base::
          TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
          ::Remove((TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
                    *)(this + 8),local_80,uVar2 & 0x3fffffff ^ uVar2 >> 0x10),
          plVar20 != (long *)0x0)) && (uVar12 = *(ulong *)(this + 0x58), uVar12 != 0)) {
        uVar11 = plVar20[3];
        uVar24 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar12 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar12 >> 8)),POPCOUNT((char)uVar12))))))));
        uVar23 = NEON_uaddlv(uVar24,1);
        uVar13 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
        uVar14 = (uVar13 ^ uVar11 >> 0x20 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
        uVar13 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
        uVar14 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
        if (uVar13 < 2) {
          uVar16 = uVar14 & uVar12 - 1;
        }
        else {
          uVar16 = uVar14;
          if (uVar12 <= uVar14) {
            uVar16 = 0;
            if (uVar12 != 0) {
              uVar16 = uVar14 / uVar12;
            }
            uVar16 = uVar14 - uVar16 * uVar12;
          }
        }
        plVar20 = *(long **)(*(long *)pHVar1 + uVar16 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          do {
            uVar18 = plVar20[1];
            if (uVar18 == uVar14) {
              if (plVar20[2] == uVar11) {
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
                ::remove(local_80,pHVar1);
                pvVar7 = local_80[0];
                local_80[0] = (void *)0x0;
                if (pvVar7 != (void *)0x0) {
                  operator_delete(pvVar7);
                }
                break;
              }
            }
            else {
              if (uVar13 < 2) {
                uVar18 = uVar18 & uVar12 - 1;
              }
              else if (uVar12 <= uVar18) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar18 / uVar12;
                }
                uVar18 = uVar18 - uVar4 * uVar12;
              }
              if (uVar18 != uVar16) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    else {
      lVar6 = lVar15;
      if (uVar21 != uVar22) {
        if (uVar12 <= uVar21) goto LAB_0119ecd0;
        puVar8 = (undefined8 *)(lVar15 + uVar22 * 0x18);
        uVar25 = puVar8[1];
        uVar24 = *puVar8;
        puVar9 = (undefined8 *)(lVar15 + uVar21 * 0x18);
        *(undefined8 *)((long)puVar9 + 0xd) = *(undefined8 *)((long)puVar8 + 0xd);
        puVar9[1] = uVar25;
        *puVar9 = uVar24;
        lVar6 = *(long *)(this + 0x20);
        lVar17 = *(long *)(this + 0x28);
      }
      uVar12 = (lVar17 - lVar6 >> 3) * -0x5555555555555555;
      if (uVar12 < uVar21 || uVar12 - uVar21 == 0) {
LAB_0119ecd0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined1 *)(lVar6 + uVar21 * 0x18 + 0x14) = 0;
      lVar6 = *(long *)(lVar15 + uVar22 * 0x18 + 8);
      uVar2 = ~(uint)lVar6 + (uint)lVar6 * 0x8000;
      uVar2 = (uVar2 ^ uVar2 >> 0xc) * 5;
      uVar2 = (uVar2 ^ uVar2 >> 4) * 0x809;
      uVar12 = (ulong)((uVar2 & 0x3fffffff ^ uVar2 >> 0x10) & *(int *)(this + 0x10) - 1U);
      plVar10 = (long *)(*(long *)(this + 8) + uVar12 * 0x18);
      lVar15 = *plVar10;
      lVar17 = lVar15;
      if (lVar15 != 0) {
        do {
          if (lVar17 == lVar6) goto LAB_0119eadc;
          uVar12 = (ulong)((int)uVar12 + 1U & *(int *)(this + 0x10) - 1U);
          plVar10 = (long *)(*(long *)(this + 8) + uVar12 * 0x18);
          lVar17 = *plVar10;
          lVar15 = lVar6;
        } while (lVar17 != 0);
        lVar15 = 0;
      }
LAB_0119eadc:
      plVar3 = (long *)0x0;
      if (lVar15 != 0) {
        plVar3 = plVar10;
      }
      plVar3[1] = uVar21;
      if (plVar20 != (long *)0x0) {
        uVar12 = *(ulong *)(this + 0x58);
        if (uVar12 == 0) {
LAB_0119e88c:
          plVar20 = (long *)0x0;
        }
        else {
          uVar11 = plVar20[3];
          uVar24 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar12 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar12 >> 8)),POPCOUNT((char)uVar12))))))));
          uVar23 = NEON_uaddlv(uVar24,1);
          uVar13 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
          uVar14 = (uVar13 ^ uVar11 >> 0x20 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
          uVar13 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
          uVar14 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
          if (uVar13 < 2) {
            uVar16 = uVar14 & uVar12 - 1;
          }
          else {
            uVar16 = uVar14;
            if (uVar12 <= uVar14) {
              uVar16 = 0;
              if (uVar12 != 0) {
                uVar16 = uVar14 / uVar12;
              }
              uVar16 = uVar14 - uVar16 * uVar12;
            }
          }
          plVar10 = *(long **)(*(long *)pHVar1 + uVar16 * 8);
          plVar20 = (long *)0x0;
          if ((plVar10 != (long *)0x0) && (plVar20 = (long *)*plVar10, plVar20 != (long *)0x0)) {
            do {
              uVar18 = plVar20[1];
              if (uVar18 == uVar14) {
                if (plVar20[2] == uVar11) break;
              }
              else {
                if (uVar13 < 2) {
                  uVar18 = uVar18 & uVar12 - 1;
                }
                else if (uVar12 <= uVar18) {
                  uVar4 = 0;
                  if (uVar12 != 0) {
                    uVar4 = uVar18 / uVar12;
                  }
                  uVar18 = uVar18 - uVar4 * uVar12;
                }
                if (uVar18 != uVar16) goto LAB_0119e88c;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
        plVar20[3] = uVar21;
      }
      uVar21 = uVar21 + 1;
    }
    lVar15 = *(long *)(this + 0x20);
    lVar17 = *(long *)(this + 0x28);
    uVar22 = uVar22 + 1;
    uVar12 = (lVar17 - lVar15 >> 3) * -0x5555555555555555;
    if (uVar12 <= uVar22) goto LAB_0119ec64;
  } while (uStack_a8 == 0);
LAB_0119e8bc:
  uVar24 = CONCAT17(POPCOUNT((char)(uStack_a8 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uStack_a8 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uStack_a8 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uStack_a8 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uStack_a8 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uStack_a8 >> 0x10))
                                                                 ,CONCAT11(POPCOUNT((char)(uStack_a8
                                                                                          >> 8)),
                                                                           POPCOUNT((char)uStack_a8)
                                                                          )))))));
  uVar23 = NEON_uaddlv(uVar24,1);
  uVar11 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
  if (uVar11 < 2) {
    uVar13 = uStack_a8 - 1 & uVar22;
  }
  else {
    uVar13 = uVar22;
    if (uStack_a8 <= uVar22) {
      uVar13 = 0;
      if (uStack_a8 != 0) {
        uVar13 = uVar22 / uStack_a8;
      }
      uVar13 = uVar22 - uVar13 * uStack_a8;
    }
  }
  plVar20 = *(long **)((long)local_b0 + uVar13 * 8);
  if (plVar20 == (long *)0x0) goto LAB_0119e960;
  plVar20 = (long *)*plVar20;
  if (plVar20 != (long *)0x0) {
    do {
      uVar14 = plVar20[1];
      if (uVar14 == uVar22) {
        if (plVar20[2] == uVar22) break;
      }
      else {
        if (uVar11 < 2) {
          uVar14 = uVar14 & uStack_a8 - 1;
        }
        else if (uStack_a8 <= uVar14) {
          uVar16 = 0;
          if (uStack_a8 != 0) {
            uVar16 = uVar14 / uStack_a8;
          }
          uVar14 = uVar14 - uVar16 * uStack_a8;
        }
        if (uVar14 != uVar13) goto LAB_0119e960;
      }
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  goto LAB_0119e964;
}

