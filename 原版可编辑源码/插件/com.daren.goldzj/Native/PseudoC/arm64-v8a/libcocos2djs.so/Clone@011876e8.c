
/* v8::internal::UnbufferedCharacterStream<v8::internal::ExternalStringStream>::Clone() const */

void v8::internal::UnbufferedCharacterStream<v8::internal::ExternalStringStream>::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = operator_new(0x50);
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__UnbufferedCharacterStream_01cb5600;
  plVar2 = *(long **)(in_x0 + 0x38);
  puVar1[7] = plVar2;
  (**(code **)(*plVar2 + 0x20))();
  uVar4 = *(undefined8 *)(in_x0 + 0x48);
  uVar3 = *(undefined8 *)(in_x0 + 0x40);
  *in_x8 = puVar1;
  puVar1[9] = uVar4;
  puVar1[8] = uVar3;
  return;
}

