
/* v8::internal::BackingStore::WrapAllocation(void*, unsigned long, void (*)(void*, unsigned long,
   void*), void*, v8::internal::SharedFlag) */

void __thiscall
v8::internal::BackingStore::WrapAllocation
          (undefined8 *param_1_00,BackingStore *this,undefined8 param_1,undefined8 param_2,
          undefined8 param_3,char param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  *puVar1 = this;
  puVar1[1] = param_1;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  *param_1_00 = puVar1;
  *(byte *)(puVar1 + 5) = param_6 == '\x01' | 0x48;
  return;
}

