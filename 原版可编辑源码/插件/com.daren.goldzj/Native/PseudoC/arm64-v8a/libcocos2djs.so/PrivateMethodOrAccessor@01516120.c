
/* v8::internal::interpreter::BytecodeGenerator::AssignmentLhsData::PrivateMethodOrAccessor(v8::internal::AssignType,
   v8::internal::Property*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::AssignmentLhsData::PrivateMethodOrAccessor
          (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = 0x7fffffff;
  *(undefined8 *)(param_1 + 6) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}

