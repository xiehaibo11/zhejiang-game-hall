
/* v8::internal::compiler::JSNativeContextSpecialization::CreateDelayedStringConstant(v8::internal::compiler::Node*)
    */

undefined4 * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::CreateDelayedStringConstant
          (JSNativeContextSpecialization *this,Node *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  Zone *pZVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  
  pOVar6 = *(Operator **)param_1;
  sVar1 = *(short *)(pOVar6 + 0x10);
  if (sVar1 == 0x1c) {
    pZVar5 = *(Zone **)(this + 0x48);
    uVar7 = *(undefined8 *)(pOVar6 + 0x30);
    puVar3 = *(undefined4 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar3) < 0x18) {
      puVar3 = (undefined4 *)Zone::NewExpand(pZVar5,0x18);
    }
    else {
      *(undefined4 **)(pZVar5 + 0x10) = puVar3 + 6;
    }
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = uVar7;
    return puVar3;
  }
  if (sVar1 == 0x1e) {
    uVar7 = *(undefined8 *)(pOVar6 + 0x30);
    ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 0x18),uVar7,0);
    uVar4 = ObjectRef::IsHeapObject((ObjectRef *)local_30);
    if ((uVar4 & 1) != 0) {
      uVar4 = ObjectRef::IsString((ObjectRef *)local_30);
      if ((uVar4 & 1) == 0) goto LAB_01749730;
      ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 0x18),uVar7,0);
      uVar4 = ObjectRef::IsHeapObject((ObjectRef *)local_30);
      if ((uVar4 & 1) != 0) {
        local_40 = local_30._0_8_;
        uStack_38 = local_30._8_8_;
        local_30 = ObjectRef::AsString((ObjectRef *)&local_40);
        pZVar5 = *(Zone **)(this + 0x48);
        puVar3 = *(undefined4 **)(pZVar5 + 0x10);
        if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar3) < 0x20) {
          puVar3 = (undefined4 *)Zone::NewExpand(pZVar5,0x20);
        }
        else {
          *(undefined4 **)(pZVar5 + 0x10) = puVar3 + 8;
        }
        uVar7 = StringRef::object((StringRef *)local_30);
        iVar2 = StringRef::length((StringRef *)local_30);
        *puVar3 = 0;
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined8 *)(puVar3 + 4) = uVar7;
        *(long *)(puVar3 + 6) = (long)iVar2;
        return puVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  if (sVar1 == 0x119) {
    puVar3 = (undefined4 *)StringConstantBaseOf(pOVar6);
    return puVar3;
  }
LAB_01749730:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

