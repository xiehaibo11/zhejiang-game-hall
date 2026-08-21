
void FUN_0108f88c(long param_1,ulong *param_2)

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
  
                    /* catch() { ... } // from try @ 0108f700 with catch @ 0108f89c */
                    /* catch() { ... } // from try @ 0108f690 with catch @ 0108f8a0 */
                    /* catch() { ... } // from try @ 0108f67c with catch @ 0108f8b0 */
  pbVar12 = (byte *)param_2[2];
  puVar11 = *(undefined8 **)(param_1 + 0x308);
  (*(code *)param_2[7])(param_2);
  __s1 = (byte *)*param_2;
  if (pbVar12 <= __s1) {
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  bVar2 = *__s1;
  if ((bVar2 != 0x5b) && (9 < bVar2 - 0x30)) {
                    /* catch() { ... } // from try @ 0108f640 with catch @ 0108f904 */
    if ((__s1 + 0x11 < pbVar12) &&
       (iVar3 = strncmp((char *)__s1,"StandardEncoding",0x10), iVar3 == 0)) {
      uVar7 = 2;
    }
    else {
                    /* try { // try from 0108f914 to 0118f947 has its CatchHandler @ 0108f914
                       catch() { ... } // from try @ 0108f914 with catch @ 0108f914
                       catch() { ... } // from try @ 0108f9a4 with catch @ 0108f914 */
      if ((__s1 + 0xf < pbVar12) && (iVar3 = strncmp((char *)__s1,"ExpertEncoding",0xe), iVar3 == 0)
         ) {
        uVar7 = 4;
      }
      else {
                    /* try { // try from 0108f948 to 0118f957 has its CatchHandler @ 0108fa94 */
        if ((pbVar12 <= __s1 + 0x12) ||
           (iVar3 = strncmp((char *)__s1,"ISOLatin1Encoding",0x11), iVar3 != 0)) {
          *(undefined4 *)(param_2 + 3) = 0xa2;
          return;
        }
        uVar7 = 3;
      }
    }
    *(undefined4 *)(param_1 + 0x220) = uVar7;
    return;
  }
  uVar9 = param_2[4];
  if (bVar2 != 0x5b) {
                    /* try { // try from 0108f998 to 0118f9a3 has its CatchHandler @ 0108fa20 */
    iVar3 = (*(code *)param_2[9])(param_2);
  }
  else {
                    /* try { // try from 0108f984 to 0118f997 has its CatchHandler @ 0108fa30 */
    *param_2 = (ulong)(__s1 + 1);
    iVar3 = 0x100;
  }
                    /* try { // try from 0108f9a4 to 0118faaf has its CatchHandler @ 0108f914 */
  (*(code *)param_2[7])(param_2);
  if (pbVar12 <= (byte *)*param_2) {
    return;
  }
  *(int *)(param_1 + 0x228) = iVar3;
  *(int *)(param_2 + 0x16) = iVar3;
  uVar6 = ft_mem_realloc(uVar9,2,0,(long)iVar3,0,&local_64);
  *(undefined8 *)(param_1 + 0x238) = uVar6;
  if (local_64 == 0) {
    uVar6 = ft_mem_realloc(uVar9,8,0,(long)iVar3,0,&local_64);
    *(undefined8 *)(param_1 + 0x240) = uVar6;
    if (local_64 == 0) {
      puVar1 = param_2 + 0x17;
                    /* catch() { ... } // from try @ 0108f998 with catch @ 0108fa20 */
                    /* catch() { ... } // from try @ 0108f984 with catch @ 0108fa30 */
      local_64 = (**(code **)*puVar11)(puVar1,iVar3,uVar9);
      if (local_64 == 0) {
        local_64 = 0;
        if (0 < iVar3) {
          iVar4 = 0;
          do {
                    /* catch() { ... } // from try @ 0108f948 with catch @ 0108fa94 */
            (*(code *)param_2[0x21])(puVar1,iVar4,".notdef",8);
            iVar4 = iVar4 + 1;
                    /* try { // try from 0108fab0 to 0118fae3 has its CatchHandler @ 0108fab0
                       catch() { ... } // from try @ 0108fab0 with catch @ 0108fab0
                       catch() { ... } // from try @ 0108fb40 with catch @ 0108fab0
                       catch() { ... } // from try @ 0108fc18 with catch @ 0108fab0 */
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
                if (((__s1 < pbVar12) && (pbVar10[1] == 0x65)) && (pbVar10[2] == 0x66)) {
                    /* try { // try from 0108fc10 to 0118fc17 has its CatchHandler @ 0108fcb8 */
                  uVar8 = 100;
                    /* try { // try from 0108fc18 to 0118fdb7 has its CatchHandler @ 0108fab0 */
                  if ((*__s1 < 0x21) && ((1L << ((ulong)*__s1 & 0x3f) & 0x100003601U) != 0)) break;
                }
                else {
                  uVar8 = 100;
                }
              }
              else if (bVar2 == 0x5d) goto LAB_0108fd1c;
              if (uVar8 - 0x30 < 10) {
                uVar9 = (*(code *)param_2[9])(param_2);
                (*(code *)param_2[7])(param_2);
                __s1 = (byte *)*param_2;
                if (((__s1 + 2 < pbVar12) && (iVar4 < iVar3)) && (*__s1 == 0x2f)) {
                  __s1 = __s1 + 1;
                  *param_2 = (ulong)__s1;
                  (*(code *)param_2[8])(param_2);
                  pbVar10 = (byte *)*param_2;
                    /* catch() { ... } // from try @ 0108fc10 with catch @ 0108fcb8 */
                  if (pbVar12 <= pbVar10) {
                    return;
                  }
                  if ((int)param_2[3] != 0) {
                    return;
                  }
                    /* catch() { ... } // from try @ 0108fbe8 with catch @ 0108fcc8 */
                  iVar5 = (*(code *)param_2[0x21])
                                    (puVar1,uVar9 & 0xffffffff,__s1,pbVar10 + (1 - (long)__s1));
                  *(int *)(param_2 + 3) = iVar5;
                  if (iVar5 != 0) {
                    return;
                  }
                  iVar4 = iVar4 + 1;
                  pbVar10[*(long *)(param_2[0x1c] +
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
              (*(code *)param_2[7])(param_2);
              pbVar10 = (byte *)*param_2;
                    /* catch() { ... } // from try @ 0108fbb4 with catch @ 0108fd14 */
            } while (pbVar10 < pbVar12);
          }
          else {
            uVar9 = 0;
            do {
              bVar2 = *pbVar10;
                    /* try { // try from 0108fae4 to 0118faf3 has its CatchHandler @ 0108fda8 */
              if (bVar2 == 100) {
                __s1 = pbVar10 + 3;
                    /* try { // try from 0108fb20 to 0118fb33 has its CatchHandler @ 0108fd54 */
                if ((((__s1 < pbVar12) && (pbVar10[1] == 0x65)) && (pbVar10[2] == 0x66)) &&
                   ((*__s1 < 0x21 && ((1L << ((ulong)*__s1 & 0x3f) & 0x100003601U) != 0)))) break;
              }
              else if (bVar2 == 0x5d) goto LAB_0108fd1c;
                    /* try { // try from 0108fb34 to 0118fb3f has its CatchHandler @ 0108fd44 */
                    /* try { // try from 0108fb40 to 0118fba3 has its CatchHandler @ 0108fab0 */
              if ((pbVar12 <= pbVar10 + 2) || ((iVar3 <= (int)uVar9 || (bVar2 != 0x2f)))) {
                *(undefined4 *)(param_2 + 3) = 2;
                return;
              }
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
              iVar4 = (*(code *)param_2[0x21])
                                (puVar1,uVar9 & 0xffffffff,__s1,pbVar10 + (1 - (long)__s1));
              *(int *)(param_2 + 3) = iVar4;
              if (iVar4 != 0) {
                return;
              }
                    /* try { // try from 0108fba4 to 0118fbb3 has its CatchHandler @ 0108fd40 */
              pbVar10[*(long *)(param_2[0x1c] + uVar9 * 8) - (long)__s1] = 0;
              (*(code *)param_2[7])(param_2);
                    /* try { // try from 0108fbb4 to 0118fbc3 has its CatchHandler @ 0108fd14 */
              pbVar10 = (byte *)*param_2;
              uVar9 = uVar9 + 1;
            } while (pbVar10 < pbVar12);
          }
        }
        goto LAB_0108fd20;
      }
    }
  }
  *(int *)(param_2 + 3) = local_64;
  return;
LAB_0108fd1c:
  __s1 = pbVar10 + 1;
LAB_0108fd20:
  *(undefined4 *)(param_1 + 0x220) = 1;
  *param_2 = (ulong)__s1;
  return;
}

