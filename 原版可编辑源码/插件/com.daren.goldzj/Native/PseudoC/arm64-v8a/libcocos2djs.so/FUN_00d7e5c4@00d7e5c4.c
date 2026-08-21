
int FUN_00d7e5c4(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  
  iVar6 = FUN_00d7da20(param_1,param_2,param_3[1]);
  if (iVar6 == 0) {
    uVar2 = *param_3;
    uVar13 = param_3[1];
    puVar14 = (undefined8 *)(param_1 + 0x1e8);
    iVar8 = 0x400;
    iVar12 = 0x400;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(byte **)(param_1 + 400) = (byte *)((long)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x198) = 0x400;
    *(undefined8 *)(param_1 + 0x178) = uVar2;
    do {
      uVar9 = uVar13;
      if (0xfffffffe < uVar13) {
        uVar9 = 0xffffffff;
      }
      uVar13 = uVar13 - uVar9;
      *(int *)(param_1 + 0x180) = (int)uVar9;
      puVar7 = puVar14;
      if (iVar8 == 0) {
        if (-1 < iVar12 + param_4) {
          puVar7 = (undefined8 *)*puVar14;
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)png_malloc_base(param_1,(ulong)*(uint *)(param_1 + 0x1f0) + 8);
            if (puVar7 == (undefined8 *)0x0) goto LAB_00d7e638;
            *puVar7 = 0;
            *puVar14 = puVar7;
          }
          *(undefined8 **)(param_1 + 400) = puVar7 + 1;
          iVar12 = *(int *)(param_1 + 0x1f0) + iVar12;
          *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x1f0);
          goto LAB_00d7e69c;
        }
LAB_00d7e638:
        bVar5 = true;
        iVar6 = -4;
      }
      else {
LAB_00d7e69c:
        uVar15 = 0;
        if (uVar13 == 0) {
          uVar15 = 4;
        }
        iVar6 = deflate(param_1 + 0x178,uVar15);
        uVar10 = *(uint *)(param_1 + 0x180);
        bVar5 = false;
        *(undefined4 *)(param_1 + 0x180) = 0;
        uVar13 = uVar13 + uVar10;
        puVar14 = puVar7;
      }
      iVar8 = *(int *)(param_1 + 0x198);
    } while (!bVar5 && iVar6 == 0);
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(int *)(param_3 + 2) = iVar12 - iVar8;
    if ((uint)((iVar12 - iVar8) + param_4) < 0x7fffffff) {
      png_zstream_error(param_1,iVar6);
      *(undefined4 *)(param_1 + 0x170) = 0;
      if ((iVar6 == 1) && (uVar13 == 0)) {
        uVar13 = param_3[1];
        if (uVar13 < 0x4001) {
          bVar3 = *(byte *)((long)param_3 + 0x14);
          if ((bVar3 & 0xf) != 8) {
            return 0;
          }
          if (0x70 < (bVar3 & 0xf0)) {
            return 0;
          }
          bVar4 = bVar3 >> 4;
          uVar9 = (ulong)(uint)(0x80 << (ulong)bVar4);
          if (uVar13 <= uVar9) {
            cVar11 = (bVar3 & 0xf0) + 8;
            uVar10 = (uint)bVar4 << 0xc | 0x800;
            iVar6 = -(uint)bVar4;
            do {
              iVar6 = iVar6 + 1;
              uVar10 = uVar10 - 0x1000;
              cVar11 = cVar11 + -0x10;
              if (iVar6 == 0) break;
              uVar9 = uVar9 >> 1;
            } while (uVar13 <= uVar9);
            *(char *)((long)param_3 + 0x14) = cVar11;
            uVar1 = *(byte *)((long)param_3 + 0x15) & 0xe0;
            bVar3 = (byte)uVar1;
            *(byte *)((long)param_3 + 0x15) =
                 (bVar3 + (char)((uVar10 | uVar1) / 0x1f) * -0x1f | bVar3) ^ 0x1f;
            return 0;
          }
        }
        iVar6 = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(char **)(param_1 + 0x1a8) = "compressed data too long";
      iVar6 = -4;
    }
  }
  return iVar6;
}

