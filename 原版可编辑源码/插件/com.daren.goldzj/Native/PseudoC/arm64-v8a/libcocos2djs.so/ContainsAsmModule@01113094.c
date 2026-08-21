
/* v8::internal::Script::ContainsAsmModule() */

undefined4 __thiscall v8::internal::Script::ContainsAsmModule(Script *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  uVar6 = *(ulong *)this;
  pIVar5 = (Isolate *)(uVar6 & 0xffffffff00000000);
  if ((*(uint *)(uVar6 + 0x17) & 0xfffffffe) == 6) {
    uVar6 = *(ulong *)(pIVar5 + 0x420);
  }
  else {
    uVar6 = (ulong)pIVar5 | (ulong)*(uint *)(uVar6 + 0x2b);
  }
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar6);
    uVar6 = *puVar4;
  }
  if (1 < (int)*(uint *)(uVar6 + 3)) {
    iVar7 = 0;
    uVar8 = 1;
    do {
      uVar2 = *(uint *)(uVar6 + 7 + (long)iVar7);
      if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
        if ((int)((ulong)uVar2 & 0xfffffffd) != *(int *)((uVar6 & 0xffffffff00000000) + 0xa0)) {
          if ((uVar2 & 0xfffffffd) == 0) {
            return 0;
          }
          uVar6 = (ulong)uVar2 & 0xfffffffd | uVar6 & 0xffffffff00000000;
          goto LAB_0111316c;
        }
      }
      bVar3 = uVar8 < *(uint *)(uVar6 + 3) >> 1;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (bVar3);
  }
  return 0;
LAB_0111316c:
  if (((*(uint *)(uVar6 + 3) & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 3)) - 1)) ==
      0x57)) {
    return 1;
  }
  uVar6 = *puVar4;
  iVar1 = *(int *)(uVar6 + 3) >> 1;
  iVar7 = (int)uVar8;
  if (iVar1 <= iVar7) {
    return 0;
  }
  lVar9 = (long)iVar7;
  iVar7 = iVar7 << 2;
  do {
    uVar2 = *(uint *)(uVar6 + 7 + (long)iVar7);
    if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
      if ((int)((ulong)uVar2 & 0xfffffffd) != *(int *)((uVar6 & 0xffffffff00000000) + 0xa0)) break;
    }
    lVar9 = lVar9 + 1;
    iVar7 = iVar7 + 4;
    if (iVar1 == lVar9) {
      return 0;
    }
  } while( true );
  uVar6 = (ulong)uVar2 & 0xfffffffd | uVar6 & 0xffffffff00000000;
  uVar8 = lVar9 + 1;
  if ((uVar2 & 0xfffffffd) == 0) {
    return 0;
  }
  goto LAB_0111316c;
}

