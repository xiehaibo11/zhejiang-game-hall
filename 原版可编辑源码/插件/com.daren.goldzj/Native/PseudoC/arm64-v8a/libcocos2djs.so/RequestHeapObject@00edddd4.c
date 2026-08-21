
/* v8::internal::AssemblerBase::RequestHeapObject(v8::internal::HeapObjectRequest) */

void __thiscall
v8::internal::AssemblerBase::RequestHeapObject(AssemblerBase *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(int *)(param_2 + 2) = *(int *)(this + 0x20) - *(int *)(this + 0x10);
  puVar1 = operator_new(0x20);
  uVar3 = *param_2;
  uVar2 = param_2[2];
  puVar1[2] = param_2[1];
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  *puVar1 = *(undefined8 *)(this + 0x18);
  *(undefined8 **)(this + 0x18) = puVar1;
  return;
}

