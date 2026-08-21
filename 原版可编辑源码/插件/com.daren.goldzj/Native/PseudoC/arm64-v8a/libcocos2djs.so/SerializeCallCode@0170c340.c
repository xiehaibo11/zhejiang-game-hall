
/* v8::internal::compiler::FunctionTemplateInfoData::SerializeCallCode(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::FunctionTemplateInfoData::SerializeCallCode
          (FunctionTemplateInfoData *this,JSHeapBroker *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  CallHandlerInfoData *this_00;
  ulong uVar3;
  long local_38;
  
  if (*(long *)(this + 0x20) == 0) {
    TraceScope::TraceScope
              ((TraceScope *)&local_38,param_1,this,"FunctionTemplateInfoData::SerializeCallCode");
    pIVar1 = *(Isolate **)param_1;
    uVar3 = **(ulong **)this & 0xffffffff00000000 | (ulong)*(uint *)(**(ulong **)this + 0x17);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    }
    this_00 = (CallHandlerInfoData *)JSHeapBroker::GetOrCreateData(param_1,puVar2);
    if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) != 0x59) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsCallHandlerInfo()");
    }
    *(CallHandlerInfoData **)(this + 0x20) = this_00;
    CallHandlerInfoData::Serialize(this_00,param_1);
    *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  }
  return;
}

