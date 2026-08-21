
/* v8::internal::interpreter::BytecodeArrayRandomIterator::BytecodeArrayRandomIterator(v8::internal::Handle<v8::internal::BytecodeArray>,
   v8::internal::Zone*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayRandomIterator::BytecodeArrayRandomIterator
          (BytecodeArrayRandomIterator *this,undefined8 param_2,undefined8 param_3)

{
  BytecodeArrayAccessor::BytecodeArrayAccessor((BytecodeArrayAccessor *)this,param_2,0);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = param_3;
  Initialize(this);
  return;
}

