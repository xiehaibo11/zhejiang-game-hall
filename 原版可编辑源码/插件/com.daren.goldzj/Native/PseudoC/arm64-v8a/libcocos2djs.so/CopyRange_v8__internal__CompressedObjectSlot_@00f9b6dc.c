
/* void v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot, int,
   v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
          (Heap *this,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
          int param_6)

{
  undefined4 *puVar1;
  
  if ((FLAG_concurrent_marking == '\0') ||
     (puVar1 = param_3, *(int *)(*(long *)(this + 0x828) + 0x58) < 2)) {
    MemCopy(param_3,param_4,(long)(param_5 << 2));
  }
  else {
    for (; puVar1 < param_3 + param_5; puVar1 = puVar1 + 1) {
      *puVar1 = *param_4;
      param_4 = param_4 + 1;
    }
  }
  if (param_6 == 0) {
    return;
  }
  WriteBarrierForRange<v8::internal::CompressedObjectSlot>(this,param_2,param_3,param_3 + param_5);
  return;
}

