
/* v8::internal::compiler::AccessBuilder::ForFixedArraySlot(unsigned long,
   v8::internal::compiler::WriteBarrierKind) */

void __thiscall
v8::internal::compiler::AccessBuilder::ForFixedArraySlot
          (undefined1 *param_1,int param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x22] = param_3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x20) = 0x708;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(int *)(param_1 + 4) = param_2 * 4 + 8;
  param_1[0x30] = 0;
  return;
}

