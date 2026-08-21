
/* v8::internal::Heap::MoveRange(v8::internal::HeapObject, v8::internal::CompressedObjectSlot,
   v8::internal::CompressedObjectSlot, int, v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::Heap::MoveRange
          (Heap *this,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,uint param_5,
          int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  uVar4 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
  puVar1 = (undefined4 *)(uVar4 + (long)param_3);
  if ((FLAG_concurrent_marking == '\0') || (*(int *)(*(long *)(this + 0x828) + 0x58) < 2)) {
    MemMove(param_3,param_4,(long)(int)(param_5 << 2));
  }
  else {
    puVar2 = param_3;
    if (param_3 < param_4) {
      for (; puVar2 < puVar1; puVar2 = puVar2 + 1) {
        *puVar2 = *param_4;
        param_4 = param_4 + 1;
      }
    }
    else if (param_3 <= puVar1 + -1) {
      param_4 = (undefined4 *)((long)param_4 + uVar4);
      puVar2 = puVar1 + -1;
      do {
        param_4 = param_4 + -1;
        puVar3 = puVar2 + -1;
        *puVar2 = *param_4;
        puVar2 = puVar3;
      } while (param_3 <= puVar3);
    }
  }
  if (param_6 == 0) {
    return;
  }
  WriteBarrierForRange<v8::internal::CompressedObjectSlot>(this,param_2,param_3,puVar1);
  return;
}

