
void FUN_0108fd3c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  char *__s2;
  byte *pbVar14;
  byte *pbVar15;
  
                    /* catch() { ... } // from try @ 0108fba4 with catch @ 0108fd40 */
                    /* catch() { ... } // from try @ 0108fb34 with catch @ 0108fd44 */
                    /* catch() { ... } // from try @ 0108fb20 with catch @ 0108fd54 */
  lVar12 = param_2[4];
  puVar13 = *(undefined8 **)(param_1 + 0x308);
  pbVar15 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar15) {
    uVar8 = (uint)*(byte *)*param_2;
    if (uVar8 - 0x30 < 10) {
      uVar6 = (*(code *)param_2[9])(param_2);
      *(undefined4 *)(param_2 + 0x23) = uVar6;
                    /* catch() { ... } // from try @ 0108fae4 with catch @ 0108fda8 */
      if ((int)param_2[3] != 0) {
        return;
      }
      pbVar14 = (byte *)*param_2;
    }
    else {
      if (uVar8 != 0x3c) goto LAB_01090194;
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar9 = (byte *)*param_2;
      pbVar14 = pbVar9;
      if (pbVar9 < pbVar15) {
                    /* try { // try from 0108fdf4 to 0118fe03 has its CatchHandler @ 010902c4 */
        iVar7 = 0;
        do {
          if (*pbVar14 == 0x2f) {
            iVar7 = iVar7 + 1;
          }
          else if (*pbVar14 == 0x3e) {
            *(int *)(param_2 + 0x23) = iVar7;
            *param_2 = (long)pbVar9;
            pbVar14 = pbVar9;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
          pbVar14 = (byte *)*param_2;
        } while (pbVar14 < pbVar15);
      }
    }
    if (pbVar14 < pbVar15) {
                    /* try { // try from 0108fe60 to 0118fe67 has its CatchHandler @ 010901d8 */
      plVar1 = param_2 + 0x30;
                    /* try { // try from 0108fe68 to 0118feeb has its CatchHandler @ 0108fdb8 */
      iVar7 = (**(code **)*puVar13)(plVar1,(int)param_2[0x23],lVar12);
      if (iVar7 != 0) goto LAB_01090198;
      plVar2 = param_2 + 0x24;
      iVar7 = (**(code **)*puVar13)(plVar2,(int)param_2[0x23],lVar12);
      if (iVar7 != 0) goto LAB_01090198;
      plVar3 = param_2 + 0x3c;
      iVar7 = (**(code **)*puVar13)(plVar3,4,lVar12);
      if (iVar7 != 0) goto LAB_01090198;
      uVar8 = 0;
      uVar11 = 0;
      bVar5 = false;
      do {
        do {
          (*(code *)param_2[7])(param_2);
          pbVar14 = (byte *)*param_2;
          if (pbVar15 <= pbVar14) goto LAB_01090050;
                    /* try { // try from 0108feec to 0118fef3 has its CatchHandler @ 010901a4 */
          if (*pbVar14 == 0x65) {
                    /* try { // try from 0108ff30 to 0118ff3b has its CatchHandler @ 0109029c */
                    /* try { // try from 0108ff3c to 0118ff73 has its CatchHandler @ 0108fdb8 */
            if ((((pbVar14 + 3 < pbVar15) && (pbVar14[1] == 0x6e)) && (pbVar14[2] == 100)) &&
               ((bVar4 = pbVar14[3], bVar4 < 0x21 &&
                ((1L << ((ulong)bVar4 & 0x3f) & 0x100003601U) != 0)))) goto LAB_01090050;
          }
          else {
                    /* try { // try from 0108fef4 to 0118ff2f has its CatchHandler @ 0108fdb8 */
            if (*pbVar14 == 0x3e) goto LAB_01090050;
          }
          (*(code *)param_2[8])(param_2);
          pbVar9 = (byte *)*param_2;
          if (pbVar15 <= pbVar9) goto LAB_01090194;
          if ((int)param_2[3] != 0) {
            return;
          }
        } while (*pbVar14 != 0x2f);
                    /* try { // try from 0108ff74 to 0118ff83 has its CatchHandler @ 01090288 */
        if (pbVar15 <= pbVar14 + 2) goto LAB_01090194;
        pbVar14 = pbVar14 + 1;
                    /* try { // try from 0108ff84 to 0118ff93 has its CatchHandler @ 01090268 */
        iVar7 = (*(code *)param_2[0x2e])(plVar2,uVar8,pbVar14,pbVar9 + (1 - (long)pbVar14));
        if (iVar7 != 0) goto LAB_01090198;
        uVar10 = (ulong)uVar8;
        pbVar9[*(long *)(param_2[0x29] + (ulong)uVar8 * 8) - (long)pbVar14] = 0;
                    /* try { // try from 0108ffc0 to 0118ffd3 has its CatchHandler @ 01090208 */
        if ((*pbVar14 == 0x2e) &&
           (iVar7 = strcmp(".notdef",*(char **)(param_2[0x29] + uVar10 * 8)), iVar7 == 0)) {
          bVar5 = true;
          uVar11 = uVar8;
        }
        (*(code *)param_2[7])(param_2);
                    /* try { // try from 0108ffec to 0118fff3 has its CatchHandler @ 010901ec */
        lVar12 = *param_2;
                    /* try { // try from 0108fff4 to 01190057 has its CatchHandler @ 0108fdb8 */
        (*(code *)param_2[9])(param_2);
        pbVar14 = (byte *)*param_2;
        if (pbVar15 <= pbVar14) goto LAB_01090194;
        iVar7 = (*(code *)param_2[0x3a])(plVar1,uVar8,lVar12,pbVar14 + (1 - lVar12));
        if (iVar7 != 0) goto LAB_01090198;
        uVar8 = uVar8 + 1;
        pbVar14[*(long *)(param_2[0x35] + uVar10 * 8) - lVar12] = 0;
      } while (uVar8 < *(uint *)(param_2 + 0x23));
LAB_01090050:
      *(uint *)(param_2 + 0x23) = uVar8;
                    /* try { // try from 01090058 to 01190067 has its CatchHandler @ 01090204 */
      if (bVar5) {
                    /* try { // try from 01090068 to 01190077 has its CatchHandler @ 01090200 */
        __s2 = *(char **)param_2[0x29];
        iVar7 = strcmp(".notdef",__s2);
        if (iVar7 == 0) {
          return;
        }
        iVar7 = (*(code *)param_2[0x46])(plVar3,0,__s2,*(undefined8 *)param_2[0x2a]);
                    /* try { // try from 0109009c to 011900af has its CatchHandler @ 010901fc */
        if ((iVar7 == 0) &&
           (iVar7 = (*(code *)param_2[0x46])
                              (plVar3,1,*(undefined8 *)param_2[0x35],*(undefined8 *)param_2[0x36]),
           iVar7 == 0)) {
          lVar12 = (ulong)uVar11 * 8;
                    /* try { // try from 010900c4 to 011900cb has its CatchHandler @ 010901e8 */
                    /* try { // try from 010900cc to 01190197 has its CatchHandler @ 0108fdb8 */
          iVar7 = (*(code *)param_2[0x46])
                            (plVar3,2,*(undefined8 *)(param_2[0x29] + lVar12),
                             *(undefined8 *)(param_2[0x2a] + lVar12));
          if ((iVar7 == 0) &&
             ((((iVar7 = (*(code *)param_2[0x46])
                                   (plVar3,3,*(undefined8 *)(param_2[0x35] + lVar12),
                                    *(undefined8 *)(param_2[0x36] + lVar12)), iVar7 == 0 &&
                (iVar7 = (*(code *)param_2[0x2e])
                                   (plVar2,uVar11,*(undefined8 *)param_2[0x41],
                                    *(undefined8 *)param_2[0x42]), iVar7 == 0)) &&
               (iVar7 = (*(code *)param_2[0x3a])
                                  (plVar1,uVar11,*(undefined8 *)(param_2[0x41] + 8),
                                   *(undefined8 *)(param_2[0x42] + 8)), iVar7 == 0)) &&
              ((iVar7 = (*(code *)param_2[0x2e])
                                  (plVar2,0,*(undefined8 *)(param_2[0x41] + 0x10),
                                   *(undefined8 *)(param_2[0x42] + 0x10)), iVar7 == 0 &&
               (iVar7 = (*(code *)param_2[0x3a])
                                  (plVar1,0,*(undefined8 *)(param_2[0x41] + 0x18),
                                   *(undefined8 *)(param_2[0x42] + 0x18)), iVar7 == 0)))))) {
            return;
          }
        }
        goto LAB_01090198;
      }
    }
  }
LAB_01090194:
  iVar7 = 3;
LAB_01090198:
                    /* try { // try from 01090198 to 0119019f has its CatchHandler @ 010901d8 */
  *(int *)(param_2 + 3) = iVar7;
                    /* try { // try from 010901a0 to 011901a3 has its CatchHandler @ 010901a4 */
                    /* catch() { ... } // from try @ 0108feec with catch @ 010901a4
                       catch() { ... } // from try @ 010901a0 with catch @ 010901a4
                       try { // try from 010901a4 to 011902df has its CatchHandler @ 0108fdb8 */
  return;
}

