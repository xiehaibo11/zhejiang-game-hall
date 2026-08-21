
/* v8::internal::TransitionsAccessor::PutPrototypeTransition(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::TransitionsAccessor::PutPrototypeTransition
          (TransitionsAccessor *this,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  
  if ((*(uint *)(*(long *)(this + 0x10) + 0xb) >> 0x14 & 1) != 0) {
    return;
  }
  if ((*(uint *)(*(long *)(this + 0x10) + 0xb) >> 0x15 & 1) != 0) {
    return;
  }
  if (FLAG_cache_prototype_transitions == '\0') {
    return;
  }
  if ((*(int *)(this + 0x20) == 4) && (uVar5 = *(ulong *)(this + 0x18), *(int *)(uVar5 + 7) != 0)) {
    pIVar3 = *(Isolate **)this;
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 7);
  }
  else {
    pIVar3 = *(Isolate **)this;
    uVar5 = *(ulong *)(pIVar3 + 0x420);
  }
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
    uVar5 = *puVar4;
  }
  iVar8 = ((int)*(uint *)(uVar5 + 3) >> 1) + -1;
  if (*(uint *)(uVar5 + 3) < 2) {
    iVar10 = 0;
    if (0 < iVar8) goto LAB_0113d6c0;
  }
  else {
    iVar10 = *(int *)(uVar5 + 7) >> 1;
    if (iVar10 < iVar8) goto LAB_0113d6c0;
  }
  uVar5 = TransitionArray::CompactPrototypeTransitionArray(*(undefined8 *)this,uVar5);
  if ((uVar5 & 1) == 0) {
    if (iVar8 == 0x100) {
      return;
    }
    uVar2 = iVar10 * 2 + 2;
    iVar8 = *(int *)(*puVar4 + 3);
    if (0xff < (int)uVar2) {
      uVar2 = 0x100;
    }
    puVar4 = (ulong *)Factory::CopyWeakFixedArrayAndGrow
                                (*(undefined8 *)this,puVar4,(uVar2 | 1) - (iVar8 >> 1));
    if (iVar8 < 2) {
      *(undefined4 *)(*puVar4 + 7) = 0;
    }
    lVar7 = **(long **)(this + 8);
    *(long *)(this + 0x10) = lVar7;
    uVar5 = *(long *)this + (ulong)*(uint *)(lVar7 + 0x23);
    iVar8 = 1;
    *(ulong *)(this + 0x18) = uVar5;
    if (((uVar5 & 1) != 0) && ((int)uVar5 != 3)) {
      uVar6 = uVar5 & 3;
      iVar8 = (int)uVar6;
      if (uVar6 != 3) {
        if (uVar6 != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar6 = uVar5 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0x98) {
          iVar8 = 4;
        }
        else {
          iVar8 = (uint)(*(short *)(uVar6 + *(uint *)(uVar5 - 1)) != 100) << 1;
        }
      }
    }
    *(int *)(this + 0x20) = iVar8;
    EnsureHasFullTransitionArray(this);
    uVar5 = *puVar4;
    uVar6 = *(ulong *)(this + 0x18);
    *(int *)(uVar6 + 7) = (int)uVar5;
    if (((int)uVar5 != 3) && ((uVar5 & 1) != 0)) {
      uVar9 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar5 & 0xfffffffffffffffd);
        uVar9 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar5 & 0xfffffffffffffffd);
      }
    }
  }
LAB_0113d6c0:
  uVar5 = *puVar4;
  if (*(uint *)(uVar5 + 3) < 2) {
    iVar8 = 1;
  }
  else {
    iVar8 = (*(int *)(uVar5 + 7) >> 1) + 1;
  }
  uVar6 = *param_3;
  puVar1 = (uint *)((long)(uVar5 + 7) + (long)(iVar8 << 2));
  uVar2 = (uint)uVar6 | 2;
  *puVar1 = uVar2;
  if (((uVar6 & 1) != 0) && (uVar2 != 3)) {
    uVar9 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,puVar1,uVar6 & 0xfffffffffffffffd);
      uVar9 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,puVar1,uVar6 & 0xfffffffffffffffd);
    }
  }
  *(int *)(*puVar4 + 7) = iVar8 << 1;
  return;
}

