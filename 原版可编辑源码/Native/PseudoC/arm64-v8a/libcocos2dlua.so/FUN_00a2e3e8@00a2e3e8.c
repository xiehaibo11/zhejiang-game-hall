
int FUN_00a2e3e8(undefined8 param_1,char *param_2,void *param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  ulong uVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  void *local_78;
  size_t local_70;
  ulong local_68;
  char *local_58;
  
  local_58 = (char *)0x0;
                    /* try { // try from 00a2e400 to 00b2e403 has its CatchHandler @ 00a2e468 */
                    /* try { // try from 00a2e404 to 00b2e483 has its CatchHandler @ 00a2e3a8 */
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    return 0x5a;
  }
  if (param_4 == 0) {
    return 0x5a;
  }
  iVar2 = strncmp(param_2,"sha256//",8);
  if (iVar2 == 0) {
                    /* try { // try from 00a2e4d0 to 00b2e4d3 has its CatchHandler @ 00a2e508 */
                    /* try { // try from 00a2e4d4 to 00b2e51b has its CatchHandler @ 00a2e484 */
    lVar12 = (*(code *)PTR_malloc_017699f8)(0x20);
    if (lVar12 == 0) {
      return 0x1b;
    }
    FUN_00a5ebbc(param_3,param_4,lVar12,0x20);
                    /* catch() { ... } // from try @ 00a2e4d0 with catch @ 00a2e508 */
    iVar2 = FUN_00a2f7a0(param_1,lVar12,0x20,&local_78,&local_70);
                    /* try { // try from 00a2e51c to 00b2e61b has its CatchHandler @ 00a2e51c
                       catch() { ... } // from try @ 00a2e51c with catch @ 00a2e51c
                       catch() { ... } // from try @ 00a2e69c with catch @ 00a2e51c */
    (*(code *)PTR_free_01769a00)(lVar12);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00a38740(param_1,"\t public key hash: sha256//%s\n",local_78);
    sVar6 = strlen(param_2);
    pcVar11 = (char *)(*(code *)PTR_malloc_017699f8)(sVar6 + 1);
    if (pcVar11 == (char *)0x0) {
      (*(code *)PTR_free_01769a00)(local_78);
      return 0x1b;
    }
    memcpy(pcVar11,param_2,sVar6 + 1);
    pcVar7 = pcVar11;
    do {
      pcVar8 = strstr(pcVar7,";sha256//");
      sVar6 = local_70;
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      sVar4 = strlen(pcVar7 + 8);
      if (sVar6 == sVar4) {
        iVar3 = memcmp(local_78,pcVar7 + 8,sVar6);
        iVar2 = 0;
        if ((iVar3 == 0) || (iVar2 = 0x5a, pcVar8 == (char *)0x0)) goto LAB_00a2e6dc;
      }
      else if (pcVar8 == (char *)0x0) {
        iVar2 = 0x5a;
LAB_00a2e6dc:
        (*(code *)PTR_free_01769a00)(local_78);
                    /* catch() { ... } // from try @ 00a2e650 with catch @ 00a2e6e8 */
                    /* catch() { ... } // from try @ 00a2e668 with catch @ 00a2e6ec */
        local_78 = (void *)0x0;
        (*(code *)PTR_free_01769a00)(pcVar11);
        return iVar2;
      }
      *pcVar8 = ';';
      pcVar7 = strstr(pcVar8,"sha256//");
      iVar2 = 0x5a;
      if ((pcVar8 == (char *)0x0) || (pcVar7 == (char *)0x0)) goto LAB_00a2e6dc;
    } while( true );
  }
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    return 0x5a;
  }
  iVar2 = fseek(__stream,0,2);
                    /* catch() { ... } // from try @ 00a2e400 with catch @ 00a2e468 */
  if (iVar2 == 0) {
    uVar5 = ftell(__stream);
                    /* try { // try from 00a2e61c to 00b2e64f has its CatchHandler @ 00a2e71c */
    iVar3 = fseek(__stream,0,0);
    pcVar11 = (char *)0x0;
    iVar2 = 0x5a;
    if ((0x100000 < uVar5) || (iVar3 != 0)) goto LAB_00a2e474;
    uVar5 = FUN_00a2c6fc(uVar5);
                    /* try { // try from 00a2e650 to 00b2e663 has its CatchHandler @ 00a2e6e8 */
    if (uVar5 < param_4) goto LAB_00a2e46c;
                    /* try { // try from 00a2e668 to 00b2e69b has its CatchHandler @ 00a2e6ec */
    pcVar11 = (char *)(*(code *)PTR_malloc_017699f8)(uVar5 + 1);
    if ((pcVar11 != (char *)0x0) && (sVar6 = fread(pcVar11,uVar5,1,__stream), (int)sVar6 == 1)) {
      pcVar7 = pcVar11;
      if (uVar5 == param_4) {
LAB_00a2e6a0:
        iVar3 = memcmp(param_3,pcVar7,param_4);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = 0x5a;
        }
        goto LAB_00a2e474;
      }
      pcVar11[uVar5] = '\0';
      pcVar7 = strstr(pcVar11,"-----BEGIN PUBLIC KEY-----");
                    /* catch() { ... } // from try @ 00a2e61c with catch @ 00a2e71c */
      if ((pcVar7 != (char *)0x0) &&
         ((lVar12 = (long)pcVar7 - (long)pcVar11, lVar12 == 0 || (pcVar11[lVar12 + -1] == '\n')))) {
        uVar5 = lVar12 + 0x1a;
                    /* try { // try from 00a2e738 to 00b2e787 has its CatchHandler @ 00a2e738
                       catch() { ... } // from try @ 00a2e738 with catch @ 00a2e738
                       catch() { ... } // from try @ 00a2e7d0 with catch @ 00a2e738
                       catch() { ... } // from try @ 00a2e850 with catch @ 00a2e738 */
        pcVar8 = strstr(pcVar11 + uVar5,"\n-----END PUBLIC KEY-----");
        if ((pcVar8 != (char *)0x0) &&
           (lVar12 = (*(code *)PTR_malloc_017699f8)(pcVar8 + (-0x19 - (long)(pcVar11 + lVar12))),
           lVar12 != 0)) {
          if (uVar5 < (ulong)((long)pcVar8 - (long)pcVar11)) {
            pcVar8 = pcVar8 + (-0x1a - (long)pcVar7);
            pcVar7 = pcVar11 + uVar5;
            lVar9 = 0;
            do {
              cVar1 = *pcVar7;
                    /* try { // try from 00a2e788 to 00b2e79f has its CatchHandler @ 00a2e868 */
              lVar10 = lVar9;
              if ((cVar1 != '\n') && (cVar1 != '\r')) {
                lVar10 = lVar9 + 1;
                *(char *)(lVar12 + lVar9) = cVar1;
              }
                    /* try { // try from 00a2e7a4 to 00b2e7cf has its CatchHandler @ 00a2e864 */
              pcVar8 = pcVar8 + -1;
              pcVar7 = pcVar7 + 1;
              lVar9 = lVar10;
            } while (pcVar8 != (char *)0x0);
          }
          else {
            lVar10 = 0;
          }
          *(undefined1 *)(lVar12 + lVar10) = 0;
          iVar3 = FUN_00a2e8fc(lVar12,&local_58,&local_68);
                    /* try { // try from 00a2e7d0 to 00b2e7f7 has its CatchHandler @ 00a2e738 */
          (*(code *)PTR_free_01769a00)(lVar12);
          iVar2 = 0x5a;
          if ((iVar3 != 0) || (pcVar7 = local_58, local_68 != param_4)) goto LAB_00a2e474;
          goto LAB_00a2e6a0;
        }
      }
    }
  }
  else {
LAB_00a2e46c:
    pcVar11 = (char *)0x0;
  }
  iVar2 = 0x5a;
LAB_00a2e474:
                    /* try { // try from 00a2e484 to 00b2e4cf has its CatchHandler @ 00a2e484
                       catch() { ... } // from try @ 00a2e484 with catch @ 00a2e484
                       catch() { ... } // from try @ 00a2e4d4 with catch @ 00a2e484 */
  (*(code *)PTR_free_01769a00)(pcVar11);
  (*(code *)PTR_free_01769a00)(local_58);
  local_58 = (char *)0x0;
  fclose(__stream);
  return iVar2;
}

