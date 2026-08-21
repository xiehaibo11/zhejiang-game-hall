
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitJumpLoop(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitJumpLoop
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  void *__s;
  void *pvVar1;
  int iVar2;
  
  iVar2 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset((BytecodeArrayAccessor *)param_1);
  if (*(int *)(param_1 + 8) < iVar2) {
    ContributeToJumpTargetEnvironment(this,iVar2);
  }
  __s = *(void **)(*(long *)(this + 0x28) + 0x30);
  pvVar1 = *(void **)(*(long *)(this + 0x28) + 0x38);
  if (__s != pvVar1) {
    memset(__s,0,(long)pvVar1 - (long)__s & 0xfffffffffffffff8);
    return;
  }
  return;
}

