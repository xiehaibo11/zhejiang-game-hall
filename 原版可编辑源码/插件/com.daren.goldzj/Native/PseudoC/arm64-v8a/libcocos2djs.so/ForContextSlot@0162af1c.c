
/* v8::internal::compiler::AccessBuilder::ForContextSlot(unsigned long) */

void __thiscall
v8::internal::compiler::AccessBuilder::ForContextSlot(AccessBuilder *this,ulong param_1)

{
  undefined1 *in_x8;
  
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0xffffffff;
  *(undefined2 *)(in_x8 + 0x20) = 0x708;
  in_x8[0x22] = 5;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *in_x8 = 1;
  *(undefined4 *)(in_x8 + 0x24) = 1;
  *(int *)(in_x8 + 4) = (int)this * 4 + 8;
  in_x8[0x30] = 0;
  return;
}

