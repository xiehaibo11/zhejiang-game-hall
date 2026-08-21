
/* v8::internal::Heap::GcSafeMapOfCodeSpaceObject(v8::internal::HeapObject) */

uint * __thiscall v8::internal::Heap::GcSafeMapOfCodeSpaceObject(undefined8 param_1,ulong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
  if ((*(uint *)(param_2 - 1) & 1) == 0) {
    puVar1 = (uint *)((long)puVar1 + 1U & 0xffffffff00000000 | (ulong)*puVar1);
  }
  return puVar1;
}

