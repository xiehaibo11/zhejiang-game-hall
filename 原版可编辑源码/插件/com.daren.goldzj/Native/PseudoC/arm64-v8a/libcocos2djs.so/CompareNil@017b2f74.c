
/* v8::internal::interpreter::BytecodeArrayBuilder::CompareNil(v8::internal::Token::Value,
   v8::internal::interpreter::BytecodeArrayBuilder::NilValue) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CompareNil
          (BytecodeArrayBuilder *this,char param_2,int param_3)

{
  if (param_2 == '5') {
    CompareUndetectable(this);
    return;
  }
  if (param_3 == 1) {
    CompareUndefined(this);
    return;
  }
  CompareNull(this);
  return;
}

