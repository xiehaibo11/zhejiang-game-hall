
/* v8::internal::Heap::NotifyObjectLayoutChange(v8::internal::HeapObject,
   v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0, false> const&,
   v8::internal::InvalidateRecordedSlots) */

void __thiscall
v8::internal::Heap::NotifyObjectLayoutChange
          (Heap *this,ulong param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  
  if (*(int *)(*(IncrementalMarking **)(this + 0x828) + 0x58) < 2) {
LAB_00f943a4:
    if (param_4 != 0) goto LAB_00f943ec;
  }
  else {
    IncrementalMarking::MarkBlackAndVisitObjectDueToLayoutChange
              (*(IncrementalMarking **)(this + 0x828),param_2);
    if (((*(int *)(*(long *)(this + 0x828) + 0x58) < 2) || (param_4 != 0)) ||
       (*(char *)(*(long *)(this + 0x828) + 0x5c) == '\0')) goto LAB_00f943a4;
    if (((((byte)((MemoryChunk *)(param_2 & 0xfffffffffffc0000))[8] & 0x18) == 0) &&
        (uVar1 = param_2 & 0xffffffff00000000 | 7,
        *(short *)(uVar1 + *(uint *)(param_2 - 1)) != 0x85)) &&
       (*(short *)(uVar1 + *(uint *)(param_2 - 1)) != 0x87)) {
      MemoryChunk::RegisterObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)1>
                ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),param_2);
    }
  }
  if (((((byte)((MemoryChunk *)(param_2 & 0xfffffffffffc0000))[8] & 0x18) == 0) &&
      (uVar1 = param_2 & 0xffffffff00000000 | 7, *(short *)(uVar1 + *(uint *)(param_2 - 1)) != 0x85)
      ) && (*(short *)(uVar1 + *(uint *)(param_2 - 1)) != 0x87)) {
    MemoryChunk::RegisterObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)0>
              ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),param_2);
  }
LAB_00f943ec:
  if (FLAG_verify_heap != '\0') {
    *(ulong *)(this + 0xb48) = param_2;
  }
  return;
}

