
/* ClipperLib::ClipperOffset::DoSquare(int, int) */

void __thiscall ClipperLib::ClipperOffset::DoSquare(ClipperOffset *this,int param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
  pdVar1 = (double *)(*(long *)(this + 0x58) + (long)param_2 * 0x10);
  pdVar2 = (double *)(*(long *)(this + 0x58) + uVar6);
  dVar10 = *pdVar1;
  dVar11 = pdVar1[1];
  dVar7 = atan2(*(double *)(this + 0x78),dVar10 * *pdVar2 + dVar11 * pdVar2[1]);
  dVar7 = tan(dVar7 * 0.25);
                    /* try { // try from 0103b334 to 0113b45b has its CatchHandler @ 0103b334
                       catch() { ... } // from try @ 0103b334 with catch @ 0103b334
                       catch() { ... } // from try @ 0103b5a0 with catch @ 0103b334
                       catch() { ... } // from try @ 0103b638 with catch @ 0103b334 */
  plVar3 = (long *)(*(long *)(this + 0x28) + uVar6);
  dVar8 = *(double *)(this + 0x70) * (dVar10 - dVar7 * dVar11) + (double)*plVar3;
  dVar10 = *(double *)(this + 0x70) * (dVar11 + dVar7 * dVar10) + (double)plVar3[1];
  dVar11 = -0.5;
  if (0.0 <= dVar8) {
    dVar11 = 0.5;
  }
  dVar9 = -0.5;
  if (0.0 <= dVar10) {
    dVar9 = 0.5;
  }
  local_78 = (long)(dVar8 + dVar11);
  lStack_70 = (long)(dVar10 + dVar9);
  plVar3 = *(long **)(this + 0x48);
  if (plVar3 < *(long **)(this + 0x50)) {
    plVar5 = plVar3 + 2;
    plVar3[1] = lStack_70;
    *plVar3 = local_78;
    *(long **)(this + 0x48) = plVar5;
  }
  else {
    std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
    __push_back_slow_path<ClipperLib::IntPoint>
              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
               (this + 0x40),(IntPoint *)&local_78);
    plVar5 = *(long **)(this + 0x48);
  }
  pdVar1 = (double *)(*(long *)(this + 0x58) + (long)param_1 * 0x10);
  dVar10 = *pdVar1;
  dVar11 = pdVar1[1];
  plVar3 = (long *)(*(long *)(this + 0x28) + (long)param_1 * 0x10);
  dVar8 = *(double *)(this + 0x70) * (dVar10 + dVar7 * dVar11) + (double)*plVar3;
  dVar7 = *(double *)(this + 0x70) * (dVar11 - dVar7 * dVar10) + (double)plVar3[1];
  dVar10 = -0.5;
  if (0.0 <= dVar8) {
    dVar10 = 0.5;
  }
  dVar11 = -0.5;
  if (0.0 <= dVar7) {
    dVar11 = 0.5;
  }
  local_78 = (long)(dVar8 + dVar10);
  lStack_70 = (long)(dVar7 + dVar11);
  if (plVar5 < *(long **)(this + 0x50)) {
    plVar5[1] = lStack_70;
    *plVar5 = local_78;
    *(long **)(this + 0x48) = plVar5 + 2;
  }
  else {
                    /* try { // try from 0103b45c to 0113b52b has its CatchHandler @ 0103b65c */
    std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
    __push_back_slow_path<ClipperLib::IntPoint>
              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
               (this + 0x40),(IntPoint *)&local_78);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

