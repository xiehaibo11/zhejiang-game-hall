
/* v8::internal::Deoptimizer::DeoptimizeMarkedCodeForContext(v8::internal::NativeContext) */

void v8::internal::Deoptimizer::DeoptimizeMarkedCodeForContext(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  __tree_node_base *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  __tree_node_base *p_Var10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  __tree_node_base *p_Var14;
  ulong local_98;
  undefined **local_90;
  __tree_node_base **pp_Stack_88;
  __tree_node_base *local_80;
  __tree_node_base *local_78;
  long local_70;
  ulong local_68;
  
  uVar8 = param_1 & 0xffffffff00000000;
  local_78 = (__tree_node_base *)0x0;
  local_70 = 0;
  local_80 = (__tree_node_base *)&local_78;
  local_68 = param_1;
  uVar3 = NativeContext::OptimizedCodeListHead((NativeContext *)&local_68);
  uVar9 = 0;
LAB_00f1768c:
  uVar13 = uVar9;
  uVar9 = uVar3;
  if ((uVar3 & 1) == 0) goto LAB_00f176bc;
  do {
    uVar9 = uVar3;
    if ((int)uVar3 == *(int *)(uVar8 + 0xa0)) {
      pp_Stack_88 = &local_80;
      local_90 = &PTR_FUN_01ca47c0;
      FUN_00f17998(&local_90,uVar8,uVar8 + 0x2bb8);
      ThreadManager::IterateArchivedThreads
                (*(ThreadManager **)(uVar8 + 0x95f0),(ThreadVisitor *)&local_90);
      if (local_80 != (__tree_node_base *)&local_78) {
        p_Var10 = local_80;
        do {
          Heap::InvalidateCodeDeoptimizationData
                    ((Heap *)(uVar8 + 0x8850),*(__tree_node_base **)(p_Var10 + 0x20));
          p_Var14 = *(__tree_node_base **)(p_Var10 + 8);
          if (*(__tree_node_base **)(p_Var10 + 8) == (__tree_node_base *)0x0) {
            p_Var14 = p_Var10 + 0x10;
            p_Var4 = *(__tree_node_base **)p_Var14;
            if (*(__tree_node_base **)p_Var4 != p_Var10) {
              do {
                lVar6 = *(long *)p_Var14;
                p_Var14 = (__tree_node_base *)(lVar6 + 0x10);
                p_Var4 = *(__tree_node_base **)p_Var14;
              } while (*(long *)p_Var4 != lVar6);
            }
          }
          else {
            do {
              p_Var4 = p_Var14;
              p_Var14 = *(__tree_node_base **)p_Var4;
            } while (*(__tree_node_base **)p_Var4 != (__tree_node_base *)0x0);
          }
          p_Var10 = p_Var4;
        } while (p_Var4 != (__tree_node_base *)&local_78);
      }
      local_98 = local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 + 0x3cf);
      OSROptimizedCodeCache::EvictMarkedCode
                ((OSROptimizedCodeCache *)&local_98,(Isolate *)(local_68 & 0xffffffff00000000));
      std::__ndk1::
      __tree<v8::internal::Code,std::__ndk1::less<v8::internal::Code>,std::__ndk1::allocator<v8::internal::Code>>
      ::destroy((__tree<v8::internal::Code,std::__ndk1::less<v8::internal::Code>,std::__ndk1::allocator<v8::internal::Code>>
                 *)&local_80,(__tree_node *)local_78);
      return;
    }
LAB_00f176bc:
    do {
      if ((*(byte *)(uVar9 + 0x17) & 0x3e) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","code.kind() == Code::OPTIMIZED_FUNCTION");
      }
      uVar12 = uVar9 & 0xffffffff00000000;
      uVar2 = *(uint *)((uVar12 | *(uint *)(uVar9 + 0xf)) + 3);
      uVar3 = uVar12 | uVar2;
      if ((*(uint *)((uVar12 | *(uint *)(uVar9 + 0xf)) + 7) & 1) == 0) goto LAB_00f1768c;
      p_Var14 = (__tree_node_base *)&local_78;
      p_Var10 = (__tree_node_base *)&local_78;
      p_Var4 = local_78;
      while (p_Var4 != (__tree_node_base *)0x0) {
        while( true ) {
          p_Var10 = p_Var4;
          if (*(uint *)(p_Var10 + 0x20) <= (uint)uVar9) break;
          p_Var4 = *(__tree_node_base **)p_Var10;
          p_Var14 = p_Var10;
          if (*(__tree_node_base **)p_Var10 == (__tree_node_base *)0x0) {
            lVar6 = *(long *)p_Var10;
            goto joined_r0x00f17744;
          }
        }
        if ((uint)uVar9 <= *(uint *)(p_Var10 + 0x20)) break;
        p_Var14 = p_Var10 + 8;
        p_Var4 = *(__tree_node_base **)p_Var14;
      }
      lVar6 = *(long *)p_Var14;
joined_r0x00f17744:
      if (lVar6 == 0) {
        p_Var4 = operator_new(0x28);
        *(ulong *)(p_Var4 + 0x20) = uVar9;
        *(undefined8 *)p_Var4 = 0;
        *(undefined8 *)(p_Var4 + 8) = 0;
        *(__tree_node_base **)(p_Var4 + 0x10) = p_Var10;
        *(__tree_node_base **)p_Var14 = p_Var4;
        if (*(__tree_node_base **)local_80 != (__tree_node_base *)0x0) {
          p_Var4 = *(__tree_node_base **)p_Var14;
          local_80 = *(__tree_node_base **)local_80;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (local_78,p_Var4);
        local_70 = local_70 + 1;
        if ((int)uVar13 != 0) goto LAB_00f1774c;
LAB_00f1780c:
        NativeContext::SetOptimizedCodeListHead((NativeContext *)&local_68,uVar3);
      }
      else {
        if ((int)uVar13 == 0) goto LAB_00f1780c;
LAB_00f1774c:
        uVar1 = *(uint *)(uVar13 + 0xf);
        uVar5 = uVar13 & 0xffffffff00000000 | (ulong)uVar1;
        *(uint *)(uVar5 + 3) = uVar2;
        if ((uVar2 & 1) != 0) {
          uVar7 = uVar12 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar11 = *(ulong *)(uVar7 + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar3);
            uVar11 = *(ulong *)(uVar7 | 8);
          }
          if (((uVar11 & 0x18) != 0) &&
             ((*(byte *)((uVar13 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000) + 8) &
              0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar3);
          }
        }
      }
      uVar5 = NativeContext::DeoptimizedCodeListHead((NativeContext *)&local_68);
      uVar1 = *(uint *)(uVar9 + 0xf);
      uVar11 = uVar12 | uVar1;
      *(int *)(uVar11 + 3) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar7 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar11,uVar11 + 3,uVar5);
          uVar7 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) &&
           ((*(byte *)((uVar12 | (ulong)uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar11,uVar11 + 3,uVar5);
        }
      }
      NativeContext::SetDeoptimizedCodeListHead((NativeContext *)&local_68,uVar9);
      uVar9 = uVar3;
    } while ((uVar2 & 1) == 0);
  } while( true );
}

