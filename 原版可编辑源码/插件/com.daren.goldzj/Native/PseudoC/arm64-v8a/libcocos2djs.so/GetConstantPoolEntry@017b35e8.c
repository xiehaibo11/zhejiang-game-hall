
/* v8::internal::interpreter::BytecodeArrayBuilder::GetConstantPoolEntry(v8::internal::AstRawString
   const*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::GetConstantPoolEntry
          (BytecodeArrayBuilder *this,AstRawString *param_1)

{
  ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  return;
}

