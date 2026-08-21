
byte * FUN_0010d664(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (param_1 == 0) {
    return (byte *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  iVar2 = strncmp((char *)param_2,"null",4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 2;
LAB_0010d724:
    return param_2 + 4;
  }
  iVar2 = strncmp((char *)param_2,"false",5);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return param_2 + 5;
  }
  iVar2 = strncmp((char *)param_2,"true",4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    goto LAB_0010d724;
  }
  bVar1 = *param_2;
  uVar11 = (uint)bVar1;
  if (bVar1 != 0x2d) {
    if (bVar1 == 0x22) {
      pbVar3 = (byte *)FUN_0010ef6c(param_1,param_2);
      return pbVar3;
    }
    if (9 < uVar11 - 0x30) {
      if (uVar11 == 0x7b) {
        *(undefined4 *)(param_1 + 0x18) = 6;
        pbVar3 = param_2 + 1;
        do {
          pbVar7 = pbVar3;
          pbVar3 = pbVar7 + 1;
        } while (*pbVar7 - 1 < 0x20);
        if (*pbVar7 == 0x7d) {
          return pbVar7 + 1;
        }
        puVar4 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0010db98;
        pbVar7 = pbVar7 + -1;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *(undefined8 **)(param_1 + 0x10) = puVar4;
        do {
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 - 1 < 0x20);
        lVar5 = FUN_0010ef6c(puVar4);
        if (lVar5 != 0) {
          pbVar3 = (byte *)(lVar5 + -1);
          do {
            pbVar3 = pbVar3 + 1;
          } while (*pbVar3 - 1 < 0x20);
          uVar10 = puVar4[4];
          puVar4[4] = 0;
          puVar4[7] = uVar10;
          if (*pbVar3 != 0x3a) {
            DAT_00113188 = pbVar3;
            return (byte *)0x0;
          }
          do {
            pbVar3 = pbVar3 + 1;
          } while (*pbVar3 - 1 < 0x20);
          lVar5 = FUN_0010d664(puVar4);
          if (lVar5 != 0) {
            pbVar3 = (byte *)(lVar5 + -1);
            do {
              pbVar3 = pbVar3 + 1;
              bVar1 = *pbVar3;
            } while (bVar1 - 1 < 0x20);
            while( true ) {
              if (bVar1 != 0x2c) {
                if (bVar1 != 0x7d) {
                  DAT_00113188 = pbVar3;
                  return (byte *)0x0;
                }
                return pbVar3 + 1;
              }
              puVar6 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
              if (puVar6 == (undefined8 *)0x0) break;
              puVar6[5] = 0;
              puVar6[4] = 0;
              puVar6[7] = 0;
              puVar6[6] = 0;
              puVar6[1] = 0;
              *puVar6 = 0;
              puVar6[3] = 0;
              puVar6[2] = 0;
              *puVar4 = puVar6;
              puVar6[1] = puVar4;
              do {
                pbVar3 = pbVar3 + 1;
              } while (*pbVar3 - 1 < 0x20);
              lVar5 = FUN_0010ef6c(puVar6,pbVar3);
              if (lVar5 == 0) {
                return (byte *)0x0;
              }
              pbVar3 = (byte *)(lVar5 + -1);
              do {
                pbVar3 = pbVar3 + 1;
              } while (*pbVar3 - 1 < 0x20);
              uVar10 = puVar6[4];
              puVar6[4] = 0;
              puVar6[7] = uVar10;
              if (*pbVar3 != 0x3a) {
                DAT_00113188 = pbVar3;
                return (byte *)0x0;
              }
              do {
                pbVar3 = pbVar3 + 1;
              } while (*pbVar3 - 1 < 0x20);
              lVar5 = FUN_0010d664(puVar6);
              if (lVar5 == 0) {
                return (byte *)0x0;
              }
              pbVar3 = (byte *)(lVar5 + -1);
              do {
                pbVar3 = pbVar3 + 1;
                bVar1 = *pbVar3;
                puVar4 = puVar6;
              } while (bVar1 - 1 < 0x20);
            }
          }
        }
      }
      else {
        if (uVar11 != 0x5b) {
          DAT_00113188 = param_2;
          return (byte *)0x0;
        }
        *(undefined4 *)(param_1 + 0x18) = 5;
        pbVar3 = param_2 + 1;
        do {
          pbVar7 = pbVar3;
          pbVar3 = pbVar7 + 1;
        } while (*pbVar7 - 1 < 0x20);
        if (*pbVar7 == 0x5d) {
          return pbVar7 + 1;
        }
        puVar4 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
        if (puVar4 == (undefined8 *)0x0) {
LAB_0010db98:
          *(undefined8 *)(param_1 + 0x10) = 0;
          return (byte *)0x0;
        }
        pbVar7 = pbVar7 + -1;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *(undefined8 **)(param_1 + 0x10) = puVar4;
        do {
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 - 1 < 0x20);
        lVar5 = FUN_0010d664(puVar4);
        if (lVar5 != 0) {
          pbVar3 = (byte *)(lVar5 + -1);
          do {
            pbVar3 = pbVar3 + 1;
            bVar1 = *pbVar3;
          } while (bVar1 - 1 < 0x20);
          while( true ) {
            if (bVar1 != 0x2c) {
              if (bVar1 != 0x5d) {
                DAT_00113188 = pbVar3;
                return (byte *)0x0;
              }
              return pbVar3 + 1;
            }
            puVar6 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
            if (puVar6 == (undefined8 *)0x0) {
              return (byte *)0x0;
            }
            puVar6[5] = 0;
            puVar6[4] = 0;
            puVar6[7] = 0;
            puVar6[6] = 0;
            puVar6[1] = 0;
            *puVar6 = 0;
            puVar6[3] = 0;
            puVar6[2] = 0;
            *puVar4 = puVar6;
            puVar6[1] = puVar4;
            do {
              pbVar3 = pbVar3 + 1;
            } while (*pbVar3 - 1 < 0x20);
            lVar5 = FUN_0010d664(puVar6,pbVar3);
            if (lVar5 == 0) break;
            pbVar3 = (byte *)(lVar5 + -1);
            do {
              pbVar3 = pbVar3 + 1;
              bVar1 = *pbVar3;
              puVar4 = puVar6;
            } while (bVar1 - 1 < 0x20);
          }
        }
      }
      return (byte *)0x0;
    }
  }
  if (uVar11 == 0x2d) {
    param_2 = param_2 + 1;
  }
  dVar12 = -1.0;
  if (uVar11 != 0x2d) {
    dVar12 = 1.0;
  }
  if (*param_2 == 0x30) {
    param_2 = param_2 + 1;
  }
  uVar11 = (uint)*param_2;
  dVar13 = 0.0;
  uVar8 = (uint)*param_2;
  if (uVar8 - 0x31 < 9) {
    dVar14 = 0.0;
    do {
      param_2 = param_2 + 1;
      uVar8 = (uint)*param_2;
      iVar2 = uVar11 - 0x30;
      uVar11 = (uint)*param_2;
      dVar14 = dVar14 * 10.0 + (double)iVar2;
    } while (uVar11 - 0x30 < 10);
  }
  else {
    dVar14 = 0.0;
  }
  if (uVar8 == 0x2e) {
    bVar1 = param_2[1];
    if (9 < bVar1 - 0x30) {
      iVar2 = 0;
      iVar9 = 1;
      dVar13 = 0.0;
      goto LAB_0010d9c0;
    }
    dVar13 = 0.0;
    param_2 = param_2 + 1;
    uVar11 = (uint)bVar1;
    do {
      param_2 = param_2 + 1;
      uVar8 = (uint)*param_2;
      dVar14 = dVar14 * 10.0 + (double)(int)(uVar11 - 0x30);
      dVar13 = dVar13 + -1.0;
      uVar11 = uVar8;
    } while (uVar8 - 0x30 < 10);
  }
  if ((uVar8 | 0x20) == 0x65) {
    bVar1 = param_2[1];
    if (bVar1 == 0x2d) {
      param_2 = param_2 + 2;
      iVar9 = -1;
    }
    else if (bVar1 == 0x2b) {
      iVar9 = 1;
      param_2 = param_2 + 2;
    }
    else {
      iVar9 = 1;
      param_2 = param_2 + 1;
    }
    uVar11 = (uint)*param_2;
    if (*param_2 - 0x30 < 10) {
      iVar2 = 0;
      do {
        param_2 = param_2 + 1;
        iVar2 = iVar2 * 10 + uVar11 + -0x30;
        uVar11 = (uint)*param_2;
      } while (uVar11 - 0x30 < 10);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
    iVar9 = 1;
  }
LAB_0010d9c0:
  dVar13 = pow(10.0,dVar13 + (double)(iVar9 * iVar2));
  dVar13 = dVar12 * dVar14 * dVar13;
  *(double *)(param_1 + 0x30) = dVar13;
  *(int *)(param_1 + 0x28) = (int)dVar13;
  *(undefined4 *)(param_1 + 0x18) = 3;
  return param_2;
}

