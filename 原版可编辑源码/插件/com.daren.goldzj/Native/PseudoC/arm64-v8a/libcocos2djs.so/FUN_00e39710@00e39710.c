
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e39710(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long **pplVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  undefined4 uVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  undefined **ppuVar18;
  byte *__s;
  long *local_68;
  
  pbVar3 = (byte *)(param_3 + param_4);
  *param_2 = param_3;
  param_2[2] = (long)pbVar3;
  *(undefined4 *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pbVar17 = (byte *)*param_2;
  if (pbVar3 <= pbVar17) {
LAB_00e39cbc:
    return (ulong)*(uint *)(param_2 + 3);
  }
  pbVar15 = (byte *)0x0;
  bVar5 = false;
  plVar1 = param_1 + 0x1f;
LAB_00e39980:
  bVar4 = *pbVar17;
  uVar13 = (uint)bVar4;
  if (bVar4 == 0x46) {
    if (pbVar17 + 0xe != pbVar3) {
      if (pbVar17 + 0xe < pbVar3) {
        switch(pbVar17[0xd]) {
        case 0:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
        case 0x25:
        case 0x28:
        case 0x29:
        case 0x2f:
        case 0x3c:
        case 0x3e:
        case 0x5b:
        case 0x5d:
        case 0x7b:
        case 0x7d:
          goto switchD_00e39a1c_caseD_0;
        }
      }
      goto switchD_00e399cc_caseD_1;
    }
switchD_00e39a1c_caseD_0:
    iVar6 = strncmp((char *)pbVar17,"FontDirectory",0xd);
    if (iVar6 != 0) goto switchD_00e399cc_caseD_1;
    if ((*(uint *)((long)param_2 + 0x2c4) & 1) != 0) {
      *(uint *)((long)param_2 + 0x2c4) = *(uint *)((long)param_2 + 0x2c4) | 2;
    }
    *param_2 = (long)(pbVar17 + 0xd);
  }
  else {
    if (bVar4 == 99) {
      if (pbVar17 + 10 == pbVar3) {
switchD_00e39a84_caseD_0:
        iVar6 = strncmp((char *)pbVar17,"closefile",9);
joined_r0x00e39a9c:
        if (iVar6 == 0) goto LAB_00e39cbc;
      }
      else if (pbVar17 + 10 < pbVar3) {
        switch(pbVar17[9]) {
        case 0:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
        case 0x25:
        case 0x28:
        case 0x29:
        case 0x2f:
        case 0x3c:
        case 0x3e:
        case 0x5b:
        case 0x5d:
        case 0x7b:
        case 0x7d:
          goto switchD_00e39a84_caseD_0;
        }
      }
    }
    else if (uVar13 == 0x65) {
      if (pbVar17 + 6 == pbVar3) {
switchD_00e399cc_caseD_0:
        iVar6 = strncmp((char *)pbVar17,"eexec",5);
        goto joined_r0x00e39a9c;
      }
      if (pbVar17 + 6 < pbVar3) {
        switch(pbVar17[5]) {
        case 0:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
        case 0x25:
        case 0x28:
        case 0x29:
        case 0x2f:
        case 0x3c:
        case 0x3e:
        case 0x5b:
        case 0x5d:
        case 0x7b:
        case 0x7d:
          goto switchD_00e399cc_caseD_0;
        }
      }
    }
switchD_00e399cc_caseD_1:
    if (9 < uVar13 - 0x30) {
      if ((pbVar17 + 6 < pbVar3) && (uVar13 == 0x52)) {
        if ((!bVar5) || (pbVar17[1] != 0x44)) goto LAB_00e39c8c;
        *param_2 = (long)pbVar15;
        pbVar17 = (byte *)param_2[2];
        lVar16 = *(long *)(param_1[0x1e] + 0x68);
        (*(code *)param_2[7])(param_2);
        if (pbVar17 <= (byte *)*param_2) goto LAB_00e39ce0;
        bVar4 = *(byte *)*param_2;
joined_r0x00e39b88:
        if (9 < bVar4 - 0x30) {
LAB_00e39ce0:
          if (lVar16 == 0) {
            *(undefined4 *)(param_2 + 3) = 3;
            return 3;
          }
          return 3;
        }
        lVar7 = (*(code *)param_2[9])(param_2);
        (*(code *)param_2[8])(param_2);
        if ((lVar7 < 0) || ((long)pbVar17 - (*param_2 + 1) <= lVar7)) goto LAB_00e39ce0;
        *param_2 = *param_2 + lVar7 + 1;
        if ((int)param_2[3] != 0) {
          return 3;
        }
      }
      else {
        if ((pbVar17 + 6 < pbVar3) && (uVar13 == 0x2d)) {
          if ((bVar5) && (pbVar17[1] == 0x7c)) {
            *param_2 = (long)pbVar15;
            pbVar17 = (byte *)param_2[2];
            lVar16 = *(long *)(param_1[0x1e] + 0x68);
            (*(code *)param_2[7])(param_2);
            if (pbVar17 <= (byte *)*param_2) goto LAB_00e39ce0;
            bVar4 = *(byte *)*param_2;
            goto joined_r0x00e39b88;
          }
        }
        else if ((pbVar17 + 2 < pbVar3) && (uVar13 == 0x2f)) {
          pbVar17 = pbVar17 + 1;
          *param_2 = (long)pbVar17;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] == 0) {
            bVar5 = false;
            if (((byte *)*param_2 < pbVar3) &&
               (uVar11 = *param_2 - (long)pbVar17, (int)uVar11 - 1U < 0x15)) {
              bVar4 = *pbVar17;
              uVar11 = uVar11 & 0xffffffff;
              __s = (byte *)0x194a128;
              ppuVar18 = &PTR_s_version_0194a117_0x11_01c92ce0;
LAB_00e39c48:
              if (((bVar4 != *__s) || (sVar8 = strlen((char *)__s), uVar11 != sVar8)) ||
                 (iVar6 = memcmp(pbVar17,__s,uVar11), iVar6 != 0)) goto LAB_00e39c78;
              uVar13 = 1;
              if ((*(uint *)((long)param_2 + 0x2c4) & 1) != 0) {
                uVar13 = 2;
              }
              if ((uVar13 & *(uint *)(ppuVar18 + 5)) != 0) {
                if (((*(uint *)((long)param_2 + 0x2c4) >> 1 & 1) != 0) &&
                   (iVar6 = strcmp((char *)__s,"CharStrings"), iVar6 != 0)) goto LAB_00e39ca0;
                plVar12 = (long *)param_1[0x6a];
                if (plVar12 != (long *)0x0) {
                  plVar14 = (long *)0x0;
                  if ((int)*plVar12 != 0) {
                    plVar14 = plVar12;
                  }
                  iVar6 = *(int *)((long)ppuVar18 + 0xc);
                  if (iVar6 != 0xb) goto LAB_00e39820;
LAB_00e397e8:
                  (*(code *)ppuVar18[2])(param_1,param_2);
                  uVar13 = *(uint *)(param_2 + 3);
                  uVar11 = (ulong)uVar13;
                  *(uint *)(param_2 + 3) = uVar13;
                  if (uVar13 != 0) goto LAB_00e39968;
                  goto LAB_00e39ca0;
                }
                plVar14 = (long *)0x0;
                iVar6 = *(int *)((long)ppuVar18 + 0xc);
                if (iVar6 == 0xb) goto LAB_00e397e8;
LAB_00e39820:
                local_68 = plVar1;
                switch(*(undefined4 *)(ppuVar18 + 1)) {
                case 2:
                  local_68 = param_1 + 0x26;
                  goto joined_r0x00e398ec;
                case 3:
                  if (plVar14 == (long *)0x0) goto joined_r0x00e398ec;
                  pplVar2 = (long **)(plVar14 + 0x23);
                  uVar9 = (undefined4)*plVar14;
                  plVar12 = *pplVar2;
joined_r0x00e398d4:
                  if (plVar12 == (long *)0x0) goto LAB_00e39974;
                  break;
                case 4:
                  local_68 = param_1 + 0x27;
                  if (plVar14 != (long *)0x0) {
                    pplVar2 = (long **)(plVar14 + 0x34);
                    uVar9 = (undefined4)*plVar14;
                    plVar12 = *pplVar2;
                    goto joined_r0x00e398d4;
                  }
                  goto joined_r0x00e398ec;
                case 5:
                  local_68 = param_1 + 0x5b;
                  if (plVar14 != (long *)0x0) {
                    pplVar2 = (long **)(plVar14 + 0x46);
                    uVar9 = (undefined4)*plVar14;
                    plVar12 = *pplVar2;
                    goto joined_r0x00e398d4;
                  }
joined_r0x00e398ec:
                  uVar9 = 0;
                  pplVar2 = &local_68;
                  break;
                case 6:
                  uVar9 = 0;
                  pplVar2 = &local_68;
                  local_68 = param_2;
                  break;
                case 7:
                  uVar9 = 0;
                  pplVar2 = &local_68;
                  local_68 = param_1;
                  break;
                case 8:
                  uVar9 = 0;
                  pplVar2 = &local_68;
                  local_68 = plVar12;
                  if (plVar12 != (long *)0x0) break;
                  goto LAB_00e39974;
                default:
                  uVar9 = 0;
                  pplVar2 = &local_68;
                }
                if (iVar6 - 9U < 2) {
                  pcVar10 = (code *)param_2[0x11];
                }
                else {
                  pcVar10 = (code *)param_2[0x10];
                }
                uVar11 = (*pcVar10)(param_2,ppuVar18,pplVar2,uVar9,0);
                *(int *)(param_2 + 3) = (int)uVar11;
                if ((int)uVar11 == 0) goto LAB_00e39ca0;
LAB_00e39968:
                if (((uint)uVar11 & 0xff) != 0xa2) {
                  return uVar11;
                }
LAB_00e39974:
                bVar5 = false;
                *(undefined4 *)(param_2 + 3) = 0;
                goto LAB_00e39ca4;
              }
              goto LAB_00e39c80;
            }
            goto LAB_00e39ca4;
          }
          goto LAB_00e39cbc;
        }
LAB_00e39c8c:
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) goto LAB_00e39cbc;
      }
LAB_00e39ca0:
      bVar5 = false;
      goto LAB_00e39ca4;
    }
    (*(code *)param_2[8])(param_2);
    if ((int)param_2[3] != 0) goto LAB_00e39cbc;
    bVar5 = true;
    pbVar15 = pbVar17;
  }
LAB_00e39ca4:
  (*(code *)param_2[7])(param_2);
  pbVar17 = (byte *)*param_2;
  if (pbVar3 <= pbVar17) goto LAB_00e39cbc;
  goto LAB_00e39980;
LAB_00e39c78:
  ppuVar18 = ppuVar18 + 6;
  __s = *ppuVar18;
  if (__s == (byte *)0x0) goto LAB_00e39c80;
  goto LAB_00e39c48;
LAB_00e39c80:
  bVar5 = false;
  goto LAB_00e39ca4;
}

