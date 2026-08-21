
undefined8 FUN_00e588c8(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ushort uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong local_28;
  
  uVar7 = (**(code **)(param_1 + 0x340))(param_1,0x6b65726e,param_2,&local_28);
  if ((int)uVar7 == 0) {
    if (local_28 < 4) {
      return 0x8e;
    }
    uVar7 = FUN_00e1d5c4(param_2,local_28,param_1 + 0x548);
    if ((int)uVar7 == 0) {
      lVar14 = *(long *)(param_1 + 0x548);
      *(ulong *)(param_1 + 0x550) = local_28;
      uVar1 = (uint)CONCAT11(*(undefined1 *)(lVar14 + 2),*(undefined1 *)(lVar14 + 3));
      if (0x1f < uVar1) {
        uVar1 = 0x20;
      }
      if (uVar1 == 0) {
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        local_28 = lVar14 + local_28;
        uVar10 = lVar14 + 4;
        do {
          if ((local_28 < uVar10 + 6) ||
             (uVar6 = CONCAT11(*(undefined1 *)(uVar10 + 2),*(undefined1 *)(uVar10 + 3)), uVar6 < 0xf
             )) break;
          uVar8 = uVar10 + uVar6;
          uVar2 = local_28;
          if (uVar8 <= local_28) {
            uVar2 = uVar8;
          }
          if (((uVar10 + 0xe <= uVar2) && ((*(byte *)(uVar10 + 5) & 3) == 1)) &&
             (*(char *)(uVar10 + 4) == '\0')) {
            uVar8 = (ulong)CONCAT11(*(undefined1 *)(uVar10 + 6),*(undefined1 *)(uVar10 + 7));
            lVar14 = uVar2 - (uVar10 + 0xe);
            uVar3 = 1 << (ulong)(uVar13 & 0x1f);
            if (lVar14 < (long)(uVar8 * 6)) {
              auVar4 = SEXT816(lVar14) * SEXT816(0x2aaaaaaaaaaaaaab);
              uVar8 = (ulong)(uint)(auVar4._8_4_ - (auVar4._12_4_ >> 0x1f));
            }
            uVar12 = uVar3 | uVar12;
            if ((int)uVar8 != 0) {
              uVar5 = (int)uVar8 - 1;
              if (uVar5 != 0) {
                pbVar9 = (byte *)(uVar10 + 0x14);
                lVar14 = -(ulong)uVar5;
                uVar10 = (ulong)*(byte *)(uVar10 + 0xe) << 0x18 |
                         (ulong)*(byte *)(uVar10 + 0xf) << 0x10 |
                         (ulong)*(byte *)(uVar10 + 0x10) << 8 | (ulong)*(byte *)(uVar10 + 0x11);
                do {
                  uVar8 = (ulong)*pbVar9 << 0x18 | (ulong)pbVar9[1] << 0x10 | (ulong)pbVar9[2] << 8
                          | (ulong)pbVar9[3];
                  if (uVar8 <= uVar10) goto LAB_00e58a7c;
                  lVar14 = lVar14 + 1;
                  pbVar9 = pbVar9 + 6;
                  uVar10 = uVar8;
                } while (lVar14 != 0);
              }
              uVar11 = uVar3 | uVar11;
            }
          }
LAB_00e58a7c:
          uVar13 = uVar13 + 1;
          uVar10 = uVar2;
        } while (uVar13 < uVar1);
      }
      *(uint *)(param_1 + 0x558) = uVar13;
      *(uint *)(param_1 + 0x55c) = uVar12;
      *(uint *)(param_1 + 0x560) = uVar11;
      return 0;
    }
  }
  return uVar7;
}

