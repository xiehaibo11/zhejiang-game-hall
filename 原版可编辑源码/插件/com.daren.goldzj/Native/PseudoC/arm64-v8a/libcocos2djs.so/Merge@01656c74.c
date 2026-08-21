
/* v8::internal::compiler::TopLevelLiveRange::Merge(v8::internal::compiler::TopLevelLiveRange*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::Merge
          (TopLevelLiveRange *this,TopLevelLiveRange *param_1,Zone *param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TopLevelLiveRange *pTVar6;
  LiveRange *pLVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  LiveRange *pLVar14;
  TopLevelLiveRange *pTVar15;
  
  if ((param_1 != (TopLevelLiveRange *)0x0) &&
     (pTVar6 = this, pLVar14 = (LiveRange *)param_1, this != (TopLevelLiveRange *)0x0)) {
LAB_01656cbc:
    pTVar15 = pTVar6;
    do {
      iVar4 = **(int **)(pLVar14 + 0x10);
      do {
        if (iVar4 < **(int **)(pTVar15 + 0x10)) {
          if ((pTVar15 == (TopLevelLiveRange *)0x0) ||
             (bVar3 = pLVar14 == (LiveRange *)0x0, pTVar6 = (TopLevelLiveRange *)pLVar14,
             pLVar14 = (LiveRange *)pTVar15, bVar3)) goto LAB_01656e38;
          goto LAB_01656cbc;
        }
        if (*(int *)(*(long *)(pTVar15 + 8) + 4) <= iVar4) {
          pLVar7 = *(LiveRange **)(pTVar15 + 0x28);
          if ((pLVar7 == (LiveRange *)0x0) || (iVar4 < **(int **)(pLVar7 + 0x10)))
          goto LAB_01656df0;
          goto LAB_01656df4;
        }
      } while (*(int *)(*(long *)(pLVar14 + 8) + 4) <= **(int **)(pTVar15 + 0x10));
      lVar9 = *(long *)(pTVar15 + 0x20);
      do {
        lVar12 = lVar9;
        lVar9 = *(long *)(lVar12 + 0x68);
      } while (*(long *)(lVar12 + 0x68) != 0);
      iVar2 = *(int *)(lVar12 + 0x60) + 1;
      *(int *)(lVar12 + 0x60) = iVar2;
      pLVar7 = *(LiveRange **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pLVar7) < 0x60) {
        pLVar7 = (LiveRange *)Zone::NewExpand(param_2,0x60);
      }
      else {
        *(LiveRange **)(param_2 + 0x10) = pLVar7 + 0x60;
      }
      uVar11 = *(undefined8 *)(pTVar15 + 0x20);
      uVar13 = *(uint *)(pTVar15 + 4);
      *(undefined8 *)(pLVar7 + 0x18) = 0;
      *(undefined8 *)(pLVar7 + 0x20) = uVar11;
      *(undefined8 *)(pLVar7 + 8) = 0;
      *(undefined8 *)(pLVar7 + 0x10) = 0;
      *(undefined8 *)(pLVar7 + 0x30) = 0;
      *(undefined8 *)(pLVar7 + 0x28) = 0;
      *(undefined8 *)(pLVar7 + 0x40) = 0;
      *(undefined8 *)(pLVar7 + 0x38) = 0;
      *(undefined8 *)(pLVar7 + 0x50) = 0;
      *(undefined8 *)(pLVar7 + 0x48) = 0;
      *(int *)(pLVar7 + 0x58) = -1;
      *(int *)pLVar7 = iVar2;
      *(uint *)(pLVar7 + 4) = uVar13 & 0x1fe000 | 0x8001000;
      *(undefined8 *)(pLVar7 + 0x50) = *(undefined8 *)(pTVar15 + 0x50);
      LiveRange::DetachAt((LiveRange *)pTVar15,iVar4,pLVar7,param_2,0);
      *(undefined8 *)(pLVar7 + 0x20) = *(undefined8 *)(pTVar15 + 0x20);
      *(undefined8 *)(pLVar7 + 0x28) = *(undefined8 *)(pTVar15 + 0x28);
      *(LiveRange **)(pTVar15 + 0x28) = pLVar7;
      if (pTVar15 == (TopLevelLiveRange *)pLVar7) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","temp != first");
      }
      uVar10 = *(uint *)(pTVar15 + 4);
      uVar5 = *(uint *)(pLVar7 + 4);
      uVar13 = uVar10 & 1;
      *(uint *)(pLVar7 + 4) = uVar5 & 0xfffffffe | uVar13;
      if ((uVar10 & 1) == 0) {
        *(uint *)(pLVar7 + 4) =
             uVar5 & 0xffffe000 | uVar5 & 0x7e | uVar13 | (*(uint *)(pTVar15 + 4) >> 7 & 0x3f) << 7;
      }
LAB_01656df0:
      *(LiveRange **)(pTVar15 + 0x28) = pLVar14;
LAB_01656df4:
      pTVar15 = (TopLevelLiveRange *)pLVar7;
    } while (pTVar15 != (TopLevelLiveRange *)0x0);
  }
LAB_01656e38:
  lVar8 = *(long *)(this + 0x20);
  lVar9 = 0;
  lVar12 = lVar8;
  if (lVar8 != 0) {
    do {
      *(long *)(lVar12 + 0x20) = lVar8;
      plVar1 = (long *)(lVar12 + 0x28);
      lVar12 = *plVar1;
    } while (*plVar1 != 0);
    lVar9 = *(long *)(this + 0x20);
  }
  uVar10 = *(uint *)(lVar9 + 4);
  uVar13 = *(uint *)(param_1 + 4);
  if (((uVar10 & 0x60) == 0) && ((uVar13 >> 6 & 1) != 0)) {
    *(uint *)(lVar9 + 4) = uVar10 & 0xffffff80 | uVar10 & 0x1f | (uVar13 >> 5 & 3) << 5;
    *(undefined8 *)(param_1 + 0x70) = 0;
    uVar13 = *(uint *)(param_1 + 4) & 0xffffff9f;
    *(uint *)(param_1 + 4) = uVar13;
    lVar9 = *(long *)(this + 0x20);
    uVar10 = *(uint *)(lVar9 + 4);
  }
  uVar13 = uVar13 >> 1 & 3;
  uVar5 = uVar10 >> 1 & 3;
  if (uVar13 <= uVar5) {
    uVar13 = uVar5;
  }
  *(uint *)(lVar9 + 4) = uVar10 & 0xfffffff8 | uVar10 & 1 | uVar13 << 1;
  return;
}

