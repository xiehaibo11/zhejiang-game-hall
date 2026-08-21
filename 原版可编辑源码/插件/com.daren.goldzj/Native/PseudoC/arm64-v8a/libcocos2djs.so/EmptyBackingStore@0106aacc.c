
/* v8::internal::BackingStore::EmptyBackingStore(v8::internal::SharedFlag) */

void __thiscall v8::internal::BackingStore::EmptyBackingStore(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  *param_1 = puVar1;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(byte *)(puVar1 + 5) = param_2 == '\x01' | 8;
  return;
}

