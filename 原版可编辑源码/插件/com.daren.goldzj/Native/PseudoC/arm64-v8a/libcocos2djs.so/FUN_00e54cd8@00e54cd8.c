
uint FUN_00e54cd8(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  if ((char)param_1[5] == '\0') {
    uVar6 = *param_2;
  }
  else {
    uVar6 = *param_2;
    if (param_1[6] == (ulong)uVar6) {
      FUN_00e5f12c(param_1);
      if ((char)param_1[5] != '\0') {
        uVar6 = *(uint *)(param_1 + 7);
        *param_2 = (uint)param_1[6];
        return uVar6;
      }
      return 0;
    }
  }
  if (uVar6 != 0xffffffff) {
    uVar2 = *(uint *)(param_1[3] + 0xc);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar9 = 0;
      uVar6 = uVar6 + 1;
      uVar10 = uVar2;
      do {
        uVar7 = uVar10 + uVar9 >> 1;
        puVar1 = (uint *)(param_1[3] + 0x14 + (ulong)(uVar7 * 0xc));
        uVar3 = (puVar1[-1] & 0xff00ff00) >> 8 | (puVar1[-1] & 0xff00ff) << 8;
        uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar5 = uVar7;
        if ((uVar3 >> 0x10 | uVar3 << 0x10) <= uVar6) {
          if (uVar6 <= uVar4) {
            uVar9 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
            uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
            lVar8 = *param_1;
            goto joined_r0x00e54df0;
          }
          uVar9 = uVar7 + 1;
          uVar5 = uVar10;
        }
        uVar10 = uVar5;
      } while (uVar9 < uVar10);
      uVar9 = 0;
      lVar8 = *param_1;
joined_r0x00e54df0:
      if ((uVar6 <= uVar4) || (uVar7 = uVar7 + 1, uVar7 != uVar2)) {
        *(undefined1 *)(param_1 + 5) = 1;
        param_1[6] = (ulong)uVar6;
        param_1[8] = (ulong)uVar7;
        if ((uVar9 == 0) || (*(uint *)(lVar8 + 0x20) <= uVar9)) {
          FUN_00e5f12c(param_1);
          if ((char)param_1[5] == '\0') {
            uVar9 = 0;
          }
          else {
            uVar9 = *(uint *)(param_1 + 7);
          }
        }
        else {
          *(uint *)(param_1 + 7) = uVar9;
        }
        *param_2 = (uint)param_1[6];
        return uVar9;
      }
    }
  }
  return 0;
}

