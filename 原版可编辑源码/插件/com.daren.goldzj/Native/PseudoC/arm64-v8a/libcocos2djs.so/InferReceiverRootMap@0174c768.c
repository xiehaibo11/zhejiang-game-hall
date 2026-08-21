
/* v8::internal::compiler::JSNativeContextSpecialization::InferReceiverRootMap(v8::internal::compiler::Node*)
   const */

void v8::internal::compiler::JSNativeContextSpecialization::InferReceiverRootMap(Node *param_1)

{
  short sVar1;
  ulong uVar2;
  JSHeapBroker *in_x1;
  Node *in_x2;
  undefined1 *in_x8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_38 [16];
  undefined8 uStack_28;
  
  sVar1 = *(short *)(*(long *)in_x1 + 0x10);
  if (sVar1 == 0x2d3) {
    NodeProperties::GetJSCreateMap(*(NodeProperties **)(param_1 + 0x18),in_x1,in_x2);
    if ((local_38[0] != (ObjectRef)0x0) &&
       (MapRef::FindRootMap(), local_50._0_1_ != (HeapObjectRef)0x0)) {
      *in_x8 = 1;
      *(undefined8 *)(in_x8 + 0x10) = uStack_28;
      *(undefined8 *)(in_x8 + 8) = local_38._8_8_;
      return;
    }
  }
  else if (sVar1 == 0x1e) {
    ObjectRef::ObjectRef
              ((ObjectRef *)local_38,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(*(long *)in_x1 + 0x30),0);
    uVar2 = ObjectRef::IsHeapObject((ObjectRef *)local_38);
    if ((uVar2 & 1) != 0) {
      local_50 = local_38._0_8_;
      uStack_48 = local_38._8_8_;
      local_38 = HeapObjectRef::map((HeapObjectRef *)&local_50);
      MapRef::FindRootMap();
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  *in_x8 = 0;
  in_x8[8] = 0;
  return;
}

