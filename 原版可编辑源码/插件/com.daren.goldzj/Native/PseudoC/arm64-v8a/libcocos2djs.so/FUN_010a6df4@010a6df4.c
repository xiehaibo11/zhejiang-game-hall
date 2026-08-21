
void FUN_010a6df4(long param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  puVar5 = (ulong *)v8::internal::JSObject::NormalizeElements();
  uVar10 = *param_2;
  uVar9 = *puVar5;
  *(int *)(uVar10 + 0xb) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,uVar9);
      uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,uVar9);
    }
  }
  if (*param_3 != -1) {
    uVar2 = (*(int *)(*param_2 + 3) >> 1) - 2;
    uVar7 = (uint)*param_3;
    if (uVar2 <= uVar7) {
      uVar10 = *puVar5;
      uVar7 = uVar7 - uVar2;
      lVar8 = (ulong)*(uint *)(param_1 + 4) << 0x20;
      uVar9 = *(ulong *)(*(long *)(lVar8 + 0x490) + 7);
      uVar3 = (*(int *)(uVar10 + 0xf) >> 1) - 1;
      uVar9 = (uVar9 ^ (ulong)uVar7 ^ 0xffffffffffffffff) + (uVar9 ^ uVar7) * 0x40000;
      uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
      uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
      uVar9 = (ulong)(uVar3 & ((uint)(uVar9 >> 0x16) ^ (uint)uVar9) & 0x3fffffff);
      uVar1 = *(uint *)(((long)(uVar9 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar10 + 7);
      if (uVar1 != *(uint *)(lVar8 + 0xa0)) {
        iVar4 = 1;
        do {
          if (uVar1 != (uint)*(undefined8 *)(lVar8 + 0xa8)) {
            if ((uVar1 & 1) == 0) {
              dVar11 = (double)((int)uVar1 >> 1);
            }
            else {
              dVar11 = *(double *)((uVar10 & 0xffffffff00000000 | (ulong)uVar1) + 3);
            }
            if (uVar7 == (int)dVar11) goto LAB_010a6f88;
          }
          uVar9 = (ulong)((int)uVar9 + iVar4 & uVar3);
          uVar1 = *(uint *)(((long)(uVar9 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar10 + 7);
          iVar4 = iVar4 + 1;
        } while (uVar1 != *(uint *)(lVar8 + 0xa0));
      }
      uVar9 = 0xffffffffffffffff;
LAB_010a6f88:
      *param_3 = uVar9 + uVar2;
    }
  }
  return;
}

