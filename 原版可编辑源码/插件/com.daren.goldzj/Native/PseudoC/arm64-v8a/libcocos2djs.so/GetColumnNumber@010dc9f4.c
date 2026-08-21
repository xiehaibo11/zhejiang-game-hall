
/* v8::internal::JSMessageObject::GetColumnNumber() const */

undefined4 __thiscall v8::internal::JSMessageObject::GetColumnNumber(JSMessageObject *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = *(ulong *)this;
  if (*(uint *)(uVar3 + 0x23) < 0xfffffffe) {
    pIVar2 = (Isolate *)(uVar3 & 0xffffffff00000000);
    uVar3 = (ulong)pIVar2 | (ulong)*(uint *)(uVar3 + 0x13);
    if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar3);
    }
    local_40 = 0xffffffffffffffff;
    uStack_38 = 0xffffffffffffffff;
    uVar3 = Script::GetPositionInfo(puVar1,*(int *)(*(long *)this + 0x23) >> 1,&local_40,1);
    if ((uVar3 & 1) == 0) {
      local_40._4_4_ = 0xffffffff;
    }
  }
  else {
    local_40._4_4_ = 0xffffffff;
  }
  return local_40._4_4_;
}

