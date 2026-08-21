
/* v8::internal::compiler::LinearScanAllocator::InactiveToHandled(std::__ndk1::__tree_const_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long>) */

long * __thiscall
v8::internal::compiler::LinearScanAllocator::InactiveToHandled
          (LinearScanAllocator *this,__tree_node_base *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  
  puVar8 = *(uint **)(param_2 + 0x20);
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Moving live range %d:%d from inactive to handled\n",
           (ulong)*(uint *)(*(long *)(puVar8 + 8) + 0x5c),(ulong)*puVar8);
  }
  lVar3 = *(long *)(this + 0x68);
  uVar4 = (ulong)(puVar8[1] >> 7) & 0x3f;
  puVar1 = (undefined8 *)(lVar3 + uVar4 * 0x20);
  plVar2 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var5 = param_2 + 0x10;
    plVar7 = *(long **)p_Var5;
    if ((__tree_node_base *)*plVar7 != param_2) {
      do {
        lVar6 = *(long *)p_Var5;
        p_Var5 = (__tree_node_base *)(lVar6 + 0x10);
        plVar7 = *(long **)p_Var5;
      } while (*plVar7 != lVar6);
    }
  }
  else {
    do {
      plVar7 = plVar2;
      plVar2 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
  if ((__tree_node_base *)*puVar1 == param_2) {
    *puVar1 = plVar7;
  }
  lVar3 = lVar3 + uVar4 * 0x20;
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(lVar3 + 8),param_2);
  return plVar7;
}

