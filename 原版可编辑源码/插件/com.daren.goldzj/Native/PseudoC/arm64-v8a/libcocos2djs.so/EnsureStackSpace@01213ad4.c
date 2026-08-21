
/* v8::internal::wasm::ThreadImpl::EnsureStackSpace(unsigned long) */

void __thiscall v8::internal::wasm::ThreadImpl::EnsureStackSpace(ThreadImpl *this,ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  void *__s;
  void *pvVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  size_t __n;
  Isolate *pIVar12;
  int iVar13;
  
  if ((ulong)((*(long *)(this + 0x20) - *(long *)(this + 0x28)) * -0xf0f0f0f0f0f0f0f) < param_1) {
    __n = *(long *)(this + 0x20) - *(long *)(this + 0x18);
    iVar10 = (int)__n;
    uVar4 = base::bits::RoundUpToPowerOfTwo64
                      (param_1 + (*(long *)(this + 0x28) - *(long *)(this + 0x18)) *
                                 -0xf0f0f0f0f0f0f0f);
    if (uVar4 <= __n * -0x1e1e1e1e1e1e1e1e) {
      uVar4 = __n * -0x1e1e1e1e1e1e1e1e;
    }
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    uVar11 = uVar4 * 0x11;
    if (SUB168(auVar3 * ZEXT816(0x11),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    __s = operator_new__(uVar11);
    memset(__s,0,((uVar4 * 0x11 - 0x11) / 0x11) * 0x11 + 0x11);
    if (__n != 0) {
      memcpy(__s,*(void **)(this + 0x18),__n);
    }
    pvVar5 = *(void **)(this + 0x18);
    *(void **)(this + 0x18) = __s;
    *(long *)(this + 0x28) = (long)__s + (*(long *)(this + 0x28) - (long)pvVar5);
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      __s = *(void **)(this + 0x18);
    }
    pIVar12 = *(Isolate **)(this + 8);
    *(void **)(this + 0x20) = (void *)((long)__s + uVar4 * 0x11);
    uVar1 = *(undefined8 *)(pIVar12 + 0x95a0);
    lVar2 = *(long *)(pIVar12 + 0x95a8);
    iVar13 = (int)uVar4;
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
    pIVar6 = *(Isolate **)(this + 8);
    uVar4 = **(ulong **)(this + 0x30) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar4;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar4);
    }
    puVar7 = (ulong *)Factory::CopyFixedArrayAndGrow
                                (*(undefined8 *)(this + 8),puVar7,iVar13 + iVar10 * 0xf0f0f0f);
    uVar4 = *puVar7;
    if (iVar10 * -0xf0f0f0f < iVar13) {
      lVar9 = (long)iVar13 - (long)(iVar10 * -0xf0f0f0f);
      iVar10 = iVar10 * -0x3c3c3c3c;
      do {
        lVar9 = lVar9 + -1;
        *(undefined4 *)(uVar4 + 7 + (long)iVar10) =
             *(undefined4 *)((uVar4 & 0xffffffff00000000) + 0xa8);
        iVar10 = iVar10 + 4;
      } while (lVar9 != 0);
      uVar4 = *puVar7;
    }
    uVar11 = **(ulong **)(this + 0x30);
    *(int *)(uVar11 + 3) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar8 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar11,uVar11 + 3,uVar4);
        uVar8 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,uVar11 + 3,uVar4);
      }
    }
    if (pIVar12 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar12 + 0x95a0) = uVar1;
      *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
      if (*(long *)(pIVar12 + 0x95a8) != lVar2) {
        *(long *)(pIVar12 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar12);
        return;
      }
    }
  }
  return;
}

