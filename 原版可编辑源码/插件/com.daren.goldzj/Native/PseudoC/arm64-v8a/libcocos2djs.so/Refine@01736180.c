
/* v8::internal::compiler::ElementAccessFeedback::Refine(v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>
   > const&, v8::internal::Zone*) const */

undefined4 * __thiscall
v8::internal::compiler::ElementAccessFeedback::Refine
          (ElementAccessFeedback *this,ZoneVector *param_1,Zone *param_2)

{
  Handle *pHVar1;
  undefined8 *puVar2;
  Handle *pHVar3;
  long *plVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  undefined2 uVar23;
  ulong *local_c0;
  ulong *local_b8;
  ulong *local_b0;
  Zone *local_a8;
  long local_a0;
  ulong local_98;
  Zone *local_90;
  long *local_88;
  Zone *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  puVar10 = *(undefined4 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar10) < 0x30) {
    puVar10 = (undefined4 *)Zone::NewExpand(param_2,0x30);
  }
  else {
    *(undefined4 **)(param_2 + 0x10) = puVar10 + 0xc;
  }
  uVar11 = *(undefined8 *)(this + 8);
  uVar5 = *(undefined4 *)(this + 4);
  *(undefined8 *)(puVar10 + 6) = 0;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(Zone **)(puVar10 + 10) = param_2;
  *puVar10 = 4;
  puVar10[1] = uVar5;
  *(undefined8 *)(puVar10 + 2) = uVar11;
  *(undefined8 *)(puVar10 + 4) = 0;
  if (*(long *)param_1 != *(long *)(param_1 + 8)) {
    local_a0 = 0;
    local_98 = 0;
    local_88 = (long *)0x0;
    uStack_78 = 0;
    local_70 = 0x3f800000;
    local_90 = param_2;
    local_80 = param_2;
    std::__ndk1::
    __hash_table<v8::internal::Handle<v8::internal::Map>,v8::internal::Handle<v8::internal::Map>::hash,v8::internal::Handle<v8::internal::Map>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
    ::rehash((__hash_table<v8::internal::Handle<v8::internal::Map>,v8::internal::Handle<v8::internal::Map>::hash,v8::internal::Handle<v8::internal::Map>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
              *)&local_a0,100);
    pHVar3 = *(Handle **)(param_1 + 8);
    for (pHVar1 = *(Handle **)param_1; pHVar1 != pHVar3; pHVar1 = pHVar1 + 8) {
      std::__ndk1::
      __hash_table<v8::internal::Handle<v8::internal::Map>,v8::internal::Handle<v8::internal::Map>::hash,v8::internal::Handle<v8::internal::Map>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
      ::
      __emplace_unique_key_args<v8::internal::Handle<v8::internal::Map>,v8::internal::Handle<v8::internal::Map>const&>
                ((__hash_table<v8::internal::Handle<v8::internal::Map>,v8::internal::Handle<v8::internal::Map>::hash,v8::internal::Handle<v8::internal::Map>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
                  *)&local_a0,pHVar1,pHVar1);
    }
    plVar20 = *(long **)(this + 0x10);
    plVar4 = *(long **)(this + 0x18);
    plVar16 = local_88;
    if (plVar20 != plVar4) {
      do {
        local_c0 = (ulong *)0x0;
        local_b8 = (ulong *)0x0;
        local_b0 = (ulong *)0x0;
        puVar12 = (ulong *)*plVar20;
        local_a8 = param_2;
        if (1 < (ulong)(plVar20[1] - (long)puVar12 >> 3)) {
          uVar21 = 1;
          do {
            uVar19 = puVar12[uVar21];
            uVar8 = base::hash_value(uVar19);
            puVar12 = local_c0;
            if (local_98 != 0) {
              uVar11 = CONCAT17(POPCOUNT((char)(local_98 >> 0x38)),
                                CONCAT16(POPCOUNT((char)(local_98 >> 0x30)),
                                         CONCAT15(POPCOUNT((char)(local_98 >> 0x28)),
                                                  CONCAT14(POPCOUNT((char)(local_98 >> 0x20)),
                                                           CONCAT13(POPCOUNT((char)(local_98 >> 0x18
                                                                                   )),
                                                                    CONCAT12(POPCOUNT((char)(
                                                  local_98 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)(local_98 >> 8)),
                                                           POPCOUNT((char)local_98))))))));
              uVar23 = NEON_uaddlv(uVar11,1);
              uVar15 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar23) & 0xffffffff;
              if (uVar15 < 2) {
                uVar14 = local_98 - 1 & uVar8;
              }
              else {
                uVar14 = uVar8;
                if (local_98 <= uVar8) {
                  uVar14 = 0;
                  if (local_98 != 0) {
                    uVar14 = uVar8 / local_98;
                  }
                  uVar14 = uVar8 - uVar14 * local_98;
                }
              }
              plVar16 = *(long **)(local_a0 + uVar14 * 8);
              if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0))
              {
LAB_01736338:
                uVar18 = plVar16[1];
                if (uVar18 == uVar8) {
                  if (plVar16[2] != uVar19) goto LAB_01736330;
                  if (local_b8 == local_b0) {
                    lVar22 = (long)local_b8 - (long)local_c0 >> 3;
                    uVar8 = lVar22 + 1;
                    if (uVar8 >> 0x1c == 0) {
                      uVar15 = (long)local_b0 - (long)local_c0 >> 2;
                      if (uVar8 <= uVar15) {
                        uVar8 = uVar15;
                      }
                      if (0x7fffffe < (ulong)((long)local_b0 - (long)local_c0 >> 3)) {
                        uVar8 = 0xfffffff;
                      }
                      if (uVar8 == 0) {
                        lVar9 = 0;
                      }
                      else {
                        uVar15 = uVar8 * 8;
                        lVar9 = *(long *)(local_a8 + 0x10);
                        if (uVar15 < (ulong)(*(long *)(local_a8 + 0x18) - lVar9) ||
                            uVar15 - (*(long *)(local_a8 + 0x18) - lVar9) == 0) {
                          *(ulong *)(local_a8 + 0x10) = lVar9 + uVar15;
                        }
                        else {
                          lVar9 = Zone::NewExpand(local_a8,uVar15);
                        }
                      }
                      puVar12 = (ulong *)(lVar9 + lVar22 * 8);
                      puVar13 = puVar12 + 1;
                      *puVar12 = uVar19;
                      local_b0 = (ulong *)(lVar9 + uVar8 * 8);
                      puVar17 = local_b8;
                      while (local_b8 = puVar13, puVar17 != local_c0) {
                        puVar17 = puVar17 + -1;
                        puVar12 = puVar12 + -1;
                        *puVar12 = *puVar17;
                      }
                      goto LAB_017362a8;
                    }
                    goto LAB_01736688;
                  }
                  *local_b8 = uVar19;
                  local_b8 = local_b8 + 1;
                }
                else {
                  if (uVar15 < 2) {
                    uVar18 = uVar18 & local_98 - 1;
                  }
                  else if (local_98 <= uVar18) {
                    uVar6 = 0;
                    if (local_98 != 0) {
                      uVar6 = uVar18 / local_98;
                    }
                    uVar18 = uVar18 - uVar6 * local_98;
                  }
                  if (uVar18 == uVar14) goto LAB_01736330;
                }
              }
            }
LAB_017362a8:
            local_c0 = puVar12;
            puVar12 = (ulong *)*plVar20;
            uVar21 = uVar21 + 1;
          } while (uVar21 < (ulong)(plVar20[1] - (long)puVar12 >> 3));
        }
        uVar8 = *puVar12;
        uVar21 = base::hash_value(uVar8);
        if (local_98 != 0) {
          uVar11 = CONCAT17(POPCOUNT((char)(local_98 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(local_98 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(local_98 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(local_98 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(local_98 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(local_98 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  local_98 >> 8)),POPCOUNT((char)local_98))))))));
          uVar23 = NEON_uaddlv(uVar11,1);
          uVar19 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar23) & 0xffffffff;
          if (uVar19 < 2) {
            uVar15 = local_98 - 1 & uVar21;
          }
          else {
            uVar15 = uVar21;
            if (local_98 <= uVar21) {
              uVar15 = 0;
              if (local_98 != 0) {
                uVar15 = uVar21 / local_98;
              }
              uVar15 = uVar21 - uVar15 * local_98;
            }
          }
          plVar16 = *(long **)(local_a0 + uVar15 * 8);
          if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
            do {
              uVar14 = plVar16[1];
              if (uVar14 == uVar21) {
                if (plVar16[2] == uVar8) goto LAB_017364e0;
              }
              else {
                if (uVar19 < 2) {
                  uVar14 = uVar14 & local_98 - 1;
                }
                else if (local_98 <= uVar14) {
                  uVar18 = 0;
                  if (local_98 != 0) {
                    uVar18 = uVar14 / local_98;
                  }
                  uVar14 = uVar14 - uVar18 * local_98;
                }
                if (uVar14 != uVar15) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
        if (1 < (ulong)((long)local_b8 - (long)local_c0 >> 3)) {
LAB_017364e0:
          if (local_b8 == local_b0) {
            lVar22 = (long)local_b8 - (long)local_c0 >> 3;
            uVar21 = lVar22 + 1;
            if (uVar21 >> 0x1c != 0) {
LAB_01736688:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar19 = (long)local_b0 - (long)local_c0 >> 2;
            if (uVar21 <= uVar19) {
              uVar21 = uVar19;
            }
            if (0x7fffffe < (ulong)((long)local_b0 - (long)local_c0 >> 3)) {
              uVar21 = 0xfffffff;
            }
            if (uVar21 == 0) {
              lVar9 = 0;
            }
            else {
              uVar19 = uVar21 * 8;
              lVar9 = *(long *)(local_a8 + 0x10);
              if (uVar19 < (ulong)(*(long *)(local_a8 + 0x18) - lVar9) ||
                  uVar19 - (*(long *)(local_a8 + 0x18) - lVar9) == 0) {
                *(ulong *)(local_a8 + 0x10) = lVar9 + uVar19;
              }
              else {
                lVar9 = Zone::NewExpand(local_a8,uVar19);
              }
            }
            puVar12 = (ulong *)(lVar9 + lVar22 * 8);
            *puVar12 = uVar8;
            local_b0 = (ulong *)(lVar9 + uVar21 * 8);
            puVar17 = puVar12;
            while (local_b8 != local_c0) {
              local_b8 = local_b8 + -1;
              puVar17 = puVar17 + -1;
              *puVar17 = *local_b8;
            }
          }
          else {
            *local_b8 = uVar8;
            puVar12 = local_b8;
            puVar17 = local_c0;
          }
          local_c0 = puVar17;
          local_b8 = puVar12 + 1;
          uVar21 = *local_c0;
          *local_c0 = *puVar12;
          *puVar12 = uVar21;
        }
        puVar12 = local_b8;
        if (local_c0 != local_b8) {
          puVar2 = *(undefined8 **)(puVar10 + 6);
          if (puVar2 < *(undefined8 **)(puVar10 + 8)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = local_a8;
            *puVar2 = local_c0;
            puVar2[1] = local_b8;
            puVar2[2] = local_b0;
            local_b8 = (ulong *)0x0;
            local_b0 = (ulong *)0x0;
            local_c0 = (ulong *)0x0;
            *(long *)(puVar10 + 6) = *(long *)(puVar10 + 6) + 0x20;
            puVar12 = local_c0;
          }
          else {
            std::__ndk1::
            vector<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
            ::
            __push_back_slow_path<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
                      ((vector<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
                        *)(puVar10 + 4),(ZoneVector *)&local_c0);
            puVar12 = local_c0;
          }
        }
        if (puVar12 != (ulong *)0x0) {
          local_b8 = puVar12;
        }
        plVar20 = plVar20 + 4;
        plVar16 = local_88;
      } while (plVar20 != plVar4);
    }
    for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_01736330:
  plVar16 = (long *)*plVar16;
  if (plVar16 == (long *)0x0) goto LAB_017362a8;
  goto LAB_01736338;
}

