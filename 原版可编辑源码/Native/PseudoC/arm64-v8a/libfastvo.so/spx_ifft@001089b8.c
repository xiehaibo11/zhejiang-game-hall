
void spx_ifft(uint *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_2 == param_3) {
    fprintf((FILE *)0x14d168,"warning: %s\n","FFT should not be done in-place");
  }
  else {
    uVar1 = *param_1;
    uVar3 = (ulong)(int)uVar1;
    if (0 < (int)uVar1) {
      if ((uVar1 < 8) || ((param_3 < param_2 + uVar3 * 4 && (param_2 < param_3 + uVar3 * 4)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar3 & 0xfffffffffffffff8;
        puVar6 = (undefined8 *)(param_2 + 0x10);
        puVar7 = (undefined8 *)(param_3 + 0x10);
        uVar8 = uVar4;
        do {
          puVar2 = puVar6 + -1;
          uVar9 = puVar6[-2];
          uVar11 = puVar6[1];
          uVar10 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar8 = uVar8 - 8;
          puVar7[-1] = *puVar2;
          puVar7[-2] = uVar9;
          puVar7[1] = uVar11;
          *puVar7 = uVar10;
          puVar7 = puVar7 + 4;
        } while (uVar8 != 0);
        if (uVar4 == uVar3) goto LAB_00108a44;
      }
      do {
        lVar5 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(param_3 + lVar5) = *(undefined4 *)(param_2 + lVar5);
      } while ((long)uVar4 < (long)uVar3);
    }
  }
LAB_00108a44:
  spx_drft_backward(param_1,param_3);
  return;
}

