
/* v8::internal::ScopeInfo::CreateForBootstrapping(v8::internal::Isolate*,
   v8::internal::ScopeInfo::BootstrappingType) */

ulong * v8::internal::ScopeInfo::CreateForBootstrapping(Factory *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar5 = 0x84;
  if (param_2 != 1) {
    uVar5 = 0x88;
  }
  uVar2 = 0x20300;
  iVar8 = 2;
  if (param_2 == 0) {
    iVar8 = 3;
    uVar2 = 0x20200;
  }
  uVar3 = param_2 - 1;
  uVar15 = (uint)(param_2 == 1);
  iVar8 = iVar8 + uVar15 * 2;
  uVar9 = 0x6000;
  if (param_2 == 1) {
    iVar8 = iVar8 + 1;
  }
  else {
    uVar9 = 0;
  }
  iVar10 = 5;
  if (uVar3 < 2) {
    iVar10 = 3;
  }
  uVar11 = 3;
  puVar4 = (ulong *)Factory::NewScopeInfo(param_1,iVar8 + iVar10,4);
  *(uint *)(*puVar4 + 7) =
       uVar2 & 0xffff0000 | uVar2 & 0x7fff | uVar5 | uVar9 | uVar15 << 0xf |
       (uint)(param_2 == 2) << 0x1b;
  *(undefined4 *)(*puVar4 + 0xb) = 0;
  *(uint *)(*puVar4 + 0xf) = (uint)(1 < uVar3) << 1;
  if (1 < uVar3) {
    uVar12 = *puVar4;
    uVar11 = *(ulong *)(param_1 + 0xa48);
    *(int *)(uVar12 + 0x13) = (int)uVar11;
    if ((uVar11 & 1) != 0) {
      uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0x13,uVar11);
        uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0x13,uVar11);
      }
    }
    uVar11 = 5;
    *(undefined4 *)(*puVar4 + 0x17) = 0x7fffa2;
  }
  if (param_2 == 0) {
    uVar12 = *puVar4;
    uVar6 = 4;
    if ((1 < *(int *)(uVar12 + 3)) && (uVar6 = 4, (*(uint *)(uVar12 + 7) & 0x8000000) != 0)) {
      uVar6 = 6;
    }
    iVar8 = (int)uVar11;
    uVar11 = (ulong)(iVar8 + 1);
    *(undefined4 *)((uint)(iVar8 << 2) + uVar12 + 7) = uVar6;
  }
  if (param_2 == 1) {
    uVar13 = *puVar4;
    uVar12 = *(ulong *)(param_1 + 200);
    uVar14 = (ulong)(uint)((int)uVar11 << 2);
    *(int *)(uVar14 + uVar13 + 7) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar7 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar14 + uVar13 + 7;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,lVar1,uVar12);
        uVar7 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar12);
      }
    }
    uVar11 = (ulong)((int)uVar11 + 3);
    *(undefined4 *)(uVar14 + *puVar4 + 0xb) = 0;
    uVar13 = *puVar4;
    uVar12 = *(ulong *)(param_1 + 200);
    *(int *)(uVar14 + uVar13 + 0xf) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar7 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar14 + uVar13 + 0xf;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,lVar1,uVar12);
        uVar7 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar12);
      }
    }
  }
  *(undefined4 *)(*puVar4 + uVar11 * 4 + 7) = 0;
  *(undefined4 *)(uVar11 * 4 + *puVar4 + 0xb) = 0;
  return puVar4;
}

