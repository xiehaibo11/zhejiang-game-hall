
void FUN_00e4a2f4(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  byte *__s1;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  int local_64;
  
  pbVar12 = (byte *)param_2[2];
  puVar13 = *(undefined8 **)(param_1 + 0x310);
  (*(code *)param_2[7])(param_2);
  __s1 = (byte *)*param_2;
  if (__s1 < pbVar12) {
    bVar2 = *__s1;
    if ((bVar2 != 0x5b) && (9 < bVar2 - 0x30)) {
      if ((__s1 + 0x11 < pbVar12) &&
         (iVar4 = strncmp((char *)__s1,"StandardEncoding",0x10), iVar4 == 0)) {
        *(undefined4 *)(param_1 + 0x220) = 2;
        return;
      }
      if ((__s1 + 0xf < pbVar12) && (iVar4 = strncmp((char *)__s1,"ExpertEncoding",0xe), iVar4 == 0)
         ) {
        *(undefined4 *)(param_1 + 0x220) = 4;
        return;
      }
      if ((__s1 + 0x12 < pbVar12) &&
         (iVar4 = strncmp((char *)__s1,"ISOLatin1Encoding",0x11), iVar4 == 0)) {
        *(undefined4 *)(param_1 + 0x220) = 3;
        return;
      }
      uVar8 = 0xa2;
      goto LAB_00e4a404;
    }
    uVar10 = param_2[4];
    if (bVar2 == 0x5b) {
      iVar4 = 0x100;
      *param_2 = (ulong)(__s1 + 1);
      bVar3 = true;
    }
    else {
      iVar4 = (*(code *)param_2[9])(param_2);
      if (0x100 < iVar4) goto LAB_00e4a400;
      bVar3 = false;
    }
    (*(code *)param_2[7])(param_2);
    if (pbVar12 <= (byte *)*param_2) {
      return;
    }
    puVar1 = param_2 + 0x17;
    if (*(long *)(param_1 + 0x238) != 0) {
      FUN_00e139fc(uVar10);
      *(undefined8 *)(param_1 + 0x238) = 0;
      FUN_00e139fc(uVar10,*(undefined8 *)(param_1 + 0x240));
      *(undefined8 *)(param_1 + 0x240) = 0;
      if ((code *)param_2[0x22] != (code *)0x0) {
        (*(code *)param_2[0x22])(puVar1);
      }
    }
    *(int *)(param_1 + 0x228) = iVar4;
    *(int *)(param_2 + 0x16) = iVar4;
    uVar7 = FUN_00e13bcc(uVar10,2,0,(long)iVar4,0,&local_64);
    *(undefined8 *)(param_1 + 0x238) = uVar7;
    if (local_64 == 0) {
      uVar7 = FUN_00e13bcc(uVar10,8,0,(long)iVar4,0,&local_64);
      *(undefined8 *)(param_1 + 0x240) = uVar7;
      if ((local_64 == 0) && (local_64 = (**(code **)*puVar13)(puVar1,iVar4,uVar10), local_64 == 0))
      {
        local_64 = 0;
        if (0 < iVar4) {
          iVar5 = 0;
          do {
            (*(code *)param_2[0x21])(puVar1,iVar5,".notdef",8);
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
        (*(code *)param_2[7])(param_2);
        pbVar11 = (byte *)*param_2;
        if (pbVar11 < pbVar12) {
          if (bVar3) {
            uVar10 = 0;
            do {
              bVar2 = *pbVar11;
              if (bVar2 == 100) {
                __s1 = pbVar11 + 3;
                if ((((__s1 < pbVar12) && (pbVar11[1] == 0x65)) && (pbVar11[2] == 0x66)) &&
                   ((*__s1 < 0x21 && ((1L << ((ulong)*__s1 & 0x3f) & 0x100003601U) != 0)))) break;
              }
              else if (bVar2 == 0x5d) goto LAB_00e4a7d0;
              if ((pbVar12 <= pbVar11 + 2) || ((iVar4 <= (int)uVar10 || (bVar2 != 0x2f))))
              goto LAB_00e4a7c8;
              __s1 = pbVar11 + 1;
              *param_2 = (ulong)__s1;
              (*(code *)param_2[8])(param_2);
              if (pbVar12 <= (byte *)*param_2) {
                return;
              }
              if ((int)param_2[3] != 0) {
                return;
              }
              uVar9 = (int)(byte *)*param_2 - (int)__s1;
              iVar5 = (*(code *)param_2[0x21])(puVar1,uVar10 & 0xffffffff,__s1,uVar9 + 1);
              *(int *)(param_2 + 3) = iVar5;
              if (iVar5 != 0) {
                return;
              }
              *(undefined1 *)(*(long *)(param_2[0x1c] + uVar10 * 8) + (ulong)uVar9) = 0;
              (*(code *)param_2[7])(param_2);
              pbVar11 = (byte *)*param_2;
              uVar10 = uVar10 + 1;
            } while (pbVar11 < pbVar12);
          }
          else {
            iVar5 = 0;
            do {
              bVar2 = *pbVar11;
              if (bVar2 == 100) {
                __s1 = pbVar11 + 3;
                if ((((__s1 < pbVar12) && (pbVar11[1] == 0x65)) && (pbVar11[2] == 0x66)) &&
                   ((*__s1 < 0x21 && ((1L << ((ulong)*__s1 & 0x3f) & 0x100003601U) != 0)))) break;
              }
              else if (bVar2 == 0x5d) goto LAB_00e4a7d0;
              if (bVar2 - 0x30 < 10) {
                uVar10 = (*(code *)param_2[9])(param_2);
                (*(code *)param_2[7])(param_2);
                __s1 = (byte *)*param_2;
                if (pbVar11 == __s1) goto LAB_00e4a7c8;
                if (((__s1 + 2 < pbVar12) && (iVar5 < iVar4)) && (*__s1 == 0x2f)) {
                  __s1 = __s1 + 1;
                  *param_2 = (ulong)__s1;
                  (*(code *)param_2[8])(param_2);
                  if (pbVar12 <= (byte *)*param_2) {
                    return;
                  }
                  if ((int)param_2[3] != 0) {
                    return;
                  }
                  uVar9 = (int)(byte *)*param_2 - (int)__s1;
                  iVar6 = (*(code *)param_2[0x21])(puVar1,uVar10 & 0xffffffff,__s1,uVar9 + 1);
                  *(int *)(param_2 + 3) = iVar6;
                  if (iVar6 != 0) {
                    return;
                  }
                  iVar5 = iVar5 + 1;
                  *(undefined1 *)
                   (*(long *)(param_2[0x1c] +
                             (-(uVar10 >> 0x1f & 1) & 0xfffffff800000000 |
                             (uVar10 & 0xffffffff) << 3)) + (ulong)uVar9) = 0;
                }
              }
              else {
                (*(code *)param_2[8])(param_2);
                __s1 = pbVar11;
                if ((int)param_2[3] != 0) {
                  return;
                }
              }
              (*(code *)param_2[7])(param_2);
              pbVar11 = (byte *)*param_2;
            } while (pbVar11 < pbVar12);
          }
        }
LAB_00e4a7d4:
        *(undefined4 *)(param_1 + 0x220) = 1;
        *param_2 = (ulong)__s1;
        return;
      }
    }
    *(int *)(param_2 + 3) = local_64;
    return;
  }
LAB_00e4a400:
  uVar8 = 3;
LAB_00e4a404:
  *(undefined4 *)(param_2 + 3) = uVar8;
  return;
LAB_00e4a7d0:
  __s1 = pbVar11 + 1;
  goto LAB_00e4a7d4;
LAB_00e4a7c8:
  uVar8 = 2;
  goto LAB_00e4a404;
}

