
/* spine::Json::parseNumber(spine::Json*, char const*) */

byte * spine::Json::parseNumber(Json *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  cVar1 = *param_2;
  dVar11 = 0.0;
  pbVar5 = (byte *)param_2;
  if (cVar1 == '-') {
    pbVar5 = (byte *)(param_2 + 1);
  }
  uVar9 = (uint)*pbVar5;
  pbVar7 = (byte *)(param_2 + 1);
  if (cVar1 != '-') {
    pbVar7 = (byte *)param_2;
  }
  if (*pbVar5 - 0x30 < 10) {
    dVar11 = 0.0;
    do {
      cVar3 = (char)uVar9;
      pbVar7 = pbVar7 + 1;
      uVar9 = (uint)*pbVar7;
      dVar11 = dVar11 * 10.0 + (double)(cVar3 + -0x30);
    } while (uVar9 - 0x30 < 10);
  }
  pbVar5 = pbVar7;
  if (uVar9 == 0x2e) {
    pbVar5 = pbVar7 + 1;
    uVar9 = (uint)*pbVar5;
    if (uVar9 - 0x30 < 10) {
      dVar12 = 0.0;
      lVar4 = 0;
      do {
        lVar6 = lVar4;
        cVar3 = (char)uVar9;
        uVar9 = (uint)pbVar7[lVar6 + 2];
        dVar12 = dVar12 * 10.0 + (double)(cVar3 + -0x30);
        lVar4 = lVar6 + 1;
      } while (uVar9 - 0x30 < 10);
      dVar10 = (double)(int)(lVar6 + 1);
      pbVar5 = pbVar7 + lVar6 + 2;
    }
    else {
      dVar12 = 0.0;
      dVar10 = 0.0;
    }
    dVar10 = pow(10.0,dVar10);
    dVar11 = dVar11 + dVar12 / dVar10;
  }
  dVar10 = -dVar11;
  if (cVar1 != '-') {
    dVar10 = dVar11;
  }
  dVar11 = dVar10;
  if ((uVar9 | 0x20) == 0x65) {
    bVar2 = pbVar5[1];
    if (bVar2 == 0x2b) {
      iVar8 = 0;
      pbVar5 = pbVar5 + 2;
    }
    else if (bVar2 == 0x2d) {
      iVar8 = -1;
      pbVar5 = pbVar5 + 2;
    }
    else {
      iVar8 = 0;
      pbVar5 = pbVar5 + 1;
    }
    uVar9 = (uint)*pbVar5;
    dVar11 = 0.0;
    if (*pbVar5 - 0x30 < 10) {
      dVar11 = 0.0;
      do {
        cVar1 = (char)uVar9;
        pbVar5 = pbVar5 + 1;
        uVar9 = (uint)*pbVar5;
        dVar11 = dVar11 * 10.0 + (double)(cVar1 + -0x30);
      } while (uVar9 - 0x30 < 10);
    }
    dVar12 = pow(10.0,dVar11);
    dVar11 = dVar10 * dVar12;
    if (iVar8 != 0) {
      dVar11 = dVar10 / dVar12;
    }
  }
  if (pbVar5 == (byte *)param_2) {
    pbVar5 = (byte *)0x0;
    _error = param_2;
  }
  else {
    *(float *)(param_1 + 0x24) = (float)dVar11;
    *(int *)(param_1 + 0x20) = (int)dVar11;
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  return pbVar5;
}

