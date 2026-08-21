
/* v8::internal::interpreter::BytecodeArrayBuilder::JumpIfNil(v8::internal::interpreter::BytecodeLabel*,
   v8::internal::Token::Value, v8::internal::interpreter::BytecodeArrayBuilder::NilValue) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::JumpIfNil
          (BytecodeArrayBuilder *this,BytecodeLabel *param_1,char param_3,int param_4)

{
  BytecodeArrayBuilder *pBVar1;
  
  if (param_3 == '5') {
    pBVar1 = (BytecodeArrayBuilder *)CompareUndetectable(this);
    JumpIfTrue(pBVar1,1,param_1);
  }
  else if (param_4 == 1) {
    JumpIfUndefined(this,param_1);
  }
  else {
    JumpIfNull(this,param_1);
  }
  return;
}

