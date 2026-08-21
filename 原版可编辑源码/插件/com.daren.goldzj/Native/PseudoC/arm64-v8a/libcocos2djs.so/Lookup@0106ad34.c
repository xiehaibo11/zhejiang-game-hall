
/* v8::internal::GlobalBackingStoreRegistry::Lookup(void*, unsigned long) */

void __thiscall
v8::internal::GlobalBackingStoreRegistry::Lookup
          (GlobalBackingStoreRegistry *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x8;
  code *pcVar4;
  undefined8 *puVar5;
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
      if (local_70 == (long *)0x0) goto LAB_0106addc;
      pcVar4 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar4)();
  }
LAB_0106addc:
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
      if (local_70 == (long *)0x0) goto LAB_0106ae50;
      pcVar4 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar4)();
  }
LAB_0106ae50:
  if (DAT_01d3f630 == 0) {
LAB_0106af3c:
    plVar9 = (long *)0x0;
  }
  else {
    uVar6 = ((ulong)(uint)((int)this << 3) + 8 ^ (ulong)this >> 0x20) * -0x622015f714c7d297;
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
    uVar7 = (uVar6 ^ (ulong)this >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar8 = DAT_01d3f630 - 1 & uVar7;
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
    if (plVar9 == (long *)0x0) goto LAB_0106af3c;
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((GlobalBackingStoreRegistry *)plVar9[2] == this) break;
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
          if (uVar10 != uVar8) goto LAB_0106af3c;
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
      if (local_70 == (long *)0x0) goto LAB_0106afac;
      pcVar4 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar4)();
  }
LAB_0106afac:
  if (plVar9 == (long *)0x0) {
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    lVar3 = 0;
    if (((__shared_weak_count *)plVar9[4] == (__shared_weak_count *)0x0) ||
       (lVar3 = std::__ndk1::__shared_weak_count::lock((__shared_weak_count *)plVar9[4]), lVar3 == 0
       )) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)plVar9[3];
    }
    if ((GlobalBackingStoreRegistry *)*puVar5 != this) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","buffer_start == backing_store->buffer_start()");
    }
    if ((*(byte *)(puVar5 + 5) >> 1 & 1) == 0) {
      if ((void *)puVar5[1] != param_1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","length == backing_store->byte_length()");
      }
    }
    else if ((void *)puVar5[1] < param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","length <= backing_store->byte_length()");
    }
    *in_x8 = puVar5;
    in_x8[1] = lVar3;
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3f600);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

