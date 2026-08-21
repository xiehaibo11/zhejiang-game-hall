
/* v8::internal::compiler::NodeProperties::CanBeNullOrUndefined(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

bool v8::internal::compiler::NodeProperties::CanBeNullOrUndefined
               (JSHeapBroker *param_1,Node *param_2,Node *param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  MapRef local_40 [16];
  ObjectRef local_30 [16];
  
  uVar5 = CanBePrimitive(param_1,param_2,param_3);
  if ((uVar5 & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    uVar1 = *(ushort *)(*(long *)param_2 + 0x10);
    uVar2 = uVar1 - 0xd7;
    if (((0x24 < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x1000000073U) == 0)) &&
       ((uVar2 = uVar1 - 0x2c6, 6 < uVar2 || (uVar2 == 5)))) {
      if (uVar1 == 0x1e) {
        ObjectRef::ObjectRef(local_30,param_1,*(undefined8 *)(*(long *)param_2 + 0x30),0);
        uVar5 = ObjectRef::IsHeapObject(local_30);
        if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsHeapObject()");
        }
        local_40 = (MapRef  [16])HeapObjectRef::map((HeapObjectRef *)local_30);
        bVar4 = MapRef::oddball_type(local_40);
        bVar3 = (bVar4 | 1) == 3;
      }
      else {
        bVar3 = true;
      }
    }
  }
  return bVar3;
}

