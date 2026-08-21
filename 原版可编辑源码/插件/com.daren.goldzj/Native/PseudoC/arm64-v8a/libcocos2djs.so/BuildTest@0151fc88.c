
/* v8::internal::interpreter::BytecodeGenerator::BuildTest(v8::internal::interpreter::BytecodeArrayBuilder::ToBooleanMode,
   v8::internal::interpreter::BytecodeLabels*, v8::internal::interpreter::BytecodeLabels*,
   v8::internal::interpreter::BytecodeGenerator::TestFallthrough) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildTest
          (BytecodeGenerator *this,undefined4 param_2,BytecodeLabels *param_3,
          BytecodeLabels *param_4,int param_5)

{
  undefined8 uVar1;
  BytecodeLabel *pBVar2;
  
  if (param_5 == 2) {
    uVar1 = BytecodeLabels::New(param_3);
    BytecodeArrayBuilder::JumpIfTrue((BytecodeArrayBuilder *)(this + 0x18),param_2,uVar1);
    pBVar2 = (BytecodeLabel *)BytecodeLabels::New(param_4);
    BytecodeArrayBuilder::Jump((BytecodeArrayBuilder *)(this + 0x18),pBVar2);
    return;
  }
  if (param_5 != 1) {
    if (param_5 == 0) {
      uVar1 = BytecodeLabels::New(param_4);
      BytecodeArrayBuilder::JumpIfFalse((BytecodeArrayBuilder *)(this + 0x18),param_2,uVar1);
      return;
    }
    return;
  }
  uVar1 = BytecodeLabels::New(param_3);
  BytecodeArrayBuilder::JumpIfTrue((BytecodeArrayBuilder *)(this + 0x18),param_2,uVar1);
  return;
}

