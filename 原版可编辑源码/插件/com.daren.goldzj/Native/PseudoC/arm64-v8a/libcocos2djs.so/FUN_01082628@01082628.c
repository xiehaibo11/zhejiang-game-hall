
void FUN_01082628(long param_1,ulong param_2,int param_3,ulong param_4,uint param_5,int param_6,
                 uint param_7)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  double dVar18;
  
  if ((int)param_7 < 0) {
    iVar8 = 1;
    if ((*(uint *)(param_2 + 0x13) & 1) == 0) {
      iVar8 = ((uint)((int)*(uint *)(param_2 + 0x13) >> 1) >> 1) + 1;
    }
    param_7 = iVar8 - param_3;
    uVar7 = (*(int *)(param_4 + 3) >> 1) - (param_7 + param_6);
    if (0 < (int)uVar7) {
      uVar4 = *(undefined4 *)(param_1 + 0xa8);
      lVar1 = param_4 + (long)(int)((param_7 + param_6) * 4);
      uVar11 = (ulong)uVar7;
      if (uVar7 < 8) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar11 & 0xfffffff8;
        puVar15 = (undefined8 *)(lVar1 + 0x17);
        uVar17 = uVar14;
        do {
          puVar15[-1] = CONCAT44(uVar4,uVar4);
          puVar15[-2] = CONCAT44(uVar4,uVar4);
          puVar15[1] = CONCAT44(uVar4,uVar4);
          *puVar15 = CONCAT44(uVar4,uVar4);
          uVar17 = uVar17 - 8;
          puVar15 = puVar15 + 4;
        } while (uVar17 != 0);
        if (uVar14 == uVar11) goto LAB_010826e8;
      }
      lVar12 = uVar11 - uVar14;
      puVar9 = (undefined4 *)(lVar1 + 7 + uVar14 * 4);
      do {
        lVar12 = lVar12 + -1;
        *puVar9 = uVar4;
        puVar9 = puVar9 + 1;
      } while (lVar12 != 0);
    }
  }
LAB_010826e8:
  if (param_7 != 0) {
    uVar7 = *(int *)(param_4 + 3) >> 1;
    uVar3 = uVar7 - param_6;
    if (param_7 + param_6 <= uVar7) {
      uVar3 = param_7;
    }
    if (0 < (int)uVar3) {
      uVar11 = 0;
      lVar1 = param_2 + 7;
      uVar17 = param_2 & 0xffffffff00000000;
      do {
        iVar8 = (int)uVar11;
        uVar7 = iVar8 + param_3;
        uVar14 = *(ulong *)(*(long *)(param_1 + 0x490) + 7);
        uVar6 = (*(int *)(param_2 + 0xf) >> 1) - 1;
        uVar14 = (uVar14 ^ (ulong)uVar7 ^ 0xffffffffffffffff) + (uVar14 ^ uVar7) * 0x40000;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar14 = (ulong)(uVar6 & ((uint)(uVar14 >> 0x16) ^ (uint)uVar14) & 0x3fffffff);
        uVar5 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
        if (uVar5 != *(uint *)(param_1 + 0xa0)) {
          iVar16 = 1;
          do {
            if (uVar5 != *(uint *)(param_1 + 0xa8)) {
              if ((uVar5 & 1) == 0) {
                dVar18 = (double)((int)uVar5 >> 1);
              }
              else {
                dVar18 = *(double *)((uVar17 | uVar5) + 3);
              }
              if (uVar7 == (int)dVar18) {
                uVar7 = *(uint *)(lVar1 + ((long)(uVar14 * 0xc00000000 + 0x1400000000) >> 0x20));
                puVar2 = (uint *)(param_4 + 7 + (long)((iVar8 + param_6) * 4));
                *puVar2 = uVar7;
                if (((5 < (param_5 & 0xff)) || ((1 << (ulong)(param_5 & 0x1f) & 0x33U) == 0)) &&
                   ((uVar7 & 1) != 0)) {
                  uVar13 = uVar17 | uVar7;
                  uVar10 = uVar17 | (ulong)uVar7 & 0xfffffffffffc0000;
                  uVar14 = *(ulong *)(uVar10 + 8);
                  if (((uint)uVar14 >> 0x12 & 1) != 0) {
                    v8::internal::Heap_MarkingBarrierSlow(param_4,puVar2,uVar13);
                    uVar14 = *(ulong *)(uVar10 | 8);
                  }
                  if (((uVar14 & 0x18) != 0) &&
                     ((*(byte *)(param_4 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
                    v8::internal::Heap_GenerationalBarrierSlow(param_4,puVar2,uVar13);
                  }
                }
                goto LAB_01082754;
              }
            }
            uVar14 = (ulong)((int)uVar14 + iVar16 & uVar6);
            uVar5 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
            iVar16 = iVar16 + 1;
          } while (uVar5 != *(uint *)(param_1 + 0xa0));
        }
        *(uint *)(param_4 + 7 + (long)((iVar8 + param_6) * 4)) = *(uint *)(param_1 + 0xa8);
LAB_01082754:
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar3);
    }
  }
  return;
}

