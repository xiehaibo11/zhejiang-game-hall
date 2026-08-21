
/* v8::internal::compiler::ContextData::previous(v8::internal::compiler::JSHeapBroker*, unsigned
   long*, v8::internal::compiler::SerializationPolicy) */

ContextData * __thiscall
v8::internal::compiler::ContextData::previous
          (ContextData *this,JSHeapBroker *param_1,long *param_2,int param_4)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_48;
  
  if (*param_2 != 0) {
    if ((param_4 == 1) && (*(long *)(this + 0x38) == 0)) {
      TraceScope::TraceScope((TraceScope *)&local_48,param_1,this,"ContextData::previous");
      uVar1 = *(uint *)(**(ulong **)this + 0xb);
      if (((uVar1 & 1) != 0) &&
         (uVar5 = **(ulong **)this & 0xffffffff00000000, uVar6 = uVar5 | uVar1,
         *(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) - 0x88 < 10)) {
        pIVar2 = *(Isolate **)param_1;
        if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar2 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar2);
          }
          *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar6;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
        }
        lVar4 = JSHeapBroker::GetOrCreateData(param_1,puVar3);
        if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
        }
        if (9 < *(ushort *)(*(long *)(lVar4 + 0x10) + 0x18) - 0x88) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsContext()");
        }
        *(long *)(this + 0x38) = lVar4;
      }
      *(int *)(local_48 + 0x170) = *(int *)(local_48 + 0x170) + -1;
    }
    if (*(long *)(this + 0x38) != 0) {
      *param_2 = *param_2 + -1;
      this = (ContextData *)
             previous((ContextData *)*(undefined8 *)(this + 0x38),param_1,param_2,param_4);
    }
  }
  return this;
}

