
/* dragonBones::SlotColorTimelineState::_onArriveAtFrame() */

void __thiscall dragonBones::SlotColorTimelineState::_onArriveAtFrame(SlotColorTimelineState *this)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  if (*(long *)(this + 0x58) == 0) {
    piVar8 = *(int **)(this + 200);
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(this + 0xb8) + 200) + 0x38);
    uVar11 = *puVar6;
    *(ulong *)(piVar8 + 2) =
         CONCAT44((int)((float)((ulong)puVar6[1] >> 0x20) * 100.0),(int)((float)puVar6[1] * 100.0));
    *(ulong *)piVar8 =
         CONCAT44((int)((float)((ulong)uVar11 >> 0x20) * 100.0),(int)((float)uVar11 * 100.0));
    piVar8[4] = *(int *)(puVar6 + 2);
    piVar8[5] = *(int *)((long)puVar6 + 0x14);
    piVar8[6] = *(int *)(puVar6 + 3);
    iVar4 = *(int *)((long)puVar6 + 0x1c);
  }
  else {
    lVar2 = *(long *)(this + 0x50);
    lVar9 = *(long *)(this + 0x80);
    uVar10 = *(int *)(this + 0x24) + *(int *)(lVar2 + 0x10) + *(int *)(this + 0x30);
    sVar3 = *(short *)(lVar9 + (ulong)uVar10 * 2);
    lVar7 = *(long *)(*(long *)(this + 0x48) + 0xb0);
    iVar4 = sVar3 + 0x10000;
    if (-1 < sVar3) {
      iVar4 = (int)sVar3;
    }
    puVar6 = (undefined8 *)(lVar7 + (long)iVar4 * 2);
    uVar11 = *puVar6;
    puVar5 = *(undefined8 **)(this + 200);
    puVar5[1] = CONCAT44((int)(short)((ulong)uVar11 >> 0x30),(int)(short)((ulong)uVar11 >> 0x20));
    *puVar5 = CONCAT44((int)(short)((ulong)uVar11 >> 0x10),(int)(short)uVar11);
    uVar12 = puVar6[1];
    puVar5[3] = CONCAT44((int)(short)((ulong)uVar12 >> 0x30),(int)(short)((ulong)uVar12 >> 0x20));
    puVar5[2] = CONCAT44((int)(short)((ulong)uVar12 >> 0x10),(int)(short)uVar12);
    if (*(int *)(this + 0x1c) != 2) {
      return;
    }
    if (*(int *)(this + 0x30) == *(int *)(this + 0x28) + -1) {
      uVar10 = *(int *)(this + 0x24) + *(int *)(lVar2 + 0x10);
    }
    else {
      uVar10 = uVar10 + 1;
    }
    sVar3 = *(short *)(lVar9 + (ulong)uVar10 * 2);
    iVar4 = sVar3 + 0x10000;
    if (-1 < sVar3) {
      iVar4 = (int)sVar3;
    }
    psVar1 = (short *)(lVar7 + (long)iVar4 * 2);
    piVar8 = *(int **)(this + 0xd0);
    *piVar8 = (int)*psVar1 - (int)(short)uVar11;
    piVar8[1] = (int)psVar1[1] - *(int *)((long)puVar5 + 4);
    piVar8[2] = (int)psVar1[2] - *(int *)(puVar5 + 1);
    piVar8[3] = (int)psVar1[3] - *(int *)((long)puVar5 + 0xc);
    piVar8[4] = (int)psVar1[4] - *(int *)(puVar5 + 2);
    piVar8[5] = (int)psVar1[5] - *(int *)((long)puVar5 + 0x14);
    piVar8[6] = (int)psVar1[6] - *(int *)(puVar5 + 3);
    iVar4 = (int)psVar1[7] - *(int *)((long)puVar5 + 0x1c);
  }
  piVar8[7] = iVar4;
  return;
}

