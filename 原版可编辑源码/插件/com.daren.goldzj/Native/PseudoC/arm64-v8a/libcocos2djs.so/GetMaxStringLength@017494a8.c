
/* v8::internal::compiler::JSNativeContextSpecialization::GetMaxStringLength(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::Node*) */

bool v8::internal::compiler::JSNativeContextSpecialization::GetMaxStringLength
               (JSHeapBroker *param_1,Node *param_2)

{
  short sVar1;
  StringConstantBase *this;
  ulong uVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  
  pOVar3 = *(Operator **)param_2;
  sVar1 = *(short *)(pOVar3 + 0x10);
  if (sVar1 != 0x1e) {
    if (sVar1 == 0x119) {
      this = (StringConstantBase *)StringConstantBaseOf(pOVar3);
      StringConstantBase::GetMaxStringConstantLength(this);
      return true;
    }
LAB_01749578:
    return sVar1 == 0x1c;
  }
  uVar4 = *(undefined8 *)(pOVar3 + 0x30);
  ObjectRef::ObjectRef((ObjectRef *)local_40,param_1,uVar4,0);
  uVar2 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
  if ((uVar2 & 1) != 0) {
    uVar2 = ObjectRef::IsString((ObjectRef *)local_40);
    if ((uVar2 & 1) == 0) {
      sVar1 = *(short *)(*(long *)param_2 + 0x10);
      goto LAB_01749578;
    }
    ObjectRef::ObjectRef((ObjectRef *)local_40,param_1,uVar4,0);
    uVar2 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
    if ((uVar2 & 1) != 0) {
      local_50 = local_40._0_8_;
      uStack_48 = local_40._8_8_;
      local_40 = ObjectRef::AsString((ObjectRef *)&local_50);
      StringRef::length((StringRef *)local_40);
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsHeapObject()");
}

