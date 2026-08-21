
/* v8::internal::compiler::LiveRangeBuilder::AddInitialIntervals(v8::internal::compiler::InstructionBlock
   const*, v8::internal::BitVector*) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::AddInitialIntervals
          (LiveRangeBuilder *this,InstructionBlock *param_1,BitVector *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TopLevelLiveRange *pTVar4;
  int iVar5;
  int iVar6;
  BitVector *pBVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  iVar5 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x74);
  pBVar7 = param_2 + 8;
  if (iVar5 != 1) {
    pBVar7 = *(BitVector **)pBVar7;
  }
  uVar8 = *(ulong *)pBVar7;
  if (uVar8 == 0) {
    if (iVar5 < 2) {
      uVar8 = 0;
      iVar9 = 0;
      iVar6 = 1;
      if (iVar5 < 2) {
        return;
      }
      goto LAB_0165ac24;
    }
    uVar8 = *(ulong *)(*(long *)(param_2 + 8) + 8);
    if (uVar8 == 0) {
      lVar11 = 2;
      do {
        if (iVar5 == lVar11) {
          return;
        }
        uVar8 = *(ulong *)(*(long *)(param_2 + 8) + lVar11 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar8 == 0);
      iVar6 = (int)lVar11 + -1;
    }
    else {
      iVar6 = 1;
    }
    iVar9 = iVar6 << 6;
  }
  else {
    iVar6 = 0;
    iVar9 = 0;
  }
  uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
  iVar9 = iVar9 + (int)uVar10;
  uVar8 = (uVar8 >> (uVar10 & 0x3f)) >> 1;
  if (iVar5 <= iVar6) {
    return;
  }
LAB_0165ac24:
  do {
    while( true ) {
      pTVar4 = (TopLevelLiveRange *)
               RegisterAllocationData::GetOrCreateLiveRangeFor
                         (*(RegisterAllocationData **)this,iVar9);
      TopLevelLiveRange::AddUseInterval
                (pTVar4,iVar2 << 2,iVar3 << 2,**(undefined8 **)this,
                 *(uint *)(*(undefined8 **)this + 0x3a) >> 2 & 1);
      iVar9 = iVar9 + 1;
      if (uVar8 == 0) break;
      iVar5 = *(int *)(param_2 + 4);
LAB_0165ac74:
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      iVar9 = iVar9 + (int)uVar10;
      uVar8 = (uVar8 >> (uVar10 & 0x3f)) >> 1;
      if (iVar5 <= iVar6) {
        return;
      }
    }
    iVar5 = *(int *)(param_2 + 4);
    uVar1 = iVar6 + 1;
    uVar10 = (ulong)uVar1;
    if ((int)uVar1 < iVar5) {
      uVar10 = (ulong)(int)uVar1;
      iVar9 = iVar6 << 6;
      do {
        uVar8 = *(ulong *)(*(long *)(param_2 + 8) + uVar10 * 8);
        if (uVar8 != 0) {
          iVar9 = iVar9 + 0x40;
          iVar6 = (int)uVar10;
          goto LAB_0165ac74;
        }
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + 0x40;
      } while ((long)uVar10 < (long)iVar5);
    }
    uVar8 = 0;
    iVar6 = (int)uVar10;
    if (iVar5 <= iVar6) {
      return;
    }
  } while( true );
}

