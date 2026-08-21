
/* v8::internal::compiler::AccessBuilder::ForJSDateField(v8::internal::JSDate::FieldIndex) */

void __thiscall
v8::internal::compiler::AccessBuilder::ForJSDateField(undefined1 *param_1,int param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x1c5f;
  *(undefined2 *)(param_1 + 0x20) = 0x708;
  param_1[0x22] = 5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(int *)(param_1 + 4) = param_2 * 4 + 0xc;
  param_1[0x30] = 0;
  return;
}

