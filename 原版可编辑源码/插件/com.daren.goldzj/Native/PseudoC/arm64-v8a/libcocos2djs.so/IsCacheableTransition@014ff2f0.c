
/* v8::internal::LookupIterator::IsCacheableTransition() */

bool __thiscall v8::internal::LookupIterator::IsCacheableTransition(LookupIterator *this)

{
  Isolate *pIVar1;
  bool bVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  Isolate *pIVar6;
  
  pIVar3 = *(Isolate **)(this + 0x18);
  uVar5 = **(ulong **)(this + 0x28);
  if (((uVar5 & 1) == 0) || (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xa5))
  {
    if ((*(uint *)(uVar5 + 0xb) >> 0x15 & 1) != 0) {
      pIVar6 = (Isolate *)**(undefined8 **)(this + 0x30);
      if (((((ulong)pIVar6 & 1) != 0) &&
          (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(pIVar6 + -1)) == 0xab)) &&
         (pIVar1 = pIVar3 + *(uint *)(((ulong)pIVar3 | 0xf) + (ulong)*(uint *)(pIVar6 + -1)),
         *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(pIVar1 + -1)) == 0xaa)) {
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
          *puVar4 = (ulong)pIVar1;
          pIVar6 = pIVar1;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),(ulong)pIVar1);
          pIVar6 = (Isolate *)*puVar4;
        }
      }
      pIVar3 = *(Isolate **)(this + 0x18);
      if ((*(uint *)(((ulong)pIVar3 | 0xb) + (ulong)*(uint *)(pIVar6 + -1)) >> 0x15 & 1) != 0)
      goto LAB_014ff3ec;
      uVar5 = **(ulong **)(this + 0x28);
    }
    pIVar6 = pIVar3 + *(uint *)(uVar5 + 0x13);
    if ((((ulong)pIVar6 & 1) == 0) ||
       (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(pIVar6 + -1)) != 0xa2)) {
      pIVar6 = *(Isolate **)(pIVar3 + 0xa0);
    }
    bVar2 = *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(pIVar6 + -1)) == 0xa2;
  }
  else {
LAB_014ff3ec:
    bVar2 = true;
  }
  return bVar2;
}

