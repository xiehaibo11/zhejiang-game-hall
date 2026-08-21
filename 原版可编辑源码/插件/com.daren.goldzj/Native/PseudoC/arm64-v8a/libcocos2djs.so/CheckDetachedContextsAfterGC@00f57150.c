
/* v8::internal::Isolate::CheckDetachedContextsAfterGC() */

void __thiscall v8::internal::Isolate::CheckDetachedContextsAfterGC(Isolate *this)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  
  iVar11 = *(int *)(this + 0x95b0);
  uVar3 = *(undefined8 *)(this + 0x95a0);
  lVar4 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = iVar11 + 1;
  uVar6 = *(ulong *)(this + 0xf68);
  piVar8 = (int *)(uVar6 + 7);
  uVar2 = *piVar8 >> 1;
  if (uVar2 == 0) {
    *(int *)(this + 0x95b0) = iVar11;
  }
  else {
    if (*piVar8 < 2) {
      uVar12 = 0;
    }
    else {
      lVar13 = 0;
      lVar14 = 0;
      uVar12 = 0;
      iVar11 = 4;
      do {
        lVar1 = uVar6 + 0xb;
        uVar5 = *(uint *)(lVar1 + iVar11);
        uVar9 = (ulong)uVar5;
        if (uVar5 != 3) {
          *(uint *)(lVar1 + (int)(uVar12 * 4)) =
               *(int *)(lVar1 + (lVar13 >> 0x20)) + 2U & 0xfffffffe;
          uVar10 = *(ulong *)(this + 0xf68);
          lVar1 = uVar10 + (long)(int)(uVar12 * 4 + 4);
          *(uint *)(lVar1 + 0xb) = uVar5;
          if ((uVar5 & 1) != 0) {
            uVar6 = uVar6 & 0xffffffff00000000;
            uVar7 = uVar6 | uVar9 & 0xfffffffffffc0000;
            lVar1 = lVar1 + 0xb;
            if ((*(byte *)(uVar7 + 10) >> 2 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar10,lVar1,uVar6 | uVar9 & 0xfffffffffffffffd);
            }
            if (((*(byte *)(uVar7 | 8) & 0x18) != 0) &&
               ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar10,lVar1,uVar6 | uVar9 & 0xfffffffffffffffd);
            }
          }
          uVar6 = *(ulong *)(this + 0xf68);
          uVar12 = uVar12 + 2;
        }
        lVar14 = lVar14 + 2;
        iVar11 = iVar11 + 8;
        lVar13 = lVar13 + 0x800000000;
      } while (lVar14 < (int)uVar2);
      piVar8 = (int *)(uVar6 + 7);
    }
    *piVar8 = uVar12 << 1;
    if ((int)uVar12 < (int)uVar2) {
      iVar11 = uVar12 << 2;
      lVar14 = (long)(int)uVar2 - (long)(int)uVar12;
      do {
        lVar14 = lVar14 + -1;
        lVar13 = (long)iVar11;
        iVar11 = iVar11 + 4;
        *(undefined4 *)(*(long *)(this + 0xf68) + lVar13 + 0xb) = 0;
        uVar12 = uVar2;
      } while (lVar14 != 0);
    }
    if ((FLAG_trace_detached_contexts == '\0') ||
       (PrintF("%d detached contexts are collected out of %d\n",(ulong)(uVar2 - uVar12)),
       (int)uVar12 < 1)) {
      if (this == (Isolate *)0x0) {
        return;
      }
    }
    else {
      lVar14 = 0;
      iVar11 = 4;
      do {
        lVar13 = *(ulong *)(this + 0xf68) + 0xb;
        uVar2 = *(uint *)(lVar13 + (iVar11 + -4));
        if (7 < (int)uVar2) {
          PrintF("detached context %p\n survived %d GCs (leak?)\n",
                 *(ulong *)(this + 0xf68) & 0xffffffff00000000 | (ulong)*(uint *)(lVar13 + iVar11),
                 (ulong)(uVar2 >> 1));
        }
        lVar14 = lVar14 + 2;
        iVar11 = iVar11 + 8;
      } while (lVar14 < (long)(ulong)uVar12);
    }
    *(undefined8 *)(this + 0x95a0) = uVar3;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar4) {
      *(long *)(this + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(this);
      return;
    }
  }
  return;
}

