
void png_set_hIST(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(ushort *)(param_2 + 0x20) - 1 < 0x100) {
    png_free_data(param_1,param_2,8,0);
    lVar4 = png_malloc_warn(param_1,0x200);
    *(long *)(param_2 + 0xf0) = lVar4;
    if (lVar4 != 0) {
      *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 8;
      if (*(short *)(param_2 + 0x20) != 0) {
        uVar2 = *(ushort *)(param_2 + 0x20);
        uVar1 = (ulong)uVar2;
        if (uVar2 < 2) {
          uVar1 = 1;
        }
        if (uVar1 < 0x10) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar1 & 0xfff0;
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)(param_3 + 0x10);
            puVar9 = (undefined8 *)(lVar4 + 0x10);
            uVar10 = uVar6;
            do {
              puVar3 = puVar8 + -1;
              uVar11 = puVar8[-2];
              uVar13 = puVar8[1];
              uVar12 = *puVar8;
              puVar8 = puVar8 + 4;
              uVar10 = uVar10 - 0x10;
              puVar9[-1] = *puVar3;
              puVar9[-2] = uVar11;
              puVar9[1] = uVar13;
              *puVar9 = uVar12;
              puVar9 = puVar9 + 4;
            } while (uVar10 != 0);
            if (uVar1 == uVar6) goto LAB_00d775f8;
          }
        }
        do {
          lVar7 = uVar6 * 2;
          uVar6 = uVar6 + 1;
          *(undefined2 *)(lVar4 + lVar7) = *(undefined2 *)(param_3 + lVar7);
        } while ((long)uVar6 < (long)(ulong)uVar2);
      }
LAB_00d775f8:
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
      return;
    }
    pcVar5 = "Insufficient memory for hIST chunk data";
  }
  else {
    pcVar5 = "Invalid palette size, hIST allocation skipped";
  }
  png_warning(param_1,pcVar5);
  return;
}

