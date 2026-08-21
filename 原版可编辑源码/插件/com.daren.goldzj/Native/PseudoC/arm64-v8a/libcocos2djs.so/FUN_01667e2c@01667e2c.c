
void FUN_01667e2c(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  *param_1,undefined8 *param_2)

{
  bool bVar1;
  Zone *this;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var5;
  __tree_node_base *p_Var6;
  long *plVar7;
  undefined8 local_28;
  
  this = (Zone *)param_2[2];
  p_Var5 = param_1 + 8;
  *(undefined8 *)p_Var5 = 0;
  *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
    **)param_1 = p_Var5;
  *(Zone **)(param_1 + 0x10) = this;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar7 = (long *)*param_2;
  if (plVar7 != param_2 + 1) {
    while( true ) {
      p_Var6 = *(__tree_node_base **)(this + 0x10);
      if ((ulong)(*(long *)(this + 0x18) - (long)p_Var6) < 0x28) {
        p_Var6 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x28);
      }
      else {
        *(__tree_node_base **)(this + 0x10) = p_Var6 + 0x28;
      }
      *(long *)(p_Var6 + 0x20) = plVar7[4];
      puVar2 = (undefined8 *)
               std::__ndk1::
               __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               ::__find_leaf(param_1,p_Var5,&local_28);
      *(undefined8 *)p_Var6 = 0;
      *(undefined8 *)(p_Var6 + 8) = 0;
      *(undefined8 *)(p_Var6 + 0x10) = local_28;
      *puVar2 = p_Var6;
      if (**(long **)param_1 != 0) {
        *(long *)param_1 = **(long **)param_1;
        p_Var6 = (__tree_node_base *)*puVar2;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 8),p_Var6);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      plVar3 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar3 = plVar7 + 2;
        bVar1 = *(long **)*plVar3 != plVar7;
        plVar7 = (long *)*plVar3;
        if (bVar1) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar7 = (long *)*plVar3;
          } while (*plVar7 != lVar4);
        }
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 == param_2 + 1) break;
      this = *(Zone **)(param_1 + 0x10);
    }
  }
  return;
}

