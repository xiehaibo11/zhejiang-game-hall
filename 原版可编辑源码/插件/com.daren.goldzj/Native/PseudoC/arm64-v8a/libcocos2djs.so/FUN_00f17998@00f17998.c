
void FUN_00f17998(long param_1,Isolate *param_2,ThreadLocalTop *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  __tree_node_base *p_Var4;
  undefined8 *puVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  long lVar9;
  __tree_node_base *p_Var10;
  ulong local_5f8 [3];
  int local_5e0;
  StackFrameIterator aSStack_5d8 [1416];
  StackFrame *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  v8::internal::StackFrameIterator::StackFrameIterator(aSStack_5d8,param_2,param_3);
  while (local_50 != (StackFrame *)0x0) {
    iVar3 = (**(code **)(*(long *)local_50 + 8))();
    if (((iVar3 == 4) &&
        (local_5f8[0] = v8::internal::StackFrame::LookupCode(local_50),
        (*(byte *)(local_5f8[0] + 0x17) & 0x3e) == 0)) &&
       ((*(uint *)((local_5f8[0] & 0xffffffff00000000 | (ulong)*(uint *)(local_5f8[0] + 0xf)) + 7) &
        1) != 0)) {
      puVar5 = *(undefined8 **)(param_1 + 8);
      p_Var7 = (__tree_node_base *)(puVar5 + 1);
      p_Var4 = *(__tree_node_base **)p_Var7;
      if (p_Var4 != (__tree_node_base *)0x0) {
        p_Var8 = p_Var4;
        p_Var10 = p_Var7;
        do {
          if (*(uint *)(p_Var8 + 0x20) >= (uint)local_5f8[0]) {
            p_Var10 = p_Var8;
          }
          p_Var8 = *(__tree_node_base **)
                    (p_Var8 + (ulong)(*(uint *)(p_Var8 + 0x20) < (uint)local_5f8[0]) * 8);
        } while (p_Var8 != (__tree_node_base *)0x0);
        if ((p_Var10 != p_Var7) && (*(uint *)(p_Var10 + 0x20) <= (uint)local_5f8[0])) {
          plVar2 = *(long **)(p_Var10 + 8);
          if (*(long **)(p_Var10 + 8) == (long *)0x0) {
            p_Var7 = p_Var10 + 0x10;
            plVar6 = *(long **)p_Var7;
            if ((__tree_node_base *)*plVar6 != p_Var10) {
              do {
                lVar9 = *(long *)p_Var7;
                p_Var7 = (__tree_node_base *)(lVar9 + 0x10);
                plVar6 = *(long **)p_Var7;
              } while (*plVar6 != lVar9);
            }
          }
          else {
            do {
              plVar6 = plVar2;
              plVar2 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          if ((__tree_node_base *)*puVar5 == p_Var10) {
            *puVar5 = plVar6;
          }
          puVar5[2] = puVar5[2] + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var4,p_Var10);
          operator_delete(p_Var10);
        }
      }
      v8::internal::Code::GetSafepointEntry((ulong)local_5f8);
      **(long **)(local_50 + 0x28) = (long)local_5e0 + local_5f8[0] + 0x3f;
    }
    v8::internal::StackFrameIterator::Advance(aSStack_5d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

