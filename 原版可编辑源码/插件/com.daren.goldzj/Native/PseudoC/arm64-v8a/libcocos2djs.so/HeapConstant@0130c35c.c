
/* v8::internal::compiler::Type::HeapConstant(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Zone*) */

undefined4 *
v8::internal::compiler::Type::HeapConstant(undefined8 param_1,undefined8 param_2,Zone *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  ObjectRef::ObjectRef((ObjectRef *)&local_38,param_1,param_2,0);
  uVar2 = ObjectRef::IsHeapObject((ObjectRef *)&local_38);
  if ((uVar2 & 1) != 0) {
    local_28 = HeapObjectRef::GetHeapObjectType((HeapObjectRef *)&local_38);
    uVar1 = BitsetType::Lub<v8::internal::compiler::HeapObjectType>((HeapObjectType *)&local_28);
    puVar3 = *(undefined4 **)(param_3 + 0x10);
    if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar3) < 0x18) {
      puVar3 = (undefined4 *)Zone::NewExpand(param_3,0x18);
    }
    else {
      *(undefined4 **)(param_3 + 0x10) = puVar3 + 6;
    }
    *puVar3 = 0;
    puVar3[1] = uVar1;
    *(undefined8 *)(puVar3 + 4) = uStack_30;
    *(undefined8 *)(puVar3 + 2) = local_38;
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsHeapObject()");
}

