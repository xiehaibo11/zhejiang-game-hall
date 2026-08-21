
/* v8::internal::compiler::SerializerForBackgroundCompilation::GetBytecodeAnalysis(v8::internal::compiler::SerializationPolicy)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::GetBytecodeAnalysis
          (SerializerForBackgroundCompilation *this,undefined4 param_2)

{
  undefined8 uVar1;
  JSHeapBroker *pJVar2;
  
  pJVar2 = *(JSHeapBroker **)this;
  uVar1 = bytecode_array(this);
  JSHeapBroker::GetBytecodeAnalysis
            (pJVar2,uVar1,*(undefined4 *)(this + 0x6c),*(uint *)(this + 0x68) >> 2 & 1,param_2);
  return;
}

