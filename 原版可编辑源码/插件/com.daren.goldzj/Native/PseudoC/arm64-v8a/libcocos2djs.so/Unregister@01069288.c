
/* v8::internal::GlobalBackingStoreRegistry::Unregister(v8::internal::BackingStore*) */

void v8::internal::GlobalBackingStoreRegistry::Unregister(BackingStore *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined **local_90;
  code *pcStack_88;
  undefined *local_80;
  long *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((byte)param_1[0x28] >> 5 & 1) == 0) goto LAB_01069598;
  if (DAT_01d3f5f8 != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = FUN_0106b074;
    local_80 = &DAT_01d3f600;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar4 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_01069330;
      pcVar4 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar4)();
  }
LAB_01069330:
  base::Mutex::Lock((Mutex *)&DAT_01d3f600);
  if (DAT_01d3f5f8 != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = FUN_0106b074;
    local_80 = &DAT_01d3f600;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar4 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_01069394;
      pcVar4 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar4)();
  }
LAB_01069394:
  if (DAT_01d3f630 == 0) {
LAB_01069484:
    plVar9 = (long *)0x0;
  }
  else {
    uVar5 = *(ulong *)param_1;
    uVar6 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar12 = CONCAT17(POPCOUNT((char)(DAT_01d3f630 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_01d3f630 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_01d3f630 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_01d3f630 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_01d3f630 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_01d3f630 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_01d3f630 >> 8)),POPCOUNT((char)DAT_01d3f630)))
                                                  )))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = (uVar6 ^ uVar5 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar8 = uVar7 & DAT_01d3f630 - 1;
    }
    else {
      uVar8 = uVar7;
      if (DAT_01d3f630 <= uVar7) {
        uVar8 = 0;
        if (DAT_01d3f630 != 0) {
          uVar8 = uVar7 / DAT_01d3f630;
        }
        uVar8 = uVar7 - uVar8 * DAT_01d3f630;
      }
    }
    plVar9 = *(long **)(DAT_01d3f628 + uVar8 * 8);
    if (plVar9 == (long *)0x0) goto LAB_01069484;
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if (plVar9[2] == uVar5) break;
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & DAT_01d3f630 - 1;
          }
          else if (DAT_01d3f630 <= uVar10) {
            uVar1 = 0;
            if (DAT_01d3f630 != 0) {
              uVar1 = uVar10 / DAT_01d3f630;
            }
            uVar10 = uVar10 - uVar1 * DAT_01d3f630;
          }
          if (uVar10 != uVar8) goto LAB_01069484;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  if (DAT_01d3f5f8 != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = FUN_0106b074;
    local_80 = &DAT_01d3f600;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar4 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_010694e4;
      pcVar4 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar4)();
  }
LAB_010694e4:
  if (plVar9 != (long *)0x0) {
    if (DAT_01d3f5f8 != '\x02') {
      local_90 = &PTR_FUN_01c984d0;
      pcStack_88 = FUN_0106b074;
      local_80 = &DAT_01d3f600;
      local_70 = (long *)&local_90;
      base::CallOnceImpl(&DAT_01d3f5f8,&local_90);
      if (&local_90 == (undefined ***)local_70) {
        pcVar4 = *(code **)(*local_70 + 0x20);
      }
      else {
        if (local_70 == (long *)0x0) goto LAB_01069544;
        pcVar4 = *(code **)(*local_70 + 0x28);
      }
      (*pcVar4)();
    }
LAB_01069544:
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<void_const*,std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::hash<void_const*>,true>,std::__ndk1::__unordered_map_equal<void_const*,std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<void_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>>>
    ::remove(&local_90,&DAT_01d3f628,plVar9);
    ppuVar3 = local_90;
    local_90 = (undefined **)0x0;
    if (ppuVar3 != (undefined **)0x0) {
      if (((char)local_80 != '\0') &&
         ((__shared_weak_count *)ppuVar3[4] != (__shared_weak_count *)0x0)) {
        std::__ndk1::__shared_weak_count::__release_weak((__shared_weak_count *)ppuVar3[4]);
      }
      operator_delete(ppuVar3);
    }
  }
  param_1[0x28] = (BackingStore)((byte)param_1[0x28] & 0xdf);
  base::Mutex::Unlock((Mutex *)&DAT_01d3f600);
LAB_01069598:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

