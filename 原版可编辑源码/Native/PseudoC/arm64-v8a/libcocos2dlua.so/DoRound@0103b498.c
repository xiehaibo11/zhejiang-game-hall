
/* ClipperLib::ClipperOffset::DoRound(int, int) */

void __thiscall ClipperLib::ClipperOffset::DoRound(ClipperOffset *this,int param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long local_88;
  long lStack_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  lVar6 = (long)param_1;
  pdVar1 = (double *)(*(long *)(this + 0x58) + (long)param_2 * 0x10);
  pdVar2 = (double *)(*(long *)(this + 0x58) + (long)param_1 * 0x10);
  dVar11 = *pdVar1;
  dVar10 = pdVar1[1];
  dVar13 = *pdVar2;
  dVar12 = pdVar2[1];
  dVar8 = atan2(*(double *)(this + 0x78),dVar11 * dVar13 + dVar10 * dVar12);
  dVar9 = -0.5;
  if (0.0 <= *(double *)(this + 0x98) * ABS(dVar8)) {
    dVar9 = 0.5;
  }
  uVar7 = (ulong)(*(double *)(this + 0x98) * ABS(dVar8) + dVar9);
  if (0 < (int)uVar7) {
    do {
      plVar3 = (long *)(*(long *)(this + 0x28) + lVar6 * 0x10);
      dVar9 = dVar11 * *(double *)(this + 0x70) + (double)*plVar3;
                    /* try { // try from 0103b57c to 0113b583 has its CatchHandler @ 0103b65c */
      dVar8 = dVar10 * *(double *)(this + 0x70) + (double)plVar3[1];
                    /* try { // try from 0103b584 to 0113b59f has its CatchHandler @ 0103b654 */
      dVar12 = -0.5;
      if (0.0 <= dVar9) {
        dVar12 = 0.5;
      }
      dVar13 = -0.5;
      if (0.0 <= dVar8) {
        dVar13 = 0.5;
      }
      local_88 = (long)(dVar9 + dVar12);
                    /* try { // try from 0103b5a0 to 0113b613 has its CatchHandler @ 0103b334 */
      lStack_80 = (long)(dVar8 + dVar13);
      plVar3 = *(long **)(this + 0x48);
      if (plVar3 < *(long **)(this + 0x50)) {
        plVar3[1] = lStack_80;
        *plVar3 = local_88;
        *(long **)(this + 0x48) = plVar3 + 2;
      }
      else {
                    /* try { // try from 0103b52c to 0113b547 has its CatchHandler @ 0103b66c */
        std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
        __push_back_slow_path<ClipperLib::IntPoint>
                  ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                   (this + 0x40),(IntPoint *)&local_88);
      }
      uVar4 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar4;
      dVar8 = dVar11 * *(double *)(this + 0x80);
      dVar11 = dVar11 * *(double *)(this + 0x88) - dVar10 * *(double *)(this + 0x80);
      dVar10 = dVar10 * *(double *)(this + 0x88) + dVar8;
    } while (uVar4 != 0);
    pdVar1 = (double *)(*(long *)(this + 0x58) + lVar6 * 0x10);
    dVar13 = *pdVar1;
    dVar12 = pdVar1[1];
  }
  plVar3 = (long *)(*(long *)(this + 0x28) + lVar6 * 0x10);
  dVar9 = dVar13 * *(double *)(this + 0x70) + (double)*plVar3;
  dVar8 = *(double *)(this + 0x70) * dVar12 + (double)plVar3[1];
  dVar10 = -0.5;
  if (0.0 <= dVar9) {
    dVar10 = 0.5;
  }
  dVar11 = -0.5;
  if (0.0 <= dVar8) {
    dVar11 = 0.5;
  }
                    /* try { // try from 0103b614 to 0113b61b has its CatchHandler @ 0103b65c */
  local_88 = (long)(dVar9 + dVar10);
  lStack_80 = (long)(dVar8 + dVar11);
                    /* try { // try from 0103b61c to 0113b637 has its CatchHandler @ 0103b64c */
  plVar3 = *(long **)(this + 0x48);
  if (plVar3 < *(long **)(this + 0x50)) {
    plVar3[1] = lStack_80;
    *plVar3 = local_88;
                    /* try { // try from 0103b638 to 0113b6b3 has its CatchHandler @ 0103b334 */
    *(long **)(this + 0x48) = plVar3 + 2;
  }
  else {
    std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
    __push_back_slow_path<ClipperLib::IntPoint>
              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
               (this + 0x40),(IntPoint *)&local_88);
  }
                    /* catch() { ... } // from try @ 0103b61c with catch @ 0103b64c */
                    /* catch() { ... } // from try @ 0103b584 with catch @ 0103b654 */
  if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 0103b45c with catch @ 0103b65c
                       catch() { ... } // from try @ 0103b57c with catch @ 0103b65c
                       catch() { ... } // from try @ 0103b614 with catch @ 0103b65c */
                    /* catch() { ... } // from try @ 0103b52c with catch @ 0103b66c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

