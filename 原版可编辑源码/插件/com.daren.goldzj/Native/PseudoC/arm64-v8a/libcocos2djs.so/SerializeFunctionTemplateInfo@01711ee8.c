
/* v8::internal::compiler::SharedFunctionInfoData::SerializeFunctionTemplateInfo(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::SharedFunctionInfoData::SerializeFunctionTemplateInfo
          (SharedFunctionInfoData *this,JSHeapBroker *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(this + 0x48) == 0) {
    pIVar1 = *(Isolate **)param_1;
    uVar4 = **(ulong **)this & 0xffffffff00000000 | (ulong)*(uint *)(**(ulong **)this + 3);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    lVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar2);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0x4e) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
    }
    *(long *)(this + 0x48) = lVar3;
  }
  return;
}

