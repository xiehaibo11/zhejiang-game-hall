
/* v8::internal::IncrementalMarking::ProcessBlackAllocatedObject(v8::internal::HeapObject) */

void __thiscall
v8::internal::IncrementalMarking::ProcessBlackAllocatedObject
          (IncrementalMarking *this,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  
  if (1 < *(int *)(this + 0x58)) {
    uVar4 = param_2 - (param_2 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) +
                     (uVar4 >> 7 & 0x1ffffff) * 4);
    uVar2 = 1 << (ulong)((uint)(uVar4 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) != 0) {
      uVar2 = uVar2 << 1;
      bVar3 = uVar2 == 0;
      if (bVar3) {
        uVar2 = 1;
      }
      if ((puVar1[bVar3] & uVar2) != 0) {
        MarkCompactCollector::RevisitObject(*(MarkCompactCollector **)(this + 8));
        return;
      }
    }
  }
  return;
}

