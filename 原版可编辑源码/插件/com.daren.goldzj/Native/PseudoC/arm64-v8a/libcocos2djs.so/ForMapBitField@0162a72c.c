
/* v8::internal::compiler::AccessBuilder::ForMapBitField() */

void __thiscall v8::internal::compiler::AccessBuilder::ForMapBitField(AccessBuilder *this)

{
  long lVar1;
  undefined1 *in_x8;
  undefined8 uVar2;
  
  lVar1 = TypeCache::Get();
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  *(undefined4 *)(in_x8 + 4) = 10;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  in_x8[0x22] = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *in_x8 = 1;
  *(undefined2 *)(in_x8 + 0x20) = 0x302;
  *(undefined4 *)(in_x8 + 0x24) = 1;
  *(undefined8 *)(in_x8 + 0x18) = uVar2;
  in_x8[0x30] = 0;
  return;
}

