
/* v8::internal::interpreter::BytecodeGenerator::AssignmentLhsData::NamedProperty(v8::internal::Expression*,
   v8::internal::interpreter::Register, v8::internal::AstRawString const*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::AssignmentLhsData::NamedProperty
          (undefined4 *param_1,AssignmentLhsData *this,undefined4 param_3,undefined8 param_4)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x7fffffff;
  param_1[6] = param_3;
  param_1[7] = 0x7fffffff;
  *(AssignmentLhsData **)(param_1 + 8) = this;
  *(undefined8 *)(param_1 + 10) = param_4;
  return;
}

