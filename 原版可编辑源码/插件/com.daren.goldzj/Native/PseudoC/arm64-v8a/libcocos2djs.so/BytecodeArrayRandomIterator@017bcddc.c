
/* v8::internal::interpreter::BytecodeArrayRandomIterator::BytecodeArrayRandomIterator(std::__ndk1::unique_ptr<v8::internal::interpreter::AbstractBytecodeArray,
   std::__ndk1::default_delete<v8::internal::interpreter::AbstractBytecodeArray> >,
   v8::internal::Zone*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayRandomIterator::BytecodeArrayRandomIterator
          (BytecodeArrayRandomIterator *this,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *local_28;
  
  local_28 = (long *)*param_2;
  *param_2 = 0;
  BytecodeArrayAccessor::BytecodeArrayAccessor((BytecodeArrayAccessor *)this,&local_28,0);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))();
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = param_3;
  Initialize(this);
  return;
}

