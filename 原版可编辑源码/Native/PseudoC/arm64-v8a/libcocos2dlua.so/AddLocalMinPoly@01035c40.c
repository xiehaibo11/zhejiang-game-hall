
/* ClipperLib::Clipper::AddLocalMinPoly(ClipperLib::TEdge*, ClipperLib::TEdge*, ClipperLib::IntPoint
   const&) */

undefined8 __thiscall
ClipperLib::Clipper::AddLocalMinPoly(Clipper *this,TEdge *param_1,TEdge *param_2,IntPoint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  TEdge *pTVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  TEdge *pTVar12;
  double dVar13;
  double dVar14;
  Join *local_60;
  long local_58;
  
                    /* try { // try from 01035c48 to 01135c4f has its CatchHandler @ 01035ce8 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 01035c88 to 01135c8b has its CatchHandler @ 01035cd8 */
                    /* try { // try from 01035c8c to 01135d03 has its CatchHandler @ 01035c1c */
  if ((*(long *)(param_2 + 0x38) == 0) ||
     (*(double *)(param_2 + 0x40) < *(double *)(param_1 + 0x40))) {
    uVar7 = AddOutPt(this,param_1,param_3);
    *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_2 + 0x4c) = 2;
    pTVar12 = *(TEdge **)(param_1 + 0x80);
    pTVar6 = param_1;
    if (pTVar12 == param_2) {
      pTVar12 = *(TEdge **)(param_2 + 0x80);
      pTVar6 = param_1;
    }
  }
  else {
                    /* try { // try from 01035d04 to 01135def has its CatchHandler @ 01035d04
                       catch() { ... } // from try @ 01035d04 with catch @ 01035d04
                       catch() { ... } // from try @ 01035e0c with catch @ 01035d04
                       catch() { ... } // from try @ 01035e64 with catch @ 01035d04 */
    uVar7 = AddOutPt(this,param_2,param_3);
    uVar4 = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x4c) = 2;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    pTVar12 = *(TEdge **)(param_2 + 0x80);
    *(undefined4 *)(param_2 + 0x4c) = 1;
    pTVar6 = param_2;
    if (pTVar12 == param_1) {
      pTVar12 = *(TEdge **)(param_1 + 0x80);
    }
  }
  if ((pTVar12 != (TEdge *)0x0) && (-1 < *(int *)(pTVar12 + 0x5c))) {
                    /* catch() { ... } // from try @ 01035c88 with catch @ 01035cd8 */
    lVar10 = *(long *)(param_3 + 8);
                    /* catch() { ... } // from try @ 01035c48 with catch @ 01035ce8 */
    if (*(long *)(pTVar12 + 0x28) == lVar10) {
      lVar11 = *(long *)(pTVar12 + 0x20);
    }
    else {
      dVar13 = *(double *)(pTVar12 + 0x40) * (double)(lVar10 - *(long *)(pTVar12 + 8));
      dVar14 = -0.5;
      if (0.0 <= dVar13) {
        dVar14 = 0.5;
      }
      lVar11 = *(long *)pTVar12 + (long)(dVar13 + dVar14);
    }
    if (*(long *)(pTVar6 + 0x28) == lVar10) {
      lVar10 = *(long *)(pTVar6 + 0x20);
    }
    else {
      dVar14 = *(double *)(pTVar6 + 0x40) * (double)(lVar10 - *(long *)(pTVar6 + 8));
      dVar13 = -0.5;
      if (0.0 <= dVar14) {
        dVar13 = 0.5;
      }
      lVar10 = *(long *)pTVar6 + (long)(dVar14 + dVar13);
    }
    if ((((lVar11 == lVar10) &&
         (uVar8 = SlopesEqual(pTVar6,pTVar12,(bool)this[*(long *)(*(long *)this + -0x18) + 0x18]),
         (uVar8 & 1) != 0)) && (*(int *)(pTVar6 + 0x50) != 0)) && (*(int *)(pTVar12 + 0x50) != 0)) {
      uVar9 = AddOutPt(this,pTVar12,param_3);
                    /* try { // try from 01035df0 to 01135e0b has its CatchHandler @ 01035f1c */
      uVar1 = *(undefined8 *)(pTVar6 + 0x20);
      uVar3 = *(undefined8 *)(pTVar6 + 0x28);
      local_60 = operator_new(0x20);
      *(undefined8 *)local_60 = uVar7;
      *(undefined8 *)(local_60 + 8) = uVar9;
      *(undefined8 *)(local_60 + 0x10) = uVar1;
      *(undefined8 *)(local_60 + 0x18) = uVar3;
                    /* try { // try from 01035e0c to 01135e57 has its CatchHandler @ 01035d04 */
      puVar2 = *(undefined8 **)(this + 0x28);
      if (puVar2 == *(undefined8 **)(this + 0x30)) {
        std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
        __push_back_slow_path<ClipperLib::Join*const&>
                  ((vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *)
                   (this + 0x20),&local_60);
      }
      else {
        *puVar2 = local_60;
        *(undefined8 **)(this + 0x28) = puVar2 + 1;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 01035e58 to 01135e63 has its CatchHandler @ 01035edc */
                    /* try { // try from 01035e64 to 01135f37 has its CatchHandler @ 01035d04 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

