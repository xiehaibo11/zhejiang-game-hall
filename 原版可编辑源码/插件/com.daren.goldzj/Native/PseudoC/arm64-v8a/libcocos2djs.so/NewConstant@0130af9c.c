
/* v8::internal::compiler::Type::NewConstant(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Zone*) */

undefined4 *
v8::internal::compiler::Type::NewConstant(undefined8 param_1,undefined8 param_2,Zone *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined1 local_40 [16];
  ObjectRef aOStack_30 [16];
  undefined8 local_8;
  
  ObjectRef::ObjectRef(aOStack_30,param_1,param_2,1);
  uVar3 = ObjectRef::IsSmi(aOStack_30);
  if ((uVar3 & 1) == 0) {
    uVar3 = ObjectRef::IsHeapNumber(aOStack_30);
    if ((uVar3 & 1) == 0) {
      uVar3 = ObjectRef::IsString(aOStack_30);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = ObjectRef::IsInternalizedString(aOStack_30), (uVar3 & 1) == 0)) {
        return (undefined4 *)0x4021;
      }
      local_40 = ObjectRef::AsHeapObject(aOStack_30);
      local_8 = HeapObjectRef::GetHeapObjectType((HeapObjectRef *)local_40);
      uVar2 = BitsetType::Lub<v8::internal::compiler::HeapObjectType>((HeapObjectType *)&local_8);
      puVar4 = *(undefined4 **)(param_3 + 0x10);
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar4) < 0x18) {
        puVar4 = (undefined4 *)Zone::NewExpand(param_3,0x18);
      }
      else {
        *(undefined4 **)(param_3 + 0x10) = puVar4 + 6;
      }
      *puVar4 = 0;
      puVar4[1] = uVar2;
      *(undefined1 (*) [16])(puVar4 + 2) = local_40;
      return puVar4;
    }
    local_40 = ObjectRef::AsHeapNumber(aOStack_30);
    dVar5 = (double)HeapNumberRef::value((HeapNumberRef *)local_40);
  }
  else {
    iVar1 = ObjectRef::AsSmi(aOStack_30);
    dVar5 = (double)iVar1;
  }
  puVar4 = (undefined4 *)NewConstant(dVar5,param_3);
  return puVar4;
}

