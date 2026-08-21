
/* v8::internal::Debug::InstallDebugBreakTrampoline() */

void __thiscall v8::internal::Debug::InstallDebugBreakTrampoline(Debug *this)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  __tree_node_base *p_Var11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  __tree_node_base *p_Var15;
  __tree_node_base *p_Var16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  Isolate *pIVar21;
  Isolate *pIVar22;
  ulong uVar23;
  long local_f8;
  ulong *local_f0;
  ulong *local_e8;
  __tree_node_base *local_e0;
  __tree_node_base *local_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  ulong *puStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar21 = *(Isolate **)(this + 0x88);
  uVar2 = *(undefined8 *)(pIVar21 + 0x95a0);
  lVar3 = *(long *)(pIVar21 + 0x95a8);
  *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + 1;
  puVar17 = *(undefined8 **)(this + 0x18);
  if (puVar17 != (undefined8 *)0x0) {
    bVar5 = false;
    do {
      local_98 = *(undefined8 *)*puVar17;
      uVar7 = DebugInfo::CanBreakAtEntry((DebugInfo *)&local_98);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)*puVar17 & 0xffffffff00000000;
        uVar1 = *(uint *)((uVar7 | *(uint *)(*(ulong *)*puVar17 + 3)) + 3);
        if ((uVar1 & 1) == 0) {
          bVar5 = true;
        }
        else {
          bVar5 = true;
          if (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar1) - 1)) == 0x4e)
          goto LAB_00f0a35c;
        }
      }
      puVar17 = (undefined8 *)puVar17[1];
    } while (puVar17 != (undefined8 *)0x0);
    if (bVar5) {
      bVar5 = false;
LAB_00f0a35c:
      puVar8 = (ulong *)Builtins::builtin_handle((Builtins *)(*(long *)(this + 0x88) + 0x9e00),0x57)
      ;
      local_a8 = (ulong *)0x0;
      puStack_a0 = (ulong *)0x0;
      local_b8 = (long *)0x0;
      local_b0 = (ulong *)0x0;
      local_c8 = (long *)0x0;
      local_c0 = (long *)0x0;
      local_d8 = (__tree_node_base *)0x0;
      local_d0 = 0;
      local_e0 = (__tree_node_base *)&local_d8;
      HeapObjectIterator::HeapObjectIterator
                ((HeapObjectIterator *)&local_98,*(long *)(this + 0x88) + 0x8850,0);
      puVar9 = (ulong *)HeapObjectIterator::Next((HeapObjectIterator *)&local_98);
      if ((int)puVar9 != 0) {
        uVar7 = (ulong)puVar9 & 0xffffffff00000000;
        if (bVar5) goto LAB_00f0a404;
LAB_00f0a41c:
        uVar18 = uVar7 | 7;
        do {
          if (*(short *)(uVar18 + *(uint *)((long)puVar9 - 1)) == 0x439) {
            puVar13 = (ulong *)(uVar7 | *(uint *)((uVar7 | *(uint *)((long)puVar9 + 0xb)) + 0xf));
            if ((*(short *)(uVar18 + *(uint *)((long)puVar13 - 1)) == 0x5b) &&
               (local_e8 = puVar13, uVar10 = DebugInfo::CanBreakAtEntry((DebugInfo *)&local_e8),
               (uVar10 & 1) != 0)) {
              if (*(int *)((uVar7 | *(uint *)((long)puVar9 + 0x17)) + 0x27) != 0x42) {
                uVar1 = *(uint *)((uVar7 | *(uint *)((long)puVar9 + 0xb)) + 3);
                if ((uVar1 != 0x84) &&
                   (((uVar1 & 1) == 0 ||
                    (1 < *(ushort *)(uVar18 + *(uint *)((uVar7 | uVar1) - 1)) - 0x95)))) {
                  uVar7 = *puVar8;
                  *(int *)((long)puVar9 + 0x17) = (int)uVar7;
                  if (((uVar7 & 1) != 0) &&
                     ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
                    Heap_MarkingBarrierSlow(puVar9);
                  }
                  goto LAB_00f0a3ec;
                }
              }
              pIVar22 = *(Isolate **)(this + 0x88);
              if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar13 = *(ulong **)(pIVar22 + 0x95a0);
                if (puVar13 == *(ulong **)(pIVar22 + 0x95a8)) {
                  puVar13 = (ulong *)HandleScope::Extend(pIVar22);
                }
                *(ulong **)(pIVar22 + 0x95a0) = puVar13 + 1;
                *puVar13 = (ulong)puVar9;
              }
              else {
                puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),
                                              (ulong)puVar9);
              }
              local_e8 = puVar13;
              if (local_a8 < puStack_a0) {
                *local_a8 = (ulong)puVar13;
                local_a8 = local_a8 + 1;
              }
              else {
                std::__ndk1::
                vector<v8::internal::Handle<v8::internal::JSFunction>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSFunction>>>
                ::__push_back_slow_path<v8::internal::Handle<v8::internal::JSFunction>>
                          ((vector<v8::internal::Handle<v8::internal::JSFunction>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSFunction>>>
                            *)&local_b0,(Handle *)&local_e8);
              }
            }
          }
          else if (0xa9 < *(ushort *)(uVar18 + *(uint *)((long)puVar9 - 1))) {
            uVar10 = (ulong)(*(uint *)((uVar7 | *(uint *)((long)puVar9 - 1)) + 0xb) >> 10) & 0x3ff;
            local_e8 = puVar9;
            if ((int)uVar10 != 0) {
              uVar20 = uVar7 | *(uint *)((uVar7 | *(uint *)((long)puVar9 - 1)) + 0x17);
              uVar23 = 0;
              do {
                uVar14 = uVar23 * 0xc00000000 + 0x1000000000 >> 0x20;
                if ((*(uint *)((uVar14 | 3) + uVar20) >> 1 & 1) != 0) {
                  uVar1 = *(uint *)(uVar20 + 7 + uVar14);
                  if ((((uVar1 & 1) != 0) &&
                      (uVar14 = uVar7 | uVar1, *(short *)(uVar18 + *(uint *)(uVar14 - 1)) == 0x52))
                     && ((((*(uint *)(uVar14 + 3) & 1) != 0 &&
                          (*(short *)(uVar18 + *(uint *)((uVar7 | *(uint *)(uVar14 + 3)) - 1)) ==
                           0x4e)) ||
                         (((*(uint *)(uVar14 + 7) & 1) != 0 &&
                          (*(short *)(uVar18 + *(uint *)((uVar7 | *(uint *)(uVar14 + 7)) - 1)) ==
                           0x4e)))))) {
                    p_Var15 = (__tree_node_base *)&local_d8;
                    p_Var16 = local_d8;
                    if (local_d8 != (__tree_node_base *)0x0) {
                      do {
                        if (uVar1 <= *(uint *)(p_Var16 + 0x20)) {
                          p_Var15 = p_Var16;
                        }
                        p_Var11 = p_Var16 + (ulong)(*(uint *)(p_Var16 + 0x20) < uVar1) * 8;
                        p_Var16 = *(__tree_node_base **)p_Var11;
                      } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
                      if ((p_Var15 != (__tree_node_base *)&local_d8) &&
                         (*(uint *)(p_Var15 + 0x20) <= uVar1)) goto LAB_00f0a560;
                    }
                    pIVar22 = *(Isolate **)(this + 0x88);
                    if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar22 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar22 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar22);
                      }
                      *(ulong **)(pIVar22 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar14;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),
                                                   uVar14);
                    }
                    local_f0 = puVar9;
                    local_f8 = JSReceiver::GetCreationContext((JSReceiver *)&local_e8);
                    p_Var15 = (__tree_node_base *)&local_d8;
                    p_Var16 = (__tree_node_base *)&local_d8;
                    if (local_c0 < local_b8) {
                      *local_c0 = (long)local_f0;
                      local_c0[1] = local_f8;
                      local_c0 = local_c0 + 2;
                      p_Var11 = local_d8;
                    }
                    else {
                      std::__ndk1::
                      vector<std::__ndk1::pair<v8::internal::Handle<v8::internal::AccessorPair>,v8::internal::Handle<v8::internal::NativeContext>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::Handle<v8::internal::AccessorPair>,v8::internal::Handle<v8::internal::NativeContext>>>>
                      ::
                      __emplace_back_slow_path<v8::internal::Handle<v8::internal::AccessorPair>,v8::internal::Handle<v8::internal::NativeContext>>
                                ((vector<std::__ndk1::pair<v8::internal::Handle<v8::internal::AccessorPair>,v8::internal::Handle<v8::internal::NativeContext>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::Handle<v8::internal::AccessorPair>,v8::internal::Handle<v8::internal::NativeContext>>>>
                                  *)&local_c8,(Handle *)&local_f0,(Handle *)&local_f8);
                      p_Var11 = local_d8;
                    }
                    while (p_Var11 != (__tree_node_base *)0x0) {
                      while (p_Var16 = p_Var11, uVar1 < *(uint *)(p_Var16 + 0x20)) {
                        p_Var11 = *(__tree_node_base **)p_Var16;
                        p_Var15 = p_Var16;
                        if (*(__tree_node_base **)p_Var16 == (__tree_node_base *)0x0) {
                          lVar12 = *(long *)p_Var16;
                          goto joined_r0x00f0a734;
                        }
                      }
                      if (uVar1 == *(uint *)(p_Var16 + 0x20)) break;
                      p_Var15 = p_Var16 + 8;
                      p_Var11 = *(__tree_node_base **)(p_Var16 + 8);
                    }
                    lVar12 = *(long *)p_Var15;
joined_r0x00f0a734:
                    if (lVar12 == 0) {
                      p_Var11 = operator_new(0x28);
                      *(ulong *)(p_Var11 + 0x20) = uVar14;
                      *(undefined8 *)p_Var11 = 0;
                      *(undefined8 *)(p_Var11 + 8) = 0;
                      *(__tree_node_base **)(p_Var11 + 0x10) = p_Var16;
                      *(__tree_node_base **)p_Var15 = p_Var11;
                      if (*(__tree_node_base **)local_e0 != (__tree_node_base *)0x0) {
                        p_Var11 = *(__tree_node_base **)p_Var15;
                        local_e0 = *(__tree_node_base **)local_e0;
                      }
                      std::__ndk1::
                      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                                (local_d8,p_Var11);
                      local_d0 = local_d0 + 1;
                    }
                  }
                }
LAB_00f0a560:
                uVar23 = uVar23 + 1;
              } while (uVar23 != uVar10);
            }
          }
LAB_00f0a3ec:
          while( true ) {
            puVar9 = (ulong *)HeapObjectIterator::Next((HeapObjectIterator *)&local_98);
            if ((int)puVar9 == 0) goto LAB_00f0a7a4;
            uVar7 = (ulong)puVar9 & 0xffffffff00000000;
            if (!bVar5) goto LAB_00f0a41c;
LAB_00f0a404:
            uVar18 = uVar7 | 7;
            if (*(short *)(uVar18 + *(uint *)((long)puVar9 - 1)) != 0x9f) break;
            local_e8 = puVar9;
            FeedbackVector::ClearSlots((FeedbackVector *)&local_e8,*(Isolate **)(this + 0x88));
          }
        } while( true );
      }
LAB_00f0a7a4:
      HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)&local_98);
      std::__ndk1::
      __tree<v8::internal::AccessorPair,std::__ndk1::less<v8::internal::AccessorPair>,std::__ndk1::allocator<v8::internal::AccessorPair>>
      ::destroy((__tree<v8::internal::AccessorPair,std::__ndk1::less<v8::internal::AccessorPair>,std::__ndk1::allocator<v8::internal::AccessorPair>>
                 *)&local_e0,(__tree_node *)local_d8);
      plVar6 = local_c0;
      puVar9 = local_a8;
      for (plVar19 = local_c8; puVar13 = local_b0, local_a8 = puVar9, plVar19 != plVar6;
          plVar19 = plVar19 + 2) {
        puVar9 = (ulong *)*plVar19;
        lVar12 = plVar19[1];
        uVar1 = *(uint *)(*puVar9 + 3);
        if (((uVar1 & 1) != 0) &&
           (uVar7 = *puVar9 & 0xffffffff00000000, uVar18 = uVar7 | uVar1,
           *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x4e)) {
          pIVar22 = *(Isolate **)(this + 0x88);
          if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(pIVar22 + 0x95a0);
            if (puVar13 == *(ulong **)(pIVar22 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(pIVar22);
            }
            *(ulong **)(pIVar22 + 0x95a0) = puVar13 + 1;
            *puVar13 = uVar18;
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),uVar18);
          }
          puVar13 = (ulong *)ApiNatives::InstantiateFunction(pIVar22,lVar12,puVar13,0);
          if (puVar13 == (ulong *)0x0) goto LAB_00f0aa90;
          uVar18 = *puVar9;
          uVar7 = *puVar13;
          *(int *)(uVar18 + 3) = (int)uVar7;
          if ((uVar7 & 1) != 0) {
            uVar10 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar18,uVar18 + 3,uVar7);
              uVar10 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar18,uVar18 + 3,uVar7);
            }
          }
        }
        uVar1 = *(uint *)(*puVar9 + 7);
        if (((uVar1 & 1) != 0) &&
           (uVar7 = *puVar9 & 0xffffffff00000000, uVar18 = uVar7 | uVar1,
           *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x4e)) {
          pIVar22 = *(Isolate **)(this + 0x88);
          if (*(CanonicalHandleScope **)(pIVar22 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(pIVar22 + 0x95a0);
            if (puVar13 == *(ulong **)(pIVar22 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(pIVar22);
            }
            *(ulong **)(pIVar22 + 0x95a0) = puVar13 + 1;
            *puVar13 = uVar18;
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar22 + 0x95b8),uVar18);
          }
          puVar13 = (ulong *)ApiNatives::InstantiateFunction(pIVar22,lVar12,puVar13,0);
          if (puVar13 == (ulong *)0x0) {
LAB_00f0aa90:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar18 = *puVar9;
          uVar7 = *puVar13;
          *(int *)(uVar18 + 7) = (int)uVar7;
          if ((uVar7 & 1) != 0) {
            uVar10 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar18,uVar18 + 7,uVar7);
              uVar10 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar18,uVar18 + 7,uVar7);
            }
          }
        }
        puVar9 = local_a8;
      }
      for (; puVar13 != puVar9; puVar13 = puVar13 + 1) {
        plVar19 = (long *)*puVar13;
        local_90 = 0;
        local_98 = 0;
        Compiler::Compile(plVar19,1,&local_98);
        lVar12 = *plVar19;
        uVar7 = *puVar8;
        *(int *)(lVar12 + 0x17) = (int)uVar7;
        if (((uVar7 & 1) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
          Heap_MarkingBarrierSlow(lVar12,lVar12 + 0x17);
        }
      }
      if (local_c8 != (long *)0x0) {
        local_c0 = local_c8;
        operator_delete(local_c8);
      }
      if (local_b0 != (ulong *)0x0) {
        local_a8 = local_b0;
        operator_delete(local_b0);
      }
    }
  }
  if (pIVar21 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar21 + 0x95a0) = uVar2;
    *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + -1;
    if (*(long *)(pIVar21 + 0x95a8) != lVar3) {
      *(long *)(pIVar21 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar21);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

