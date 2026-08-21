
/* v8::internal::BufferedCharacterStream<v8::internal::ExternalStringStream>::Clone() const */

void v8::internal::BufferedCharacterStream<v8::internal::ExternalStringStream>::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = operator_new(0x450);
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__BufferedCharacterStream_01cb55c0;
  plVar2 = *(long **)(in_x0 + 0x438);
  puVar1[0x87] = plVar2;
  (**(code **)(*plVar2 + 0x20))();
  uVar4 = *(undefined8 *)(in_x0 + 0x448);
  uVar3 = *(undefined8 *)(in_x0 + 0x440);
  *in_x8 = puVar1;
  puVar1[0x89] = uVar4;
  puVar1[0x88] = uVar3;
  return;
}

