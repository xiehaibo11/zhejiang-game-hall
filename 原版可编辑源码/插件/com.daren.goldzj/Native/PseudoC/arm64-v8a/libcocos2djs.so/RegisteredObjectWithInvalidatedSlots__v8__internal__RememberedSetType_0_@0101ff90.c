
/* bool 
   v8::internal::MemoryChunk::RegisteredObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)0>(v8::internal::HeapObject)
    */

bool __thiscall
v8::internal::MemoryChunk::RegisteredObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)0>
          (MemoryChunk *this,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(long *)(this + 0x88) == 0) {
    return false;
  }
  plVar1 = (long *)(*(long *)(this + 0x88) + 8);
  plVar3 = (long *)*plVar1;
  plVar2 = plVar1;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= param_2) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar1) && (*(uint *)(plVar2 + 4) <= param_2)) goto LAB_0101ffd4;
  }
  plVar2 = plVar1;
LAB_0101ffd4:
  return plVar2 != plVar1;
}

