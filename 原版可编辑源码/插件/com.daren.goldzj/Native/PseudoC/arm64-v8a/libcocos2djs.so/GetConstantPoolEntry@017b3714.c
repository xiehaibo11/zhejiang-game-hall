
/* v8::internal::interpreter::BytecodeArrayBuilder::GetConstantPoolEntry(v8::internal::Scope const*)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::GetConstantPoolEntry
          (BytecodeArrayBuilder *this,Scope *param_1)

{
  ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  return;
}

