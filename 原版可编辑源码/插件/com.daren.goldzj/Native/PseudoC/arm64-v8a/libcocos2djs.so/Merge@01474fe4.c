
/* v8::base::RegionAllocator::Merge(std::__ndk1::__tree_const_iterator<v8::base::RegionAllocator::Region*,
   std::__ndk1::__tree_node<v8::base::RegionAllocator::Region*, void*>*, long>,
   std::__ndk1::__tree_const_iterator<v8::base::RegionAllocator::Region*,
   std::__ndk1::__tree_node<v8::base::RegionAllocator::Region*, void*>*, long>) */

void __thiscall
v8::base::RegionAllocator::Merge(RegionAllocator *this,long param_2,__tree_node_base *param_3)

{
  long *plVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_3 + 0x20);
  *(long *)(*(long *)(param_2 + 0x20) + 8) =
       *(long *)((long)pvVar5 + 8) + *(long *)(*(long *)(param_2 + 0x20) + 8);
  plVar1 = *(long **)(param_3 + 8);
  if (*(long **)(param_3 + 8) == (long *)0x0) {
    p_Var3 = param_3 + 0x10;
    plVar2 = *(long **)p_Var3;
    if ((__tree_node_base *)*plVar2 != param_3) {
      do {
        lVar4 = *(long *)p_Var3;
        p_Var3 = (__tree_node_base *)(lVar4 + 0x10);
        plVar2 = *(long **)p_Var3;
      } while (*plVar2 != lVar4);
    }
  }
  else {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  if (*(__tree_node_base **)(this + 0x38) == param_3) {
    *(long **)(this + 0x38) = plVar2;
  }
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x40),param_3);
  operator_delete(param_3);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar5);
  return;
}

