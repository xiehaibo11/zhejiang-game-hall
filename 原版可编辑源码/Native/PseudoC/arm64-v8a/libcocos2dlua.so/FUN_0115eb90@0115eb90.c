
void FUN_0115eb90(ulong *param_1,undefined1 *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_3 < 1) {
    return;
  }
  uVar1 = (ulong)param_3;
  if (param_3 != 1) {
    lVar3 = uVar1 - (param_3 & 1);
    if (lVar3 == 0) goto LAB_0115ebcc;
    lVar2 = lVar3;
    puVar5 = param_2;
    puVar6 = param_1;
    if (((undefined1 *)((long)param_1 + uVar1 * 4) <= param_2) || (param_2 + uVar1 <= param_1)) {
      do {
        uVar7 = *puVar6;
        lVar2 = lVar2 + -2;
        uVar8 = (uint)(uVar7 >> 0x20);
        uVar9 = CONCAT44(uVar8 >> 0x10,(uint)uVar7 >> 0x10) & 0xff000000ff;
        uVar10 = CONCAT44(uVar8 >> 8,(uint)uVar7 >> 8) & 0xff000000ff;
        *puVar5 = (char)((uint)((int)(uVar7 & 0xff000000ff) * 0x1914 + (int)uVar9 * 0x41c7 +
                                (int)uVar10 * 0x8123 + 0x108000) >> 0x10);
        puVar5[1] = (char)((uint)((int)((uVar7 & 0xff000000ff) >> 0x20) * 0x1914 +
                                  (int)(uVar9 >> 0x20) * 0x41c7 + (int)(uVar10 >> 0x20) * 0x8123 +
                                 0x108000) >> 0x10);
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 1;
      } while (lVar2 != 0);
      if ((param_3 & 1) == 0) {
        return;
      }
      goto LAB_0115ebcc;
    }
  }
  lVar3 = 0;
LAB_0115ebcc:
  lVar2 = uVar1 - lVar3;
  puVar4 = (uint *)((long)param_1 + lVar3 * 4);
  puVar5 = param_2 + lVar3;
  do {
    uVar8 = *puVar4;
    lVar2 = lVar2 + -1;
    *puVar5 = (char)((uVar8 >> 0x10 & 0xff) * 0x41c7 + (uVar8 & 0xff) * 0x1914 +
                     (uVar8 >> 8 & 0xff) * 0x8123 + 0x108000 >> 0x10);
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (lVar2 != 0);
  return;
}

