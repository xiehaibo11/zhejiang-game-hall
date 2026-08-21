
void FUN_0012e71c(long *param_1)

{
  ulong uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  size_t __n;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  
  uVar6 = *(uint *)(param_1 + 10);
  uVar10 = *(uint *)((long)param_1 + 0xb4);
  uVar13 = uVar6;
  while( true ) {
    uVar17 = *(uint *)((long)param_1 + 0xac);
    iVar16 = (int)param_1[0xd] - (uVar10 + uVar17);
    if ((uVar6 - 0x106) + uVar13 <= uVar17) {
      memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + (ulong)uVar6),(ulong)(uVar6 - iVar16));
      lVar15 = param_1[0xf];
      uVar10 = *(uint *)(param_1 + 10);
      uVar11 = (ulong)uVar10;
      uVar12 = (ulong)*(uint *)((long)param_1 + 0x84);
      uVar17 = (int)*(undefined8 *)((long)param_1 + 0xac) - uVar6;
      param_1[0x13] = param_1[0x13] - (ulong)uVar6;
      *(ulong *)((long)param_1 + 0xac) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xac) >> 0x20) - uVar6,uVar17);
      do {
        uVar8 = *(ushort *)(lVar15 + -2 + uVar12 * 2);
        sVar2 = 0;
        if (uVar10 <= uVar8) {
          sVar2 = uVar8 - (short)uVar10;
        }
        *(short *)(lVar15 + -2 + uVar12 * 2) = sVar2;
        uVar12 = uVar12 - 1;
      } while ((int)uVar12 != 0);
      lVar15 = param_1[0xe];
      do {
        uVar8 = *(ushort *)(lVar15 + -2 + uVar11 * 2);
        sVar2 = 0;
        if (uVar10 <= uVar8) {
          sVar2 = uVar8 - (short)uVar10;
        }
        *(short *)(lVar15 + -2 + uVar11 * 2) = sVar2;
        uVar11 = uVar11 - 1;
      } while ((int)uVar11 != 0);
      iVar16 = uVar6 + iVar16;
    }
    if (*(int *)(*param_1 + 8) == 0) break;
    iVar9 = FUN_001309e0(*param_1,param_1[0xc] + (ulong)uVar17 +
                                  (ulong)*(uint *)((long)param_1 + 0xb4),iVar16);
    iVar16 = *(int *)((long)param_1 + 0x172c);
    uVar10 = *(int *)((long)param_1 + 0xb4) + iVar9;
    *(uint *)((long)param_1 + 0xb4) = uVar10;
    if (2 < iVar16 + uVar10) {
      lVar15 = param_1[0xc];
      uVar13 = *(int *)((long)param_1 + 0xac) - iVar16;
      bVar7 = *(byte *)(lVar15 + (ulong)uVar13);
      *(uint *)(param_1 + 0x10) = (uint)bVar7;
      uVar3 = *(uint *)((long)param_1 + 0x8c);
      uVar4 = *(uint *)(param_1 + 0x12);
      uVar17 = ((uint)bVar7 << (ulong)(uVar4 & 0x1f) ^ (uint)*(byte *)(lVar15 + (ulong)(uVar13 + 1))
               ) & uVar3;
      uVar11 = (ulong)uVar17;
      *(uint *)(param_1 + 0x10) = uVar17;
      do {
        if (iVar16 == 0) break;
        lVar5 = param_1[0xf];
        uVar17 = ((int)uVar11 << (ulong)(uVar4 & 0x1f) ^
                 (uint)*(byte *)(lVar15 + (ulong)(uVar13 + 2))) & uVar3;
        uVar11 = (ulong)uVar17;
        iVar16 = iVar16 + -1;
        *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar13) * 2) =
             *(undefined2 *)(lVar5 + uVar11 * 2);
        *(short *)(lVar5 + uVar11 * 2) = (short)uVar13;
        uVar13 = uVar13 + 1;
        *(uint *)(param_1 + 0x10) = uVar17;
        *(int *)((long)param_1 + 0x172c) = iVar16;
      } while (2 < uVar10 + iVar16);
    }
    if ((0x105 < uVar10) || (*(int *)(*param_1 + 8) == 0)) break;
    uVar13 = *(uint *)(param_1 + 10);
  }
  uVar12 = param_1[0x2e7];
  uVar14 = param_1[0xd];
  uVar11 = uVar14 - uVar12;
  if (uVar12 <= uVar14 && uVar11 != 0) {
    uVar1 = (ulong)*(uint *)((long)param_1 + 0xb4) + (ulong)*(uint *)((long)param_1 + 0xac);
    if (uVar12 < uVar1) {
      __n = uVar14 - uVar1;
      if (0x101 < __n) {
        __n = 0x102;
      }
      memset((void *)(param_1[0xc] + uVar1),0,__n);
      lVar15 = __n + uVar1;
    }
    else {
      uVar14 = (uVar1 + 0x102) - uVar12;
      if (uVar1 + 0x102 < uVar12 || uVar14 == 0) {
        return;
      }
      if (uVar14 <= uVar11) {
        uVar11 = uVar14;
      }
      memset((void *)(param_1[0xc] + uVar12),0,uVar11 & 0xffffffff);
      lVar15 = param_1[0x2e7] + uVar11;
    }
    param_1[0x2e7] = lVar15;
  }
  return;
}

