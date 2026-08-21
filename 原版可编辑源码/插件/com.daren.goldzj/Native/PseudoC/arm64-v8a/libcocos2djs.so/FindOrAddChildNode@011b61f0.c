
/* v8::internal::SamplingHeapProfiler::FindOrAddChildNode(v8::internal::SamplingHeapProfiler::AllocationNode*,
   char const*, int, int) */

long __thiscall
v8::internal::SamplingHeapProfiler::FindOrAddChildNode
          (SamplingHeapProfiler *this,AllocationNode *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  *this_00;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long lVar4;
  AllocationNode *pAVar5;
  AllocationNode *pAVar6;
  ulong uVar7;
  AllocationNode *pAVar8;
  
  if (param_3 == 0) {
    uVar7 = (ulong)param_2 | 1;
  }
  else {
    uVar7 = ((ulong)(uint)param_3 << 0x20) + (long)(param_4 << 1);
  }
  pAVar8 = param_1 + 0x20;
  pAVar5 = *(AllocationNode **)pAVar8;
  pAVar6 = pAVar8;
  if (pAVar5 != (AllocationNode *)0x0) {
    do {
      if (*(ulong *)(pAVar5 + 0x20) >= uVar7) {
        pAVar6 = pAVar5;
      }
      pAVar5 = *(AllocationNode **)(pAVar5 + (ulong)(*(ulong *)(pAVar5 + 0x20) < uVar7) * 8);
    } while (pAVar5 != (AllocationNode *)0x0);
    if (((pAVar6 != pAVar8) && (*(ulong *)(pAVar6 + 0x20) <= uVar7)) &&
       (*(long *)(pAVar6 + 0x28) != 0)) {
      return *(long *)(pAVar6 + 0x28);
    }
  }
  iVar1 = *(int *)(this + 0x18);
  *(int *)(this + 0x18) = iVar1 + 1;
  this_00 = operator_new(0x50);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
    **)this_00 = this_00 + 8;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
    **)(this_00 + 0x18) = this_00 + 0x20;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(AllocationNode **)(this_00 + 0x30) = param_1;
  *(int *)(this_00 + 0x38) = param_3;
  *(int *)(this_00 + 0x3c) = param_4;
  *(char **)(this_00 + 0x40) = param_2;
  *(int *)(this_00 + 0x48) = iVar1 + 1;
  this_00[0x4c] =
       (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
        )0x0;
  if (*(AllocationNode **)(param_1 + 0x20) == (AllocationNode *)0x0) {
    lVar4 = *(long *)pAVar8;
    pAVar6 = pAVar8;
  }
  else {
    pAVar5 = *(AllocationNode **)(param_1 + 0x20);
    pAVar6 = param_1 + 0x20;
LAB_011b62d0:
    do {
      pAVar8 = pAVar5;
      if (*(ulong *)(pAVar8 + 0x20) <= uVar7) {
        if (*(ulong *)(pAVar8 + 0x20) < uVar7) {
          pAVar6 = pAVar8 + 8;
          pAVar5 = *(AllocationNode **)pAVar6;
          if (*(AllocationNode **)pAVar6 != (AllocationNode *)0x0) goto LAB_011b62d0;
        }
        lVar4 = *(long *)pAVar6;
        goto joined_r0x011b6378;
      }
      pAVar5 = *(AllocationNode **)pAVar8;
      pAVar6 = pAVar8;
    } while (*(AllocationNode **)pAVar8 != (AllocationNode *)0x0);
    lVar4 = *(long *)pAVar8;
  }
joined_r0x011b6378:
  if (lVar4 == 0) {
    p_Var2 = operator_new(0x30);
    *(ulong *)(p_Var2 + 0x20) = uVar7;
    *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
      **)(p_Var2 + 0x28) = this_00;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(AllocationNode **)(p_Var2 + 0x10) = pAVar8;
    *(__tree_node_base **)pAVar6 = p_Var2;
    p_Var3 = p_Var2;
    if (**(long **)(param_1 + 0x18) != 0) {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      p_Var3 = *(__tree_node_base **)pAVar6;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x20),p_Var3);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    lVar4 = *(long *)(p_Var2 + 0x28);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x28);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
               *)(this_00 + 0x18),(__tree_node *)0x0);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
    ::destroy(this_00,*(__tree_node **)(this_00 + 8));
    operator_delete(this_00);
  }
  return lVar4;
}

