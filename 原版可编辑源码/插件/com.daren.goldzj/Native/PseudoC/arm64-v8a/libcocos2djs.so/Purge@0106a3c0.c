
/* v8::internal::GlobalBackingStoreRegistry::Purge(v8::internal::Isolate*) */

void v8::internal::GlobalBackingStoreRegistry::Purge(Isolate *param_1)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  __shared_weak_count *p_Var13;
  undefined8 *puVar14;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined **local_80;
  __shared_weak_count *local_78;
  undefined *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  if (DAT_01d3f5f8 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    local_78 = (__shared_weak_count *)FUN_0106b074;
    local_70 = &DAT_01d3f600;
    local_60 = &local_80;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_80);
    if (&local_80 == local_60) {
      pcVar8 = (code *)(*local_60)[4];
    }
    else {
      if (local_60 == (undefined ***)0x0) goto LAB_0106a464;
      pcVar8 = (code *)(*local_60)[5];
    }
    (*pcVar8)();
  }
LAB_0106a464:
  base::Mutex::Lock((Mutex *)&DAT_01d3f600);
  plVar6 = DAT_01d3f638;
  if (DAT_01d3f5f8 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    local_78 = (__shared_weak_count *)FUN_0106b074;
    local_70 = &DAT_01d3f600;
    local_60 = &local_80;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_80);
    if (&local_80 == local_60) {
      pcVar8 = (code *)(*local_60)[4];
    }
    else {
      plVar6 = DAT_01d3f638;
      if (local_60 == (undefined ***)0x0) goto joined_r0x0106a4d0;
      pcVar8 = (code *)(*local_60)[5];
    }
    (*pcVar8)();
    plVar6 = DAT_01d3f638;
  }
joined_r0x0106a4d0:
  do {
    if (plVar6 == (long *)0x0) {
      base::Mutex::Unlock((Mutex *)&DAT_01d3f600);
      puVar7 = local_98;
      puVar14 = local_90;
      if (local_98 != (undefined8 *)0x0) {
        while (puVar14 != puVar7) {
          p_Var13 = (__shared_weak_count *)puVar14[-1];
          puVar14 = puVar14 + -2;
          if (p_Var13 != (__shared_weak_count *)0x0) {
            p_Var1 = p_Var13 + 8;
            do {
              lVar10 = *(long *)p_Var1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar4) {
                *(long *)p_Var1 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
            }
          }
        }
        local_90 = puVar7;
        operator_delete(local_98);
      }
      if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_80 = (undefined **)0x0;
    local_78 = (__shared_weak_count *)0x0;
    if ((__shared_weak_count *)plVar6[4] == (__shared_weak_count *)0x0) {
      local_78 = (__shared_weak_count *)0x0;
    }
    else {
      local_78 = (__shared_weak_count *)
                 std::__ndk1::__shared_weak_count::lock((__shared_weak_count *)plVar6[4]);
      if (local_78 != (__shared_weak_count *)0x0) {
        local_80 = (undefined **)plVar6[3];
      }
    }
    if (local_90 < puStack_88) {
      *local_90 = local_80;
      local_90[1] = local_78;
      if (local_78 != (__shared_weak_count *)0x0) {
        p_Var13 = local_78 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var13,0x10);
          if (bVar4) {
            *(long *)p_Var13 = *(long *)p_Var13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_90 = local_90 + 2;
      if (local_80 == (undefined **)0x0) goto LAB_0106a58c;
LAB_0106a550:
      bVar2 = *(byte *)(local_80 + 5);
      if ((bVar2 >> 1 & 1) != 0) {
        if ((bVar2 & 1) != 0) {
          if ((~bVar2 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","is_wasm_memory_ && is_shared_");
          }
          plVar9 = (long *)local_80[3];
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","shared_wasm_memory_data");
          }
          lVar10 = *plVar9;
          lVar11 = plVar9[1];
          if (lVar11 != lVar10) {
            uVar12 = 0;
            do {
              if (*(Isolate **)(lVar10 + uVar12 * 8) == param_1) {
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
                lVar10 = *plVar9;
                lVar11 = plVar9[1];
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < (ulong)(lVar11 - lVar10 >> 3));
          }
          if (local_78 != (__shared_weak_count *)0x0) {
            p_Var13 = local_78 + 8;
            do {
              lVar10 = *(long *)p_Var13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(p_Var13,0x10);
              if (bVar4) {
                *(long *)p_Var13 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_0106a63c;
          }
          goto LAB_0106a4d8;
        }
        if (local_78 == (__shared_weak_count *)0x0) goto LAB_0106a4d8;
        p_Var13 = local_78 + 8;
        do {
          lVar10 = *(long *)p_Var13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var13,0x10);
          if (bVar4) {
            *(long *)p_Var13 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0106a63c;
      }
      if (local_78 != (__shared_weak_count *)0x0) {
        p_Var13 = local_78 + 8;
        do {
          lVar10 = *(long *)p_Var13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var13,0x10);
          if (bVar4) {
            *(long *)p_Var13 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0106a63c;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
      ::__emplace_back_slow_path<std::__ndk1::shared_ptr<v8::internal::BackingStore>&>
                ((vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
                  *)&local_98,(shared_ptr *)&local_80);
      if (local_80 != (undefined **)0x0) goto LAB_0106a550;
LAB_0106a58c:
      if (local_78 != (__shared_weak_count *)0x0) {
        p_Var13 = local_78 + 8;
        do {
          lVar10 = *(long *)p_Var13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var13,0x10);
          if (bVar4) {
            *(long *)p_Var13 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_0106a63c:
        p_Var13 = local_78;
        if (lVar10 == 0) {
          (**(code **)(*(long *)local_78 + 0x10))(local_78);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
        }
      }
    }
LAB_0106a4d8:
    plVar6 = (long *)*plVar6;
  } while( true );
}

