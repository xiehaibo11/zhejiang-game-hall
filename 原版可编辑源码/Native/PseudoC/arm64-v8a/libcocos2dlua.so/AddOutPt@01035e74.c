
/* ClipperLib::Clipper::AddOutPt(ClipperLib::TEdge*, ClipperLib::IntPoint const&) */

void __thiscall ClipperLib::Clipper::AddOutPt(Clipper *this,TEdge *param_1,IntPoint *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  OutRec *pOVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  OutRec *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x5c) < 0) {
    local_50 = operator_new(0x28);
    *(undefined2 *)(local_50 + 4) = 0;
    *(undefined8 *)(local_50 + 0x20) = 0;
    *(undefined8 *)(local_50 + 0x18) = 0;
    *(undefined8 *)(local_50 + 0x10) = 0;
    *(undefined8 *)(local_50 + 8) = 0;
    puVar1 = *(undefined8 **)(this + 0x10);
    if (puVar1 == *(undefined8 **)(this + 0x18)) {
      std::__ndk1::vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>>::
      __push_back_slow_path<ClipperLib::OutRec*const&>
                ((vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>> *)
                 (this + 8),&local_50);
      puVar8 = *(undefined8 **)(this + 0x10);
    }
    else {
      puVar8 = puVar1 + 1;
      *puVar1 = local_50;
                    /* catch() { ... } // from try @ 01035df0 with catch @ 01035f1c */
      *(undefined8 **)(this + 0x10) = puVar8;
    }
    pOVar5 = local_50;
    lVar7 = *(long *)(this + 8);
    *(int *)local_50 = (int)((ulong)((long)puVar8 - lVar7) >> 3) + -1;
    local_50[5] = (OutRec)(*(int *)(param_1 + 0x50) == 0);
    piVar6 = operator_new(0x28);
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    *(int **)(pOVar5 + 0x18) = piVar6;
    *piVar6 = *(int *)pOVar5;
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar12 = *(undefined8 *)param_2;
    *(int **)(piVar6 + 6) = piVar6;
    *(int **)(piVar6 + 8) = piVar6;
    *(undefined8 *)(piVar6 + 4) = uVar13;
    *(undefined8 *)(piVar6 + 2) = uVar12;
    if ((pOVar5[5] == (OutRec)0x0) && (lVar9 = *(long *)(param_1 + 0x80), lVar9 != 0)) {
      bVar4 = false;
      iVar2 = *(int *)(lVar9 + 0x5c);
      while( true ) {
        if (((iVar2 < 0) || (*(int *)(lVar9 + 0x50) == 0)) ||
           (bVar4 = (bool)(bVar4 ^ 1), *(long *)(pOVar5 + 8) != 0)) {
          lVar9 = *(long *)(lVar9 + 0x80);
        }
        else {
          *(undefined8 *)(pOVar5 + 8) = *(undefined8 *)(lVar7 + (long)iVar2 * 8);
          lVar9 = *(long *)(lVar9 + 0x80);
        }
        if (lVar9 == 0) break;
        iVar2 = *(int *)(lVar9 + 0x5c);
      }
      if (bVar4) {
        pOVar5[4] = (OutRec)0x1;
      }
    }
    *(int *)(param_1 + 0x5c) = *(int *)pOVar5;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c);
    piVar11 = *(int **)(*(long *)(this + 8) + (long)*(int *)(param_1 + 0x5c) * 8);
    piVar10 = *(int **)(piVar11 + 6);
    if (iVar2 == 1) {
                    /* catch() { ... } // from try @ 01035e58 with catch @ 01035edc */
      if ((*(long *)param_2 == *(long *)(piVar10 + 2)) &&
         (piVar6 = piVar10, *(long *)(param_2 + 8) == *(long *)(piVar10 + 4))) goto LAB_01035ff4;
    }
    else {
      piVar6 = *(int **)(piVar10 + 8);
      if ((*(long *)param_2 == *(long *)(piVar6 + 2)) &&
         (*(long *)(param_2 + 8) == *(long *)(piVar6 + 4))) goto LAB_01035ff4;
    }
    piVar6 = operator_new(0x28);
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    *piVar6 = *piVar11;
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar12 = *(undefined8 *)param_2;
    *(int **)(piVar6 + 6) = piVar10;
    *(undefined8 *)(piVar6 + 4) = uVar13;
    *(undefined8 *)(piVar6 + 2) = uVar12;
    lVar7 = *(long *)(piVar10 + 8);
    *(long *)(piVar6 + 8) = lVar7;
    *(int **)(lVar7 + 0x18) = piVar6;
    *(int **)(piVar10 + 8) = piVar6;
    if (iVar2 == 1) {
      *(int **)(piVar11 + 6) = piVar6;
    }
  }
LAB_01035ff4:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar6);
  }
  return;
}

