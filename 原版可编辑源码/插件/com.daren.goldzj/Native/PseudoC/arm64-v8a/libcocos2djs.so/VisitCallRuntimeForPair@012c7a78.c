
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallRuntimeForPair(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallRuntimeForPair
               (BytecodeArrayIterator *param_1)

{
  void *__s;
  void *pvVar1;
  
  __s = *(void **)(*(long *)(param_1 + 0x28) + 0x30);
  pvVar1 = *(void **)(*(long *)(param_1 + 0x28) + 0x38);
  if (__s != pvVar1) {
    memset(__s,0,(long)pvVar1 - (long)__s & 0xfffffffffffffff8);
    return;
  }
  return;
}

