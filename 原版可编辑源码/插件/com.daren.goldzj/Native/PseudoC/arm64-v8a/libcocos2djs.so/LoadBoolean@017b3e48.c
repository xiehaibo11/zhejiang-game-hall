
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadBoolean(bool) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadBoolean
          (BytecodeArrayBuilder *this,bool param_1)

{
  if (param_1) {
    LoadTrue(this);
    return;
  }
  LoadFalse(this);
  return;
}

