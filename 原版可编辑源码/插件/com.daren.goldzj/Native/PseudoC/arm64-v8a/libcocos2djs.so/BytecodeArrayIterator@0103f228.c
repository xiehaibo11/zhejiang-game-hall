
/* v8::internal::interpreter::BytecodeArrayIterator::BytecodeArrayIterator(std::__ndk1::unique_ptr<v8::internal::interpreter::AbstractBytecodeArray,
   std::__ndk1::default_delete<v8::internal::interpreter::AbstractBytecodeArray> >) */

void __thiscall
v8::internal::interpreter::BytecodeArrayIterator::BytecodeArrayIterator
          (BytecodeArrayIterator *this,undefined8 *param_2)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  BytecodeArrayAccessor::BytecodeArrayAccessor((BytecodeArrayAccessor *)this,&local_18,0);
  plVar1 = local_18;
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))();
  }
  return;
}

