
/* v8::internal::Debug::OnThrow(v8::internal::Handle<v8::internal::Object>) */

void __thiscall v8::internal::Debug::OnThrow(Debug *this,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  Isolate *this_00;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if ((((*(long *)(this + 0x40) == 0) && (this[10] == (Debug)0x0)) && (this[8] != (Debug)0x0)) &&
     (pIVar5 = *(Isolate **)(this + 0x88), *(int *)(pIVar5 + 0xb80c) != 0x20)) {
    uVar1 = *(undefined8 *)(pIVar5 + 0x95a0);
    lVar2 = *(long *)(pIVar5 + 0x95a8);
    *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + 1;
    this_00 = *(Isolate **)(this + 0x88);
    uVar7 = *(ulong *)(this_00 + 0x2c20);
    if ((int)uVar7 == *(int *)(this_00 + 0xa8)) {
      puVar6 = (ulong *)0x0;
    }
    else {
      if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(this_00 + 0x95a0);
        if (puVar6 == *(ulong **)(this_00 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(this_00);
        }
        *(ulong **)(this_00 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar7;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar7);
      }
      *(undefined8 *)(*(long *)(this + 0x88) + 0x2c20) =
           *(undefined8 *)(*(long *)(this + 0x88) + 0xa8);
      this_00 = *(Isolate **)(this + 0x88);
    }
    puVar4 = (ulong *)Isolate::GetPromiseOnStackOnThrow(this_00);
    uVar7 = *puVar4;
    if ((uVar7 & 1) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x42d;
    }
    OnException(this,param_2,puVar4,bVar3);
    if (puVar6 != (ulong *)0x0) {
      *(ulong *)(*(long *)(this + 0x88) + 0x2c20) = *puVar6;
    }
    PrepareStepOnThrow(this);
    *(undefined8 *)(pIVar5 + 0x95a0) = uVar1;
    *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + -1;
    if (*(long *)(pIVar5 + 0x95a8) != lVar2) {
      *(long *)(pIVar5 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar5);
      return;
    }
  }
  return;
}

