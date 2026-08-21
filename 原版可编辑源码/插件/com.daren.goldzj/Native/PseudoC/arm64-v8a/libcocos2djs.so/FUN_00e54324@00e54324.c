
undefined8 FUN_00e54324(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  pbVar8 = (byte *)(param_1 + 0x2010);
  if (*(byte **)(param_2 + 0x108) < pbVar8) {
    FUN_00e14b1c(param_2,8);
  }
  uVar6 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if ((uVar6 >> 4 < 0x201) || ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar6)
     ) {
    FUN_00e14b1c(param_2,8);
  }
  uVar6 = (*(uint *)(param_1 + 0x200c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x200c) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)pbVar8) / 0xc < uVar6) {
    FUN_00e14b1c(param_2,8);
  }
  else if (uVar6 == 0) {
    return 0;
  }
  uVar9 = 0;
  param_1 = param_1 + 0xc;
  uVar10 = 0;
  do {
    uVar1 = (uint)*pbVar8 << 0x18 | (uint)pbVar8[1] << 0x10;
    uVar2 = (uint)pbVar8[4] << 0x18 | (uint)pbVar8[5] << 0x10;
    uVar4 = uVar1 | (uint)pbVar8[2] << 8 | (uint)pbVar8[3];
    uVar11 = (ulong)uVar4;
    uVar3 = *(uint *)(pbVar8 + 8);
    uVar5 = uVar2 | (uint)pbVar8[6] << 8 | (uint)pbVar8[7];
    uVar7 = uVar5 - uVar4;
    if (uVar5 < uVar4) {
      FUN_00e14b1c(param_2,8);
    }
    if ((uVar9 != 0) && (uVar4 <= uVar10)) {
      FUN_00e14b1c(param_2,8);
    }
    pbVar8 = pbVar8 + 0xc;
    if (*(int *)(param_2 + 0x110) != 0) {
      if ((*(uint *)(param_2 + 0x118) < uVar7) ||
         (uVar10 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8,
         *(uint *)(param_2 + 0x118) - uVar7 <= (uVar10 >> 0x10 | uVar10 << 0x10))) {
        FUN_00e14b1c(param_2,0x10);
      }
      if (uVar1 == 0) {
        if (uVar2 != 0) {
          FUN_00e14b1c(param_2,8);
        }
        if (uVar7 != 0xffffffff) {
          do {
            if ((0x80U >> (ulong)((uint)uVar11 & 7) &
                (uint)*(byte *)(param_1 + (uVar11 >> 3 & 0x1fff))) != 0) {
              FUN_00e14b1c(param_2,8);
            }
            uVar10 = (uint)uVar11 + 1;
            uVar11 = (ulong)uVar10;
          } while (uVar5 + 1 != uVar10);
        }
      }
      else if (uVar7 != 0xffffffff) {
        do {
          while( true ) {
            uVar10 = (uint)uVar11;
            if ((0x80U >> (ulong)(uVar10 >> 0x10 & 7) & (uint)*(byte *)(param_1 + (uVar11 >> 0x13)))
                == 0) {
              FUN_00e14b1c(param_2,8);
            }
            if ((0x80U >> (ulong)(uVar10 & 7) & (uint)*(byte *)(param_1 + (uVar11 >> 3 & 0x1fff)))
                == 0) break;
            uVar11 = (ulong)(uVar10 + 1);
            if (uVar5 + 1 == uVar10 + 1) goto LAB_00e54574;
          }
          FUN_00e14b1c(param_2,8);
          uVar11 = (ulong)(uVar10 + 1);
        } while (uVar5 + 1 != uVar10 + 1);
      }
    }
LAB_00e54574:
    uVar9 = uVar9 + 1;
    uVar10 = uVar5;
    if (uVar9 == uVar6) {
      return 0;
    }
  } while( true );
}

