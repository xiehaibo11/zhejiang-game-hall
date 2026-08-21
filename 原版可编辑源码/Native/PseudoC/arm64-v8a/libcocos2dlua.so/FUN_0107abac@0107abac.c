
void FUN_0107abac(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *__s1;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  int local_64;
  
                    /* try { // try from 0107abb4 to 0117abff has its CatchHandler @ 0107abb4
                       catch() { ... } // from try @ 0107abb4 with catch @ 0107abb4
                       catch() { ... } // from try @ 0107ac24 with catch @ 0107abb4 */
  pbVar12 = (byte *)param_2[2];
  puVar11 = *(undefined8 **)(param_1 + 0x308);
  (*(code *)param_2[7])(param_2);
  __s1 = (byte *)*param_2;
  if (__s1 < pbVar12) {
    bVar2 = *__s1;
                    /* try { // try from 0107ac00 to 0117ac23 has its CatchHandler @ 0107ac3c */
    if ((bVar2 == 0x5b) || (bVar2 - 0x30 < 10)) {
      uVar9 = param_2[4];
      if (bVar2 != 0x5b) {
        iVar3 = (*(code *)param_2[9])(param_2);
      }
      else {
        *param_2 = (ulong)(__s1 + 1);
        iVar3 = 0x100;
      }
      (*(code *)param_2[7])(param_2);
      if (pbVar12 <= (byte *)*param_2) {
        return;
      }
      *(int *)(param_1 + 0x228) = iVar3;
      *(int *)(param_2 + 0x18) = iVar3;
      uVar6 = ft_mem_realloc(uVar9,2,0,(long)iVar3,0,&local_64);
      *(undefined8 *)(param_1 + 0x238) = uVar6;
      if (local_64 == 0) {
        uVar6 = ft_mem_realloc(uVar9,8,0,(long)iVar3,0,&local_64);
        *(undefined8 *)(param_1 + 0x240) = uVar6;
        if (local_64 == 0) {
          puVar1 = param_2 + 0x19;
          local_64 = (**(code **)*puVar11)(puVar1,iVar3,uVar9);
          if (local_64 == 0) {
            local_64 = 0;
            if (0 < iVar3) {
              iVar4 = 0;
              do {
                (*(code *)param_2[0x23])(puVar1,iVar4,".notdef",8);
                iVar4 = iVar4 + 1;
              } while (iVar3 != iVar4);
            }
            (*(code *)param_2[7])(param_2);
            pbVar10 = (byte *)*param_2;
            if (pbVar10 < pbVar12) {
              if (bVar2 != 0x5b) {
                iVar4 = 0;
                do {
                  bVar2 = *pbVar10;
                  uVar8 = (uint)bVar2;
                  if (bVar2 == 100) {
                    __s1 = pbVar10 + 3;
                    /* try { // try from 0107af18 to 0117af4b has its CatchHandler @ 0107af18
                       catch() { ... } // from try @ 0107af18 with catch @ 0107af18
                       catch() { ... } // from try @ 0107af98 with catch @ 0107af18 */
                    if (((__s1 < pbVar12) && (pbVar10[1] == 0x65)) && (pbVar10[2] == 0x66)) {
                      uVar8 = 100;
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
                        goto switchD_0107ae50_caseD_0;
                      }
                    }
                    else {
                    /* try { // try from 0107af4c to 0117af53 has its CatchHandler @ 0107afc4 */
                      uVar8 = 100;
                    }
                  }
                  else if (bVar2 == 0x5d) goto LAB_0107b04c;
                  if (uVar8 - 0x30 < 10) {
                    uVar9 = (*(code *)param_2[9])(param_2);
                    (*(code *)param_2[7])(param_2);
                    __s1 = (byte *)*param_2;
                    /* try { // try from 0107af98 to 0117afd7 has its CatchHandler @ 0107af18 */
                    if (pbVar10 == __s1) goto LAB_0107b044;
                    /* catch() { ... } // from try @ 0107af70 with catch @ 0107afac */
                    if (((__s1 + 2 < pbVar12) && (iVar4 < iVar3)) && (*__s1 == 0x2f)) {
                      __s1 = __s1 + 1;
                    /* catch() { ... } // from try @ 0107af4c with catch @ 0107afc4 */
                      *param_2 = (ulong)__s1;
                      (*(code *)param_2[8])(param_2);
                      pbVar10 = (byte *)*param_2;
                    /* try { // try from 0107afd8 to 0117b02b has its CatchHandler @ 0107afd8
                       catch() { ... } // from try @ 0107afd8 with catch @ 0107afd8
                       catch() { ... } // from try @ 0107b058 with catch @ 0107afd8 */
                      if (pbVar12 <= pbVar10) {
                        return;
                      }
                      if ((int)param_2[3] != 0) {
                        return;
                      }
                      iVar5 = (*(code *)param_2[0x23])
                                        (puVar1,uVar9 & 0xffffffff,__s1,pbVar10 + (1 - (long)__s1));
                      *(int *)(param_2 + 3) = iVar5;
                      if (iVar5 != 0) {
                        return;
                      }
                      iVar4 = iVar4 + 1;
                      pbVar10[*(long *)(param_2[0x1e] +
                                       (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 |
                                       (uVar9 & 0xffffffff) << 3)) - (long)__s1] = 0;
                    }
                  }
                  else {
                    (*(code *)param_2[8])(param_2);
                    __s1 = pbVar10;
                    if ((int)param_2[3] != 0) {
                      return;
                    }
                  }
                    /* try { // try from 0107b02c to 0117b057 has its CatchHandler @ 0107b068 */
                  (*(code *)param_2[7])(param_2);
                  pbVar10 = (byte *)*param_2;
                } while (pbVar10 < pbVar12);
              }
              else {
                uVar9 = 0;
                do {
                  bVar2 = *pbVar10;
                  if (bVar2 == 100) {
                    __s1 = pbVar10 + 3;
                    if (((__s1 < pbVar12) && (pbVar10[1] == 0x65)) && (pbVar10[2] == 0x66)) {
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
                        goto switchD_0107ae50_caseD_0;
                      }
                    }
                  }
                  else if (bVar2 == 0x5d) goto LAB_0107b04c;
                  if (((pbVar12 <= pbVar10 + 2) || (iVar3 <= (int)uVar9)) || (bVar2 != 0x2f))
                  goto LAB_0107b044;
                  __s1 = pbVar10 + 1;
                  *param_2 = (ulong)__s1;
                  (*(code *)param_2[8])(param_2);
                  pbVar10 = (byte *)*param_2;
                  if (pbVar12 <= pbVar10) {
                    return;
                  }
                  if ((int)param_2[3] != 0) {
                    return;
                  }
                  iVar4 = (*(code *)param_2[0x23])
                                    (puVar1,uVar9 & 0xffffffff,__s1,pbVar10 + (1 - (long)__s1));
                  *(int *)(param_2 + 3) = iVar4;
                  if (iVar4 != 0) {
                    return;
                  }
                  pbVar10[*(long *)(param_2[0x1e] + uVar9 * 8) - (long)__s1] = 0;
                  (*(code *)param_2[7])(param_2);
                  pbVar10 = (byte *)*param_2;
                  uVar9 = uVar9 + 1;
                } while (pbVar10 < pbVar12);
              }
            }
            goto switchD_0107ae50_caseD_0;
          }
        }
      }
      *(int *)(param_2 + 3) = local_64;
      return;
    }
                    /* try { // try from 0107ac24 to 0117ac4f has its CatchHandler @ 0107abb4 */
    if ((__s1 + 0x11 < pbVar12) &&
       (iVar3 = strncmp((char *)__s1,"StandardEncoding",0x10), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x220) = 2;
      return;
    }
                    /* catch() { ... } // from try @ 0107ac00 with catch @ 0107ac3c */
    if ((__s1 + 0xf < pbVar12) && (iVar3 = strncmp((char *)__s1,"ExpertEncoding",0xe), iVar3 == 0))
    {
      *(undefined4 *)(param_1 + 0x220) = 4;
      return;
    }
    if ((__s1 + 0x12 < pbVar12) &&
       (iVar3 = strncmp((char *)__s1,"ISOLatin1Encoding",0x11), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x220) = 3;
      return;
    }
    uVar7 = 0xa2;
  }
  else {
    uVar7 = 3;
  }
  goto LAB_0107ac84;
LAB_0107b04c:
  __s1 = pbVar10 + 1;
switchD_0107ae50_caseD_0:
  *(undefined4 *)(param_1 + 0x220) = 1;
                    /* try { // try from 0107b058 to 0117b083 has its CatchHandler @ 0107afd8 */
  *param_2 = (ulong)__s1;
  return;
LAB_0107b044:
  uVar7 = 2;
LAB_0107ac84:
  *(undefined4 *)(param_2 + 3) = uVar7;
  return;
}

