
/* v8::ArrayBufferView::CopyContents(void*, unsigned long) */

size_t __thiscall
v8::ArrayBufferView::CopyContents(ArrayBufferView *this,void *param_1,ulong param_2)

{
  CanonicalHandleScope *pCVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  Isolate *pIVar6;
  long lVar7;
  
  uVar4 = *(ulong *)this;
  if (*(ulong *)(uVar4 + 0x17) <= param_2) {
    param_2 = *(ulong *)(uVar4 + 0x17);
  }
  if (param_2 != 0) {
    pIVar6 = (Isolate *)(uVar4 & 0xffffffff00000000);
    pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
    lVar7 = *(long *)(uVar4 + 0xf);
    uVar4 = (ulong)pIVar6 | (ulong)*(uint *)(uVar4 + 0xb);
    if (pCVar1 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
      lVar5 = *(long *)(uVar4 + 0x13);
    }
    else {
      plVar2 = (long *)internal::CanonicalHandleScope::Lookup(pCVar1,uVar4);
      lVar5 = *(long *)(*plVar2 + 0x13);
    }
    if (lVar5 == 0) {
      pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
      uVar4 = *(ulong *)this;
      if (pCVar1 == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar3 = (ulong *)internal::HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar4;
      }
      else {
        puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar1,uVar4);
        uVar4 = *puVar3;
      }
      lVar5 = *(long *)(uVar4 + 0x27) + (ulong)*(uint *)(uVar4 + 0x2f);
    }
    memcpy(param_1,(void *)(lVar5 + lVar7),param_2);
  }
  return param_2;
}

