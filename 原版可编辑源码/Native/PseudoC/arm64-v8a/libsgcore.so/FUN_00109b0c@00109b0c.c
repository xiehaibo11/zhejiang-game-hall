
void FUN_00109b0c(char *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  char *__s;
  undefined1 *__dest;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  int iVar11;
  
  iVar4 = DAT_00113190;
  uVar3 = (DAT_00113194 + -1) * DAT_00113194;
  bVar5 = (uVar3 & 1) != 0;
  bVar1 = 9 < DAT_00113190;
  do {
    while (DAT_001131a0 = param_1, sVar7 = strlen(param_1), param_1 == (char *)0x0) {
      bVar6 = true;
      if (!bVar1 || !bVar5) goto LAB_00109bf0;
    }
    bVar6 = *param_1 == '\0';
  } while (bVar1 && bVar5);
LAB_00109bf0:
  iVar11 = (int)sVar7;
  __s = param_1;
  if (!(bool)(iVar11 < 0x15 & (bVar6 ^ 1U))) {
    __s = "quajdsfjasodfue";
    if ((-1 < iVar4) && (__s = "quajdsfjasodfue", (int)uVar3 < 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if ((-1 < iVar4) && ((int)uVar3 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  sVar7 = strlen(__s);
  if (sVar7 < 0xd) {
    sVar7 = 0xc;
  }
  __dest = malloc((long)(int)sVar7);
  memcpy(__dest,param_1,(long)(int)sVar7);
  if (iVar11 < 0xc) {
    uVar8 = (ulong)(0xc - iVar11);
    puVar9 = __dest;
    do {
      uVar8 = uVar8 - 1;
      puVar9[iVar11] = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
  }
  lVar10 = 4;
  do {
    bVar2 = __dest[lVar10];
    lVar10 = lVar10 + 1;
    DAT_001130f8 = (uint)bVar2 | DAT_001130f8 << 8;
    DAT_001130fc = (uint)bVar2 | DAT_001130fc << 8;
    DAT_00113100 = (uint)bVar2 | DAT_00113100 << 8;
  } while (lVar10 != 8);
  if (DAT_001130f8 == 0) {
    DAT_001130f8 = 0x13579bdf;
  }
  if (DAT_001130fc == 0) {
    DAT_001130fc = 0x2468ace0;
  }
  if (DAT_00113100 == 0) {
    DAT_00113100 = 0xfdb97531;
  }
  while( true ) {
    free(__dest);
    iVar4 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < iVar4)) break;
    free(__dest);
  }
  do {
  } while (-1 < DAT_00113190 && iVar4 < 0);
  return;
}

