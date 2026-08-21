
/* v8::internal::compiler::LinearScanAllocator::AddToUnhandled(v8::internal::compiler::LiveRange*)
    */

void __thiscall
v8::internal::compiler::LinearScanAllocator::AddToUnhandled
          (LinearScanAllocator *this,LiveRange *param_1)

{
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *this_00;
  Zone *this_01;
  undefined8 *puVar1;
  __tree_node_base *p_Var2;
  __tree_end_node *local_38;
  
  if ((param_1 != (LiveRange *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Add live range %d:%d to unhandled\n",
             (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),(ulong)*(uint *)param_1);
    }
    this_01 = *(Zone **)(this + 0x38);
    this_00 = (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               *)(this + 0x28);
    p_Var2 = *(__tree_node_base **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)p_Var2) < 0x28) {
      p_Var2 = (__tree_node_base *)Zone::NewExpand(this_01,0x28);
    }
    else {
      *(__tree_node_base **)(this_01 + 0x10) = p_Var2 + 0x28;
    }
    *(LiveRange **)(p_Var2 + 0x20) = param_1;
    puVar1 = (undefined8 *)
             std::__ndk1::
             __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             ::__find_leaf_high(this_00,&local_38,(LiveRange **)(p_Var2 + 0x20));
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(__tree_end_node **)(p_Var2 + 0x10) = local_38;
    *puVar1 = p_Var2;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var2 = (__tree_node_base *)*puVar1;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var2);
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
  }
  return;
}

