
void FUN_0108c778(ulong *param_1,ulong *param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  Factory *this;
  
  iVar17 = *(int *)(*param_1 + 0xb) >> 1;
  uVar2 = iVar17 + param_4;
  this = (Factory *)(*param_1 & 0xffffffff00000000);
  if (uVar2 <= (uint)(*(int *)(*param_2 + 3) >> 1)) {
    if (param_5 == 0) {
      FUN_0108ca3c(this,param_1,param_2,param_4,0,iVar17);
    }
    goto LAB_0108c934;
  }
  iVar18 = param_4;
  if (param_5 != 0) {
    iVar18 = 0;
  }
  puVar8 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                              (this,uVar2 + (uVar2 >> 1) + 0x10);
  uVar9 = *puVar8;
  uVar10 = *param_2;
  iVar3 = *(int *)(uVar9 + 3) >> 1;
  uVar4 = *(int *)(uVar10 + 3) >> 1;
  uVar6 = iVar3 - iVar18;
  if (uVar6 <= uVar4) {
    uVar4 = uVar6;
  }
  uVar6 = iVar3 - (uVar4 + iVar18);
  if (0 < (int)uVar6) {
    uVar5 = *(undefined4 *)(this + 0xa8);
    lVar1 = uVar9 + (long)(int)((uVar4 + iVar18) * 4);
    uVar13 = (ulong)uVar6;
    if (uVar6 < 8) {
      uVar15 = 0;
    }
    else {
      uVar15 = uVar13 & 0xfffffff8;
      puVar16 = (undefined8 *)(lVar1 + 0x17);
      uVar11 = uVar15;
      do {
        puVar16[-1] = CONCAT44(uVar5,uVar5);
        puVar16[-2] = CONCAT44(uVar5,uVar5);
        puVar16[1] = CONCAT44(uVar5,uVar5);
        *puVar16 = CONCAT44(uVar5,uVar5);
        uVar11 = uVar11 - 8;
        puVar16 = puVar16 + 4;
      } while (uVar11 != 0);
      if (uVar15 == uVar13) goto LAB_0108c8b0;
    }
    lVar14 = uVar15 - uVar13;
    puVar12 = (undefined4 *)(lVar1 + 7 + uVar15 * 4);
    do {
      bVar7 = lVar14 != -1;
      lVar14 = lVar14 + 1;
      *puVar12 = uVar5;
      puVar12 = puVar12 + 1;
    } while (bVar7);
  }
LAB_0108c8b0:
  if (uVar4 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar9,uVar9 + (long)(iVar18 << 2) + 7,uVar10 + 7,uVar4,4);
  }
  uVar10 = *param_1;
  uVar9 = *puVar8;
  *(int *)(uVar10 + 7) = (int)uVar9;
  param_2 = puVar8;
  if ((uVar9 & 1) != 0) {
    uVar13 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar9);
      uVar13 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar9);
    }
  }
LAB_0108c934:
  iVar18 = 0;
  if (param_5 != 0) {
    iVar18 = iVar17;
  }
  if (param_4 != 0) {
    uVar10 = *param_2;
    iVar18 = iVar18 << 2;
    iVar17 = 8;
    uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    do {
      puVar12 = (undefined4 *)(uVar10 + 7 + (long)iVar18);
      uVar13 = *(ulong *)(*(long *)(param_3 + 8) - (long)iVar17);
      *puVar12 = (int)uVar13;
      if (((uVar9 & 0x40000) != 0 || (uVar9 & 0x18) == 0) && (uVar13 & 1) != 0) {
        uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar10,puVar12,uVar13);
          uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)(uVar10 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar10,puVar12,uVar13);
        }
      }
      iVar18 = iVar18 + 4;
      param_4 = param_4 + -1;
      iVar17 = iVar17 + 8;
    } while (param_4 != 0);
  }
  *(uint *)(*param_1 + 0xb) = uVar2 * 2;
  return;
}

