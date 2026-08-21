
/* v8::internal::compiler::LinearScanAllocator::UpdateDeferredFixedRanges(v8::internal::compiler::RegisterAllocationData::SpillMode,
   v8::internal::compiler::InstructionBlock*) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::UpdateDeferredFixedRanges
          (LinearScanAllocator *this,int param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  __tree_node_base *p_Var7;
  long *plVar8;
  __tree_node_base *p_Var9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  LinearScanAllocator *local_48;
  int local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_2 == 1) {
    lVar6 = *(long *)this;
    plVar8 = *(long **)(*(long *)(lVar6 + 0x10) + 0x10);
    lVar12 = *plVar8;
    uVar11 = plVar8[1] - lVar12;
    do {
      lVar10 = param_3;
      iVar3 = *(int *)(lVar10 + 100);
      if ((int)(uVar11 >> 3) + -1 <= iVar3) break;
      uVar1 = (long)iVar3 + 1;
      if ((ulong)((long)uVar11 >> 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_3 = *(long *)(lVar12 + uVar1 * 8);
    } while (*(char *)(param_3 + 0x78) != '\0');
    local_40 = *(int *)(lVar10 + 0x74) * 4 + -2;
    local_48 = this;
    if (*(int *)(this + 8) == 0) {
      plVar2 = *(long **)(lVar6 + 0xb0);
      for (plVar8 = *(long **)(lVar6 + 0xa8); plVar8 != plVar2; plVar8 = plVar8 + 1) {
        if ((*plVar8 != 0) && ((*(byte *)(*plVar8 + 7) >> 4 & 1) != 0)) {
          FUN_01661484(&local_48);
        }
      }
    }
    else {
      plVar2 = *(long **)(lVar6 + 0xf0);
      for (plVar8 = *(long **)(lVar6 + 0xe8); plVar8 != plVar2; plVar8 = plVar8 + 1) {
        if ((*plVar8 != 0) && ((*(byte *)(*plVar8 + 7) >> 4 & 1) != 0)) {
          FUN_01661484(&local_48);
        }
      }
    }
  }
  else if (0 < *(int *)(this + 0xc)) {
    lVar6 = *(long *)(this + 0x68);
    lVar12 = 0;
    do {
      plVar8 = (long *)(lVar6 + lVar12 * 0x20);
      p_Var5 = (__tree_node_base *)*plVar8;
      if ((__tree_node_base *)(plVar8 + 1) != p_Var5) {
        do {
          if ((*(byte *)(*(long *)(*(long *)(p_Var5 + 0x20) + 0x20) + 7) >> 4 & 1) == 0) {
            p_Var7 = *(__tree_node_base **)(p_Var5 + 8);
            if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) {
              p_Var7 = p_Var5 + 0x10;
              p_Var9 = *(__tree_node_base **)p_Var7;
              if (*(__tree_node_base **)p_Var9 != p_Var5) {
                do {
                  lVar10 = *(long *)p_Var7;
                  p_Var7 = (__tree_node_base *)(lVar10 + 0x10);
                  p_Var9 = *(__tree_node_base **)p_Var7;
                } while (*(long *)p_Var9 != lVar10);
              }
            }
            else {
              do {
                p_Var9 = p_Var7;
                p_Var7 = *(__tree_node_base **)p_Var9;
              } while (*(__tree_node_base **)p_Var9 != (__tree_node_base *)0x0);
            }
          }
          else {
            plVar8 = (long *)(lVar6 + lVar12 * 0x20);
            p_Var7 = *(__tree_node_base **)(p_Var5 + 8);
            if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) {
              p_Var7 = p_Var5 + 0x10;
              p_Var9 = *(__tree_node_base **)p_Var7;
              if (*(__tree_node_base **)p_Var9 != p_Var5) {
                do {
                  lVar10 = *(long *)p_Var7;
                  p_Var7 = (__tree_node_base *)(lVar10 + 0x10);
                  p_Var9 = *(__tree_node_base **)p_Var7;
                } while (*(long *)p_Var9 != lVar10);
              }
            }
            else {
              do {
                p_Var9 = p_Var7;
                p_Var7 = *(__tree_node_base **)p_Var9;
              } while (*(__tree_node_base **)p_Var9 != (__tree_node_base *)0x0);
            }
            if ((__tree_node_base *)*plVar8 == p_Var5) {
              *plVar8 = (long)p_Var9;
            }
            lVar6 = lVar6 + lVar12 * 0x20;
            *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(lVar6 + 8),p_Var5);
            lVar6 = *(long *)(this + 0x68);
          }
          p_Var5 = p_Var9;
        } while ((__tree_node_base *)(lVar6 + lVar12 * 0x20 + 8) != p_Var9);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(this + 0xc));
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

