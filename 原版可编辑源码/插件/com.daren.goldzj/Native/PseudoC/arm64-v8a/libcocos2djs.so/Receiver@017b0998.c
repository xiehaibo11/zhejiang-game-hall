
/* v8::internal::interpreter::BytecodeArrayBuilder::Receiver() const */

undefined4 __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::Receiver(BytecodeArrayBuilder *this)

{
  undefined4 uVar1;
  
  uVar1 = Register::FromParameterIndex(0,*(int *)(this + 0xf8));
  return uVar1;
}

