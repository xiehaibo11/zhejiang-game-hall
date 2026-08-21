
/* v8::debug::GeneratorObject::Script() */

ulong * __thiscall v8::debug::GeneratorObject::Script(GeneratorObject *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  pIVar1 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
  uVar3 = (ulong)pIVar1 |
          (ulong)*(uint *)(((ulong)pIVar1 |
                           (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(*(ulong *)this + 0xb))
                                           + 0xb)) + 0xf);
  if (*(short *)(((ulong)pIVar1 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
    uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(uVar3 + 0xb);
  }
  if (((uVar3 & 1) == 0) ||
     (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x65)) {
    puVar2 = (ulong *)0x0;
  }
  else if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
  }
  return puVar2;
}

