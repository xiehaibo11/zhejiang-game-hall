
/* v8::internal::TransitionsAccessor::EnsureHasFullTransitionArray() */

void __thiscall
v8::internal::TransitionsAccessor::EnsureHasFullTransitionArray(TransitionsAccessor *this)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long local_38;
  
  iVar6 = *(int *)(this + 0x20);
  if (iVar6 == 1) {
    uVar9 = 0;
  }
  else {
    if (iVar6 == 4) {
      return;
    }
    uVar9 = (uint)(iVar6 != 2);
  }
  plVar3 = (long *)Factory::NewTransitionArray(*(Factory **)this,uVar9,0);
  pIVar2 = *(Isolate **)this;
  iVar6 = 1;
  lVar5 = **(long **)(this + 8);
  *(long *)(this + 0x10) = lVar5;
  pIVar1 = pIVar2 + *(uint *)(lVar5 + 0x23);
  *(Isolate **)(this + 0x18) = pIVar1;
  if ((((ulong)pIVar1 & 1) == 0) || ((int)pIVar1 == 3)) {
LAB_0113dcd8:
    *(int *)(this + 0x20) = iVar6;
  }
  else {
    uVar7 = (ulong)pIVar1 & 3;
    iVar6 = (int)uVar7;
    if (uVar7 == 3) goto LAB_0113dcd8;
    if (uVar7 != 1) goto LAB_0113de58;
    uVar7 = (ulong)pIVar1 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar7 + *(uint *)(pIVar1 + -1)) == 0x98) {
      iVar6 = 4;
      goto LAB_0113dcd8;
    }
    iVar6 = (uint)(*(short *)(uVar7 + *(uint *)(pIVar1 + -1)) != 100) << 1;
    *(int *)(this + 0x20) = iVar6;
  }
  if (uVar9 != 0) {
    if (iVar6 == 3) {
      uVar7 = (ulong)pIVar1 & 0xfffffffffffffffd;
    }
    else {
      if (iVar6 == 1) {
        *(undefined4 *)(*plVar3 + 0xb) = 0;
        goto LAB_0113ddc4;
      }
      uVar7 = 0;
    }
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar7);
      uVar7 = *puVar4;
    }
    local_38 = *plVar3;
    TransitionArray::Set
              ((TransitionArray *)&local_38,0,
               uVar7 & 0xffffffff00000000 |
               (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x17)) +
                                ((long)(int)((*(uint *)(uVar7 + 0xb) >> 10 & 0x3ff) - 1) *
                                 0xc00000000 + 0x1000000000 >> 0x20) + -1),*puVar4 | 2);
  }
LAB_0113ddc4:
  ReplaceTransitions(this,*plVar3);
  lVar5 = **(long **)(this + 8);
  *(long *)(this + 0x10) = lVar5;
  uVar7 = *(long *)this + (ulong)*(uint *)(lVar5 + 0x23);
  iVar6 = 1;
  *(ulong *)(this + 0x18) = uVar7;
  if (((uVar7 & 1) != 0) && ((int)uVar7 != 3)) {
    uVar8 = uVar7 & 3;
    iVar6 = (int)uVar8;
    if (uVar8 != 3) {
      if (uVar8 != 1) {
LAB_0113de58:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar8 = uVar7 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x98) {
        iVar6 = 4;
      }
      else {
        iVar6 = (uint)(*(short *)(uVar8 + *(uint *)(uVar7 - 1)) != 100) << 1;
      }
    }
  }
  *(int *)(this + 0x20) = iVar6;
  return;
}

