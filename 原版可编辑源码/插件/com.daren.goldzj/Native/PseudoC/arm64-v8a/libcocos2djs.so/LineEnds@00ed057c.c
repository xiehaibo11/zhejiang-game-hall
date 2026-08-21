
/* v8::debug::Script::LineEnds() const */

void v8::debug::Script::LineEnds(void)

{
  uint uVar1;
  Script *in_x0;
  long lVar2;
  ulong *puVar3;
  void *__s;
  long *in_x8;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  Isolate *pIVar11;
  long *plVar12;
  int *piVar13;
  undefined8 uVar14;
  void *pvVar15;
  
  uVar6 = *(ulong *)in_x0;
  if ((*(uint *)(uVar6 + 0x17) & 0xfffffffe) == 6) {
    lVar2 = SourceMappingURL(in_x0);
    if (lVar2 == 0) {
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      return;
    }
    uVar6 = *(ulong *)in_x0;
  }
  pIVar11 = (Isolate *)(uVar6 & 0xffffffff00000000);
  piVar13 = (int *)((ulong)pIVar11 | 0x95b0);
  plVar12 = (long *)((ulong)pIVar11 | 0x95a8);
  uVar14 = *(undefined8 *)((ulong)pIVar11 | 0x95a0);
  lVar2 = *plVar12;
  *piVar13 = *piVar13 + 1;
  internal::Script::InitLineEnds();
  uVar1 = *(uint *)(*(ulong *)in_x0 + 0x1b);
  if (((uVar1 & 1) == 0) ||
     (uVar4 = *(ulong *)in_x0 & 0xffffffff00000000, uVar6 = uVar4 | uVar1,
     0xe < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","script->line_ends().IsFixedArray()");
  }
  if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar3 == (ulong *)*plVar12) {
      puVar3 = (ulong *)internal::HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar6);
    uVar6 = *puVar3;
  }
  uVar1 = *(uint *)(uVar6 + 3);
  if ((int)uVar1 >> 1 == 0) {
    pvVar15 = (void *)0x0;
    pvVar5 = (void *)0x0;
    __s = (void *)0x0;
    goto joined_r0x00ed0724;
  }
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = (long)((ulong)uVar1 << 0x20) >> 0x21;
  uVar4 = uVar6 * 4;
  __s = operator_new(uVar4);
  pvVar15 = (void *)((long)__s + uVar4);
  memset(__s,0,uVar4);
  pvVar5 = __s;
  uVar4 = uVar6;
  if ((uint)((int)uVar1 >> 1) < 2) {
LAB_00ed06ec:
    do {
      uVar4 = uVar4 - 1;
      pvVar5 = (void *)((long)pvVar5 + 4);
    } while (uVar4 != 0);
  }
  else {
    uVar8 = uVar6 & 0xfffffffffffffffe;
    pvVar5 = (void *)((long)__s + uVar8 * 4);
    uVar4 = uVar6 - uVar8;
    uVar10 = uVar8;
    do {
      uVar10 = uVar10 - 2;
    } while (uVar10 != 0);
    if (uVar8 != uVar6) goto LAB_00ed06ec;
  }
  uVar6 = *puVar3;
  uVar1 = *(uint *)(uVar6 + 3);
joined_r0x00ed0724:
  if (1 < (int)uVar1) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar9 = lVar9 + 1;
      *(int *)((long)__s + lVar7) = *(int *)(uVar6 + (long)(int)lVar7 + 7) >> 1;
      uVar6 = *puVar3;
      lVar7 = lVar7 + 4;
    } while (lVar9 < *(int *)(uVar6 + 3) >> 1);
  }
  *in_x8 = (long)__s;
  in_x8[1] = (long)pvVar5;
  in_x8[2] = (long)pvVar15;
  if (pIVar11 != (Isolate *)0x0) {
    *(undefined8 *)((ulong)pIVar11 | 0x95a0) = uVar14;
    *piVar13 = *piVar13 + -1;
    if (*plVar12 != lVar2) {
      *plVar12 = lVar2;
      internal::HandleScope::DeleteExtensions(pIVar11);
      return;
    }
  }
  return;
}

