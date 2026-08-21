
uint FUN_00e548a4(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  if ((char)param_1[5] == '\0') {
    uVar7 = *param_2;
  }
  else {
    uVar7 = *param_2;
    if (param_1[6] == (ulong)uVar7) {
      FUN_00e5f000(param_1);
      if ((char)param_1[5] != '\0') {
        uVar7 = *(uint *)(param_1 + 7);
        *param_2 = (uint)param_1[6];
        return uVar7;
      }
      return 0;
    }
  }
  if (uVar7 != 0xffffffff) {
    uVar2 = *(uint *)(param_1[3] + 0xc);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar10 = 0;
      uVar7 = uVar7 + 1;
      uVar11 = uVar2;
      do {
        uVar8 = uVar11 + uVar10 >> 1;
        puVar1 = (uint *)(param_1[3] + 0x14 + (ulong)(uVar8 * 0xc));
        uVar3 = (puVar1[-1] & 0xff00ff00) >> 8 | (puVar1[-1] & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar5 = uVar7 - uVar3;
        uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar6 = uVar8;
        if (uVar3 <= uVar7) {
          if (uVar7 <= uVar4) {
            uVar10 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
            uVar11 = uVar10 >> 0x10 | uVar10 << 0x10;
            uVar10 = 0;
            if (uVar11 <= ~uVar5) {
              uVar10 = uVar11 + uVar5;
            }
            lVar9 = *param_1;
            goto joined_r0x00e549cc;
          }
          uVar10 = uVar8 + 1;
          uVar6 = uVar11;
        }
        uVar11 = uVar6;
      } while (uVar10 < uVar11);
      uVar10 = 0;
      lVar9 = *param_1;
joined_r0x00e549cc:
      if ((uVar7 <= uVar4) || (uVar8 = uVar8 + 1, uVar8 != uVar2)) {
        *(undefined1 *)(param_1 + 5) = 1;
        param_1[6] = (ulong)uVar7;
        param_1[8] = (ulong)uVar8;
        if ((uVar10 == 0) || (*(uint *)(lVar9 + 0x20) <= uVar10)) {
          FUN_00e5f000(param_1);
          if ((char)param_1[5] == '\0') {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint *)(param_1 + 7);
          }
        }
        else {
          *(uint *)(param_1 + 7) = uVar10;
        }
        *param_2 = (uint)param_1[6];
        return uVar10;
      }
    }
  }
  return 0;
}

