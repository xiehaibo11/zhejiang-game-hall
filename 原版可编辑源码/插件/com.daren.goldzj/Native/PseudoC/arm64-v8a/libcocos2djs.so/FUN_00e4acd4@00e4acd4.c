
void FUN_00e4acd4(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  long local_88;
  long local_80;
  ulong local_70;
  int local_64;
  
  lVar15 = param_2[4];
  pbVar16 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  pbVar6 = (byte *)*param_2;
  if ((pbVar6 < pbVar16) && (*param_2 = (long)(pbVar6 + 1), *pbVar6 == 0x5b)) {
    (*(code *)param_2[7])(param_2);
    pbVar6 = (byte *)*param_2;
    if (pbVar6 < pbVar16) {
      lVar17 = 0;
      uVar14 = 0;
      iVar10 = 0;
      bVar2 = false;
      lVar13 = 0;
      local_88 = 0;
      local_80 = 0;
      do {
        bVar1 = *pbVar6;
        if (bVar1 == 0x3c) {
          if ((lVar13 != 0) && (!bVar2)) goto LAB_00e4b030;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) goto LAB_00e4b040;
          uVar3 = *param_2 - (long)pbVar6;
          uVar14 = uVar3;
          if (-1 < (long)(uVar3 - 1)) {
            uVar14 = uVar3 - 1;
          }
          if (uVar3 < 3) goto LAB_00e4b034;
          lVar7 = (long)uVar14 >> 1;
          lVar13 = FUN_00e13bcc(lVar15,1,local_88,lVar7,lVar13,&local_64);
          if (local_64 != 0) goto LAB_00e4b03c;
          *param_2 = (long)pbVar6;
          bVar2 = true;
          (*(code *)param_2[0xb])(param_2,lVar13,lVar7,&local_70,1);
          local_88 = lVar7;
          uVar14 = local_70;
joined_r0x00e4ae70:
          uVar3 = uVar14;
          if (lVar13 == 0) goto LAB_00e4b034;
        }
        else {
          if (bVar1 == 0x5d) {
            *param_2 = (long)(pbVar6 + 1);
            if (!bVar2) {
              return;
            }
            goto LAB_00e4b048;
          }
          if (9 < bVar1 - 0x30) goto joined_r0x00e4ae70;
          if (bVar2) goto LAB_00e4b034;
          uVar3 = (*(code *)param_2[9])(param_2);
          if ((long)uVar3 < 0) goto LAB_00e4b030;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          lVar7 = *param_2;
          lVar13 = lVar7 + 1;
          if ((ulong)((long)pbVar16 - lVar7) <= uVar3) goto LAB_00e4b030;
          bVar2 = false;
          *param_2 = lVar7 + uVar3 + 1;
        }
        uVar14 = uVar3;
        if (((uVar3 & 1) != 0) && (uVar14 = uVar3 - 1, *(char *)(lVar13 + (uVar3 - 1)) != '\0')) {
          uVar14 = uVar3;
        }
        if (uVar14 == 0) goto LAB_00e4b034;
        uVar3 = 0;
        uVar12 = (long)pbVar16 - *param_2;
        lVar7 = lVar17;
        do {
          if (iVar10 == 2) {
LAB_00e4afcc:
            if (*(long *)(param_1 + 800) <= lVar7) goto LAB_00e4b034;
            iVar10 = 2;
LAB_00e4afdc:
            lVar17 = lVar7 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x318) + lVar7) = *(undefined1 *)(lVar13 + uVar3);
          }
          else {
            if (iVar10 == 1) {
LAB_00e4af0c:
              lVar17 = *(long *)(param_1 + 800);
              if (lVar7 < lVar17) {
                iVar10 = 1;
                goto LAB_00e4afdc;
              }
              iVar10 = (int)local_80;
              if (iVar10 == 0) {
                lVar5 = *(long *)(param_1 + 0x318);
              }
              else {
                lVar5 = *(long *)(param_1 + 0x318);
                uVar8 = 0;
                lVar9 = 0;
                do {
                  pbVar6 = (byte *)(lVar5 + 0x18 + (uVar8 & 0xfffffff0));
                  uVar11 = (ulong)*pbVar6 << 0x18 | (ulong)pbVar6[1] << 0x10 | (ulong)pbVar6[2] << 8
                           | (ulong)pbVar6[3];
                  if ((uVar12 < uVar11) || ((long)(uVar12 - uVar11) < lVar17)) goto LAB_00e4b034;
                  lVar9 = lVar9 + 1;
                  lVar17 = lVar17 + ((ulong)((int)uVar11 + 3) & 0xfffffffc);
                  uVar8 = uVar8 + 0x10;
                  *(long *)(param_1 + 800) = lVar17;
                } while (lVar9 < iVar10);
              }
              uVar4 = FUN_00e13bcc(lVar15,1,iVar10 << 4 | 0xc,lVar17 + 1,lVar5,&local_64);
              *(undefined8 *)(param_1 + 0x318) = uVar4;
              if (local_64 == 0) goto LAB_00e4afcc;
              goto LAB_00e4b03c;
            }
            lVar17 = lVar7;
            if (iVar10 == 0) {
              if (lVar7 < 0xc) {
                iVar10 = 0;
                goto LAB_00e4afdc;
              }
              lVar17 = *(long *)(param_1 + 0x318);
              local_80 = (ulong)*(byte *)(lVar17 + 5) + (ulong)*(byte *)(lVar17 + 4) * 0x10;
              uVar8 = local_80 * 0x10 | 0xc;
              *(ulong *)(param_1 + 800) = uVar8;
              if ((long)uVar8 <= (long)uVar12) {
                uVar4 = FUN_00e13bcc(lVar15,1,0xc,uVar8,lVar17,&local_64);
                *(undefined8 *)(param_1 + 0x318) = uVar4;
                if (local_64 == 0) goto LAB_00e4af0c;
                goto LAB_00e4b03c;
              }
              goto LAB_00e4b034;
            }
          }
          uVar3 = uVar3 + 1;
          lVar7 = lVar17;
        } while (uVar3 < uVar14);
        (*(code *)param_2[7])(param_2);
        pbVar6 = (byte *)*param_2;
        if (pbVar16 <= pbVar6) goto LAB_00e4b034;
      } while( true );
    }
  }
  lVar13 = 0;
LAB_00e4b030:
  bVar2 = false;
LAB_00e4b034:
  local_64 = 3;
LAB_00e4b03c:
  *(int *)(param_2 + 3) = local_64;
LAB_00e4b040:
  if (bVar2) {
LAB_00e4b048:
    FUN_00e139fc(lVar15,lVar13);
  }
  return;
}

