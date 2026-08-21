
/* v8::internal::compiler::LinearScanAllocator::MaybeUndoPreviousSplit(v8::internal::compiler::LiveRange*)
    */

void __thiscall
v8::internal::compiler::LinearScanAllocator::MaybeUndoPreviousSplit
          (LinearScanAllocator *this,LiveRange *param_1)

{
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *this_00;
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  long lVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long lVar6;
  undefined1 auVar7 [16];
  LiveRange *local_28;
  
  local_28 = *(LiveRange **)(param_1 + 0x28);
  if (local_28 != (LiveRange *)0x0) {
    if (((byte)local_28[6] >> 5 & 1) == 0) {
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        PrintF("No recombine for %d:%d to %d\n",(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),
               (ulong)*(uint *)param_1,(ulong)*(uint *)local_28);
        return;
      }
    }
    else {
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        PrintF("Recombining %d:%d with %d\n",(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),
               (ulong)*(uint *)param_1,(ulong)*(uint *)local_28);
      }
      this_00 = (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 *)(this + 0x28);
      auVar7 = std::__ndk1::
               __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               ::__equal_range_multi<v8::internal::compiler::LiveRange*>(this_00,&local_28);
      p_Var1 = auVar7._0_8_;
      if (p_Var1 != auVar7._8_8_) {
        p_Var5 = *(__tree_node_base **)(p_Var1 + 8);
        if (*(__tree_node_base **)(p_Var1 + 8) != (__tree_node_base *)0x0) goto LAB_0165e2f0;
        do {
          p_Var5 = p_Var1 + 0x10;
          p_Var2 = p_Var1;
          p_Var4 = *(__tree_node_base **)p_Var5;
          if (*(__tree_node_base **)*(__tree_node_base **)p_Var5 != p_Var1) {
            do {
              lVar6 = *(long *)p_Var5;
              p_Var5 = (__tree_node_base *)(lVar6 + 0x10);
              p_Var4 = *(__tree_node_base **)p_Var5;
            } while (*(long *)*(__tree_node_base **)p_Var5 != lVar6);
          }
          while( true ) {
            p_Var1 = p_Var4;
            if (*(__tree_node_base **)this_00 == p_Var2) {
              *(__tree_node_base **)this_00 = p_Var1;
            }
            *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x30),p_Var2);
            if (p_Var1 == auVar7._8_8_) goto LAB_0165e340;
            p_Var5 = *(__tree_node_base **)(p_Var1 + 8);
            if (*(__tree_node_base **)(p_Var1 + 8) == (__tree_node_base *)0x0) break;
LAB_0165e2f0:
            do {
              p_Var4 = p_Var5;
              p_Var5 = *(__tree_node_base **)p_Var4;
              p_Var2 = p_Var1;
            } while (p_Var5 != (__tree_node_base *)0x0);
          }
        } while( true );
      }
LAB_0165e340:
      *(undefined8 *)(*(long *)(param_1 + 8) + 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = 0;
      lVar6 = *(long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x18) == 0) {
        lVar6 = *(long *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
      }
      else {
        do {
          lVar3 = lVar6;
          lVar6 = *(long *)(lVar3 + 0x10);
        } while (lVar6 != 0);
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
        lVar6 = *(long *)(param_1 + 0x28);
      }
      *(undefined8 *)(lVar6 + 0x18) = 0;
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = 0;
    }
  }
  return;
}

