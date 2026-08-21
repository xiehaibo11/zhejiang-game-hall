
/* v8::base::RandomNumberGenerator::NextSampleSlow(unsigned long, unsigned long,
   std::__ndk1::unordered_set<unsigned long, std::__ndk1::hash<unsigned long>,
   std::__ndk1::equal_to<unsigned long>, std::__ndk1::allocator<unsigned long> > const&) */

void v8::base::RandomNumberGenerator::NextSampleSlow
               (ulong param_1,ulong param_2,unordered_set *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  unordered_set *puVar5;
  ulong *puVar6;
  long *in_x3;
  vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *in_x8;
  unordered_set *puVar7;
  void *pvVar8;
  long lVar9;
  unordered_set *puVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  void *pvVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  ulong *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong local_88;
  void *local_80;
  ulong uStack_78;
  undefined8 *local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar7 = (unordered_set *)(param_2 - in_x3[3]);
  if (puVar7 < param_3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","max - excluded.size() >= n");
  }
  local_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
  local_a0 = (ulong *)0x0;
  if (puVar7 != (unordered_set *)0x0) {
    if ((ulong)puVar7 >> 0x3d != 0) goto LAB_01476b20;
    local_98 = operator_new((long)puVar7 * 8);
    local_90 = local_98 + (long)puVar7;
  }
  local_80 = (void *)0x0;
  local_a0 = local_98;
  if (param_2 != 0) {
    pvVar8 = (void *)in_x3[1];
    do {
      if (pvVar8 != (void *)0x0) {
        uVar18 = CONCAT17(POPCOUNT((char)((ulong)pvVar8 >> 0x38)),
                          CONCAT16(POPCOUNT((char)((ulong)pvVar8 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)((ulong)pvVar8 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)((ulong)pvVar8 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)((ulong)pvVar8 >> 0x18)
                                                                      ),
                                                              CONCAT12(POPCOUNT((char)((ulong)pvVar8
                                                                                      >> 0x10)),
                                                                       CONCAT11(POPCOUNT((char)((
                                                  ulong)pvVar8 >> 8)),POPCOUNT((char)pvVar8))))))));
        uVar17 = NEON_uaddlv(uVar18,1);
        uVar13 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
        if (uVar13 < 2) {
          pvVar11 = (void *)((long)pvVar8 - 1U & (ulong)local_80);
        }
        else {
          pvVar11 = local_80;
          if (pvVar8 <= local_80) {
            uVar12 = 0;
            if (pvVar8 != (void *)0x0) {
              uVar12 = (ulong)local_80 / (ulong)pvVar8;
            }
            pvVar11 = (void *)((long)local_80 - uVar12 * (long)pvVar8);
          }
        }
        plVar14 = *(long **)(*in_x3 + (long)pvVar11 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          do {
            pvVar15 = (void *)plVar14[1];
            if (local_80 == pvVar15) {
              if ((void *)plVar14[2] == local_80) goto LAB_01476784;
            }
            else {
              if (uVar13 < 2) {
                pvVar15 = (void *)((ulong)pvVar15 & (long)pvVar8 - 1U);
              }
              else if (pvVar8 <= pvVar15) {
                uVar12 = 0;
                if (pvVar8 != (void *)0x0) {
                  uVar12 = (ulong)pvVar15 / (ulong)pvVar8;
                }
                pvVar15 = (void *)((long)pvVar15 - uVar12 * (long)pvVar8);
              }
              if (pvVar15 != pvVar11) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
      if (local_98 == local_90) {
        std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
        __push_back_slow_path<unsigned_long_const&>
                  ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)&local_a0,
                   (ulong *)&local_80);
      }
      else {
        *local_98 = (ulong)local_80;
        local_98 = local_98 + 1;
      }
LAB_01476784:
      local_80 = (void *)((long)local_80 + 1);
      if (param_2 <= local_80) break;
      pvVar8 = (void *)in_x3[1];
    } while( true );
  }
  puVar1 = local_90;
  lVar9 = (long)local_98 - (long)local_a0;
  puVar6 = local_98;
  puVar7 = param_3;
  if (param_3 <= (unordered_set *)(param_2 - (long)param_3)) {
    puVar7 = (unordered_set *)(param_2 - (long)param_3);
  }
  while ((puVar5 = (unordered_set *)(lVar9 >> 3), local_98 = puVar6, puVar5 != puVar7 &&
         (param_3 < puVar5))) {
    uVar13 = *(ulong *)(param_1 + 0x10);
    uVar12 = *(ulong *)(param_1 + 8) ^ *(ulong *)(param_1 + 8) << 0x17;
    *(ulong *)(param_1 + 8) = uVar13;
    puVar10 = (unordered_set *)
              (long)(((double)(uVar13 >> 0xc | 0x3ff0000000000000) + -1.0) * (double)puVar5);
    *(ulong *)(param_1 + 0x10) = uVar12 ^ uVar13 ^ uVar13 >> 0x1a ^ uVar12 >> 0x11;
    if (puVar5 <= puVar10) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","x < result.size()");
    }
    uVar13 = local_a0[(long)puVar10];
    local_a0[(long)puVar10] = puVar6[-1];
    puVar6[-1] = uVar13;
    lVar9 = (long)(puVar6 + -1) - (long)local_a0;
    puVar6 = puVar6 + -1;
  }
  if (puVar5 == param_3) {
    *(ulong **)in_x8 = local_a0;
    *(ulong **)(in_x8 + 8) = puVar6;
    local_a0 = (ulong *)0x0;
    local_98 = (ulong *)0x0;
    local_90 = (ulong *)0x0;
    *(ulong **)(in_x8 + 0x10) = puVar1;
  }
  else {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_68 = 0;
    local_70 = (undefined8 *)0x0;
    local_60 = 0x3f800000;
    for (puVar1 = local_a0; puVar1 != puVar6; puVar1 = puVar1 + 1) {
      std::__ndk1::
      __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
      ::__emplace_unique_key_args<unsigned_long,unsigned_long_const&>
                ((__hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
                  *)&local_80,puVar1,puVar1);
    }
    uVar13 = param_2 - local_68;
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    if (uVar13 != 0) {
      if (uVar13 >> 0x3d != 0) {
LAB_01476b20:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar8 = operator_new(uVar13 * 8);
      *(void **)(in_x8 + 8) = pvVar8;
      *(void **)in_x8 = pvVar8;
      *(void **)(in_x8 + 0x10) = (void *)((long)pvVar8 + uVar13 * 8);
    }
    local_88 = 0;
    pvVar8 = local_80;
    puVar4 = local_70;
    if (param_2 != 0) {
      do {
        if (uStack_78 != 0) {
          uVar18 = CONCAT17(POPCOUNT((char)(uStack_78 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uStack_78 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uStack_78 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uStack_78 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uStack_78 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uStack_78
                                                                                        >> 0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uStack_78 >> 8)),POPCOUNT((char)uStack_78))))))));
          uVar17 = NEON_uaddlv(uVar18,1);
          uVar13 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
          if (uVar13 < 2) {
            uVar12 = uStack_78 - 1 & local_88;
          }
          else {
            uVar12 = local_88;
            if (uStack_78 <= local_88) {
              uVar12 = 0;
              if (uStack_78 != 0) {
                uVar12 = local_88 / uStack_78;
              }
              uVar12 = local_88 - uVar12 * uStack_78;
            }
          }
          plVar14 = *(long **)((long)local_80 + uVar12 * 8);
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            do {
              uVar16 = plVar14[1];
              if (local_88 == uVar16) {
                if (plVar14[2] == local_88) goto LAB_014769c4;
              }
              else {
                if (uVar13 < 2) {
                  uVar16 = uVar16 & uStack_78 - 1;
                }
                else if (uStack_78 <= uVar16) {
                  uVar2 = 0;
                  if (uStack_78 != 0) {
                    uVar2 = uVar16 / uStack_78;
                  }
                  uVar16 = uVar16 - uVar2 * uStack_78;
                }
                if (uVar16 != uVar12) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
        if (*(ulong **)(in_x8 + 8) == *(ulong **)(in_x8 + 0x10)) {
          std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
          __push_back_slow_path<unsigned_long_const&>(in_x8,&local_88);
        }
        else {
          **(ulong **)(in_x8 + 8) = local_88;
          *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 8;
        }
LAB_014769c4:
        local_88 = local_88 + 1;
        pvVar8 = local_80;
        puVar4 = local_70;
      } while (local_88 < param_2);
    }
    while (puVar4 != (void *)0x0) {
      pvVar11 = (void *)*puVar4;
      local_80 = pvVar8;
      operator_delete(puVar4);
      pvVar8 = local_80;
      puVar4 = pvVar11;
    }
    local_80 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    if (local_a0 != (ulong *)0x0) {
      local_98 = local_a0;
      operator_delete(local_a0);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

