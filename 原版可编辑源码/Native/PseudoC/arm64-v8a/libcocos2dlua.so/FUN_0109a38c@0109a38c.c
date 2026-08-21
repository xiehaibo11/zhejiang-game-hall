
undefined8 FUN_0109a38c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  pbVar7 = (byte *)(param_1 + 0x2010);
  if (*(byte **)(param_2 + 0x108) < pbVar7) {
    ft_validator_error(param_2,8);
  }
  uVar5 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if ((uVar5 >> 4 < 0x201) || ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar5)
     ) {
    ft_validator_error(param_2,8);
  }
  uVar5 = (*(uint *)(param_1 + 0x200c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x200c) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)pbVar7) / 0xc < uVar5) {
    ft_validator_error(param_2,8);
  }
  else if (uVar5 == 0) {
    return 0;
  }
  uVar8 = 0;
  param_1 = param_1 + 0xc;
  uVar9 = 0;
  do {
    uVar1 = (uint)*pbVar7 << 0x18 | (uint)pbVar7[1] << 0x10;
    uVar2 = (uint)pbVar7[4] << 0x18 | (uint)pbVar7[5] << 0x10;
    uVar10 = uVar1 | (uint)pbVar7[2] << 8 | (uint)pbVar7[3];
    uVar3 = *(uint *)(pbVar7 + 8);
    uVar4 = uVar2 | (uint)pbVar7[6] << 8 | (uint)pbVar7[7];
    uVar6 = uVar4 - uVar10;
    if (uVar4 < uVar10) {
      ft_validator_error(param_2,8);
    }
    if ((uVar8 != 0) && (uVar10 <= uVar9)) {
      ft_validator_error(param_2,8);
    }
    pbVar7 = pbVar7 + 0xc;
    if (*(int *)(param_2 + 0x110) != 0) {
      if ((*(uint *)(param_2 + 0x118) < uVar6) ||
         (uVar9 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8,
         *(uint *)(param_2 + 0x118) - uVar6 <= (uVar9 >> 0x10 | uVar9 << 0x10))) {
        ft_validator_error(param_2,0x10);
      }
      if (uVar1 == 0) {
        if (uVar2 != 0) {
          ft_validator_error(param_2,8);
        }
        if (uVar6 != 0xffffffff) {
          do {
            if ((0x80U >> (ulong)(uVar10 & 7) &
                (uint)*(byte *)(param_1 + (ulong)(uVar10 >> 3 & 0x1fff))) != 0) {
              ft_validator_error(param_2,8);
            }
            uVar10 = uVar10 + 1;
          } while (uVar4 + 1 != uVar10);
        }
      }
      else if (uVar6 != 0xffffffff) {
        do {
          if ((0x80U >> (ulong)(uVar10 >> 0x10 & 7) &
              (uint)*(byte *)(param_1 + (ulong)(uVar10 >> 0x13))) == 0) {
            ft_validator_error(param_2,8);
          }
          if ((0x80U >> (ulong)(uVar10 & 7) &
              (uint)*(byte *)(param_1 + (ulong)(uVar10 >> 3 & 0x1fff))) == 0) {
            ft_validator_error(param_2,8);
          }
          uVar10 = uVar10 + 1;
        } while (uVar4 + 1 != uVar10);
      }
    }
    uVar8 = uVar8 + 1;
    uVar9 = uVar4;
  } while (uVar8 != uVar5);
  return 0;
}

