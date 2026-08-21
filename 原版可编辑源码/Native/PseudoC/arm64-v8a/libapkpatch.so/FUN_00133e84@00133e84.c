
void FUN_00133e84(long param_1,long param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar2 = *(ushort *)(param_2 + 2);
  *(undefined2 *)(param_2 + (long)(int)(param_3 + 1U) * 4 + 2) = 0xffff;
  if (-1 < param_3) {
    iVar13 = 0;
    uVar8 = (ulong)(param_3 + 1U);
    puVar9 = (ushort *)(param_2 + 6);
    uVar4 = 0xffffffff;
    iVar7 = 3;
    if (uVar2 != 0) {
      iVar7 = 4;
    }
    iVar10 = 0x8a;
    if (uVar2 != 0) {
      iVar10 = 7;
    }
    do {
      uVar6 = (ulong)uVar2;
      uVar3 = *puVar9;
      iVar12 = iVar13 + 1;
      uVar5 = (uint)uVar3;
      uVar11 = (uint)uVar2;
      if ((iVar10 <= iVar12) || (uVar11 != uVar5)) {
        if (iVar12 < iVar7) {
          lVar1 = param_1 + uVar6 * 4;
          *(short *)(lVar1 + 0xabc) = *(short *)(lVar1 + 0xabc) + (short)iVar12;
        }
        else if (uVar11 == 0) {
          if (iVar13 < 10) {
            *(short *)(param_1 + 0xb00) = *(short *)(param_1 + 0xb00) + 1;
          }
          else {
            *(short *)(param_1 + 0xb04) = *(short *)(param_1 + 0xb04) + 1;
          }
        }
        else {
          if (uVar11 != (uint)uVar4) {
            lVar1 = param_1 + uVar6 * 4;
            *(short *)(lVar1 + 0xabc) = *(short *)(lVar1 + 0xabc) + 1;
          }
          *(short *)(param_1 + 0xafc) = *(short *)(param_1 + 0xafc) + 1;
        }
        iVar12 = 0;
        uVar4 = uVar6;
        if (uVar5 == 0) {
          iVar7 = 3;
          iVar10 = 0x8a;
        }
        else {
          iVar10 = 6;
          if (uVar11 != uVar5) {
            iVar10 = 7;
          }
          iVar7 = 3;
          if (uVar11 != uVar5) {
            iVar7 = 4;
          }
        }
      }
      iVar13 = iVar12;
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 2;
      uVar2 = uVar3;
    } while (uVar8 != 0);
  }
  return;
}

