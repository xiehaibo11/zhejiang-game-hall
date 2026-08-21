
/* v8::internal::BuiltinsConstantsTableBuilder::Finalize() */

void __thiscall
v8::internal::BuiltinsConstantsTableBuilder::Finalize(BuiltinsConstantsTableBuilder *this)

{
  long lVar1;
  IdentityMapBase *this_00;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  long lVar11;
  ulong uVar12;
  
  pIVar10 = *(Isolate **)this;
  uVar2 = *(undefined8 *)(pIVar10 + 0x95a0);
  lVar3 = *(long *)(pIVar10 + 0x95a8);
  *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
  if (*(int *)(this + 0x24) != 0) {
    puVar6 = (ulong *)Factory::NewFixedArray(*(Factory **)this,*(int *)(this + 0x24),1);
    if (this[0x40] != (BuiltinsConstantsTableBuilder)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!map_->is_iterable()");
    }
    lVar11 = *(long *)this;
    this_00 = (IdentityMapBase *)(this + 8);
    IdentityMapBase::EnableIteration(this_00);
    iVar5 = IdentityMapBase::NextIndex(this_00,-1);
    if (*(int *)(this + 0x28) != iVar5) {
      do {
        piVar7 = (int *)IdentityMapBase::EntryAtIndex(this_00,iVar5);
        iVar4 = *piVar7;
        uVar8 = IdentityMapBase::KeyAtIndex(this_00,iVar5);
        if ((uVar8 & 1) == 0) {
          uVar9 = 0;
        }
        else if ((*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x9a
                 ) && ((*(uint *)(uVar8 + 0x17) & 0x3e) == 6)) {
          uVar8 = Builtins::builtin((Builtins *)(lVar11 + 0x9e00),*(int *)(uVar8 + 0x27));
          uVar9 = uVar8 & 1;
        }
        else {
          uVar9 = 1;
        }
        uVar12 = *puVar6;
        lVar1 = uVar12 + (long)(iVar4 << 2);
        *(int *)(lVar1 + 7) = (int)uVar8;
        if (uVar9 != 0) {
          uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar12,lVar1,uVar8);
            uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar8);
          }
        }
        iVar5 = IdentityMapBase::NextIndex(this_00,iVar5);
      } while (*(int *)(this + 0x28) != iVar5);
    }
    Heap::SetBuiltinsConstantsTable((Heap *)(*(long *)this + 0x8850),*puVar6);
    if (this[0x40] == (BuiltinsConstantsTableBuilder)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map_->is_iterable()");
    }
    IdentityMapBase::DisableIteration(this_00);
  }
  if (pIVar10 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar10 + 0x95a0) = uVar2;
    *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
    if (*(long *)(pIVar10 + 0x95a8) != lVar3) {
      *(long *)(pIVar10 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar10);
      return;
    }
  }
  return;
}

