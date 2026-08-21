
/* v8::internal::wasm::InstanceBuilder::Build() */

ulong * __thiscall v8::internal::wasm::InstanceBuilder::Build(InstanceBuilder *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  TimedHistogram *pTVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  Isolate *pIVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  int *piVar27;
  long lVar28;
  ulong uVar29;
  NativeModule *pNVar30;
  int iVar31;
  NativeModuleModificationScope aNStack_c8 [8];
  long *local_c0;
  TimedHistogram *local_b8;
  Isolate *local_b0;
  byte **local_a8;
  byte *local_a0;
  char *local_98;
  undefined8 local_90;
  ulong local_88;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_80 [16];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if (DAT_01d478d0 == (byte *)0x0) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d478d0 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11,"disabled-by-default-v8.wasm");
  }
  pbVar8 = DAT_01d478d0;
  local_a8 = (byte **)0x0;
  if ((*DAT_01d478d0 & 5) != 0) {
    local_c0 = (long *)0x0;
    local_b8 = (TimedHistogram *)0x0;
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar12 = (**(code **)(*plVar11 + 0x18))
                       (plVar11,0x58,pbVar8,"InstanceBuilder::Build",0,0,0,0,0,0,0,&local_c0,0);
    pTVar9 = local_b8;
    local_b8 = (TimedHistogram *)0x0;
    if (pTVar9 != (TimedHistogram *)0x0) {
      (**(code **)(*(long *)pTVar9 + 8))();
    }
    plVar11 = local_c0;
    local_c0 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    local_a8 = &local_a0;
    local_98 = "InstanceBuilder::Build";
    local_a0 = pbVar8;
    local_90 = uVar12;
  }
  if ((*(long *)(*(long *)(this + 0x10) + 0xd0) == *(long *)(*(long *)(this + 0x10) + 0xd8)) ||
     (*(long *)(this + 0x28) != 0)) {
    SanitizeImports(this);
    if (*(int *)(*(long *)(this + 0x18) + 0x10) == 0) {
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
                (aPStack_80,*(Isolate **)this);
      local_b8 = (TimedHistogram *)(*(long *)(*(long *)this + 0x9520) + 0x1300);
      if (*(char *)(*(long *)(this + 0x10) + 0x178) != '\0') {
        local_b8 = (TimedHistogram *)(*(long *)(*(long *)this + 0x9520) + 0x1330);
      }
      local_b0 = (Isolate *)0x0;
      local_c0 = (long *)0x0;
      TimedHistogram::Start(local_b8,(ElapsedTimer *)&local_c0,(Isolate *)0x0);
      pNVar30 = (NativeModule *)
                **(undefined8 **)
                  (*(long *)((**(ulong **)(this + 0x20) & 0xffffffff00000000 |
                             (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0xb)) + 3) + 0x18);
      iVar23 = (int)*(undefined8 *)(*(long *)this + 0x9520);
      iVar26 = iVar23 + 0x558;
      if (*(char *)(*(long *)(this + 0x10) + 0x178) != '\0') {
        iVar26 = iVar23 + 0x530;
      }
      Histogram::AddSample(iVar26);
      lVar19 = *(long *)(this + 0x10);
      if (*(char *)(lVar19 + 0x11) != '\0') {
        Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0x9520) + 0x580);
        lVar19 = *(long *)(this + 0x10);
      }
      plVar11 = *(long **)(this + 0x30);
      if (*(char *)(lVar19 + 0x178) == '\0') {
        if (plVar11 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","memory_buffer_.is_null()");
        }
        uVar25 = FindImportedMemory(this);
        if ((((uVar25 & 1) != 0) || (*(char *)(*(long *)(this + 0x10) + 0x12) == '\0')) ||
           (uVar25 = AllocateMemory(this), (uVar25 & 1) != 0)) goto LAB_015f6d40;
        puVar13 = (ulong *)0x0;
      }
      else if (plVar11 == (long *)0x0) {
        plVar11 = (long *)Factory::NewJSArrayBufferAndBackingStore(*(Factory **)this,0,0,0);
        *(long **)(this + 0x30) = plVar11;
        if (plVar11 != (long *)0x0) {
          *(uint *)(*plVar11 + 0x1b) = *(uint *)(*plVar11 + 0x1b) | 8;
          *(uint *)(*plVar11 + 0x1b) = *(uint *)(*plVar11 + 0x1b) & 0xfffffffd;
          lVar19 = *plVar11;
          plVar11 = *(long **)(this + 0x30);
          goto LAB_015f6d24;
        }
        pcVar17 = *(char **)(this + 0x18);
        pcVar18 = "Out of memory: asm.js memory";
LAB_015f74fc:
        ErrorThrower::RangeError(pcVar17,pcVar18);
        puVar13 = (ulong *)0x0;
      }
      else {
        lVar19 = *plVar11;
        if ((*(uint *)(lVar19 + 0x1b) >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!buffer->is_detachable()");
        }
        if ((*(uint *)(lVar19 + 0x1b) >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","buffer->is_asmjs_memory()");
        }
LAB_015f6d24:
        uVar12 = WasmMemoryObject::New
                           (*(undefined8 *)this,plVar11,*(long *)(lVar19 + 0xb) + 0xffffU >> 0x10);
        *(undefined8 *)(this + 0x38) = uVar12;
LAB_015f6d40:
        puVar13 = (ulong *)WasmInstanceObject::New(*(undefined8 *)this,*(undefined8 *)(this + 0x20))
        ;
        lVar19 = *(long *)(this + 0x10);
        if (*(char *)(lVar19 + 0x12) != '\0') {
          uVar25 = *puVar13;
          piVar27 = (int *)(uVar25 + 0x7b);
          if (*piVar27 == *(int *)((uVar25 & 0xffffffff00000000) + 0xa0)) {
            uVar29 = **(ulong **)(this + 0x38);
            *piVar27 = (int)uVar29;
            if ((uVar29 & 1) != 0) {
              uVar20 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar20 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar25,piVar27,uVar29);
                uVar20 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar20 & 0x18) != 0) &&
                 ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar25,piVar27,uVar29);
              }
            }
          }
          WasmMemoryObject::AddInstance(*(undefined8 *)this,*(undefined8 *)(this + 0x38),puVar13);
          if (*(long **)(this + 0x30) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          lVar19 = **(long **)(this + 0x30);
          if (*(long *)(*puVar13 + 0x13) != *(long *)(lVar19 + 0xb)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","instance->memory_size() == memory->byte_length()");
          }
          if (*(long *)(*puVar13 + 0xb) != *(long *)(lVar19 + 0x13)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","instance->memory_start() == memory->backing_store()");
          }
          lVar19 = *(long *)(this + 0x10);
        }
        if (*(int *)(lVar19 + 0x30) != 0) {
          puVar14 = (ulong *)Factory::NewJSArrayBufferAndBackingStore
                                       (*(Factory **)this,*(int *)(lVar19 + 0x30),1,1);
          if (puVar14 == (ulong *)0x0) {
            pcVar17 = *(char **)(this + 0x18);
            *(undefined8 *)(this + 0x40) = 0;
            pcVar18 = "Out of memory: wasm globals";
            goto LAB_015f74fc;
          }
          *(ulong **)(this + 0x40) = puVar14;
          uVar29 = *puVar13;
          uVar25 = *puVar14;
          *(int *)(uVar29 + 0x7f) = (int)uVar25;
          if ((uVar25 & 1) != 0) {
            uVar20 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar20 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar29,uVar29 + 0x7f,uVar25);
              uVar20 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar20 & 0x18) != 0) &&
               ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar29,uVar29 + 0x7f,uVar25);
            }
          }
          *(undefined8 *)(*puVar13 + 0x4f) = *(undefined8 *)(**(long **)(this + 0x40) + 0x13);
          lVar19 = *(long *)(this + 0x10);
        }
        if (*(int *)(lVar19 + 0x34) != 0) {
          puVar14 = (ulong *)Factory::NewFixedArray(*(Factory **)this,*(int *)(lVar19 + 0x34),0);
          *(ulong **)(this + 0x48) = puVar14;
          uVar29 = *puVar13;
          uVar25 = *puVar14;
          *(int *)(uVar29 + 0x83) = (int)uVar25;
          if ((uVar25 & 1) != 0) {
            uVar20 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar20 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar29,uVar29 + 0x83,uVar25);
              uVar20 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar20 & 0x18) != 0) &&
               ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar29,uVar29 + 0x83,uVar25);
            }
          }
        }
        if (*(int *)(*(long *)(this + 0x10) + 0x38) != 0) {
          puVar14 = (ulong *)Factory::NewFixedArray
                                       (*(Factory **)this,*(int *)(*(long *)(this + 0x10) + 0x38),1)
          ;
          uVar29 = *puVar13;
          uVar25 = *puVar14;
          *(int *)(uVar29 + 0x87) = (int)uVar25;
          if ((uVar25 & 1) != 0) {
            uVar20 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar20 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar29,uVar29 + 0x87,uVar25);
              uVar20 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar20 & 0x18) != 0) &&
               ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar29,uVar29 + 0x87,uVar25);
            }
          }
        }
        uVar25 = *(long *)(*(long *)(this + 0x10) + 0x108) -
                 *(long *)(*(long *)(this + 0x10) + 0x100);
        uVar29 = uVar25 >> 3;
        iVar26 = (int)uVar29;
        if (0 < iVar26) {
          puVar14 = (ulong *)Factory::NewFixedArray(*(Factory **)this,uVar29 & 0xffffffff,1);
          uVar20 = *puVar13;
          uVar29 = *puVar14;
          *(int *)(uVar20 + 0x9b) = (int)uVar29;
          if ((uVar29 & 1) != 0) {
            uVar21 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar21 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar20,uVar20 + 0x9b,uVar29);
              uVar21 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar21 & 0x18) != 0) &&
               ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar20,uVar20 + 0x9b,uVar29);
            }
          }
          lVar19 = *(long *)(this + 0x50);
          uVar25 = (long)(uVar25 * 0x20000000) >> 0x20;
          uVar29 = *(long *)(this + 0x58) - lVar19 >> 3;
          if (uVar25 < uVar29 || uVar25 - uVar29 == 0) {
            if (uVar25 < uVar29) {
              *(ulong *)(this + 0x58) = lVar19 + uVar25 * 8;
            }
          }
          else {
            std::__ndk1::
            vector<v8::internal::Handle<v8::internal::WasmExceptionObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::WasmExceptionObject>>>
            ::__append((vector<v8::internal::Handle<v8::internal::WasmExceptionObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::WasmExceptionObject>>>
                        *)(this + 0x50),uVar25 - uVar29);
          }
        }
        uVar25 = (ulong)(*(long *)(*(long *)(this + 0x10) + 0xc0) -
                        *(long *)(*(long *)(this + 0x10) + 0xb8)) >> 4;
        puVar14 = (ulong *)Factory::NewFixedArray(*(Factory **)this,uVar25 & 0xffffffff,0);
        lVar19 = *(long *)(this + 0x10);
        uVar6 = *(uint *)(lVar19 + 0x40);
        iVar23 = (int)uVar25;
        if ((int)uVar6 < iVar23) {
          lVar24 = (long)(int)uVar6 << 4;
          iVar10 = uVar6 << 2;
          iVar31 = ~uVar6 + iVar23;
          while( true ) {
            puVar4 = (undefined1 *)(*(long *)(lVar19 + 0xb8) + lVar24);
            puVar15 = (ulong *)WasmTableObject::New
                                         (*(undefined8 *)this,*puVar4,*(undefined4 *)(puVar4 + 4),
                                          puVar4[0xc],*(undefined4 *)(puVar4 + 8),0);
            uVar20 = *puVar14;
            uVar29 = *puVar15;
            *(int *)(uVar20 + (long)iVar10 + 7) = (int)uVar29;
            if ((uVar29 & 1) != 0) {
              uVar21 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
              lVar19 = uVar20 + (long)iVar10 + 7;
              if (((uint)uVar21 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar20,lVar19,uVar29);
                uVar21 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar21 & 0x18) != 0) &&
                 ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar20,lVar19,uVar29);
              }
            }
            if (iVar31 == 0) break;
            lVar19 = *(long *)(this + 0x10);
            lVar24 = lVar24 + 0x10;
            iVar10 = iVar10 + 4;
            iVar31 = iVar31 + -1;
          }
        }
        uVar20 = *puVar13;
        uVar29 = *puVar14;
        *(int *)(uVar20 + 0x8f) = (int)uVar29;
        if ((uVar29 & 1) != 0) {
          uVar21 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar21 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar20,uVar20 + 0x8f,uVar29);
            uVar21 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar21 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar20,uVar20 + 0x8f,uVar29);
          }
        }
        puVar14 = (ulong *)Factory::NewFixedArray(*(Factory **)this,uVar25 & 0xffffffff,0);
        if (1 < iVar23) {
          lVar19 = 5;
          lVar24 = 0x10;
          lVar28 = -(uVar25 & 0xffffffff);
          do {
            lVar28 = lVar28 + 1;
            if (*(char *)(*(long *)(*(long *)(this + 0x10) + 0xb8) + lVar24) == '\a') {
              puVar15 = (ulong *)WasmIndirectFunctionTable::New
                                           (*(Isolate **)this,
                                            *(uint *)(*(long *)(*(long *)(this + 0x10) + 0xb8) +
                                                     lVar19 * 4));
              uVar29 = *puVar14;
              uVar25 = *puVar15;
              lVar2 = uVar29 + (long)((int)lVar19 + -1);
              *(int *)(lVar2 + 7) = (int)uVar25;
              if ((uVar25 & 1) != 0) {
                uVar20 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
                lVar2 = lVar2 + 7;
                if (((uint)uVar20 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar29,lVar2,uVar25);
                  uVar20 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar20 & 0x18) != 0) &&
                   ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar29,lVar2,uVar25);
                }
              }
            }
            lVar19 = lVar19 + 4;
            lVar24 = lVar24 + 0x10;
          } while (lVar28 != -1);
        }
        uVar29 = *puVar13;
        uVar25 = *puVar14;
        *(int *)(uVar29 + 0x93) = (int)uVar25;
        if ((uVar25 & 1) != 0) {
          uVar20 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar20 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar29,uVar29 + 0x93,uVar25);
            uVar20 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar20 & 0x18) != 0) && ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar29,uVar29 + 0x93,uVar25);
          }
        }
        NativeModuleModificationScope::NativeModuleModificationScope(aNStack_c8,pNVar30);
        iVar10 = ProcessImports(this,puVar13);
        if (iVar10 < 0) {
LAB_015f75d4:
          puVar13 = (ulong *)0x0;
        }
        else {
          InitGlobals(this,puVar13);
          if ((0 < iVar23) &&
             (lVar19 = *(long *)(this + 0x10),
             0 < (int)((ulong)(*(long *)(lVar19 + 0xc0) - *(long *)(lVar19 + 0xb8)) >> 4))) {
            lVar24 = 0;
            uVar25 = 0;
            do {
              if (*(char *)(*(long *)(lVar19 + 0xb8) + lVar24) == '\a') {
                WasmInstanceObject::EnsureIndirectFunctionTableWithMinimumSize
                          (puVar13,uVar25 & 0xffffffff,
                           *(undefined4 *)(*(long *)(lVar19 + 0xb8) + lVar24 + 4));
                lVar19 = *(long *)(this + 0x10);
              }
              uVar25 = uVar25 + 1;
              lVar24 = lVar24 + 0x10;
            } while ((long)uVar25 <
                     (long)(int)((ulong)(*(long *)(lVar19 + 0xc0) - *(long *)(lVar19 + 0xb8)) >> 4))
            ;
          }
          if (0 < iVar26) {
            InitializeExceptions(this,puVar13);
          }
          if (((byte)this[9] >> 1 & 1) == 0) {
            lVar19 = *(long *)(this + 0x10);
            piVar27 = *(int **)(lVar19 + 0x118);
            piVar5 = *(int **)(lVar19 + 0x120);
            if (piVar27 != piVar5) {
              if ((char)piVar27[0xc] != '\0') goto LAB_015f73e0;
              do {
                do {
                  piVar3 = piVar27 + 0xe;
                  if (piVar5 == piVar3) {
                    lVar19 = *(long *)(this + 0x10);
                    goto LAB_015f7510;
                  }
                  piVar1 = piVar27 + 0x1a;
                  piVar27 = piVar3;
                } while ((char)*piVar1 == '\0');
LAB_015f73e0:
                if (piVar27[2] == 1) {
                  local_88 = *puVar13;
                  lVar19 = WasmInstanceObject::module((WasmInstanceObject *)&local_88);
                  uVar25 = *puVar13;
                  uVar29 = uVar25 & 0xffffffff00000000;
                  puVar22 = (uint *)(*(long *)((uVar29 | *(uint *)(uVar25 + 0x7f)) + 0x13) +
                                    (ulong)*(uint *)(*(long *)(lVar19 + 0x18) +
                                                     (ulong)(uint)piVar27[4] * 0x20 + 0x18));
                }
                else {
                  if (piVar27[2] != 2) goto LAB_015f7754;
                  uVar25 = *puVar13;
                  puVar22 = (uint *)(piVar27 + 4);
                  uVar29 = uVar25 & 0xffffffff00000000;
                }
                uVar6 = *puVar22;
                pIVar16 = *(Isolate **)this;
                uVar29 = uVar29 | *(uint *)((uVar29 | *(uint *)(uVar25 + 0x8f)) +
                                            (long)(*piVar27 << 2) + 7);
                if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar14 = *(ulong **)(pIVar16 + 0x95a0);
                  if (puVar14 == *(ulong **)(pIVar16 + 0x95a8)) {
                    puVar14 = (ulong *)HandleScope::Extend(pIVar16);
                  }
                  *(ulong **)(pIVar16 + 0x95a0) = puVar14 + 1;
                  *puVar14 = uVar29;
                }
                else {
                  puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar29)
                  ;
                  uVar29 = *puVar14;
                }
                uVar25 = (long)((ulong)*(uint *)(uVar29 + 0xf) << 0x20) >> 0x21;
                uVar29 = *(long *)(piVar27 + 8) - *(long *)(piVar27 + 6) >> 2;
              } while ((uVar29 <= uVar25) && ((ulong)uVar6 <= uVar25 - uVar29));
              ErrorThrower::LinkError(*(char **)(this + 0x18),"table initializer is out of bounds");
              goto LAB_015f75d4;
            }
LAB_015f7510:
            piVar5 = *(int **)(lVar19 + 0xa8);
            for (piVar27 = *(int **)(lVar19 + 0xa0); piVar27 != piVar5; piVar27 = piVar27 + 8) {
              if ((char)piVar27[6] != '\0') {
                if (*piVar27 == 1) {
                  local_88 = *puVar13;
                  lVar19 = WasmInstanceObject::module((WasmInstanceObject *)&local_88);
                  uVar25 = *puVar13;
                  puVar22 = (uint *)(*(long *)((uVar25 & 0xffffffff00000000 |
                                               (ulong)*(uint *)(uVar25 + 0x7f)) + 0x13) +
                                    (ulong)*(uint *)(*(long *)(lVar19 + 0x18) +
                                                     (ulong)(uint)piVar27[2] * 0x20 + 0x18));
                }
                else {
                  if (*piVar27 != 2) {
LAB_015f7754:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("unreachable code");
                  }
                  uVar25 = *puVar13;
                  puVar22 = (uint *)(piVar27 + 2);
                }
                if ((*(ulong *)(uVar25 + 0x13) < (ulong)(uint)piVar27[5]) ||
                   (*(ulong *)(uVar25 + 0x13) - (ulong)(uint)piVar27[5] < (ulong)*puVar22)) {
                  ErrorThrower::LinkError(*(char **)(this + 0x18),"data segment is out of bounds");
                  goto LAB_015f75d4;
                }
              }
            }
          }
          ProcessExports(this,puVar13);
          if (((*(int *)(*(long *)(this + 0x18) + 0x10) != 0) ||
              ((0 < iVar23 &&
               (LoadTableSegments(this,puVar13), *(int *)(*(long *)(this + 0x18) + 0x10) != 0)))) ||
             ((*(long *)(*(long *)(this + 0x10) + 0xa8) != *(long *)(*(long *)(this + 0x10) + 0xa0)
              && (LoadDataSegments(this,puVar13), *(int *)(*(long *)(this + 0x18) + 0x10) != 0))))
          goto LAB_015f75d4;
          pIVar16 = *(Isolate **)this;
          uVar25 = **(ulong **)(this + 0x20) & 0xffffffff00000000 |
                   (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0x13);
          if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar14 = *(ulong **)(pIVar16 + 0x95a0);
            if (puVar14 == *(ulong **)(pIVar16 + 0x95a8)) {
              puVar14 = (ulong *)HandleScope::Extend(pIVar16);
            }
            *(ulong **)(pIVar16 + 0x95a0) = puVar14 + 1;
            *puVar14 = uVar25;
          }
          else {
            puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar25);
          }
          WasmScript::SetBreakpointsOnNewInstance(puVar14,puVar13);
          uVar6 = *(uint *)(*(long *)(this + 0x10) + 0x14);
          if (-1 < (int)uVar6) {
            plVar11 = (long *)(*(long *)(*(long *)(this + 0x10) + 0x88) + (ulong)uVar6 * 0x20);
            uVar12 = JSToWasmWrapperCompilationUnit::CompileJSToWasmWrapper
                               (*(Isolate **)this,(Signature *)*plVar11,SUB81(plVar11[3],0));
            uVar12 = WasmExportedFunction::New
                               (*(undefined8 *)this,puVar13,uVar6,*(undefined4 *)(*plVar11 + 8),
                                uVar12);
            *(undefined8 *)(this + 0x68) = uVar12;
          }
        }
        NativeModuleModificationScope::~NativeModuleModificationScope(aNStack_c8);
      }
      TimedHistogram::Stop(local_b8,(ElapsedTimer *)&local_c0,local_b0);
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
                (aPStack_80);
      goto joined_r0x015f75f8;
    }
  }
  else {
    ErrorThrower::TypeError
              (*(char **)(this + 0x18),"Imports argument must be present and must be an object");
  }
  puVar13 = (ulong *)0x0;
joined_r0x015f75f8:
  if ((local_a8 != (byte **)0x0) && (*local_a0 != 0)) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar11 + 0x28))(plVar11,local_a0,local_98,local_90);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return puVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

