
/* v8::internal::ExternalAssemblerBuffer(void*, int) */

void __thiscall v8::internal::ExternalAssemblerBuffer(internal *this,void *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  
  puVar1 = operator_new(0x18);
  *(int *)(puVar1 + 2) = (int)param_1;
  *puVar1 = &PTR__AssemblerBuffer_01ca11f8;
  puVar1[1] = this;
  *in_x8 = puVar1;
  return;
}

