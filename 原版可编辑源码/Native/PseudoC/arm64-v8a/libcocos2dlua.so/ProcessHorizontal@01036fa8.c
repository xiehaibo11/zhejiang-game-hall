
/* ClipperLib::Clipper::ProcessHorizontal(ClipperLib::TEdge*, bool) */

void __thiscall ClipperLib::Clipper::ProcessHorizontal(Clipper *this,TEdge *param_1,bool param_2)

{
  bool bVar1;
  IntPoint *pIVar2;
  Clipper *pCVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  clipperException *this_00;
  TEdge *pTVar11;
  TEdge *pTVar12;
  TEdge *pTVar13;
  TEdge *pTVar14;
  long lVar15;
  long lVar16;
  TEdge *pTVar17;
  long lVar18;
  TEdge *pTVar19;
  long local_88;
  TEdge *local_80;
  Join *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar16 = *(long *)param_1;
  lVar15 = *(long *)(param_1 + 0x20);
  bVar1 = lVar16 < lVar15;
  pTVar17 = param_1;
  local_88 = lVar16;
  lVar18 = lVar15;
  if (lVar15 <= lVar16) {
    local_88 = lVar15;
    lVar18 = lVar16;
  }
  do {
    pTVar13 = pTVar17;
    pTVar17 = *(TEdge **)(pTVar13 + 0x70);
    local_80 = param_1;
    if (pTVar17 == (TEdge *)0x0) {
      pTVar17 = *(TEdge **)(pTVar13 + 0x60);
      if (((((*(long *)(pTVar17 + 0x20) == *(long *)(pTVar13 + 0x20)) &&
            (*(long *)(pTVar17 + 0x28) == *(long *)(pTVar13 + 0x28))) &&
           (*(long *)(pTVar17 + 0x70) == 0)) ||
          (((pTVar17 = *(TEdge **)(pTVar13 + 0x68),
            *(long *)(pTVar17 + 0x20) == *(long *)(pTVar13 + 0x20) &&
            (*(long *)(pTVar17 + 0x28) == *(long *)(pTVar13 + 0x28))) &&
           (*(long *)(pTVar17 + 0x70) == 0)))) &&
         ((*(int *)(pTVar17 + 0x5c) != -2 &&
          ((*(long *)(pTVar17 + 0x78) != *(long *)(pTVar17 + 0x80) ||
           (*(long *)(pTVar17 + 0x38) == 0)))))) goto LAB_010370a8;
      break;
    }
  } while (*(long *)(pTVar17 + 0x38) == 0);
  pTVar17 = (TEdge *)0x0;
LAB_010370a8:
  do {
    lVar16 = 0x78;
    if (!bVar1) {
      lVar16 = 0x80;
    }
    pTVar12 = *(TEdge **)(param_1 + lVar16);
    if (*(TEdge **)(param_1 + lVar16) != (TEdge *)0x0) {
      while (((lVar16 = *(long *)(pTVar12 + 0x10), lVar16 != lVar15 ||
              (*(long *)(param_1 + 0x70) == 0)) ||
             (*(double *)(*(long *)(param_1 + 0x70) + 0x40) <= *(double *)(pTVar12 + 0x40)))) {
        lVar15 = 0x78;
        if (!bVar1) {
          lVar15 = 0x80;
        }
        pTVar19 = *(TEdge **)(pTVar12 + lVar15);
        if (bVar1) {
          if (lVar18 < lVar16) break;
        }
        else if (lVar16 < local_88) break;
        if ((-1 < *(int *)(param_1 + 0x5c)) && (*(int *)(param_1 + 0x50) != 0)) {
          PrepareHorzJoins(this,param_1,param_2);
        }
        if ((param_1 == pTVar13) && (pTVar12 == pTVar17)) {
          pTVar12 = pTVar17;
                    /* try { // try from 01037208 to 0113720b has its CatchHandler @ 01037258 */
                    /* try { // try from 0103720c to 01137283 has its CatchHandler @ 010371a4 */
          if (bVar1) {
            pTVar12 = pTVar13;
            pTVar13 = pTVar17;
          }
          IntersectEdges(this,pTVar12,pTVar13,(IntPoint *)(pTVar17 + 0x20),false);
          if (*(int *)(pTVar17 + 0x5c) < 0) goto LAB_01037234;
          this_00 = (clipperException *)__cxa_allocate_exception(0x20);
          clipperException::clipperException(this_00,"ProcessHorizontal error");
          goto LAB_01037530;
        }
        if (bVar1) {
          uStack_70 = *(undefined8 *)(param_1 + 0x18);
          local_78 = *(Join **)(pTVar12 + 0x10);
          pTVar11 = param_1;
          pTVar14 = pTVar12;
        }
        else {
          uStack_70 = *(undefined8 *)(param_1 + 0x18);
          local_78 = *(Join **)(pTVar12 + 0x10);
          pTVar11 = pTVar12;
          pTVar14 = param_1;
        }
        IntersectEdges(this,pTVar11,pTVar14,(IntPoint *)&local_78,true);
        SwapPositionsInAEL(this,param_1,pTVar12);
        if (pTVar19 == (TEdge *)0x0) break;
        lVar15 = *(long *)(param_1 + 0x20);
        pTVar12 = pTVar19;
      }
    }
                    /* catch() { ... } // from try @ 0103720c with catch @ 010371a4 */
    if ((-1 < *(int *)(param_1 + 0x5c)) && (*(int *)(param_1 + 0x50) != 0)) {
      PrepareHorzJoins(this,param_1,param_2);
    }
                    /* try { // try from 010371c8 to 011371cf has its CatchHandler @ 01037268 */
    if (*(long *)(param_1 + 0x70) == 0) {
                    /* catch() { ... } // from try @ 010371c8 with catch @ 01037268 */
      if (pTVar17 == (TEdge *)0x0) {
        if (-1 < *(int *)(param_1 + 0x5c)) {
                    /* try { // try from 01037354 to 0113738f has its CatchHandler @ 01037354
                       catch() { ... } // from try @ 01037354 with catch @ 01037354
                       catch() { ... } // from try @ 01037394 with catch @ 01037354 */
          AddOutPt(this,param_1,(IntPoint *)(param_1 + 0x20));
        }
        lVar18 = *(long *)(param_1 + 0x78);
        lVar15 = *(long *)(param_1 + 0x80);
        if ((lVar15 != 0 || lVar18 != 0) || (*(TEdge **)(this + 0x88) == param_1)) {
          pCVar3 = (Clipper *)(lVar15 + 0x78);
          if (lVar15 == 0) {
            pCVar3 = this + 0x88;
          }
          *(long *)pCVar3 = lVar18;
                    /* try { // try from 01037390 to 01137393 has its CatchHandler @ 010373a4 */
          if (lVar18 != 0) {
                    /* try { // try from 01037394 to 011373b7 has its CatchHandler @ 01037354 */
            *(long *)(lVar18 + 0x80) = lVar15;
          }
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
      }
      else if (*(int *)(pTVar17 + 0x5c) < 0) {
        lVar18 = *(long *)(param_1 + 0x78);
        lVar15 = *(long *)(param_1 + 0x80);
                    /* try { // try from 01037468 to 0113756b has its CatchHandler @ 01037468
                       catch() { ... } // from try @ 01037468 with catch @ 01037468
                       catch() { ... } // from try @ 01037594 with catch @ 01037468 */
        if ((lVar15 != 0 || lVar18 != 0) || (*(TEdge **)(this + 0x88) == param_1)) {
          pCVar3 = (Clipper *)(lVar15 + 0x78);
          if (lVar15 == 0) {
            pCVar3 = this + 0x88;
          }
          *(long *)pCVar3 = lVar18;
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x80) = lVar15;
          }
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
        lVar18 = *(long *)(pTVar17 + 0x78);
        lVar15 = *(long *)(pTVar17 + 0x80);
        if ((lVar15 != 0 || lVar18 != 0) || (*(TEdge **)(this + 0x88) == pTVar17)) {
          pCVar3 = (Clipper *)(lVar15 + 0x78);
          if (lVar15 == 0) {
            pCVar3 = this + 0x88;
          }
          *(long *)pCVar3 = lVar18;
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x80) = lVar15;
          }
          *(undefined8 *)(pTVar17 + 0x78) = 0;
          *(undefined8 *)(pTVar17 + 0x80) = 0;
        }
      }
      else {
        pIVar2 = (IntPoint *)(param_1 + 0x20);
        pTVar13 = pTVar17;
        if (bVar1) {
          pTVar13 = param_1;
          param_1 = pTVar17;
        }
        IntersectEdges(this,pTVar13,param_1,pIVar2,false);
        if (-1 < *(int *)(pTVar17 + 0x5c)) {
          this_00 = (clipperException *)__cxa_allocate_exception(0x20);
          clipperException::clipperException(this_00,"ProcessHorizontal error");
LAB_01037530:
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this_00,&clipperException::typeinfo,clipperException::~clipperException);
        }
      }
      goto LAB_01037234;
    }
    if (*(long *)(*(long *)(param_1 + 0x70) + 0x38) != 0) {
      if (*(int *)(param_1 + 0x5c) < 0) {
                    /* catch() { ... } // from try @ 010373e0 with catch @ 0103744c */
        UpdateEdgeIntoAEL(this,&local_80);
      }
      else {
        uVar8 = AddOutPt(this,param_1,(IntPoint *)(param_1 + 0x20));
        UpdateEdgeIntoAEL(this,&local_80);
        pTVar17 = local_80;
        if (*(int *)(local_80 + 0x50) != 0) {
          pTVar13 = *(TEdge **)(local_80 + 0x78);
          pTVar12 = *(TEdge **)(local_80 + 0x80);
                    /* catch() { ... } // from try @ 01037390 with catch @ 010373a4 */
                    /* catch() { ... } // from try @ 01037414 with catch @ 010373b8 */
                    /* try { // try from 010373e0 to 011373e7 has its CatchHandler @ 0103744c */
          if ((((((pTVar12 != (TEdge *)0x0) && (*(long *)(pTVar12 + 0x10) == *(long *)local_80)) &&
                (*(long *)(pTVar12 + 0x18) == *(long *)(local_80 + 8))) &&
               ((*(int *)(pTVar12 + 0x50) != 0 && (-1 < *(int *)(pTVar12 + 0x5c))))) &&
              ((*(long *)(pTVar12 + 0x28) < *(long *)(pTVar12 + 0x18) &&
               (uVar9 = SlopesEqual(local_80,pTVar12,
                                    (bool)this[*(long *)(*(long *)this + -0x18) + 0x18]),
               (uVar9 & 1) != 0)))) ||
             ((((pTVar13 != (TEdge *)0x0 && (*(long *)(pTVar13 + 0x10) == *(long *)pTVar17)) &&
               (*(long *)(pTVar13 + 0x18) == *(long *)(pTVar17 + 8))) &&
              ((((*(int *)(pTVar13 + 0x50) != 0 && (-1 < *(int *)(pTVar13 + 0x5c))) &&
                (*(long *)(pTVar13 + 0x28) < *(long *)(pTVar13 + 0x18))) &&
               (uVar9 = SlopesEqual(pTVar17,pTVar13,
                                    (bool)this[*(long *)(*(long *)this + -0x18) + 0x18]),
               pTVar12 = pTVar13, (uVar9 & 1) != 0)))))) {
            uVar10 = AddOutPt(this,pTVar12,(IntPoint *)pTVar17);
                    /* try { // try from 01037410 to 01137413 has its CatchHandler @ 0103743c */
            uVar4 = *(undefined8 *)(pTVar17 + 0x20);
            uVar6 = *(undefined8 *)(pTVar17 + 0x28);
                    /* try { // try from 01037414 to 01137467 has its CatchHandler @ 010373b8 */
            local_78 = operator_new(0x20);
            *(undefined8 *)local_78 = uVar8;
            *(undefined8 *)(local_78 + 8) = uVar10;
            *(undefined8 *)(local_78 + 0x10) = uVar4;
            *(undefined8 *)(local_78 + 0x18) = uVar6;
            puVar5 = *(undefined8 **)(this + 0x28);
            if (puVar5 == *(undefined8 **)(this + 0x30)) {
              std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
              __push_back_slow_path<ClipperLib::Join*const&>
                        ((vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *)
                         (this + 0x20),&local_78);
            }
            else {
              *puVar5 = local_78;
                    /* catch() { ... } // from try @ 01037410 with catch @ 0103743c */
              *(undefined8 **)(this + 0x28) = puVar5 + 1;
            }
          }
        }
      }
LAB_01037234:
      if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* catch() { ... } // from try @ 01037208 with catch @ 01037258 */
      return;
    }
    UpdateEdgeIntoAEL(this,&local_80);
    param_1 = local_80;
    if (-1 < *(int *)(local_80 + 0x5c)) {
      AddOutPt(this,local_80,(IntPoint *)local_80);
    }
    lVar16 = *(long *)param_1;
    lVar15 = *(long *)(param_1 + 0x20);
    local_88 = lVar16;
    if (lVar15 <= lVar16) {
      local_88 = lVar15;
    }
    bVar1 = lVar16 < lVar15;
    lVar18 = lVar15;
    if (lVar15 <= lVar16) {
      lVar18 = lVar16;
    }
  } while( true );
}

