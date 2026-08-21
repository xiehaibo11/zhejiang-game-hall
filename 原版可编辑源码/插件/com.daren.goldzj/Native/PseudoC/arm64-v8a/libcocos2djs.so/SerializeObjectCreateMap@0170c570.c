
/* v8::internal::compiler::JSObjectData::SerializeObjectCreateMap(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::JSObjectData::SerializeObjectCreateMap
          (JSObjectData *this,JSHeapBroker *param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_38;
  
  if (this[0x48] != (JSObjectData)0x0) {
    return;
  }
  this[0x48] = (JSObjectData)0x1;
  TraceScope::TraceScope
            ((TraceScope *)&local_38,param_1,this,"JSObjectData::SerializeObjectCreateMap");
  uVar5 = **(ulong **)this;
  uVar6 = uVar5 & 0xffffffff00000000;
  if ((*(uint *)((uVar6 | *(uint *)(uVar5 - 1)) + 0xb) >> 0x14 & 1) != 0) {
    pIVar2 = *(Isolate **)param_1;
    uVar1 = *(uint *)((uVar6 | *(uint *)(uVar5 - 1)) + 0x23);
    uVar6 = uVar6 | uVar1;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar6;
      if ((uVar1 & 1) == 0) goto LAB_0170c6dc;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
      uVar6 = *puVar3;
      if ((uVar6 & 1) == 0) goto LAB_0170c6dc;
    }
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 100) {
      uVar1 = *(uint *)(uVar6 + 0x13);
      if ((uVar1 != 3) && ((uVar1 & 3) == 3)) {
        pIVar2 = *(Isolate **)param_1;
        uVar5 = uVar6 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd;
        if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar2 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar2);
          }
          *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar5;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
        }
        lVar4 = JSHeapBroker::GetOrCreateData(param_1,puVar3);
        if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
        }
        if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        *(long *)(this + 0x50) = lVar4;
      }
    }
  }
LAB_0170c6dc:
  *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  return;
}

