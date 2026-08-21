
uint FUN_00c22f00(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2 & 0x800000;
  uVar9 = 0;
LAB_00c22f50:
  uVar4 = (ushort)param_2[2];
  do {
    if (uVar4 == 0) {
      if (((uVar10 - 4 & 0xfffffffb) == 0) && (uVar9 < 5)) {
        return uVar10 + uVar9 * 0x100;
      }
LAB_00c230ac:
      return (uint)(uVar2 < 0x11);
    }
    lVar8 = *param_1;
    param_2 = (uint *)(lVar8 + (ulong)uVar4 * 0x18);
    uVar5 = *(uint *)(lVar8 + (ulong)uVar4 * 0x18);
    uVar7 = (ulong)uVar5;
    if (uVar5 >> 0x1c == 9) {
      do {
        lVar3 = (uVar7 & 0xffff) * 0x18;
        lVar6 = lVar8 + lVar3;
        uVar5 = *(uint *)(lVar8 + lVar3);
        uVar7 = (ulong)uVar5;
      } while (uVar5 >> 0x1c == 8);
      if ((uVar5 & 0xf4000000) == 0x4000000) {
        uVar10 = uVar10 | *(uint *)(lVar6 + 4);
        if (uVar1 == 0) {
          uVar9 = uVar9 + 1;
        }
        else if (uVar9 == 0) {
          uVar9 = 1;
        }
        goto LAB_00c22f50;
      }
      if ((uVar5 & 0xf4000000) == 0x34000000) {
        uVar10 = uVar10 | *(uint *)(lVar6 + 4) >> 1;
        if (uVar1 == 0) {
          uVar9 = uVar9 + 2;
        }
        else if (uVar9 < 2) {
          uVar9 = 2;
        }
        goto LAB_00c22f50;
      }
      if (uVar5 >> 0x1c != 1) goto LAB_00c230ac;
    }
    else {
      if (uVar5 >> 0x1c == 10) goto LAB_00c230ac;
      if ((uVar5 & 0xf0ff0000) != 0x80030000) goto LAB_00c22f50;
      do {
        lVar3 = (uVar7 & 0xffff) * 0x18;
        lVar6 = lVar8 + lVar3;
        uVar5 = *(uint *)(lVar8 + lVar3);
        if (uVar5 >> 0x1c != 8) break;
        lVar3 = (ulong)(ushort)uVar5 * 0x18;
        lVar6 = lVar8 + lVar3;
        uVar5 = *(uint *)(lVar8 + lVar3);
        uVar7 = (ulong)uVar5;
      } while (uVar5 >> 0x1c == 8);
    }
    if (*(int *)(lVar6 + 4) == 0) goto LAB_00c22f50;
    uVar5 = FUN_00c22f00(param_1);
    if (uVar5 < 2) goto LAB_00c230ac;
    uVar10 = uVar10 | uVar5 & 0xff;
    if (uVar1 != 0) break;
    uVar4 = (ushort)param_2[2];
    uVar9 = uVar9 + (uVar5 >> 8);
  } while( true );
  if (uVar9 < uVar5 >> 8) {
    uVar9 = uVar5 >> 8;
  }
  goto LAB_00c22f50;
}

