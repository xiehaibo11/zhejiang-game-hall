
/* v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>::Visit(v8::internal::HeapObject,
   int) */

undefined8
v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>::Visit
          (long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1);
  local_28 = param_2;
  uVar1 = HeapObject::SizeFromMap((HeapObject *)&local_28,uVar3);
  BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
            (*(undefined2 *)(uVar3 + 7),uVar3,local_28,uVar1,uVar2);
  return 1;
}

