
/* v8::internal::interpreter::BytecodeArrayBuilder::Parameter(int) const */

undefined4 __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::Parameter(BytecodeArrayBuilder *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Register::FromParameterIndex(param_1 + 1,*(int *)(this + 0xf8));
  return uVar1;
}

