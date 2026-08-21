
/* v8::base::RandomNumberGenerator::NextSample(unsigned long, unsigned long) */

void v8::base::RandomNumberGenerator::NextSample(ulong param_1,ulong param_2)

{
  unordered_set *puVar1;
  unordered_set *puVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  unordered_set *in_x2;
  vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *in_x8;
  ulong uVar7;
  unordered_set *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  ulong local_a8;
  void *local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  unordered_set *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  puVar2 = (unordered_set *)(param_2 - (long)in_x2);
  if (param_2 < in_x2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","n <= max");
  }
  if (in_x2 == (unordered_set *)0x0) {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    goto LAB_01476674;
  }
  puVar1 = in_x2;
  if (puVar2 <= in_x2) {
    puVar1 = puVar2;
  }
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_88 = (unordered_set *)0x0;
  local_90 = (undefined8 *)0x0;
  local_80 = 0x3f800000;
  if (puVar1 == (unordered_set *)0x0) {
LAB_01476470:
    puVar13 = local_90;
    if (puVar2 < in_x2) {
      uVar14 = param_2 - (long)puVar1;
      *(undefined8 *)in_x8 = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
      *(undefined8 *)(in_x8 + 0x10) = 0;
      if (uVar14 != 0) {
        if (uVar14 >> 0x3d != 0) goto LAB_014766d4;
        pvVar5 = operator_new(uVar14 * 8);
        *(void **)(in_x8 + 8) = pvVar5;
        *(void **)in_x8 = pvVar5;
        *(void **)(in_x8 + 0x10) = (void *)((long)pvVar5 + uVar14 * 8);
      }
      local_a8 = 0;
      pvVar5 = local_a0;
      puVar9 = local_90;
      if (param_2 != 0) {
        do {
          if (uStack_98 != 0) {
            uVar16 = CONCAT17(POPCOUNT((char)(uStack_98 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uStack_98 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uStack_98 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uStack_98 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uStack_98 >> 0x18)
                                                                          ),
                                                                  CONCAT12(POPCOUNT((char)(uStack_98
                                                                                          >> 0x10)),
                                                                           CONCAT11(POPCOUNT((char)(
                                                  uStack_98 >> 8)),POPCOUNT((char)uStack_98))))))));
            uVar15 = NEON_uaddlv(uVar16,1);
            uVar14 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
            if (uVar14 < 2) {
              uVar10 = uStack_98 - 1 & local_a8;
            }
            else {
              uVar10 = local_a8;
              if (uStack_98 <= local_a8) {
                uVar10 = 0;
                if (uStack_98 != 0) {
                  uVar10 = local_a8 / uStack_98;
                }
                uVar10 = local_a8 - uVar10 * uStack_98;
              }
            }
            plVar11 = *(long **)((long)local_a0 + uVar10 * 8);
            if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
              do {
                uVar7 = plVar11[1];
                if (local_a8 == uVar7) {
                  if (plVar11[2] == local_a8) goto LAB_014764d0;
                }
                else {
                  if (uVar14 < 2) {
                    uVar7 = uVar7 & uStack_98 - 1;
                  }
                  else if (uStack_98 <= uVar7) {
                    uVar3 = 0;
                    if (uStack_98 != 0) {
                      uVar3 = uVar7 / uStack_98;
                    }
                    uVar7 = uVar7 - uVar3 * uStack_98;
                  }
                  if (uVar7 != uVar10) break;
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
          }
          if (*(ulong **)(in_x8 + 8) == *(ulong **)(in_x8 + 0x10)) {
            std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
            __push_back_slow_path<unsigned_long_const&>(in_x8,&local_a8);
          }
          else {
            **(ulong **)(in_x8 + 8) = local_a8;
            *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 8;
          }
LAB_014764d0:
          local_a8 = local_a8 + 1;
          pvVar5 = local_a0;
          puVar9 = local_90;
        } while (local_a8 < param_2);
      }
    }
    else {
      *(undefined8 *)in_x8 = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
      *(undefined8 *)(in_x8 + 0x10) = 0;
      pvVar5 = local_a0;
      puVar9 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        uVar10 = 0;
        uVar14 = 0xffffffffffffffff;
        do {
          puVar9 = (undefined8 *)*puVar9;
          uVar14 = uVar14 + 1;
          uVar10 = uVar10 + 8;
        } while (puVar9 != (undefined8 *)0x0);
        if (0x1ffffffffffffffe < uVar14) {
LAB_014766d4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar6 = operator_new(uVar10);
        *(undefined8 **)in_x8 = puVar6;
        *(undefined8 **)(in_x8 + 8) = puVar6;
        *(ulong *)(in_x8 + 0x10) = (long)puVar6 + uVar10;
        do {
          *puVar6 = puVar13[2];
          puVar13 = (undefined8 *)*puVar13;
          puVar6 = (undefined8 *)(*(long *)(in_x8 + 8) + 8);
          *(undefined8 **)(in_x8 + 8) = puVar6;
          pvVar5 = local_a0;
          puVar9 = local_90;
        } while (puVar13 != (undefined8 *)0x0);
      }
    }
  }
  else {
    uVar14 = 1;
    do {
      uVar10 = *(ulong *)(param_1 + 0x10);
      uVar7 = *(ulong *)(param_1 + 8) ^ *(ulong *)(param_1 + 8) << 0x17;
      *(ulong *)(param_1 + 8) = uVar10;
      local_a8 = (ulong)(((double)(uVar10 >> 0xc | 0x3ff0000000000000) + -1.0) * (double)param_2);
      *(ulong *)(param_1 + 0x10) = uVar7 ^ uVar10 ^ uVar10 >> 0x1a ^ uVar7 >> 0x11;
      if (param_2 <= local_a8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",&DAT_01a3da5f);
      }
      std::__ndk1::
      __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
      ::__emplace_unique_key_args<unsigned_long,unsigned_long_const&>
                ((__hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
                  *)&local_a0,&local_a8,&local_a8);
    } while ((local_88 != puVar1) &&
            (puVar8 = (unordered_set *)(uVar14 / 3), uVar14 = uVar14 + 1, puVar8 < puVar1));
    if (local_88 == puVar1) goto LAB_01476470;
    NextSampleSlow(param_1,param_2,in_x2);
    pvVar5 = local_a0;
    puVar9 = local_90;
  }
  while (puVar9 != (void *)0x0) {
    pvVar12 = (void *)*puVar9;
    local_a0 = pvVar5;
    operator_delete(puVar9);
    pvVar5 = local_a0;
    puVar9 = pvVar12;
  }
  local_a0 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
LAB_01476674:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

