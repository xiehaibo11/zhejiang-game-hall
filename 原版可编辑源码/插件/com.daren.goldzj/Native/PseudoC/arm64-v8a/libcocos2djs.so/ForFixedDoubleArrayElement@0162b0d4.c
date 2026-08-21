
/* v8::internal::compiler::AccessBuilder::ForFixedDoubleArrayElement() */

void __thiscall
v8::internal::compiler::AccessBuilder::ForFixedDoubleArrayElement(AccessBuilder *this)

{
  long lVar1;
  undefined1 *in_x8;
  undefined8 uVar2;
  
  lVar1 = TypeCache::Get();
  uVar2 = *(undefined8 *)(lVar1 + 0xc0);
  in_x8[0x12] = 0;
  *in_x8 = 1;
  *(undefined4 *)(in_x8 + 4) = 8;
  *(undefined2 *)(in_x8 + 0x10) = 0x60c;
  *(undefined8 *)(in_x8 + 8) = uVar2;
  *(undefined4 *)(in_x8 + 0x14) = 1;
  return;
}

