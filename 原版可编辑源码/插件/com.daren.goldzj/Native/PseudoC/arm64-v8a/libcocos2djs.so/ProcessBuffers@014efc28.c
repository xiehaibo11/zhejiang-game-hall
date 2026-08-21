
/* v8::internal::ArrayBufferTracker::ProcessBuffers(v8::internal::Page*,
   v8::internal::ArrayBufferTracker::ProcessingMode) */

void v8::internal::ArrayBufferTracker::ProcessBuffers(long param_1,int param_2)

{
  __shared_weak_count *p_Var1;
  Page *pPVar2;
  __shared_weak_count *p_Var3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  bool bVar8;
  JSArrayBuffer *pJVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  __shared_weak_count *p_Var13;
  Mutex *this;
  Page *this_00;
  void *pvVar14;
  __shared_weak_count *p_Var15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  __shared_weak_count *local_d0;
  __shared_weak_count *p_Stack_c8;
  __shared_weak_count *local_c0;
  __shared_weak_count *local_b0;
  __shared_weak_count *p_Stack_a8;
  __shared_weak_count *local_a0;
  void *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar17 = *(long **)(param_1 + 0xf8);
  if (plVar17 == (long *)0x0) {
    bVar8 = true;
  }
  else {
    p_Stack_c8 = (__shared_weak_count *)0x0;
    local_c0 = (__shared_weak_count *)0x0;
    local_d0 = (__shared_weak_count *)0x0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    uStack_78 = 0;
    local_80 = (undefined8 *)0x0;
    local_70 = 0x3f800000;
    plVar19 = (long *)plVar17[3];
    if (plVar19 != (long *)0x0) {
      lVar18 = 0;
      do {
        while( true ) {
          pJVar9 = (JSArrayBuffer *)(plVar19 + 2);
          uVar16 = *(ulong *)pJVar9;
          if ((*(uint *)(uVar16 - 1) & 1) != 0) break;
          p_Var15 = (__shared_weak_count *)
                    ((uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 - 1)) + 1);
          this_00 = (Page *)((ulong)p_Var15 & 0xfffffffffffc0000);
          this = *(Mutex **)(this_00 + 0xa0);
          base::Mutex::Lock(this);
          lVar10 = *(long *)(this_00 + 0xf8);
          if (lVar10 == 0) {
            Page::AllocateLocalTracker(this_00);
            lVar10 = *(long *)(this_00 + 0xf8);
            if ((*(uint *)(uVar16 + 0x1b) >> 4 & 1) != 0) goto LAB_014efd0c;
LAB_014efcd8:
            lVar20 = *(long *)(uVar16 + 0xb);
          }
          else {
            if ((*(uint *)(uVar16 + 0x1b) >> 4 & 1) == 0) goto LAB_014efcd8;
LAB_014efd0c:
            lVar20 = 0;
          }
          p_Stack_a8 = (__shared_weak_count *)plVar19[3];
          local_a0 = (__shared_weak_count *)plVar19[4];
          plVar19[3] = 0;
          plVar19[4] = 0;
          local_b0 = p_Var15;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
          ::
          __emplace_unique_key_args<v8::internal::JSArrayBuffer,std::__ndk1::pair<v8::internal::JSArrayBuffer_const,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
                      *)(lVar10 + 8),(JSArrayBuffer *)&local_b0,(pair *)&local_b0);
          p_Var15 = local_a0;
          if (local_a0 != (__shared_weak_count *)0x0) {
            p_Var1 = local_a0 + 8;
            do {
              lVar10 = *(long *)p_Var1;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar8) {
                *(long *)p_Var1 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*(long *)local_a0 + 0x10))(local_a0);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var15);
            }
          }
          lVar10 = *plVar17;
          plVar12 = (long *)(lVar10 + 200);
          do {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *plVar12 = *plVar12 - lVar20;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          pPVar2 = this_00 + 200;
          do {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pPVar2,0x10);
            if (bVar8) {
              *(long *)pPVar2 = *(long *)pPVar2 + lVar20;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar11 = *(long *)(lVar10 + 0x58);
          lVar10 = *(long *)(this_00 + 0x58);
          if (lVar11 != lVar10) {
            plVar12 = *(long **)(lVar11 + 0x30);
            do {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar8) {
                *plVar12 = *plVar12 - lVar20;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar12 = *(long **)(lVar10 + 0x30);
            do {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar8) {
                *plVar12 = *plVar12 + lVar20;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          base::Mutex::Unlock(this);
          plVar19 = (long *)*plVar19;
joined_r0x014efe90:
          if (plVar19 == (long *)0x0) goto LAB_014efe94;
        }
        if (param_2 != 1) {
          if ((*(uint *)(uVar16 + 0x1b) >> 4 & 1) == 0) {
            lVar10 = *(long *)(uVar16 + 0xb);
          }
          else {
            lVar10 = 0;
          }
          p_Stack_a8 = (__shared_weak_count *)plVar19[4];
          local_b0 = (__shared_weak_count *)plVar19[3];
          plVar19[3] = 0;
          plVar19[4] = 0;
          if (((byte)local_b0[0x28] & 1) == 0) {
            if (p_Stack_c8 == local_c0) {
              std::__ndk1::
              vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
              ::__push_back_slow_path<std::__ndk1::shared_ptr<v8::internal::BackingStore>const&>
                        ((vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
                          *)&local_d0,(shared_ptr *)&local_b0);
            }
            else {
              *(__shared_weak_count **)p_Stack_c8 = local_b0;
              *(__shared_weak_count **)(p_Stack_c8 + 8) = p_Stack_a8;
              if (p_Stack_a8 != (__shared_weak_count *)0x0) {
                p_Var15 = p_Stack_a8 + 8;
                do {
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(p_Var15,0x10);
                  if (bVar8) {
                    *(long *)p_Var15 = *(long *)p_Var15 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              p_Stack_c8 = p_Stack_c8 + 0x10;
            }
          }
          p_Var15 = p_Stack_a8;
          lVar18 = lVar10 + lVar18;
          if (p_Stack_a8 == (__shared_weak_count *)0x0) goto LAB_014efc94;
          p_Var1 = p_Stack_a8 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar8) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 != 0) goto LAB_014efc94;
          (**(code **)(*(long *)p_Stack_a8 + 0x10))(p_Stack_a8);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var15);
          plVar19 = (long *)*plVar19;
          goto joined_r0x014efe90;
        }
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
        ::
        __emplace_unique_key_args<v8::internal::JSArrayBuffer,std::__ndk1::pair<v8::internal::JSArrayBuffer_const,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
                  ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
                    *)&local_90,pJVar9,(pair *)pJVar9);
LAB_014efc94:
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
LAB_014efe94:
      if (lVar18 != 0) {
        lVar10 = *plVar17;
        plVar19 = (long *)(lVar10 + 200);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar8) {
            *plVar19 = *plVar19 - lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = *(long *)(lVar10 + 0x58);
        plVar19 = *(long **)(lVar10 + 0x30);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar8) {
            *plVar19 = *plVar19 - lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar19 = (long *)(*(long *)(lVar10 + 0x40) + 0xa0);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar8) {
            *plVar19 = *plVar19 - lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar19 = (long *)(*(long *)(*plVar17 + 0x18) + 0x28);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar8) {
            *plVar19 = *plVar19 + lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
    ::swap((__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
            *)(plVar17 + 1),(__hash_table *)&local_90);
    p_Stack_a8 = p_Stack_c8;
    local_b0 = local_d0;
    local_a0 = local_c0;
    p_Stack_c8 = (void *)0x0;
    local_c0 = (__shared_weak_count *)0x0;
    local_d0 = (void *)0x0;
    ArrayBufferCollector::QueueOrFreeGarbageAllocations
              (*(ArrayBufferCollector **)(*(long *)(*plVar17 + 0x18) + 0x818),&local_b0);
    p_Var1 = local_b0;
    p_Var15 = p_Stack_a8;
    pvVar6 = local_90;
    puVar7 = local_80;
    if (local_b0 != (__shared_weak_count *)0x0) {
      while (p_Var15 != p_Var1) {
        p_Var13 = *(__shared_weak_count **)(p_Var15 + -8);
        p_Var15 = p_Var15 + -0x10;
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var3 = p_Var13 + 8;
          do {
            lVar18 = *(long *)p_Var3;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
            if (bVar8) {
              *(long *)p_Var3 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
      }
      p_Stack_a8 = p_Var1;
      operator_delete(local_b0);
      pvVar6 = local_90;
      puVar7 = local_80;
    }
    while (puVar7 != (void *)0x0) {
      p_Var15 = (__shared_weak_count *)puVar7[4];
      pvVar14 = (void *)*puVar7;
      local_90 = pvVar6;
      if (p_Var15 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var15 + 8;
        do {
          lVar18 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar8) {
            *(long *)p_Var1 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var15);
        }
      }
      operator_delete(puVar7);
      pvVar6 = local_90;
      puVar7 = pvVar14;
    }
    local_90 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    p_Var1 = local_d0;
    p_Var15 = p_Stack_c8;
    if (local_d0 != (void *)0x0) {
      while (p_Var15 != p_Var1) {
        p_Var13 = *(__shared_weak_count **)((long)p_Var15 + -8);
        p_Var15 = (__shared_weak_count *)((long)p_Var15 + -0x10);
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var3 = p_Var13 + 8;
          do {
            lVar18 = *(long *)p_Var3;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
            if (bVar8) {
              *(long *)p_Var3 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
      }
      p_Stack_c8 = p_Var1;
      operator_delete(local_d0);
    }
    bVar8 = plVar17[4] == 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar8);
}

