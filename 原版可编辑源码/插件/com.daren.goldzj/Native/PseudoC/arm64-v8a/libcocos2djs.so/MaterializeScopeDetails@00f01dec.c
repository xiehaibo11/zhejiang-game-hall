
/* v8::internal::ScopeIterator::MaterializeScopeDetails() */

void __thiscall v8::internal::ScopeIterator::MaterializeScopeDetails(ScopeIterator *this)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = (ulong *)Factory::NewFixedArray(*(Factory **)this,6,0);
  uVar5 = *puVar2;
  iVar1 = Type(this);
  *(int *)(uVar5 + 7) = iVar1 << 1;
  puVar3 = (ulong *)ScopeObject(this,1);
  uVar6 = *puVar2;
  uVar5 = *puVar3;
  *(int *)(uVar6 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
    }
  }
  iVar1 = Type(this);
  if ((iVar1 != 0) && (iVar1 = Type(this), iVar1 != 6)) {
    if ((*(long *)(this + 0x20) == 0) || (0 < *(int *)(*(long *)(this + 0x50) + 0x7c))) {
      puVar3 = (ulong *)GetFunctionDebugName(this);
      uVar6 = *puVar2;
      uVar5 = *puVar3;
      *(int *)(uVar6 + 0xf) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar4 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xf,uVar5);
          uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xf,uVar5);
        }
      }
      uVar5 = *puVar2;
      if (*(long *)(this + 0x20) == 0) {
        uVar6 = **(ulong **)(this + 0x28);
        if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x8f) {
          iVar1 = 0;
        }
        else {
          local_58 = uVar6;
          local_50 = Context::closure_context((Context *)&local_58);
          local_48 = Context::scope_info((Context *)&local_50);
          iVar1 = ScopeInfo::StartPosition((ScopeInfo *)&local_48);
        }
      }
      else {
        iVar1 = *(int *)(*(long *)(this + 0x50) + 0x70);
      }
      *(int *)(uVar5 + 0x13) = iVar1 << 1;
      uVar5 = *puVar2;
      if (*(long *)(this + 0x20) == 0) {
        uVar6 = **(ulong **)(this + 0x28);
        if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x8f) {
          iVar1 = 0;
        }
        else {
          local_58 = uVar6;
          local_50 = Context::closure_context((Context *)&local_58);
          local_48 = Context::scope_info((Context *)&local_50);
          iVar1 = ScopeInfo::EndPosition((ScopeInfo *)&local_48);
        }
      }
      else {
        iVar1 = *(int *)(*(long *)(this + 0x50) + 0x74);
      }
      *(int *)(uVar5 + 0x17) = iVar1 << 1;
      if (*(ulong **)(this + 0x20) != (ulong *)0x0) {
        uVar6 = *puVar2;
        uVar5 = **(ulong **)(this + 0x20);
        *(int *)(uVar6 + 0x1b) = (int)uVar5;
        if ((uVar5 & 1) != 0) {
          uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar4 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x1b,uVar5);
            uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x1b,uVar5);
          }
        }
      }
    }
    Factory::NewJSArrayWithElements(*(undefined8 *)this,puVar2,3,*(int *)(*puVar2 + 3) >> 1,0);
    return;
  }
  Factory::NewJSArrayWithElements(*(undefined8 *)this,puVar2,3,*(int *)(*puVar2 + 3) >> 1,0);
  return;
}

