
/* v8::internal::compiler::LinearScanAllocator::AssignRegisterOnReload(v8::internal::compiler::LiveRange*,
   int) */

LiveRange * __thiscall
v8::internal::compiler::LinearScanAllocator::AssignRegisterOnReload
          (LinearScanAllocator *this,LiveRange *param_1,int param_2)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  LiveRange *pLVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar11 = (ulong)(uint)param_2;
  if (0 < (int)*(uint *)(this + 0xc)) {
    uVar6 = 0;
    uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 4);
    if (uVar11 == 0) goto LAB_0165e9c0;
    while (uVar6 = uVar6 + 1, uVar6 < *(uint *)(this + 0xc)) {
      if (uVar6 == uVar11) {
LAB_0165e9c0:
        plVar2 = (long *)(*(long *)(this + 0x68) + uVar11 * 0x20);
        plVar7 = (long *)*plVar2;
        while (plVar7 != plVar2 + 1) {
          puVar8 = *(uint **)(plVar7[4] + 0x10);
          while (puVar8 != (uint *)0x0) {
            uVar3 = *puVar8;
            uVar12 = (uint)uVar13;
            if ((int)uVar12 < (int)uVar3) break;
            puVar1 = puVar8 + 1;
            puVar8 = *(uint **)(puVar8 + 2);
            if ((int)*puVar1 <= **(int **)(param_1 + 0x10) || (int)uVar12 <= (int)uVar3) {
              uVar3 = uVar12;
            }
            uVar13 = (ulong)uVar3;
          }
          plVar9 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar9 = plVar7 + 2;
            bVar4 = (long *)*(long *)*plVar9 != plVar7;
            plVar7 = (long *)*plVar9;
            if (bVar4) {
              do {
                lVar10 = *plVar9;
                plVar9 = (long *)(lVar10 + 0x10);
                plVar7 = (long *)*plVar9;
              } while (*plVar7 != lVar10);
            }
          }
          else {
            do {
              plVar7 = plVar9;
              plVar9 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
      }
    }
    if ((uint)uVar13 != *(uint *)(*(long *)(param_1 + 8) + 4)) {
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        PrintF("Found new end for %d:%d at %d\n",(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),
               (ulong)*(uint *)param_1,uVar13);
      }
      pLVar5 = (LiveRange *)
               RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,param_1,uVar13);
      AddToUnhandled(this,pLVar5);
    }
  }
  SetLiveRangeAssignedRegister(this,param_1,param_2);
  return param_1;
}

