
/* v8::internal::LocalArrayBufferTracker::Remove(v8::internal::JSArrayBuffer) */

void v8::internal::LocalArrayBufferTracker::Remove(long *param_1,long *param_2,ulong param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  __shared_weak_count *this;
  undefined2 uVar15;
  undefined8 uVar16;
  void *local_60 [2];
  char local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar7 = param_2[2];
  if (uVar7 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    uVar11 = param_3 >> 3;
    if (uVar10 < 2) {
      uVar12 = uVar7 - 1 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uVar7 <= uVar11) {
        uVar12 = 0;
        if (uVar7 != 0) {
          uVar12 = uVar11 / uVar7;
        }
        uVar12 = uVar11 - uVar12 * uVar7;
      }
    }
    plVar13 = *(long **)(param_2[1] + uVar12 * 8);
    if (plVar13 != (long *)0x0) {
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        do {
          uVar14 = plVar13[1];
          if (uVar14 == uVar11) {
            if ((int)plVar13[2] == (int)param_3) break;
          }
          else {
            if (uVar10 < 2) {
              uVar14 = uVar14 & uVar7 - 1;
            }
            else if (uVar7 <= uVar14) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar14 / uVar7;
              }
              uVar14 = uVar14 - uVar4 * uVar7;
            }
            if (uVar14 != uVar12) goto LAB_00f9e430;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_00f9e434;
    }
  }
LAB_00f9e430:
  plVar13 = (long *)0x0;
LAB_00f9e434:
  *param_1 = plVar13[3];
  param_1[1] = plVar13[4];
  plVar13[3] = 0;
  plVar13[4] = 0;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
  ::remove(local_60);
  pvVar6 = local_60[0];
  local_60[0] = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    if ((local_50 != '\0') &&
       (this = *(__shared_weak_count **)((long)pvVar6 + 0x20), this != (__shared_weak_count *)0x0))
    {
      p_Var1 = this + 8;
      do {
        lVar8 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
    operator_delete(pvVar6);
  }
  if ((*(uint *)(param_3 + 0x1b) >> 4 & 1) == 0) {
    lVar8 = *(long *)(param_3 + 0xb);
  }
  else {
    lVar8 = 0;
  }
  lVar9 = *param_2;
  plVar13 = (long *)(lVar9 + 200);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 - lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar9 = *(long *)(lVar9 + 0x58);
  plVar13 = *(long **)(lVar9 + 0x30);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 - lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar13 = (long *)(*(long *)(lVar9 + 0x40) + 0xa0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 - lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

