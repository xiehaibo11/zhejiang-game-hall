
/* v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean() */

void __thiscall
v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean(MarkCompactCollector *this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(this + 8);
  lVar4 = *(long *)(*(long *)(lVar3 + 0xf0) + 0x20);
  if (lVar4 != 0) {
    do {
      uVar1 = ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean
                        (*(ConcurrentBitmap<(v8::internal::AccessMode)1> **)(lVar4 + 0x10));
      if ((uVar1 & 1) == 0) goto LAB_00fab724;
      if (*(long *)(lVar4 + 0x68) != 0) goto LAB_00fab738;
      lVar4 = *(long *)(lVar4 + 0xe0);
    } while (lVar4 != 0);
    lVar3 = *(long *)(this + 8);
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xf8) + 0x20);
  if (lVar4 != 0) {
    do {
      uVar1 = ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean
                        (*(ConcurrentBitmap<(v8::internal::AccessMode)1> **)(lVar4 + 0x10));
      if ((uVar1 & 1) == 0) goto LAB_00fab724;
      if (*(long *)(lVar4 + 0x68) != 0) goto LAB_00fab738;
      lVar4 = *(long *)(lVar4 + 0xe0);
    } while (lVar4 != 0);
    lVar3 = *(long *)(this + 8);
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0x100) + 0x20);
  if (lVar4 != 0) {
    do {
      uVar1 = ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean
                        (*(ConcurrentBitmap<(v8::internal::AccessMode)1> **)(lVar4 + 0x10));
      if ((uVar1 & 1) == 0) goto LAB_00fab724;
      if (*(long *)(lVar4 + 0x68) != 0) goto LAB_00fab738;
      lVar4 = *(long *)(lVar4 + 0xe0);
    } while (lVar4 != 0);
    lVar3 = *(long *)(this + 8);
  }
  uVar1 = *(ulong *)((*(long *)(*(long *)(lVar3 + 0xe8) + 0x68) - 4U & 0xfffffffffffc0000) + 0xe0);
  uVar5 = *(ulong *)(*(long *)(*(long *)(lVar3 + 0xe8) + 0xf0) + 0x20) & 0xfffffffffffc0000;
  if (uVar1 != uVar5) {
    do {
      uVar2 = ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean
                        (*(ConcurrentBitmap<(v8::internal::AccessMode)1> **)(uVar5 + 0x10));
      if ((uVar2 & 1) == 0) {
LAB_00fab724:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","non_atomic_marking_state()->bitmap(p)->IsClean()");
      }
      if (*(long *)(uVar5 + 0x68) != 0) {
LAB_00fab738:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","0 == non_atomic_marking_state()->live_bytes(p)");
      }
      uVar5 = *(ulong *)(uVar5 + 0xe0);
    } while (uVar1 != uVar5);
    lVar3 = *(long *)(this + 8);
  }
  VerifyMarkbitsAreDirty(this,*(ReadOnlySpace **)(lVar3 + 0x120));
  VerifyMarkbitsAreClean(this,*(LargeObjectSpace **)(*(long *)(this + 8) + 0x108));
  VerifyMarkbitsAreClean(this,*(LargeObjectSpace **)(*(long *)(this + 8) + 0x110));
  VerifyMarkbitsAreClean(this,*(LargeObjectSpace **)(*(long *)(this + 8) + 0x118));
  return;
}

