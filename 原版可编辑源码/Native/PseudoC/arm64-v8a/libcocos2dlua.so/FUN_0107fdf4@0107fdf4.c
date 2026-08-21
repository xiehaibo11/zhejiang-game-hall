
undefined4 FUN_0107fdf4(long param_1,char *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
                    /* try { // try from 0107fe04 to 0117ff43 has its CatchHandler @ 0107fe04
                       catch() { ... } // from try @ 0107fe04 with catch @ 0107fe04
                       catch() { ... } // from try @ 0107ff64 with catch @ 0107fe04 */
  iVar9 = strcmp(param_2,"darkening-parameters");
  if (iVar9 == 0) {
    uVar3 = param_3[2];
    uVar4 = param_3[4];
    uVar10 = 6;
    if (((int)uVar3 <= (int)uVar4) && (uVar5 = *param_3, (int)uVar5 <= (int)uVar3)) {
      uVar6 = param_3[1];
      uVar7 = param_3[3];
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar8 = param_3[7];
      if (((-1 < (int)(uVar6 | uVar5 | uVar3 | uVar7 | uVar4 | uVar1 | uVar2 | uVar8)) &&
          (((uVar10 = 6, (int)uVar8 < 0x1f5 && ((int)uVar1 < 0x1f5)) && ((int)uVar7 < 0x1f5)))) &&
         (((int)uVar6 < 0x1f5 && ((int)uVar4 <= (int)uVar2)))) {
        uVar10 = 0;
        *(uint *)(param_1 + 0x40) = uVar5;
        *(uint *)(param_1 + 0x44) = uVar6;
        *(uint *)(param_1 + 0x48) = uVar3;
        *(uint *)(param_1 + 0x4c) = uVar7;
        *(uint *)(param_1 + 0x50) = uVar4;
        *(uint *)(param_1 + 0x54) = uVar1;
        *(uint *)(param_1 + 0x58) = uVar2;
        *(uint *)(param_1 + 0x5c) = uVar8;
      }
    }
  }
  else {
    iVar9 = strcmp(param_2,"hinting-engine");
    if (iVar9 == 0) {
      if (*param_3 == 1) {
        uVar10 = 0;
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      else {
        uVar10 = 7;
      }
    }
    else {
      iVar9 = strcmp(param_2,"no-stem-darkening");
      if (iVar9 == 0) {
        *(char *)(param_1 + 0x3c) = (char)*param_3;
        uVar10 = 0;
      }
      else {
        uVar10 = 0xc;
      }
    }
  }
  return uVar10;
}

