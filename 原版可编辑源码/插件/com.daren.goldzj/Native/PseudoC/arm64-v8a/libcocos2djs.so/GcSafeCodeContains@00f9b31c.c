
/* v8::internal::Heap::GcSafeCodeContains(v8::internal::Code, unsigned long) */

bool __thiscall v8::internal::Heap::GcSafeCodeContains(Heap *this,ulong param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  ulong local_18;
  
  puVar3 = (uint *)(param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
  if ((*(uint *)(param_2 - 1) & 1) == 0) {
    puVar3 = (uint *)((long)puVar3 + 1U & 0xffffffff00000000 | (ulong)*puVar3);
  }
  local_18 = param_2;
  iVar2 = InstructionStream::TryLookupCode((Isolate *)(this + -0x8850),param_3);
  if (iVar2 == (int)param_2) {
    bVar1 = true;
  }
  else {
    iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_18,puVar3);
    bVar1 = param_2 - 1 <= param_3 && param_3 < (param_2 - 1) + (long)iVar2;
  }
  return bVar1;
}

