
/* v8::internal::TranslatedState::UpdateFromPreviouslyMaterializedObjects() */

void __thiscall
v8::internal::TranslatedState::UpdateFromPreviouslyMaterializedObjects(TranslatedState *this)

{
  int *piVar1;
  byte bVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar3 = (ulong *)MaterializedObjectStore::Get
                              (*(MaterializedObjectStore **)(*(long *)(this + 0x18) + 0x9580),
                               *(ulong *)(this + 0x20));
  if (puVar3 != (ulong *)0x0) {
    uVar8 = *puVar3;
    uVar6 = *(ulong *)(this + 0x58);
    iVar5 = (int)uVar6;
    if (iVar5 != *(int *)(uVar8 + 3) >> 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","length == previously_materialized_objects->length()");
    }
    if (0 < iVar5) {
      lVar11 = *(long *)(this + 0x18);
      iVar5 = 0;
      lVar10 = 0;
      while( true ) {
        if (*(int *)((long)iVar5 + 7 + uVar8) != *(int *)(lVar11 + 0x178)) {
          piVar1 = (int *)(*(long *)(*(long *)(this + 0x38) +
                                    ((ulong)(lVar10 + *(long *)(this + 0x50)) >> 6 &
                                    0x3fffffffffffff8)) +
                          (lVar10 + *(long *)(this + 0x50) & 0x1ffU) * 8);
          lVar9 = *(long *)this + (long)*piVar1 * 0x58;
          uVar12 = *(long *)(lVar9 + 0x48) + (long)piVar1[1];
          lVar9 = *(long *)(*(long *)(lVar9 + 0x30) + (uVar12 >> 4 & 0xffffffffffffff8));
          uVar12 = uVar12 & 0x7f;
          bVar2 = *(byte *)(lVar9 + uVar12 * 0x20);
          if ((bVar2 & 0xfe) != 8) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","value_info->IsMaterializedObject()");
          }
          if (bVar2 == 8) {
            pIVar7 = *(Isolate **)(this + 0x18);
            uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + (long)iVar5 + 7);
            if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar4 = *(ulong **)(pIVar7 + 0x95a0);
              if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
                puVar4 = (ulong *)HandleScope::Extend(pIVar7);
              }
              *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
              *puVar4 = uVar8;
            }
            else {
              puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
            }
            lVar9 = lVar9 + uVar12 * 0x20;
            *(ulong **)(lVar9 + 0x10) = puVar4;
            *(undefined1 *)(lVar9 + 1) = 2;
          }
        }
        if ((uVar6 & 0xffffffff) - 1 == lVar10) break;
        uVar8 = *puVar3;
        lVar10 = lVar10 + 1;
        iVar5 = iVar5 + 4;
      }
    }
  }
  return;
}

