
void FUN_00e6c3b0(uint *param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *__s;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar11 = (long)(int)param_1[1];
  uVar10 = (param_3 + lVar11) - 1 & -lVar11;
  uVar9 = -lVar11 & param_4;
  if (((*(ushort *)(param_5 + 0x18) & 7) != 2) &&
     (((long)((param_4 - param_3) - lVar11) <= (long)(int)param_1[5] && uVar10 != param_3) &&
      uVar9 != param_4)) {
    uVar9 = uVar10;
  }
  uVar9 = (long)uVar9 >> ((ulong)*param_1 & 0x3f);
  if (-1 < (long)uVar9) {
    uVar2 = (ushort)param_1[0x12];
    lVar11 = (long)uVar10 >> ((ulong)*param_1 & 0x3f);
    if (lVar11 < (long)(ulong)uVar2) {
      lVar13 = *(long *)(param_1 + 0x14);
      lVar12 = *(long *)(param_1 + 0x3c);
      uVar1 = (uint)lVar11 & ((uint)(lVar11 >> 0x3f) ^ 0xffffffff);
      if ((long)(ulong)uVar2 <= (long)uVar9) {
        uVar9 = (ulong)(uVar2 - 1);
      }
      iVar3 = (int)(uVar1 << 0xd) >> 0x10;
      iVar4 = (int)((uint)uVar9 << 0xd) >> 0x10;
      iVar5 = iVar4 - iVar3;
      pbVar7 = (byte *)(lVar13 + lVar12 + (long)iVar3);
      bVar6 = (byte)(0xff >> (ulong)(uVar1 & 7));
      bVar8 = (byte)(-0x80 >> ((uint)uVar9 & 7));
      if (iVar5 < 1) {
        bVar8 = *pbVar7 | bVar8 & bVar6;
      }
      else {
        __s = pbVar7 + 1;
        *pbVar7 = *pbVar7 | bVar6;
        if (iVar5 != 1) {
          uVar9 = (ulong)(uint)((iVar4 + -2) - iVar3);
          memset(__s,0xff,uVar9 + 1);
          __s = (byte *)(lVar13 + lVar12 + iVar3 + uVar9 + 2);
        }
        bVar8 = *__s | bVar8;
        pbVar7 = __s;
      }
      *pbVar7 = bVar8;
    }
  }
  return;
}

