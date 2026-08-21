
/* v8::internal::compiler::PropertyAccessBuilder::TryBuildLoadConstantDataField(v8::internal::compiler::NameRef
   const&, v8::internal::compiler::PropertyAccessInfo const&, v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::PropertyAccessBuilder::TryBuildLoadConstantDataField
          (PropertyAccessBuilder *this,NameRef *param_1,PropertyAccessInfo *param_2,Node *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_78 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  
  if (*(int *)param_2 == 3) {
    lVar3 = *(long *)(param_2 + 0x58);
    if (lVar3 == 0) {
      if (*(short *)(*(long *)param_3 + 0x10) != 0x1e) {
        return 0;
      }
      uVar2 = *(undefined8 *)(*(long *)param_3 + 0x30);
      ObjectRef::ObjectRef((ObjectRef *)local_78,*(undefined8 *)(this + 8),uVar2,0);
      uVar1 = ObjectRef::IsHeapObject((ObjectRef *)local_78);
      if ((uVar1 & 1) == 0) {
LAB_0179e82c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      uVar1 = ObjectRef::IsJSObject((ObjectRef *)local_78);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      ObjectRef::ObjectRef((ObjectRef *)local_78,*(undefined8 *)(this + 8),uVar2,0);
      uVar1 = ObjectRef::IsHeapObject((ObjectRef *)local_78);
      if ((uVar1 & 1) == 0) goto LAB_0179e82c;
      local_50 = HeapObjectRef::map((HeapObjectRef *)local_78);
      puVar5 = *(undefined8 **)(param_2 + 8);
      puVar6 = *(undefined8 **)(param_2 + 0x10);
      puVar4 = puVar5;
      if (puVar6 != puVar5) {
        do {
          ObjectRef::ObjectRef((ObjectRef *)local_78,*(undefined8 *)(this + 8),*puVar4,0);
          uVar1 = ObjectRef::IsMap((ObjectRef *)local_78);
          if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsMap()");
          }
          uVar1 = ObjectRef::equals((ObjectRef *)local_78,(ObjectRef *)local_50);
          puVar5 = puVar4;
        } while (((uVar1 & 1) == 0) && (puVar4 = puVar4 + 1, puVar5 = puVar6, puVar6 != puVar4));
        puVar6 = *(undefined8 **)(param_2 + 0x10);
      }
      if (puVar6 == puVar5) {
        return 0;
      }
      ObjectRef::ObjectRef((ObjectRef *)local_78,*(undefined8 *)(this + 8),uVar2,0);
      uVar1 = ObjectRef::IsHeapObject((ObjectRef *)local_78);
      if ((uVar1 & 1) == 0) goto LAB_0179e82c;
      local_60 = local_78._0_8_;
      uStack_58 = local_78._8_8_;
      local_78 = ObjectRef::AsJSObject((ObjectRef *)&local_60);
      lVar3 = JSObjectRef::object((JSObjectRef *)local_78);
    }
    ObjectRef::ObjectRef((ObjectRef *)local_50,*(undefined8 *)(this + 8),lVar3,0);
    uVar1 = ObjectRef::IsJSObject((ObjectRef *)local_50);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    JSObjectRef::GetOwnDataProperty
              (local_78,local_50,param_2[0x68],*(undefined8 *)(param_2 + 0x60),0);
    if (local_78[0] != (ObjectRef)0x0) {
      uVar2 = JSGraph::Constant(*(JSGraph **)this,(ObjectRef *)(local_78 + 8));
      return uVar2;
    }
  }
  return 0;
}

