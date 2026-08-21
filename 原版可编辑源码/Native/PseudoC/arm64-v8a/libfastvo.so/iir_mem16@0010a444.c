
void iir_mem16(long param_1,long param_2,long param_3,uint param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (0 < (int)param_4) {
    uVar3 = param_5 - 1;
    uVar9 = (ulong)uVar3;
    uVar8 = 0;
    uVar10 = uVar9 & 0xfffffff8;
    do {
      iVar1 = (int)*(short *)(param_1 + uVar8 * 2) + (*param_6 + 0x1000 >> 0xd);
      if (iVar1 < -0x7ffe) {
        iVar1 = -0x7fff;
      }
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar2 = iVar1 * -0x10000 >> 0x10;
      if (1 < param_5) {
        uVar4 = uVar10;
        puVar6 = (undefined8 *)(param_2 + 8);
        piVar5 = param_6 + 5;
        if (uVar3 < 8) {
          uVar4 = 0;
        }
        else {
          do {
            uVar12 = puVar6[-1];
            uVar13 = *puVar6;
            uVar4 = uVar4 - 8;
            *(ulong *)(piVar5 + -3) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + -2) >> 0x20) +
                          iVar2 * (short)((ulong)uVar12 >> 0x30),
                          (int)*(undefined8 *)(piVar5 + -2) + iVar2 * (short)((ulong)uVar12 >> 0x20)
                         );
            *(ulong *)(piVar5 + -5) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + -4) >> 0x20) +
                          iVar2 * (short)((ulong)uVar12 >> 0x10),
                          (int)*(undefined8 *)(piVar5 + -4) + iVar2 * (short)uVar12);
            *(ulong *)(piVar5 + 1) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) +
                          iVar2 * (short)((ulong)uVar13 >> 0x30),
                          (int)*(undefined8 *)(piVar5 + 2) + iVar2 * (short)((ulong)uVar13 >> 0x20))
            ;
            *(ulong *)(piVar5 + -1) =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar5 >> 0x20) +
                          iVar2 * (short)((ulong)uVar13 >> 0x10),
                          (int)*(undefined8 *)piVar5 + iVar2 * (short)uVar13);
            puVar6 = puVar6 + 2;
            piVar5 = piVar5 + 8;
          } while (uVar4 != 0);
          uVar4 = uVar10;
          if (uVar10 == uVar9) goto LAB_0010a530;
        }
        piVar5 = param_6 + uVar4 + 1;
        lVar11 = uVar9 - uVar4;
        psVar7 = (short *)(param_2 + uVar4 * 2);
        do {
          lVar11 = lVar11 + -1;
          piVar5[-1] = *piVar5 + iVar2 * *psVar7;
          piVar5 = piVar5 + 1;
          psVar7 = psVar7 + 1;
        } while (lVar11 != 0);
      }
LAB_0010a530:
      param_6[(int)uVar3] = iVar2 * *(short *)(param_2 + (long)(int)uVar3 * 2);
      *(short *)(param_3 + uVar8 * 2) = (short)iVar1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
  return;
}

