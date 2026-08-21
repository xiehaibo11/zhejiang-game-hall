
/* v8::internal::SamplingHeapProfiler::GetAllocationProfile() */

AllocationProfile * __thiscall
v8::internal::SamplingHeapProfiler::GetAllocationProfile(SamplingHeapProfiler *this)

{
  ulong uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  AllocationProfile *pAVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  int iVar7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  Sample *local_90;
  Sample *local_88;
  __tree_node_base *local_78;
  __tree_node_base *local_70;
  long local_68;
  
  if (((byte)this[0xe8] & 1) != 0) {
    Heap::CollectAllGarbage(*(long *)this + 0x8850,0,0x13,0);
  }
  local_70 = (__tree_node_base *)0x0;
  local_68 = 0;
  local_78 = (__tree_node_base *)&local_70;
  Script::Iterator::Iterator((Iterator *)&local_90,*(Isolate **)this);
  uVar1 = Script::Iterator::Next((Iterator *)&local_90);
  iVar7 = (int)uVar1;
  do {
    if (iVar7 == 0) {
      pAVar4 = operator_new(0x50);
      *(undefined8 *)(pAVar4 + 0x48) = 0;
      *(undefined8 *)(pAVar4 + 0x10) = 0;
      *(undefined8 *)(pAVar4 + 8) = 0;
      *(undefined8 *)(pAVar4 + 0x20) = 0;
      *(undefined8 *)(pAVar4 + 0x18) = 0;
      *(undefined8 *)(pAVar4 + 0x30) = 0;
      *(undefined8 *)(pAVar4 + 0x28) = 0;
      *(undefined ***)pAVar4 = &PTR_GetRootNode_01cb7828;
      *(undefined8 *)(pAVar4 + 0x40) = 0;
      *(undefined8 *)(pAVar4 + 0x38) = 0;
      TranslateAllocationNode(this,pAVar4,(AllocationNode *)(this + 0x60),(map *)&local_78);
      BuildSamples();
      std::__ndk1::
      vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>>::
      assign<v8::AllocationProfile::Sample*>
                ((vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>>
                  *)(pAVar4 + 0x38),local_90,local_88);
      if (local_90 != (Sample *)0x0) {
        local_88 = local_90;
        operator_delete(local_90);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
      ::destroy((__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                 *)&local_78,(__tree_node *)local_70);
      return pAVar4;
    }
    pIVar2 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar1;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar1);
    }
    iVar7 = *(int *)(uVar1 + 0x1f) >> 1;
    p_Var8 = (__tree_node_base *)&local_70;
    p_Var5 = (__tree_node_base *)&local_70;
    p_Var6 = local_70;
    while (p_Var6 != (__tree_node_base *)0x0) {
      while (p_Var9 = p_Var6, p_Var5 = p_Var9, iVar7 < *(int *)(p_Var9 + 0x20)) {
        p_Var8 = p_Var9;
        p_Var6 = *(__tree_node_base **)p_Var9;
        if (*(__tree_node_base **)p_Var9 == (__tree_node_base *)0x0) {
          p_Var8 = *(__tree_node_base **)p_Var9;
          if (p_Var8 != (__tree_node_base *)0x0) goto LAB_011b6a28;
          goto LAB_011b6ae0;
        }
      }
      if (iVar7 <= *(int *)(p_Var9 + 0x20)) break;
      p_Var8 = p_Var9 + 8;
      p_Var6 = *(__tree_node_base **)p_Var8;
    }
    p_Var9 = p_Var8;
    p_Var8 = *(__tree_node_base **)p_Var9;
    if (p_Var8 == (__tree_node_base *)0x0) {
LAB_011b6ae0:
      p_Var8 = operator_new(0x30);
      *(int *)(p_Var8 + 0x20) = iVar7;
      *(undefined8 *)(p_Var8 + 0x28) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(__tree_node_base **)(p_Var8 + 0x10) = p_Var5;
      *(__tree_node_base **)p_Var9 = p_Var8;
      p_Var5 = p_Var8;
      if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
        p_Var5 = *(__tree_node_base **)p_Var9;
        local_78 = *(__tree_node_base **)local_78;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (local_70,p_Var5);
      local_68 = local_68 + 1;
    }
LAB_011b6a28:
    *(ulong **)(p_Var8 + 0x28) = puVar3;
    uVar1 = Script::Iterator::Next((Iterator *)&local_90);
    iVar7 = (int)uVar1;
  } while( true );
}

