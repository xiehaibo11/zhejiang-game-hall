
/* v8::internal::compiler::Type::HeapConstant(v8::internal::compiler::HeapObjectRef const&,
   v8::internal::Zone*) */

undefined4 * v8::internal::compiler::Type::HeapConstant(HeapObjectRef *param_1,Zone *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  local_18 = HeapObjectRef::GetHeapObjectType(param_1);
  uVar1 = BitsetType::Lub<v8::internal::compiler::HeapObjectType>((HeapObjectType *)&local_18);
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar2) < 0x18) {
    puVar2 = (undefined4 *)Zone::NewExpand(param_2,0x18);
  }
  else {
    *(undefined4 **)(param_2 + 0x10) = puVar2 + 6;
  }
  *puVar2 = 0;
  puVar2[1] = uVar1;
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar2 + 2) = uVar3;
  return puVar2;
}

