
/* v8::internal::JSMessageObject::GetLineNumber() const */

int __thiscall v8::internal::JSMessageObject::GetLineNumber(JSMessageObject *this)

{
  int iVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = *(ulong *)this;
  if (*(uint *)(uVar4 + 0x23) < 0xfffffffe) {
    pIVar3 = (Isolate *)(uVar4 & 0xffffffff00000000);
    uVar4 = (ulong)pIVar3 | (ulong)*(uint *)(uVar4 + 0x13);
    if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar4);
    }
    local_40 = 0xffffffffffffffff;
    uStack_38 = 0xffffffffffffffff;
    uVar4 = Script::GetPositionInfo(puVar2,*(int *)(*(long *)this + 0x23) >> 1,&local_40,1);
    iVar1 = 0;
    if ((uVar4 & 1) != 0) {
      iVar1 = (int)local_40 + 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

