
/* v8::internal::EvacuateRecordOnlyVisitor::Visit(v8::internal::HeapObject, int) */

undefined8 v8::internal::EvacuateRecordOnlyVisitor::Visit(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined **local_38;
  undefined8 uStack_30;
  long local_28;
  ulong local_8;
  
  local_28 = *(long *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(local_28 + 0x800);
  local_38 = &PTR__ObjectVisitor_01ca85c8;
  uVar2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1);
  local_8 = param_2;
  uVar1 = HeapObject::SizeFromMap((HeapObject *)&local_8,uVar2);
  BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
            (*(undefined2 *)(uVar2 + 7),uVar2,local_8,uVar1,&local_38);
  return 1;
}

