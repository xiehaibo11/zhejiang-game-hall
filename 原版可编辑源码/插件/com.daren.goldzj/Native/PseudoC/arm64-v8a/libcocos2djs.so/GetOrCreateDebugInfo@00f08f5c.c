
/* v8::internal::Debug::GetOrCreateDebugInfo(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

ulong * __thiscall v8::internal::Debug::GetOrCreateDebugInfo(Debug *this,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar5 = *param_2 & 0xffffffff00000000;
  uVar8 = uVar5 | *(uint *)(*param_2 + 0xf);
  pIVar1 = *(Isolate **)(this + 0x88);
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar8;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar8);
    }
  }
  else {
    puVar2 = (ulong *)Factory::NewDebugInfo();
    puVar3 = operator_new(0x10);
    lVar6 = *(long *)(this + 0x88);
    uVar5 = *puVar2;
    puVar3[1] = 0;
    uVar4 = GlobalHandles::Create(*(GlobalHandles **)(lVar6 + 0x95e0),uVar5);
    uVar7 = *(undefined8 *)(this + 0x18);
    *puVar3 = uVar4;
    puVar3[1] = uVar7;
    *(undefined8 **)(this + 0x18) = puVar3;
  }
  return puVar2;
}

