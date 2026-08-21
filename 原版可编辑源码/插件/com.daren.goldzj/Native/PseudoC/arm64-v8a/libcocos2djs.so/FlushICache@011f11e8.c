
/* v8::internal::StartupDeserializer::FlushICache() */

void __thiscall v8::internal::StartupDeserializer::FlushICache(StartupDeserializer *this)

{
  long lVar1;
  
  for (lVar1 = *(long *)(*(long *)(*(long *)(this + 0x50) + 0x8948) + 0x20); lVar1 != 0;
      lVar1 = *(long *)(lVar1 + 0xe0)) {
    FlushInstructionCache
              (*(void **)(lVar1 + 0x20),*(long *)(lVar1 + 0x28) - (long)*(void **)(lVar1 + 0x20));
  }
  return;
}

