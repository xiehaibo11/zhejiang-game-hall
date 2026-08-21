
/* v8::internal::ObjectDeserializer::FlushICache() */

void __thiscall v8::internal::ObjectDeserializer::FlushICache(ObjectDeserializer *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 0xc0);
  for (plVar3 = *(long **)(this + 0xb8); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    Heap_WriteBarrierForCodeSlow(lVar2);
    FlushInstructionCache((void *)(lVar2 + 0x3f),(long)*(int *)(lVar2 + 0x13));
  }
  return;
}

