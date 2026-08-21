
/* WARNING: Removing unreachable block (ram,0x015e6688) */

undefined4 FUN_015e61b4(undefined8 *param_1,Counters *param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  __shared_weak_count *p_Var3;
  double *pdVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  void *pvVar13;
  void *pvVar14;
  long *plVar15;
  undefined8 uVar16;
  __shared_weak_count *p_Var17;
  void *pvVar18;
  undefined4 *puVar19;
  long lVar20;
  double dVar21;
  long lVar22;
  double dVar23;
  __shared_weak_count *p_Var24;
  int iVar25;
  WasmEngine *pWVar26;
  undefined4 uVar27;
  undefined8 *puVar28;
  int iVar29;
  __shared_weak_count *p_Var30;
  SharedMutex *pSVar31;
  long lVar32;
  JSToWasmWrapperCompilationUnit *this;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [12];
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  SharedMutex *local_1b8;
  long local_1b0;
  __shared_weak_count *local_1a8;
  undefined8 **local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *puStack_188;
  uint local_180 [2];
  char local_178 [4];
  undefined8 local_174;
  undefined8 local_168;
  __shared_weak_count *local_160;
  byte **local_158;
  byte *local_150;
  char *local_148;
  undefined8 local_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  char local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  if (DAT_01d47898 == (byte *)0x0) {
    plVar15 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47898 = (byte *)(**(code **)(*plVar15 + 0x10))(plVar15,"disabled-by-default-v8.wasm");
  }
  pbVar11 = DAT_01d47898;
  local_158 = (byte **)0x0;
  if ((*DAT_01d47898 & 5) != 0) {
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    plVar15 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar16 = (**(code **)(*plVar15 + 0x18))
                       (plVar15,0x58,pbVar11,"ExecuteCompilationUnits",0,0,0,0,0,0,0,&local_138,0);
    plVar15 = (long *)CONCAT44(uStack_12c,uStack_130);
    uStack_130 = 0;
    uStack_12c = 0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    plVar15 = (long *)CONCAT44(uStack_134,local_138);
    local_138 = 0;
    uStack_134 = 0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    local_158 = &local_150;
    local_148 = "ExecuteCompilationUnits";
    local_150 = pbVar11;
    local_140 = uVar16;
  }
  pSVar31 = (SharedMutex *)*param_1;
  v8::base::SharedMutex::LockShared(pSVar31);
  p_Var17 = *(__shared_weak_count **)(pSVar31 + 0x40);
  if (p_Var17 == (__shared_weak_count *)0x0) {
    v8::base::SharedMutex::UnlockShared(pSVar31);
  }
  else {
    iVar25 = 0;
    p_Var30 = (__shared_weak_count *)0x0;
    do {
      p_Var17 = (__shared_weak_count *)std::__ndk1::__shared_weak_count::lock(p_Var17);
      p_Var24 = p_Var30;
      if ((p_Var17 == (__shared_weak_count *)0x0) || (*(long *)(pSVar31 + 0x38) == 0))
      goto LAB_015e63e4;
      lVar20 = *(long *)(*(long *)(pSVar31 + 0x38) + 0x100);
      piVar2 = (int *)(lVar20 + 0xe0);
      do {
        iVar6 = *piVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = iVar6 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar6 < (int)((ulong)(*(long *)(lVar20 + 0xf0) - *(long *)(lVar20 + 0xe8)) >> 4)) {
        puVar1 = (undefined8 *)(*(long *)(lVar20 + 0xe8) + (long)iVar6 * 0x10);
        this = (JSToWasmWrapperCompilationUnit *)*puVar1;
        p_Var24 = (__shared_weak_count *)puVar1[1];
        if (p_Var24 != (__shared_weak_count *)0x0) {
          p_Var3 = p_Var24 + 8;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
            if (bVar9) {
              *(long *)p_Var3 = *(long *)p_Var3 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
      }
      else {
        this = (JSToWasmWrapperCompilationUnit *)0x0;
        p_Var24 = (__shared_weak_count *)0x0;
      }
      if (p_Var30 != (__shared_weak_count *)0x0) {
        p_Var3 = p_Var30 + 8;
        do {
          lVar20 = *(long *)p_Var3;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
          if (bVar9) {
            *(long *)p_Var3 = lVar20 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*(long *)p_Var30 + 0x10))(p_Var30);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var30);
        }
      }
      v8::base::SharedMutex::UnlockShared(pSVar31);
      p_Var30 = p_Var17 + 8;
      do {
        lVar20 = *(long *)p_Var30;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(p_Var30,0x10);
        if (bVar9) {
          *(long *)p_Var30 = lVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var17);
      }
      if (this == (JSToWasmWrapperCompilationUnit *)0x0) {
        pSVar31 = (SharedMutex *)*param_1;
        v8::base::SharedMutex::LockShared(pSVar31);
        if ((*(__shared_weak_count **)(pSVar31 + 0x40) == (__shared_weak_count *)0x0) ||
           (p_Var17 = (__shared_weak_count *)
                      std::__ndk1::__shared_weak_count::lock
                                (*(__shared_weak_count **)(pSVar31 + 0x40)),
           p_Var17 == (__shared_weak_count *)0x0)) {
          v8::base::SharedMutex::UnlockShared(pSVar31);
          bVar9 = false;
        }
        else {
          if (*(long *)(pSVar31 + 0x38) == 0) {
            bVar9 = false;
          }
          else {
            if (iVar25 != 0) {
              lVar20 = *(long *)(*(long *)(pSVar31 + 0x38) + 0x100);
              v8::base::Mutex::Lock((Mutex *)(lVar20 + 0x158));
              iVar25 = *(int *)(lVar20 + 0x198) - iVar25;
              *(int *)(lVar20 + 0x198) = iVar25;
              FUN_015e7db4(lVar20,iVar25 == 0,0);
              v8::base::Mutex::Unlock((Mutex *)(lVar20 + 0x158));
            }
            bVar9 = true;
          }
          v8::base::SharedMutex::UnlockShared(pSVar31);
          p_Var30 = p_Var17 + 8;
          do {
            lVar20 = *(long *)p_Var30;
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(p_Var30,0x10);
            if (bVar7) {
              *(long *)p_Var30 = lVar20 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var17);
          }
        }
        goto joined_r0x015e6440;
      }
      v8::internal::wasm::JSToWasmWrapperCompilationUnit::Execute(this);
      pSVar31 = (SharedMutex *)*param_1;
      iVar25 = iVar25 + 1;
      v8::base::SharedMutex::LockShared(pSVar31);
      p_Var17 = *(__shared_weak_count **)(pSVar31 + 0x40);
      p_Var30 = p_Var24;
    } while (p_Var17 != (__shared_weak_count *)0x0);
    p_Var17 = (__shared_weak_count *)0x0;
LAB_015e63e4:
    v8::base::SharedMutex::UnlockShared(pSVar31);
    if (p_Var17 != (__shared_weak_count *)0x0) {
      p_Var30 = p_Var17 + 8;
      do {
        lVar20 = *(long *)p_Var30;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(p_Var30,0x10);
        if (bVar9) {
          *(long *)p_Var30 = lVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var17);
      }
    }
    bVar9 = false;
joined_r0x015e6440:
    if (p_Var24 != (__shared_weak_count *)0x0) {
      p_Var17 = p_Var24 + 8;
      do {
        lVar20 = *(long *)p_Var17;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(p_Var17,0x10);
        if (bVar7) {
          *(long *)p_Var17 = lVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*(long *)p_Var24 + 0x10))(p_Var24);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var24);
      }
    }
    if (bVar9) {
      iVar25 = 0;
      if (param_3 != -1) {
        iVar25 = param_3;
      }
      plVar15 = (long *)v8::internal::V8::GetCurrentPlatform();
      dVar33 = (double)(**(code **)(*plVar15 + 0x78))();
      iVar6 = v8::internal::FLAG_wasm_num_compilation_tasks;
      local_b0 = '\0';
      local_a8 = local_a8 & 0xffffffffffffff00;
      local_168 = 0;
      local_160 = (__shared_weak_count *)0x0;
      local_178[0] = '\0';
      local_174 = local_174 & 0xffffffffffffff00;
      local_180[0] = 0;
      pSVar31 = (SharedMutex *)*param_1;
      v8::base::SharedMutex::LockShared(pSVar31);
      if ((*(__shared_weak_count **)(pSVar31 + 0x40) == (__shared_weak_count *)0x0) ||
         (p_Var17 = (__shared_weak_count *)
                    std::__ndk1::__shared_weak_count::lock
                              (*(__shared_weak_count **)(pSVar31 + 0x40)),
         p_Var17 == (__shared_weak_count *)0x0)) {
        v8::base::SharedMutex::UnlockShared(pSVar31);
        uVar27 = 0;
        p_Var17 = local_160;
      }
      else {
        lVar20 = *(long *)(pSVar31 + 0x38);
        puVar19 = (undefined4 *)((ulong)local_178 | 4);
        if (lVar20 == 0) {
          v8::base::SharedMutex::UnlockShared(pSVar31);
          pWVar26 = (WasmEngine *)0x0;
          p_Var30 = (__shared_weak_count *)0x0;
          dVar35 = 0.0;
          bVar9 = true;
        }
        else {
          lVar32 = *(long *)(lVar20 + 0x100);
          dVar23 = *(double *)(lVar32 + 0xd8);
          pdVar4 = (double *)(lVar32 + 0xd8);
          dVar34 = dVar33 + 0.2;
          dVar21 = *pdVar4;
          dVar33 = dVar33 + 0.05;
          dVar35 = dVar23;
          if (dVar34 <= dVar23) {
            dVar35 = dVar34;
          }
          if (dVar35 <= dVar33) {
            dVar35 = dVar33;
          }
          if (dVar21 != dVar23) {
            ClearExclusiveLocal();
            dVar23 = dVar21;
            goto LAB_015e669c;
          }
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
          if (bVar9) {
            *pdVar4 = dVar35 + 0.005;
            cVar8 = ExclusiveMonitorsStatus();
          }
          while (dVar23 = dVar21, cVar8 != '\0') {
LAB_015e669c:
            while( true ) {
              dVar21 = *pdVar4;
              dVar35 = dVar23;
              if (dVar34 <= dVar23) {
                dVar35 = dVar34;
              }
              if (dVar35 <= dVar33) {
                dVar35 = dVar33;
              }
              if (dVar21 == dVar23) break;
              ClearExclusiveLocal();
              dVar23 = dVar21;
            }
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
            if (bVar9) {
              *pdVar4 = dVar35 + 0.005;
              cVar8 = ExclusiveMonitorsStatus();
            }
          }
          v8::internal::wasm::NativeModule::CreateCompilationEnv();
          uStack_a0 = CONCAT44(uStack_12c,uStack_130);
          local_a8 = CONCAT44(uStack_134,local_138);
          uStack_90 = uStack_120;
          uStack_98 = local_128;
          local_88 = local_118;
          local_b0 = '\x01';
          v8::base::Mutex::Lock((Mutex *)(lVar32 + 0x100));
          uVar16 = *(undefined8 *)(lVar32 + 0x148);
          p_Var30 = *(__shared_weak_count **)(lVar32 + 0x150);
          if (p_Var30 != (__shared_weak_count *)0x0) {
            p_Var24 = p_Var30 + 8;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
              if (bVar9) {
                *(long *)p_Var24 = *(long *)p_Var24 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          v8::base::Mutex::Unlock((Mutex *)(lVar32 + 0x100));
          p_Var24 = local_160;
          local_168 = uVar16;
          if (local_160 != (__shared_weak_count *)0x0) {
            p_Var3 = local_160 + 8;
            do {
              lVar22 = *(long *)p_Var3;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
              if (bVar9) {
                *(long *)p_Var3 = lVar22 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar22 == 0) {
              lVar22 = *(long *)local_160;
              local_160 = p_Var30;
              (**(code **)(lVar22 + 0x10))(p_Var24);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var24);
              p_Var30 = local_160;
            }
          }
          local_160 = p_Var30;
          p_Var30 = *(__shared_weak_count **)(lVar20 + 0xd0);
          if (p_Var30 != (__shared_weak_count *)0x0) {
            p_Var24 = p_Var30 + 8;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
              if (bVar9) {
                *(long *)p_Var24 = *(long *)p_Var24 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          pWVar26 = *(WasmEngine **)(lVar20 + 0x178);
          auVar36 = FUN_015e73e4(lVar32,iVar25,param_4 & 1);
          uStack_130 = auVar36._8_4_;
          local_138 = auVar36._0_4_;
          uStack_134 = auVar36._4_4_;
          if ((auVar36._0_8_ & 0xff) == 0) {
            if (local_178[0] != '\0') {
              local_178[0] = '\0';
            }
            lVar20 = *(long *)(lVar20 + 0x100);
            if (param_3 == -1) {
              v8::base::Mutex::Lock((Mutex *)(lVar20 + 0x100));
              *(uint *)(lVar20 + 0x140) = *(uint *)(lVar20 + 0x140) | local_180[0];
              v8::base::Mutex::Unlock((Mutex *)(lVar20 + 0x100));
            }
            else {
              local_138 = iVar25;
              v8::base::Mutex::Lock((Mutex *)(lVar20 + 0x100));
              if (*(int **)(lVar20 + 0x130) == *(int **)(lVar20 + 0x138)) {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
                __push_back_slow_path<int_const&>
                          ((vector<int,std::__ndk1::allocator<int>> *)(lVar20 + 0x128),&local_138);
              }
              else {
                **(int **)(lVar20 + 0x130) = iVar25;
                *(long *)(lVar20 + 0x130) = *(long *)(lVar20 + 0x130) + 4;
              }
              *(uint *)(lVar20 + 0x140) = *(uint *)(lVar20 + 0x140) | local_180[0];
              v8::base::Mutex::Unlock((Mutex *)(lVar20 + 0x100));
              FUN_015e84a8(lVar20);
            }
            bVar9 = true;
          }
          else {
            bVar9 = false;
            if (local_178[0] == '\0') {
              local_174 = auVar36._4_8_;
              local_178[0] = '\x01';
            }
            else {
              uStack_130._0_1_ = auVar36[8];
              *(undefined1 *)(puVar19 + 1) = (undefined1)uStack_130;
              *puVar19 = uStack_134;
            }
          }
          v8::base::SharedMutex::UnlockShared(pSVar31);
        }
        p_Var24 = p_Var17 + 8;
        do {
          lVar20 = *(long *)p_Var24;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
          if (bVar7) {
            *(long *)p_Var24 = lVar20 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var17);
        }
        if (bVar9) {
          uVar27 = 0;
        }
        else {
          local_1a0 = &local_198;
          local_198 = (undefined8 *)0x0;
          uVar27 = 0;
          local_190 = (undefined8 *)0x0;
          puStack_188 = (undefined8 *)0x0;
          do {
            if (local_b0 != '\x01') {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","storage_.is_populated_");
            }
            v8::internal::wasm::WasmCompilationUnit::ExecuteCompilation
                      ((WasmCompilationUnit *)((ulong)local_178 | 4),pWVar26,
                       (CompilationEnv *)&local_a8,(shared_ptr *)&local_168,param_2,
                       (WasmFeatures *)local_180);
            pvVar14 = local_c8;
            pvVar13 = local_d8;
            pvVar18 = local_e8;
            if (local_190 < puStack_188) {
              local_190[1] = CONCAT44(uStack_12c,uStack_130);
              *local_190 = CONCAT44(uStack_134,local_138);
              local_190[7] = uStack_100;
              local_190[6] = local_108;
              local_190[9] = uStack_f0;
              local_190[8] = local_f8;
              local_190[3] = uStack_120;
              local_190[2] = local_128;
              local_190[5] = uStack_110;
              local_190[4] = local_118;
              local_e8 = (void *)0x0;
              local_190[10] = pvVar18;
              local_190[0xb] = local_e0;
              local_d8 = (void *)0x0;
              local_190[0xc] = pvVar13;
              local_190[0xd] = local_d0;
              local_c8 = (void *)0x0;
              local_190[0xe] = pvVar14;
              local_190[0xf] = local_c0;
              *(uint *)((long)local_190 + 0x83) = CONCAT31(uStack_b4,uStack_b8._3_1_);
              *(undefined4 *)(local_190 + 0x10) = uStack_b8;
              local_190 = local_190 + 0x11;
            }
            else {
              std::__ndk1::
              vector<v8::internal::wasm::WasmCompilationResult,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationResult>>
              ::__emplace_back_slow_path<v8::internal::wasm::WasmCompilationResult>
                        ((vector<v8::internal::wasm::WasmCompilationResult,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationResult>>
                          *)&local_198,(WasmCompilationResult *)&local_138);
            }
            pSVar31 = (SharedMutex *)*param_1;
            local_1b8 = pSVar31;
            v8::base::SharedMutex::LockShared(pSVar31);
            local_1b0 = 0;
            local_1a8 = (__shared_weak_count *)0x0;
            if (*(__shared_weak_count **)(pSVar31 + 0x40) == (__shared_weak_count *)0x0) {
              local_1a8 = (__shared_weak_count *)0x0;
LAB_015e6adc:
              v8::base::SharedMutex::UnlockShared(pSVar31);
              uVar27 = 1;
              iVar29 = 1;
            }
            else {
              p_Var17 = (__shared_weak_count *)
                        std::__ndk1::__shared_weak_count::lock
                                  (*(__shared_weak_count **)(pSVar31 + 0x40));
              local_1a8 = p_Var17;
              if (p_Var17 == (__shared_weak_count *)0x0) goto LAB_015e6adc;
              lVar20 = *(long *)(pSVar31 + 0x38);
              local_1b0 = lVar20;
              if (lVar20 == 0) {
LAB_015e6c10:
                iVar29 = 1;
                uVar27 = 1;
              }
              else {
                if (local_190[-0x11] != 0) {
                  if ((1 < iVar6) &&
                     (dVar33 = (double)(**(code **)(*plVar15 + 0x78))(), dVar33 <= dVar35)) {
                    auVar36 = FUN_015e73e4(*(undefined8 *)(lVar20 + 0x100),iVar25,param_4 & 1);
                    local_1c0 = auVar36._8_4_;
                    local_1c8 = auVar36._0_4_;
                    uStack_1c4 = auVar36._4_4_;
                    if ((auVar36._0_8_ & 0xff) != 0) {
                      if (local_178[0] == '\0') {
                        local_174 = auVar36._4_8_;
                        local_178[0] = '\x01';
                      }
                      else {
                        uVar5 = *(undefined4 *)((ulong)&local_1c8 | 4);
                        *(undefined1 *)(puVar19 + 1) =
                             *(undefined1 *)((undefined4 *)((ulong)&local_1c8 | 4) + 1);
                        *puVar19 = uVar5;
                      }
                      if (local_174._4_1_ == '\x03') {
                        FUN_015e7874(&local_1a0,&local_1b8);
                      }
                      iVar29 = 0;
                      goto LAB_015e6c8c;
                    }
                  }
                  if (local_178[0] != '\0') {
                    local_178[0] = '\0';
                  }
                  FUN_015e7874(&local_1a0,&local_1b8);
                  lVar20 = *(long *)(lVar20 + 0x100);
                  if (param_3 == -1) {
                    v8::base::Mutex::Lock((Mutex *)(lVar20 + 0x100));
                    *(uint *)(lVar20 + 0x140) = *(uint *)(lVar20 + 0x140) | local_180[0];
                    v8::base::Mutex::Unlock((Mutex *)(lVar20 + 0x100));
                  }
                  else {
                    local_1c8 = iVar25;
                    v8::base::Mutex::Lock((Mutex *)(lVar20 + 0x100));
                    if (*(int **)(lVar20 + 0x130) == *(int **)(lVar20 + 0x138)) {
                      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
                      __push_back_slow_path<int_const&>
                                ((vector<int,std::__ndk1::allocator<int>> *)(lVar20 + 0x128),
                                 &local_1c8);
                    }
                    else {
                      **(int **)(lVar20 + 0x130) = iVar25;
                      *(long *)(lVar20 + 0x130) = *(long *)(lVar20 + 0x130) + 4;
                    }
                    *(uint *)(lVar20 + 0x140) = *(uint *)(lVar20 + 0x140) | local_180[0];
                    v8::base::Mutex::Unlock((Mutex *)(lVar20 + 0x100));
                    FUN_015e84a8(lVar20);
                  }
                  goto LAB_015e6c10;
                }
                FUN_015e0ac8(*(undefined8 *)(lVar20 + 0x100));
                lVar20 = *(long *)(lVar20 + 0x100);
                if (param_3 == -1) {
                  v8::base::Mutex::Lock((Mutex *)(lVar20 + 0x100));
                  *(uint *)(lVar20 + 0x140) = *(uint *)(lVar20 + 0x140) | local_180[0];
                  v8::base::Mutex::Unlock((Mutex *)(lVar20 + 0x100));
                }
                else {
                  local_1c8 = iVar25;
                  v8::base::Mutex::Lock((Mutex *)(lVar20 + 0x100));
                  if (*(int **)(lVar20 + 0x130) == *(int **)(lVar20 + 0x138)) {
                    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
                    __push_back_slow_path<int_const&>
                              ((vector<int,std::__ndk1::allocator<int>> *)(lVar20 + 0x128),
                               &local_1c8);
                  }
                  else {
                    **(int **)(lVar20 + 0x130) = iVar25;
                    *(long *)(lVar20 + 0x130) = *(long *)(lVar20 + 0x130) + 4;
                  }
                  *(uint *)(lVar20 + 0x140) = *(uint *)(lVar20 + 0x140) | local_180[0];
                  v8::base::Mutex::Unlock((Mutex *)(lVar20 + 0x100));
                  FUN_015e84a8(lVar20);
                }
                iVar29 = 5;
              }
LAB_015e6c8c:
              v8::base::SharedMutex::UnlockShared(pSVar31);
              p_Var24 = p_Var17 + 8;
              do {
                lVar20 = *(long *)p_Var24;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
                if (bVar9) {
                  *(long *)p_Var24 = lVar20 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
                std::__ndk1::__shared_weak_count::__release_weak(p_Var17);
              }
            }
            pvVar18 = local_c8;
            local_c8 = (void *)0x0;
            if (pvVar18 != (void *)0x0) {
              operator_delete__(pvVar18);
            }
            pvVar18 = local_d8;
            local_d8 = (void *)0x0;
            if (pvVar18 != (void *)0x0) {
              operator_delete__(pvVar18);
            }
            pvVar18 = local_e8;
            local_e8 = (void *)0x0;
            if (pvVar18 != (void *)0x0) {
              operator_delete__(pvVar18);
            }
          } while (iVar29 == 0);
          if (iVar29 == 5) {
            pSVar31 = (SharedMutex *)*param_1;
            v8::base::SharedMutex::LockExclusive(pSVar31);
            p_Var17 = *(__shared_weak_count **)(pSVar31 + 0x40);
            *(undefined8 *)(pSVar31 + 0x38) = 0;
            *(undefined8 *)(pSVar31 + 0x40) = 0;
            if (p_Var17 != (__shared_weak_count *)0x0) {
              std::__ndk1::__shared_weak_count::__release_weak(p_Var17);
            }
            v8::base::SharedMutex::UnlockExclusive(pSVar31);
            uVar27 = 1;
          }
          puVar12 = local_198;
          puVar1 = local_190;
          if (local_198 != (undefined8 *)0x0) {
            while (puVar1 != puVar12) {
              pvVar18 = (void *)puVar1[-3];
              puVar1[-3] = 0;
              if (pvVar18 != (void *)0x0) {
                operator_delete__(pvVar18);
              }
              pvVar18 = (void *)puVar1[-5];
              puVar1[-5] = 0;
              if (pvVar18 != (void *)0x0) {
                operator_delete__(pvVar18);
              }
              pvVar18 = (void *)puVar1[-7];
              puVar28 = puVar1 + -0x11;
              puVar1[-7] = 0;
              puVar1 = puVar28;
              if (pvVar18 != (void *)0x0) {
                operator_delete__(pvVar18);
              }
            }
            local_190 = puVar12;
            operator_delete(local_198);
          }
        }
        p_Var17 = local_160;
        if (p_Var30 != (__shared_weak_count *)0x0) {
          p_Var24 = p_Var30 + 8;
          do {
            lVar20 = *(long *)p_Var24;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
            if (bVar9) {
              *(long *)p_Var24 = lVar20 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*(long *)p_Var30 + 0x10))(p_Var30);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var30);
            p_Var17 = local_160;
          }
        }
      }
      local_160 = p_Var17;
      if (p_Var17 != (__shared_weak_count *)0x0) {
        p_Var30 = p_Var17 + 8;
        do {
          lVar20 = *(long *)p_Var30;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(p_Var30,0x10);
          if (bVar9) {
            *(long *)p_Var30 = lVar20 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var17);
        }
      }
      goto joined_r0x015e6e14;
    }
  }
  uVar27 = 0;
joined_r0x015e6e14:
  if ((local_158 != (byte **)0x0) && (*local_150 != 0)) {
    plVar15 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar15 + 0x28))(plVar15,local_150,local_148,local_140);
  }
  if (*(long *)(lVar10 + 0x28) == local_80) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

