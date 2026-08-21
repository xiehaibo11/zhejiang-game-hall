
/* v8::internal::JSMessageObject::GetSourceLine() const */

Isolate * __thiscall v8::internal::JSMessageObject::GetSourceLine(JSMessageObject *this)

{
  CanonicalHandleScope *pCVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  Isolate *pIVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 local_48;
  
  pIVar4 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
  pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8);
  uVar5 = (ulong)pIVar4 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  if (pCVar1 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(pCVar1,uVar5);
    uVar5 = *puVar2;
  }
  if ((*(uint *)(uVar5 + 0x17) & 0xfffffffe) != 6) {
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    uVar5 = Script::GetPositionInfo(puVar2,*(int *)(*(long *)this + 0x23) >> 1,&local_50,1);
    if ((uVar5 & 1) != 0) {
      pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8);
      uVar5 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 3);
      if (pCVar1 == (CanonicalHandleScope *)0x0) {
        pIVar3 = *(Isolate **)(pIVar4 + 0x95a0);
        if (pIVar3 == *(Isolate **)(pIVar4 + 0x95a8)) {
          pIVar3 = (Isolate *)HandleScope::Extend(pIVar4);
        }
        *(Isolate **)(pIVar4 + 0x95a0) = pIVar3 + 8;
        *(ulong *)pIVar3 = uVar5;
      }
      else {
        pIVar3 = (Isolate *)CanonicalHandleScope::Lookup(pCVar1,uVar5);
      }
      if (((int)local_48 == 0) && (*(int *)(*(ulong *)pIVar3 + 7) == local_48._4_4_)) {
        return pIVar3;
      }
      pIVar4 = (Isolate *)Factory::NewProperSubString((Factory *)pIVar4);
      return pIVar4;
    }
  }
  return pIVar4 + 200;
}

