
/* v8::internal::compiler::LinearScanAllocator::SetLiveRangeAssignedRegister(v8::internal::compiler::LiveRange*,
   int) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::SetLiveRangeAssignedRegister
          (LinearScanAllocator *this,LiveRange *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  LiveRange *pLVar7;
  long *plVar8;
  
  uVar2 = *(uint *)(param_1 + 4) >> 0xd & 0xff;
  if (((uVar2 == 0xd) || (uVar2 == 0xc)) || (uVar2 == 0xb)) {
    lVar3 = *(long *)(*(long *)this + 0x170);
    if (*(int *)(lVar3 + 4) != 1) {
      lVar3 = *(long *)(lVar3 + 8);
      iVar1 = param_2 + 0x3f;
      if (-1 < param_2) {
        iVar1 = param_2;
      }
      goto LAB_0165eb60;
    }
LAB_0165eb38:
    puVar4 = (ulong *)(lVar3 + 8);
  }
  else {
    lVar3 = *(long *)(*(long *)this + 0x168);
    if (*(int *)(lVar3 + 4) == 1) goto LAB_0165eb38;
    lVar3 = *(long *)(lVar3 + 8);
    iVar1 = param_2 + 0x3f;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
LAB_0165eb60:
    puVar4 = (ulong *)(lVar3 + (long)(iVar1 >> 6) * 8);
  }
  *puVar4 = *puVar4 | 1L << ((ulong)(uint)param_2 & 0x3f);
  plVar5 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffe07f | param_2 << 7;
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    while( true ) {
      if ((lVar3 == 0) || ((~*(uint *)((long)plVar5 + 0x1c) & 3) == 0)) {
        plVar5 = (long *)plVar5[2];
      }
      else {
        *(uint *)((long)plVar5 + 0x1c) = *(uint *)((long)plVar5 + 0x1c) & 0xfffff03f | param_2 << 6;
        plVar5 = (long *)plVar5[2];
      }
      if (plVar5 == (long *)0x0) break;
      lVar3 = *plVar5;
    }
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x44) == 0x20)) {
    *(int *)(lVar3 + 0x44) = param_2;
  }
  pLVar7 = *(LiveRange **)(param_1 + 0x20);
  if (pLVar7 != param_1) {
    return;
  }
  if (((byte)pLVar7[4] >> 3 & 1) == 0) {
    return;
  }
  iVar1 = *(int *)(pLVar7 + 0x5c);
  plVar6 = (long *)(*(long *)this + 0x30);
  plVar8 = (long *)*plVar6;
  plVar5 = plVar6;
  if (plVar8 != (long *)0x0) {
    do {
      if (iVar1 <= (int)plVar8[4]) {
        plVar5 = plVar8;
      }
      plVar8 = (long *)plVar8[(int)plVar8[4] < iVar1];
    } while (plVar8 != (long *)0x0);
    if ((plVar5 != plVar6) && ((int)plVar5[4] <= iVar1)) goto LAB_0165ec40;
  }
  plVar5 = plVar6;
LAB_0165ec40:
  *(int *)(plVar5[5] + 0x30) = param_2;
  return;
}

