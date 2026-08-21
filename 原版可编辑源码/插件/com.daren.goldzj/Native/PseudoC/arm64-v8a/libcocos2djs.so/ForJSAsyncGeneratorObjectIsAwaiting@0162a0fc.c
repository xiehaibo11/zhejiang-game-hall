
/* v8::internal::compiler::AccessBuilder::ForJSAsyncGeneratorObjectIsAwaiting() */

void __thiscall
v8::internal::compiler::AccessBuilder::ForJSAsyncGeneratorObjectIsAwaiting(AccessBuilder *this)

{
  uint uVar1;
  undefined1 *in_x8;
  
  uVar1 = BitsetType::SignedSmall();
  *(undefined4 *)(in_x8 + 4) = 0x2c;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  in_x8[0x22] = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *in_x8 = 1;
  *(ulong *)(in_x8 + 0x18) = (ulong)(uVar1 | 1);
  *(undefined2 *)(in_x8 + 0x20) = 0x206;
  *(undefined4 *)(in_x8 + 0x24) = 1;
  in_x8[0x30] = 0;
  return;
}

