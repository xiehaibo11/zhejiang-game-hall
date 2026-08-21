
/* v8::internal::TranslationBuffer::CreateByteArray(v8::internal::Factory*) */

long * __thiscall
v8::internal::TranslationBuffer::CreateByteArray(TranslationBuffer *this,Factory *param_1)

{
  uint *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  plVar2 = (long *)Factory::NewByteArray(param_1,*(undefined4 *)(this + 8),1);
  lVar4 = *(long *)(this + 0x10);
  if (lVar4 != 0) {
    pvVar3 = (void *)(*plVar2 + 7);
    do {
      MemCopy(pvVar3,(void *)(lVar4 + 0x18),(ulong)*(uint *)(lVar4 + 4));
      puVar1 = (uint *)(lVar4 + 4);
      lVar4 = *(long *)(lVar4 + 8);
      pvVar3 = (void *)((long)pvVar3 + (ulong)*puVar1);
    } while (lVar4 != 0);
  }
  return plVar2;
}

