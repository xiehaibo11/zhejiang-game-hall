
/* v8::internal::compiler::NodeProperties::CanBePrimitive(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

uint v8::internal::compiler::NodeProperties::CanBePrimitive
               (JSHeapBroker *param_1,Node *param_2,Node *param_3)

{
  ushort uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulong uVar7;
  undefined1 local_68 [16];
  MapInference local_58 [48];
  long local_28;
  
  auVar5._8_8_ = local_68._8_8_;
  auVar5._0_8_ = local_68._0_8_;
  auVar4._8_8_ = local_68._8_8_;
  auVar4._0_8_ = local_68._0_8_;
  auVar3._8_8_ = local_68._8_8_;
  auVar3._0_8_ = local_68._0_8_;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar6 = 0;
  uVar1 = *(ushort *)(*(long *)param_2 + 0x10);
  if (uVar1 - 0x2d2 < 0x17) goto LAB_01799800;
  if (uVar1 < 0x2cb) {
    if (uVar1 == 0x1e) {
      ObjectRef::ObjectRef((ObjectRef *)local_58,param_1,*(undefined8 *)(*(long *)param_2 + 0x30),0)
      ;
      uVar7 = ObjectRef::IsHeapObject((ObjectRef *)local_58);
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      local_68 = HeapObjectRef::map((HeapObjectRef *)local_58);
      uVar6 = MapRef::IsPrimitiveMap((MapRef *)local_68);
      goto LAB_01799800;
    }
    local_68 = auVar4;
    if ((uVar1 == 0xd9) || (local_68 = auVar5, uVar1 == 0xe4)) goto LAB_01799800;
  }
  else if ((uVar1 - 0x2cb < 0x39) &&
          (local_68 = auVar3, (1L << ((ulong)(uVar1 - 0x2cb) & 0x3f) & 0x1e0020000000001U) != 0))
  goto LAB_01799800;
  MapInference::MapInference(local_58,param_1,param_2,param_3);
  uVar7 = MapInference::HaveMaps(local_58);
  if ((uVar7 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = MapInference::AllOfInstanceTypesAreJSReceiver(local_58);
    uVar6 = uVar6 ^ 1;
  }
  MapInference::~MapInference(local_58);
LAB_01799800:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

