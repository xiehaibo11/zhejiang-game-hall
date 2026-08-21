
void FUN_01067d84(ulong param_1,long param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  
  iVar12 = (int)(param_1 / 10000000);
  uVar5 = (int)param_1 + iVar12 * -10000000;
  uVar6 = iVar12 + (int)((param_1 / 10000000) / 10000000) * -10000000;
  if ((int)(param_1 / 100000000000000) == 0) {
    if (uVar6 != 0) {
      iVar12 = -1;
      do {
        *(byte *)(param_2 + (iVar12 + *param_4 + 1)) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30
        ;
        iVar12 = iVar12 + 1;
        bVar1 = 9 < uVar6;
        uVar6 = uVar6 / 10;
      } while (bVar1);
      iVar8 = *param_4;
      if (iVar8 < iVar8 + iVar12) {
        lVar10 = (long)iVar8;
        lVar11 = (long)(iVar8 + iVar12);
        do {
          uVar2 = *(undefined1 *)(param_2 + lVar10);
          *(undefined1 *)(param_2 + lVar10) = *(undefined1 *)(param_2 + lVar11);
          *(undefined1 *)(param_2 + lVar11) = uVar2;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar10 < lVar11);
        iVar8 = *param_4;
      }
      *param_4 = iVar8 + iVar12 + 1;
      iVar12 = iVar8 + iVar12 + 7;
      goto LAB_01068014;
    }
    iVar12 = 0;
    if (uVar5 != 0) {
      do {
        *(byte *)(param_2 + (iVar12 + *param_4)) = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
        iVar12 = iVar12 + 1;
        bVar1 = 9 < uVar5;
        uVar5 = uVar5 / 10;
      } while (bVar1);
    }
    iVar3 = *param_4;
    lVar10 = (long)iVar3;
    iVar8 = iVar3 + iVar12;
    if (iVar8 + -1 <= iVar3) goto LAB_01068124;
    lVar11 = (long)(iVar8 + -1);
    do {
      uVar2 = *(undefined1 *)(param_2 + lVar10);
      *(undefined1 *)(param_2 + lVar10) = *(undefined1 *)(param_2 + lVar11);
      *(undefined1 *)(param_2 + lVar11) = uVar2;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar10 < lVar11);
  }
  else {
    iVar12 = -1;
    uVar9 = param_1 / 100000000000000;
    do {
      uVar7 = (uint)uVar9;
      *(byte *)(param_2 + (iVar12 + *param_4 + 1)) = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      iVar12 = iVar12 + 1;
      uVar9 = uVar9 / 10;
    } while (9 < uVar7);
    iVar8 = *param_4;
    if (iVar8 < iVar8 + iVar12) {
      lVar10 = (long)iVar8;
      lVar11 = (long)(iVar8 + iVar12);
      do {
        uVar2 = *(undefined1 *)(param_2 + lVar10);
        *(undefined1 *)(param_2 + lVar10) = *(undefined1 *)(param_2 + lVar11);
        *(undefined1 *)(param_2 + lVar11) = uVar2;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar10 < lVar11);
      iVar8 = *param_4;
    }
    *param_4 = iVar8 + iVar12 + 1;
    cVar4 = (char)(uVar6 / 10);
    *(byte *)(param_2 + (iVar8 + iVar12 + 7)) = (char)uVar6 + cVar4 * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 5) = cVar4 + (char)((ulong)uVar6 / 100) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 4) =
         (char)(uVar6 / 100) + (char)((ulong)uVar6 / 1000) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 3) =
         (char)(uVar6 / 1000) + (char)((ulong)uVar6 / 10000) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 2) =
         (char)(uVar6 / 10000) + (char)((ulong)uVar6 / 100000) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 1) =
         (char)(uVar6 / 100000) + (char)((uVar6 / 100000 & 0xff) / 10) * -10 | 0x30;
    *(byte *)(param_2 + *param_4) =
         (char)(uVar6 / 1000000) + (char)((uVar6 / 1000000 & 0xff) / 10) * -10 | 0x30;
    iVar12 = *param_4 + 0xd;
    *param_4 = *param_4 + 7;
LAB_01068014:
    cVar4 = (char)(uVar5 / 10);
    *(byte *)(param_2 + iVar12) = (char)uVar5 + cVar4 * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 5) = cVar4 + (char)((ulong)uVar5 / 100) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 4) =
         (char)(uVar5 / 100) + (char)((ulong)uVar5 / 1000) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 3) =
         (char)(uVar5 / 1000) + (char)((ulong)uVar5 / 10000) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 2) =
         (char)(uVar5 / 10000) + (char)((ulong)uVar5 / 100000) * -10 | 0x30;
    *(byte *)(*param_4 + param_2 + 1) =
         (char)(uVar5 / 100000) + (char)((uVar5 / 100000 & 0xff) / 10) * -10 | 0x30;
    *(byte *)(param_2 + *param_4) =
         (char)(uVar5 / 1000000) + (char)((uVar5 / 1000000 & 0xff) / 10) * -10 | 0x30;
    iVar12 = 7;
  }
  iVar8 = *param_4 + iVar12;
LAB_01068124:
  *param_4 = iVar8;
  return;
}

