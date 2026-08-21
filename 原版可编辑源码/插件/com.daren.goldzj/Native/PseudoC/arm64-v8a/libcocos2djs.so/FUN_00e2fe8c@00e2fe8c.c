
long FUN_00e2fe8c(long param_1,ulong param_2,uint *param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  short sVar11;
  uint uVar12;
  int local_54;
  
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  local_54 = 0;
  *param_3 = 0;
  uVar4 = FUN_00e1d94c();
  uVar5 = uVar4 & 0xff;
  if ((uVar4 & 0xff) == 0) {
    lVar8 = -1;
  }
  else {
    if (uVar5 >> 7 != 0) {
      uVar5 = FUN_00e1d94c(param_1);
      uVar5 = uVar5 & 0xff | (uVar4 & 0x7f) << 8;
    }
    if (param_2 < uVar5) {
      lVar8 = 0;
    }
    else {
      lVar7 = FUN_00e13bcc(uVar10,2,0,uVar5 + 1,0,&local_54);
      lVar8 = 0;
      if ((local_54 == 0) && (*param_3 = uVar5, lVar8 = lVar7, uVar5 != 0)) {
        sVar11 = 0;
        uVar4 = 0;
        do {
          while( true ) {
            uVar6 = FUN_00e1d94c(param_1);
            if ((uVar6 >> 7 & 1) != 0) break;
            uVar2 = FUN_00e1d94c(param_1);
            sVar11 = sVar11 + (uVar2 & 0xff);
            *(short *)(lVar7 + (ulong)uVar4 * 2) = sVar11;
            if ((uVar6 & 0xff) == 0) {
              uVar4 = uVar4 + 1;
            }
            else {
              uVar12 = 1;
              do {
                uVar2 = FUN_00e1d94c(param_1);
                sVar11 = sVar11 + (uVar2 & 0xff);
                uVar9 = uVar12 + 1;
                *(short *)(lVar7 + (ulong)(uVar4 + uVar12) * 2) = sVar11;
                if (uVar5 <= uVar4 + uVar12 + 1) break;
                bVar1 = uVar12 < (uVar6 & 0xff);
                uVar12 = uVar9;
              } while (bVar1);
LAB_00e2ffe0:
              uVar4 = uVar4 + uVar9;
            }
            if (uVar5 <= uVar4) {
              return lVar7;
            }
          }
          sVar3 = FUN_00e1d970(param_1);
          sVar11 = sVar3 + sVar11;
          *(short *)(lVar7 + (ulong)uVar4 * 2) = sVar11;
          if ((uVar6 & 0x7f) != 0) {
            uVar12 = 1;
            do {
              sVar3 = FUN_00e1d970(param_1);
              sVar11 = sVar3 + sVar11;
              uVar9 = uVar12 + 1;
              *(short *)(lVar7 + (ulong)(uVar4 + uVar12) * 2) = sVar11;
              if (uVar5 <= uVar4 + uVar12 + 1) break;
              bVar1 = uVar12 < (uVar6 & 0x7f);
              uVar12 = uVar9;
            } while (bVar1);
            goto LAB_00e2ffe0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
    }
  }
  return lVar8;
}

