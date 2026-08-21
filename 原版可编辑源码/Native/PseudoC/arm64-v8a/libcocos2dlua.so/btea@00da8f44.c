
void btea(uint *param_1,uint param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  if ((int)param_2 < 2) {
    if ((int)param_2 < -1) {
      uVar8 = *param_1;
      iVar6 = 0;
      if (-param_2 != 0) {
        iVar6 = 0x34 / (int)-param_2;
      }
      uVar3 = ~param_2;
      iVar6 = iVar6 + 6;
      uVar7 = iVar6 * -0x61c88647;
      do {
        uVar5 = uVar7 >> 2 & 3;
        lVar10 = (ulong)(-param_2 - 2) << 2;
        uVar9 = param_1[uVar3];
        uVar4 = uVar3;
        do {
          uVar11 = *(uint *)((long)param_1 + lVar10);
          lVar10 = lVar10 + -4;
          uVar2 = uVar4 - 1;
          uVar8 = uVar9 - ((uVar11 >> 5 ^ uVar8 << 2) + (uVar11 << 4 ^ uVar8 >> 3) ^
                          (*(uint *)(param_3 + (ulong)(uVar4 & 3 ^ uVar5) * 4) ^ uVar11) +
                          (uVar8 ^ uVar7));
          param_1[uVar4] = uVar8;
          uVar9 = uVar11;
          uVar4 = uVar2;
        } while (uVar2 != 0);
        uVar9 = param_1[(int)uVar3];
        iVar6 = iVar6 + -1;
        uVar8 = *param_1 -
                ((uVar9 >> 5 ^ uVar8 * 4) + (uVar9 << 4 ^ uVar8 >> 3) ^
                (*(uint *)(param_3 + (ulong)uVar5 * 4) ^ uVar9) + (uVar8 ^ uVar7));
        uVar7 = uVar7 + 0x61c88647;
        *param_1 = uVar8;
      } while (iVar6 != 0);
    }
  }
  else {
    uVar7 = param_2 - 1;
    uVar8 = param_1[(int)uVar7];
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = 0x34 / param_2;
    }
    uVar5 = 0;
    iVar6 = uVar3 + 6;
    do {
      uVar5 = uVar5 + 0x9e3779b9;
      uVar3 = uVar5 >> 2 & 3;
      uVar9 = uVar8;
      if (uVar7 != 0) {
        uVar12 = 0;
        uVar9 = *param_1;
        do {
          puVar1 = param_1 + uVar12;
          uVar11 = (uint)uVar12;
          uVar4 = puVar1[1];
          uVar12 = uVar12 + 1;
          uVar8 = ((uVar4 << 2 ^ uVar8 >> 5) + (uVar4 >> 3 ^ uVar8 << 4) ^
                  (*(uint *)(param_3 + (ulong)(uVar11 & 3 ^ uVar3) * 4) ^ uVar8) + (uVar4 ^ uVar5))
                  + uVar9;
          *puVar1 = uVar8;
          uVar9 = uVar4;
        } while (uVar7 != uVar12);
        uVar9 = param_1[(int)uVar7];
      }
      uVar4 = *param_1;
      iVar6 = iVar6 + -1;
      uVar8 = ((uVar4 << 2 ^ uVar8 >> 5) + (uVar4 >> 3 ^ uVar8 << 4) ^
              (*(uint *)(param_3 + (ulong)(uVar7 & 3 ^ uVar3) * 4) ^ uVar8) + (uVar4 ^ uVar5)) +
              uVar9;
      param_1[(int)uVar7] = uVar8;
    } while (iVar6 != 0);
  }
  return;
}

