
float FUN_00d36c44(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  char *__s;
  int iVar9;
  byte *pbVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  
  __s = (char *)*param_1;
  sVar3 = strspn(__s," \t");
                    /* try { // try from 00d36c7c to 00e36c7f has its CatchHandler @ 00d36cc0 */
  pbVar1 = (byte *)(__s + sVar3);
  *param_1 = pbVar1;
  sVar4 = strcspn((char *)pbVar1," \t\r");
  pbVar2 = pbVar1 + sVar4;
  fVar12 = 0.0;
  if ((long)sVar4 < 1) goto LAB_00d36eb0;
  bVar7 = *pbVar1;
  iVar9 = (int)(char)bVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d36c7c with catch @ 00d36cc0
                        */
  if ((bVar7 == 0x2d) || (bVar7 == 0x2b)) {
    pbVar1 = pbVar1 + 1;
  }
  else {
    if (9 < iVar9 - 0x30U) goto LAB_00d36eb0;
    iVar9 = 0x2b;
  }
  if (pbVar1 == pbVar2) goto LAB_00d36eb0;
  pcVar6 = (char *)0x0;
  dVar13 = 0.0;
                    /* try { // try from 00d36ce4 to 00e36ce7 has its CatchHandler @ 00d36cf8 */
  do {
    bVar7 = pbVar1[(long)pcVar6];
    if (9 < (int)(char)bVar7 - 0x30U) {
                    /* try { // try from 00d36d64 to 00e36da7 has its CatchHandler @ 00d36d0c */
      if ((int)pcVar6 == 0) goto LAB_00d36eb0;
      pbVar10 = pbVar1 + (long)pcVar6;
      if ((bVar7 == 0x65) || (bVar7 == 0x45)) goto LAB_00d36df0;
      if ((bVar7 == 0x2e) && (__s + ((sVar4 + sVar3) - (long)pbVar1) + -1 != pcVar6)) {
        iVar8 = -1;
                    /* try { // try from 00d36da8 to 00e36dab has its CatchHandler @ 00d36e50 */
        pbVar10 = pbVar1 + (long)pcVar6 + 1;
        goto LAB_00d36db0;
      }
      break;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d36ce4 with catch @ 00d36cf8
                        */
    pcVar6 = pcVar6 + 1;
    dVar13 = dVar13 * 10.0 + (double)(int)((int)(char)bVar7 - 0x30U);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d36d64 with catch @ 00d36d0c
                        */
  } while (__s + ((sVar4 + sVar3) - (long)pbVar1) != pcVar6);
  goto LAB_00d36d10;
LAB_00d36df0:
  if ((bVar7 | 0x20) != 0x65) goto LAB_00d36d10;
  pbVar1 = pbVar10 + 1;
  if (pbVar1 == pbVar2) {
    bVar7 = *pbVar2;
LAB_00d36e34:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d36dd4 with catch @ 00d36e38
                        */
    if (9 < (int)(char)bVar7 - 0x30U) goto LAB_00d36eb0;
    bVar7 = 0x2b;
  }
  else {
    bVar7 = *pbVar1;
    if ((bVar7 != 0x2d) && (bVar7 != 0x2b)) goto LAB_00d36e34;
    pbVar1 = pbVar10 + 2;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d36d40 with catch @ 00d36e4c
                        */
  if (pbVar1 == pbVar2) goto LAB_00d36eb0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d36da8 with catch @ 00d36e50
                        */
  pcVar6 = (char *)0x0;
  iVar8 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d36d60 with catch @ 00d36e64
                        */
  do {
    pbVar10 = pbVar1 + (long)pcVar6;
    if (9 < (int)(char)*pbVar10 - 0x30U) {
      iVar5 = -1;
      if (bVar7 == 0x2b) {
        iVar5 = 1;
      }
      if ((int)pcVar6 == 0) goto LAB_00d36eb0;
      goto LAB_00d36ea8;
    }
    pcVar6 = pcVar6 + 1;
    iVar8 = ((int)(char)*pbVar10 - 0x30U) + iVar8 * 10;
  } while (__s + ((sVar4 + sVar3) - (long)pbVar1) != pcVar6);
  iVar5 = -1;
  if (bVar7 == 0x2b) {
    iVar5 = 1;
  }
LAB_00d36ea8:
  iVar8 = iVar8 * iVar5;
  goto LAB_00d36d14;
  while( true ) {
    dVar11 = pow(10.0,(double)iVar8);
                    /* try { // try from 00d36dd4 to 00e36ddb has its CatchHandler @ 00d36e38 */
    pbVar10 = pbVar10 + 1;
    dVar13 = dVar13 + dVar11 * (double)(int)((int)(char)bVar7 - 0x30U);
    iVar8 = iVar8 + -1;
    if (pbVar2 == pbVar10) break;
LAB_00d36db0:
    bVar7 = *pbVar10;
    if (9 < (int)(char)bVar7 - 0x30U) goto LAB_00d36df0;
  }
LAB_00d36d10:
  iVar8 = 0;
LAB_00d36d14:
  iVar5 = -1;
  if (iVar9 == 0x2b) {
    iVar5 = 1;
  }
  dVar11 = pow(5.0,(double)iVar8);
  dVar13 = ldexp(dVar13 * dVar11,iVar8);
                    /* try { // try from 00d36d40 to 00e36d47 has its CatchHandler @ 00d36e4c */
  fVar12 = (float)(dVar13 * (double)iVar5);
LAB_00d36eb0:
  *param_1 = pbVar2;
  return fVar12;
}

