
/* v8::internal::AllocationTraceNode::FindOrAddChild(unsigned int) */

AllocationTraceNode * __thiscall
v8::internal::AllocationTraceNode::FindOrAddChild(AllocationTraceNode *this,uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  AllocationTraceNode *local_28;
  
  puVar2 = *(undefined8 **)(this + 0x18);
  do {
    if (puVar2 == *(undefined8 **)(this + 0x20)) goto LAB_0152b9b4;
    local_28 = (AllocationTraceNode *)*puVar2;
    puVar2 = puVar2 + 1;
  } while (*(uint *)(local_28 + 8) != param_1);
  if (local_28 == (AllocationTraceNode *)0x0) {
LAB_0152b9b4:
    local_28 = (AllocationTraceNode *)0x0;
    local_28 = operator_new(0x30);
    piVar3 = *(int **)this;
    *(uint *)(local_28 + 8) = param_1;
    *(undefined4 *)(local_28 + 0xc) = 0;
    *(undefined4 *)(local_28 + 0x10) = 0;
    *(int **)local_28 = piVar3;
    iVar1 = *piVar3;
    *piVar3 = iVar1 + 1;
    *(int *)(local_28 + 0x14) = iVar1;
    *(undefined8 *)(local_28 + 0x20) = 0;
    *(undefined8 *)(local_28 + 0x28) = 0;
    *(undefined8 *)(local_28 + 0x18) = 0;
    if (*(undefined8 **)(this + 0x20) == *(undefined8 **)(this + 0x28)) {
      std::__ndk1::
      vector<v8::internal::AllocationTraceNode*,std::__ndk1::allocator<v8::internal::AllocationTraceNode*>>
      ::__push_back_slow_path<v8::internal::AllocationTraceNode*const&>
                ((vector<v8::internal::AllocationTraceNode*,std::__ndk1::allocator<v8::internal::AllocationTraceNode*>>
                  *)(this + 0x18),&local_28);
    }
    else {
      **(undefined8 **)(this + 0x20) = local_28;
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
    }
  }
  return local_28;
}

