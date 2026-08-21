
/* v8::internal::interpreter::BytecodeGenerator::AssignmentLhsData::KeyedProperty(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::AssignmentLhsData::KeyedProperty
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[6] = param_2;
  param_1[7] = param_3;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x7fffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}

