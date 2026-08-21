
/* ClipperLib::ClipperOffset::DoMiter(int, int, double) */

void __thiscall
ClipperLib::ClipperOffset::DoMiter(ClipperOffset *this,int param_1,int param_2,double param_3)

{
  double *pdVar1;
  double *pdVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long local_38;
  long lStack_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar5 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
                    /* try { // try from 0103b6b4 to 0113b79b has its CatchHandler @ 0103b6b4
                       catch() { ... } // from try @ 0103b6b4 with catch @ 0103b6b4
                       catch() { ... } // from try @ 0103b860 with catch @ 0103b6b4
                       catch() { ... } // from try @ 0103b8b8 with catch @ 0103b6b4
                       catch() { ... } // from try @ 0103b900 with catch @ 0103b6b4 */
  pdVar1 = (double *)(*(long *)(this + 0x58) + (long)param_2 * 0x10);
  pdVar2 = (double *)(*(long *)(this + 0x58) + uVar5);
  plVar3 = (long *)(*(long *)(this + 0x28) + uVar5);
  dVar7 = (*(double *)(this + 0x70) / param_3) * (*pdVar1 + *pdVar2) + (double)*plVar3;
  dVar6 = (*(double *)(this + 0x70) / param_3) * (pdVar1[1] + pdVar2[1]) + (double)plVar3[1];
  dVar9 = -0.5;
  if (0.0 <= dVar7) {
    dVar9 = 0.5;
  }
  dVar8 = -0.5;
  if (0.0 <= dVar6) {
    dVar8 = 0.5;
  }
  local_38 = (long)(dVar7 + dVar9);
  lStack_30 = (long)(dVar6 + dVar8);
  plVar3 = *(long **)(this + 0x48);
  if (plVar3 < *(long **)(this + 0x50)) {
    plVar3[1] = lStack_30;
    *plVar3 = local_38;
    *(long **)(this + 0x48) = plVar3 + 2;
  }
  else {
    std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
    __push_back_slow_path<ClipperLib::IntPoint>
              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
               (this + 0x40),(IntPoint *)&local_38);
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

