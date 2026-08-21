
void FUN_00e39f10(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  byte *__s1;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int local_64;
  
  pbVar14 = (byte *)param_2[2];
  puVar10 = *(undefined8 **)(param_1 + 0x310);
  (*(code *)param_2[7])(param_2);
  __s1 = (byte *)*param_2;
  if (__s1 < pbVar14) {
    bVar2 = *__s1;
    if ((bVar2 == 0x5b) || (bVar2 - 0x30 < 10)) {
      uVar12 = param_2[4];
      if (bVar2 == 0x5b) {
        iVar5 = 0x100;
        bVar3 = true;
        *param_2 = (ulong)(__s1 + 1);
        iVar4 = 0x100;
      }
      else {
        iVar5 = (*(code *)param_2[9])(param_2);
        bVar3 = false;
        iVar4 = iVar5;
        if (0xff < iVar5) {
          iVar4 = 0x100;
        }
      }
      (*(code *)param_2[7])(param_2);
      if (pbVar14 <= (byte *)*param_2) {
        return;
      }
      puVar1 = param_2 + 0x19;
      if (*(long *)(param_1 + 0x238) != 0) {
        FUN_00e139fc(uVar12);
        *(undefined8 *)(param_1 + 0x238) = 0;
        FUN_00e139fc(uVar12,*(undefined8 *)(param_1 + 0x240));
        *(undefined8 *)(param_1 + 0x240) = 0;
        if ((code *)param_2[0x24] != (code *)0x0) {
          (*(code *)param_2[0x24])(puVar1);
        }
      }
      *(int *)(param_1 + 0x228) = iVar4;
      *(int *)(param_2 + 0x18) = iVar4;
      uVar8 = FUN_00e13bcc(uVar12,2,0,(long)iVar4,0,&local_64);
      *(undefined8 *)(param_1 + 0x238) = uVar8;
      if (local_64 == 0) {
        uVar8 = FUN_00e13bcc(uVar12,8,0,(long)iVar4,0,&local_64);
        *(undefined8 *)(param_1 + 0x240) = uVar8;
        if ((local_64 == 0) &&
           (local_64 = (**(code **)*puVar10)(puVar1,iVar4,uVar12), local_64 == 0)) {
          local_64 = 0;
          if (0 < iVar4) {
            iVar6 = 0;
            do {
              (*(code *)param_2[0x23])(puVar1,iVar6,".notdef",8);
              iVar6 = iVar6 + 1;
            } while (iVar4 != iVar6);
          }
          (*(code *)param_2[7])(param_2);
          pbVar13 = (byte *)*param_2;
          if (pbVar13 < pbVar14) {
            if (bVar3) {
              uVar12 = 0;
              do {
                bVar2 = *pbVar13;
                if (bVar2 == 100) {
                  __s1 = pbVar13 + 3;
                  if (((__s1 < pbVar14) && (pbVar13[1] == 0x65)) && (pbVar13[2] == 0x66)) {
                    switch(*__s1) {
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
                      goto switchD_00e3a204_caseD_0;
                    }
                  }
                }
                else if (bVar2 == 0x5d) goto LAB_00e3a40c;
                if (((pbVar14 <= pbVar13 + 2) || (iVar5 <= (int)uVar12)) || (bVar2 != 0x2f))
                goto LAB_00e3a404;
                __s1 = pbVar13 + 1;
                *param_2 = (ulong)__s1;
                (*(code *)param_2[8])(param_2);
                if (pbVar14 <= (byte *)*param_2) {
                  return;
                }
                if ((int)param_2[3] != 0) {
                  return;
                }
                if ((int)uVar12 < iVar4) {
                  uVar11 = (int)(byte *)*param_2 - (int)__s1;
                  iVar6 = (*(code *)param_2[0x23])(puVar1,uVar12 & 0xffffffff,__s1,uVar11 + 1);
                  *(int *)(param_2 + 3) = iVar6;
                  if (iVar6 != 0) {
                    return;
                  }
                  *(undefined1 *)(*(long *)(param_2[0x1e] + uVar12 * 8) + (ulong)uVar11) = 0;
                }
                (*(code *)param_2[7])(param_2);
                pbVar13 = (byte *)*param_2;
                uVar12 = uVar12 + 1;
              } while (pbVar13 < pbVar14);
            }
            else {
              iVar6 = 0;
              do {
                bVar2 = *pbVar13;
                if (bVar2 == 100) {
                  __s1 = pbVar13 + 3;
                  if (((__s1 < pbVar14) && (pbVar13[1] == 0x65)) && (pbVar13[2] == 0x66)) {
                    switch(*__s1) {
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
                      goto switchD_00e3a204_caseD_0;
                    }
                  }
                }
                else if (bVar2 == 0x5d) goto LAB_00e3a40c;
                if (bVar2 - 0x30 < 10) {
                  uVar12 = (*(code *)param_2[9])(param_2);
                  (*(code *)param_2[7])(param_2);
                  __s1 = (byte *)*param_2;
                  if (pbVar13 == __s1) goto LAB_00e3a404;
                  if (((__s1 + 2 < pbVar14) && (iVar6 < iVar5)) && (*__s1 == 0x2f)) {
                    __s1 = __s1 + 1;
                    *param_2 = (ulong)__s1;
                    (*(code *)param_2[8])(param_2);
                    if (pbVar14 <= (byte *)*param_2) {
                      return;
                    }
                    if ((int)param_2[3] != 0) {
                      return;
                    }
                    if (iVar6 < iVar4) {
                      uVar11 = (int)(byte *)*param_2 - (int)__s1;
                      iVar7 = (*(code *)param_2[0x23])(puVar1,uVar12 & 0xffffffff,__s1,uVar11 + 1);
                      *(int *)(param_2 + 3) = iVar7;
                      if (iVar7 != 0) {
                        return;
                      }
                      *(undefined1 *)
                       (*(long *)(param_2[0x1e] +
                                 (-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 |
                                 (uVar12 & 0xffffffff) << 3)) + (ulong)uVar11) = 0;
                    }
                    iVar6 = iVar6 + 1;
                  }
                }
                else {
                  (*(code *)param_2[8])(param_2);
                  __s1 = pbVar13;
                  if ((int)param_2[3] != 0) {
                    return;
                  }
                }
                (*(code *)param_2[7])(param_2);
                pbVar13 = (byte *)*param_2;
              } while (pbVar13 < pbVar14);
            }
          }
          goto switchD_00e3a204_caseD_0;
        }
      }
      *(int *)(param_2 + 3) = local_64;
      return;
    }
    if ((__s1 + 0x11 < pbVar14) &&
       (iVar4 = strncmp((char *)__s1,"StandardEncoding",0x10), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x220) = 2;
      return;
    }
    if ((__s1 + 0xf < pbVar14) && (iVar4 = strncmp((char *)__s1,"ExpertEncoding",0xe), iVar4 == 0))
    {
      *(undefined4 *)(param_1 + 0x220) = 4;
      return;
    }
    if ((__s1 + 0x12 < pbVar14) &&
       (iVar4 = strncmp((char *)__s1,"ISOLatin1Encoding",0x11), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x220) = 3;
      return;
    }
    uVar9 = 0xa2;
  }
  else {
    uVar9 = 3;
  }
  goto LAB_00e39fe8;
LAB_00e3a40c:
  __s1 = pbVar13 + 1;
switchD_00e3a204_caseD_0:
  *(undefined4 *)(param_1 + 0x220) = 1;
  *param_2 = (ulong)__s1;
  return;
LAB_00e3a404:
  uVar9 = 2;
LAB_00e39fe8:
  *(undefined4 *)(param_2 + 3) = uVar9;
  return;
}

