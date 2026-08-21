
/* v8::internal::SamplingHeapProfiler::SampleObject(unsigned long, unsigned long) */

void __thiscall
v8::internal::SamplingHeapProfiler::SampleObject
          (SamplingHeapProfiler *this,ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long *plVar6;
  Sample *pSVar7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  long lVar10;
  Isolate *pIVar11;
  __tree_node_base *p_Var12;
  long *plVar13;
  long *plVar14;
  Sample *local_70;
  Sample *local_68;
  
  pIVar11 = *(Isolate **)this;
  uVar1 = *(undefined8 *)(pIVar11 + 0x95a0);
  lVar2 = *(long *)(pIVar11 + 0x95a8);
  *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + 1;
  pIVar4 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = param_1 + 1;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),param_1 + 1);
  }
  Heap::CreateFillerObjectAt(*(Heap **)(this + 8),param_1,param_2 & 0xffffffff,1,1);
  plVar6 = (long *)AddStack(this);
  plVar13 = plVar6 + 1;
  plVar14 = plVar13;
  if ((long *)*plVar13 != (long *)0x0) {
    plVar3 = (long *)*plVar13;
    plVar14 = plVar6 + 1;
    do {
      while (plVar13 = plVar3, param_2 < (ulong)plVar13[4]) {
        plVar3 = (long *)*plVar13;
        plVar14 = plVar13;
        if ((long *)*plVar13 == (long *)0x0) {
          p_Var12 = (__tree_node_base *)*plVar13;
          goto joined_r0x011b5ab0;
        }
      }
      if (param_2 <= (ulong)plVar13[4]) break;
      plVar14 = plVar13 + 1;
      plVar3 = (long *)*plVar14;
    } while ((long *)*plVar14 != (long *)0x0);
  }
  p_Var12 = (__tree_node_base *)*plVar14;
joined_r0x011b5ab0:
  if (p_Var12 == (__tree_node_base *)0x0) {
    p_Var12 = operator_new(0x30);
    *(ulong *)(p_Var12 + 0x20) = param_2;
    *(undefined4 *)(p_Var12 + 0x28) = 0;
    *(undefined8 *)p_Var12 = 0;
    *(undefined8 *)(p_Var12 + 8) = 0;
    *(long **)(p_Var12 + 0x10) = plVar13;
    *plVar14 = (long)p_Var12;
    p_Var9 = p_Var12;
    if (*(long *)*plVar6 != 0) {
      *plVar6 = *(long *)*plVar6;
      p_Var9 = (__tree_node_base *)*plVar14;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar6[1],p_Var9);
    plVar6[2] = plVar6[2] + 1;
  }
  *(int *)(p_Var12 + 0x28) = *(int *)(p_Var12 + 0x28) + 1;
  lVar10 = *(long *)(this + 0x10);
  *(ulong *)(this + 0x10) = lVar10 + 1U;
  pSVar7 = operator_new(0x28);
  *(ulong *)pSVar7 = param_2;
  *(long **)(pSVar7 + 8) = plVar6;
  if (puVar5 == (ulong *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = v8::V8::GlobalizeReference(*(Isolate **)this,puVar5);
  }
  *(ulong *)(pSVar7 + 0x10) = uVar8;
  *(SamplingHeapProfiler **)(pSVar7 + 0x18) = this;
  *(ulong *)(pSVar7 + 0x20) = lVar10 + 1U;
  local_68 = pSVar7;
  v8::V8::MakeWeak(uVar8,pSVar7,OnWeakCallback,0);
  local_70 = pSVar7;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::__unordered_map_hasher<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::hash<v8::internal::SamplingHeapProfiler::Sample*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::equal_to<v8::internal::SamplingHeapProfiler::Sample*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>>>
  ::
  __emplace_unique_key_args<v8::internal::SamplingHeapProfiler::Sample*,v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>
            ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::__unordered_map_hasher<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::hash<v8::internal::SamplingHeapProfiler::Sample*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::equal_to<v8::internal::SamplingHeapProfiler::Sample*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>>>
              *)(this + 0xb0),&local_70,&local_70,(unique_ptr *)&local_68);
  pSVar7 = local_68;
  local_68 = (Sample *)0x0;
  if (pSVar7 != (Sample *)0x0) {
    if (*(ulong **)(pSVar7 + 0x10) != (ulong *)0x0) {
      v8::V8::DisposeGlobal(*(ulong **)(pSVar7 + 0x10));
    }
    operator_delete(pSVar7);
  }
  if (pIVar11 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar11 + 0x95a0) = uVar1;
    *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + -1;
    if (*(long *)(pIVar11 + 0x95a8) != lVar2) {
      *(long *)(pIVar11 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar11);
    }
  }
  return;
}

