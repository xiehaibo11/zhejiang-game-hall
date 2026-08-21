
undefined4
ConvertUTF8toUTF32(undefined8 *param_1,byte *param_2,undefined8 *param_3,uint *param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  
  pbVar7 = (byte *)*param_1;
  puVar10 = (uint *)*param_3;
  if (pbVar7 < param_2) {
    uVar8 = 0;
    puVar11 = puVar10;
    do {
      bVar2 = *pbVar7;
      uVar12 = (ulong)bVar2;
      uVar9 = (ulong)(byte)(&DAT_01868d7d)[uVar12];
      puVar10 = puVar11;
      if ((long)param_2 - (long)pbVar7 <= (long)uVar9) {
        uVar8 = 1;
        break;
      }
      lVar1 = uVar9 + 1;
      cVar3 = FUN_0091b894(pbVar7,lVar1);
      if (cVar3 == '\0') {
LAB_0091be00:
        uVar8 = 3;
        break;
      }
      iVar4 = 0;
      uVar6 = uVar12;
      switch(uVar9) {
      case 5:
        pbVar7 = pbVar7 + 1;
        uVar12 = (ulong)*pbVar7;
        iVar4 = (uint)bVar2 << 6;
      case 4:
        pbVar7 = pbVar7 + 1;
        uVar6 = (ulong)*pbVar7;
        iVar4 = (iVar4 + (int)uVar12) * 0x40;
      case 3:
        pbVar7 = pbVar7 + 1;
        uVar12 = (ulong)*pbVar7;
        iVar4 = (iVar4 + (int)uVar6) * 0x40;
      case 2:
        pbVar7 = pbVar7 + 1;
        uVar6 = (ulong)*pbVar7;
        iVar4 = (iVar4 + (int)uVar12) * 0x40;
      case 1:
        pbVar7 = pbVar7 + 1;
        uVar12 = (ulong)*pbVar7;
        iVar4 = (iVar4 + (int)uVar6) * 0x40;
      case 0:
        pbVar7 = pbVar7 + 1;
        iVar4 = iVar4 + (int)uVar12;
      }
      if (param_4 <= puVar11) {
        pbVar7 = pbVar7 + -lVar1;
        uVar8 = 2;
        break;
      }
      uVar5 = iVar4 - *(int *)(&DAT_01868e80 + uVar9 * 4);
      if (uVar5 >> 0x10 < 0x11) {
        if (((uVar5 & 0xfffff800) == 0xd800) && (uVar5 = 0xfffd, param_5 == 0)) {
          pbVar7 = pbVar7 + -lVar1;
          goto LAB_0091be00;
        }
      }
      else {
        uVar8 = 3;
        uVar5 = 0xfffd;
      }
      puVar10 = puVar11 + 1;
      *puVar11 = uVar5;
      puVar11 = puVar10;
    } while (pbVar7 < param_2);
  }
  else {
    uVar8 = 0;
  }
  *param_1 = pbVar7;
  *param_3 = puVar10;
  return uVar8;
}

