
/* v8::internal::BufferedCharacterStream<v8::internal::TestingStream>::Clone() const */

void v8::internal::BufferedCharacterStream<v8::internal::TestingStream>::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  undefined8 *in_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x448);
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__Utf16CharacterStream_01cb56c0;
  uVar3 = *(undefined8 *)(in_x0 + 0x440);
  uVar2 = *(undefined8 *)(in_x0 + 0x438);
  *in_x8 = puVar1;
  puVar1[0x88] = uVar3;
  puVar1[0x87] = uVar2;
  return;
}

