
/* v8::internal::compiler::AccessBuilder::ForCellValue() */

void __thiscall v8::internal::compiler::AccessBuilder::ForCellValue(AccessBuilder *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 1;
  *(undefined4 *)(in_x8 + 4) = 4;
  *(undefined8 *)(in_x8 + 0x18) = 0xffffffff;
  *(undefined2 *)(in_x8 + 0x20) = 0x708;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined4 *)(in_x8 + 0x24) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  in_x8[0x22] = 5;
  in_x8[0x30] = 0;
  return;
}

