
/* v8::internal::AllocationTraceTree::AddPathFromEnd(v8::internal::Vector<unsigned int> const&) */

AllocationTraceTree * __thiscall
v8::internal::AllocationTraceTree::AddPathFromEnd(AllocationTraceTree *this,Vector *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  AllocationTraceTree *pAVar4;
  int *piVar5;
  AllocationTraceNode *local_38;
  
  local_38 = (AllocationTraceNode *)(this + 8);
  if (*(long *)(param_1 + 8) << 0x20 != 0) {
    piVar5 = (int *)(*(long *)param_1 + ((*(long *)(param_1 + 8) << 0x20) >> 0x1e));
    pAVar4 = (AllocationTraceTree *)local_38;
    do {
      piVar5 = piVar5 + -1;
      iVar1 = *piVar5;
      puVar2 = *(undefined8 **)(pAVar4 + 0x18);
      do {
        if (puVar2 == *(undefined8 **)(pAVar4 + 0x20)) goto LAB_0152bb9c;
        local_38 = (AllocationTraceNode *)*puVar2;
        puVar2 = puVar2 + 1;
      } while (*(int *)(local_38 + 8) != iVar1);
      if (local_38 == (AllocationTraceNode *)0x0) {
LAB_0152bb9c:
        local_38 = (AllocationTraceNode *)0x0;
        local_38 = operator_new(0x30);
        piVar3 = *(int **)pAVar4;
        *(int *)(local_38 + 8) = iVar1;
        *(undefined4 *)(local_38 + 0xc) = 0;
        *(undefined4 *)(local_38 + 0x10) = 0;
        *(int **)local_38 = piVar3;
        iVar1 = *piVar3;
        *piVar3 = iVar1 + 1;
        *(int *)(local_38 + 0x14) = iVar1;
        *(undefined8 *)(local_38 + 0x20) = 0;
        *(undefined8 *)(local_38 + 0x28) = 0;
        *(undefined8 *)(local_38 + 0x18) = 0;
        if (*(undefined8 **)(pAVar4 + 0x20) == *(undefined8 **)(pAVar4 + 0x28)) {
          std::__ndk1::
          vector<v8::internal::AllocationTraceNode*,std::__ndk1::allocator<v8::internal::AllocationTraceNode*>>
          ::__push_back_slow_path<v8::internal::AllocationTraceNode*const&>
                    ((vector<v8::internal::AllocationTraceNode*,std::__ndk1::allocator<v8::internal::AllocationTraceNode*>>
                      *)(pAVar4 + 0x18),&local_38);
        }
        else {
          **(undefined8 **)(pAVar4 + 0x20) = local_38;
          *(long *)(pAVar4 + 0x20) = *(long *)(pAVar4 + 0x20) + 8;
        }
      }
      pAVar4 = (AllocationTraceTree *)local_38;
    } while (piVar5 != *(int **)param_1);
  }
  return (AllocationTraceTree *)local_38;
}

