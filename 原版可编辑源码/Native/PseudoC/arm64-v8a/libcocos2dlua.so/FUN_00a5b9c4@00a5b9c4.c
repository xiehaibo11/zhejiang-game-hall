
void FUN_00a5b9c4(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 *param_7,size_t *param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char cVar10;
  undefined8 local_118;
  undefined8 local_110;
  char acStack_108 [36];
  undefined1 auStack_e4 [36];
  undefined1 auStack_c0 [36];
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 auStack_78 [16];
  long local_68;
  
                    /* try { // try from 00a5b9e4 to 00b5ba03 has its CatchHandler @ 00a5bc8c */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_118 = 0;
  local_110 = 0;
                    /* try { // try from 00a5ba14 to 00b5ba5f has its CatchHandler @ 00a5bca8 */
  if (*(int *)(param_6 + 7) == 0) {
    *(undefined4 *)(param_6 + 7) = 1;
    lVar8 = param_6[1];
  }
  else {
    lVar8 = param_6[1];
  }
  if (lVar8 == 0) {
    uVar4 = FUN_00a6a458(param_1,&local_9c,4);
    if ((int)uVar4 != 0) goto LAB_00a5bdc8;
                    /* try { // try from 00a5bba4 to 00b5bbb7 has its CatchHandler @ 00a5bc98 */
    FUN_00a241ac(acStack_108,0x21,"%08x%08x%08x%08x",local_9c,uStack_98,local_94,uStack_90);
    sVar5 = strlen(acStack_108);
                    /* try { // try from 00a5bbc8 to 00b5bbdb has its CatchHandler @ 00a5bca8 */
    uVar4 = FUN_00a2f7a0(param_1,acStack_108,sVar5,&local_110,&local_118);
    if ((int)uVar4 != 0) goto LAB_00a5bdc8;
                    /* try { // try from 00a5bbe0 to 00b5bbf3 has its CatchHandler @ 00a5bcac */
    param_6[1] = local_110;
  }
  lVar8 = FUN_00a24258("%s:%s:%s",param_2,param_6[2],param_3);
  if (lVar8 != 0) {
    FUN_00a696b0(auStack_78,lVar8);
                    /* try { // try from 00a5ba70 to 00b5baab has its CatchHandler @ 00a5bc94 */
    (*(code *)PTR_free_01769a00)(lVar8);
    FUN_00a5bdfc(auStack_78,auStack_c0);
    if (*(int *)(param_6 + 3) == 1) {
      lVar8 = FUN_00a24258("%s:%s:%s",auStack_c0,*param_6,param_6[1]);
      if (lVar8 == 0) goto LAB_00a5bdc4;
      FUN_00a696b0(auStack_78,lVar8);
                    /* try { // try from 00a5babc to 00b5bb23 has its CatchHandler @ 00a5bcac */
      (*(code *)PTR_free_01769a00)(lVar8);
      FUN_00a5bdfc(auStack_78,auStack_c0);
    }
    lVar3 = FUN_00a24258("%s:%s",param_4,param_5);
    lVar8 = lVar3;
    if ((param_6[5] != 0) && (iVar2 = FUN_00a4a0f8(param_6[5],"auth-int"), iVar2 != 0)) {
      lVar8 = FUN_00a24258("%s:%s",lVar3,"d41d8cd98f00b204e9800998ecf8427e");
      (*(code *)PTR_free_01769a00)(lVar3);
    }
    if (lVar8 != 0) {
      FUN_00a696b0(auStack_78,lVar8);
                    /* try { // try from 00a5bb40 to 00b5bb77 has its CatchHandler @ 00a5bc90 */
      (*(code *)PTR_free_01769a00)(lVar8);
      FUN_00a5bdfc(auStack_78,auStack_e4);
      if (param_6[5] == 0) {
        lVar8 = FUN_00a24258("%s:%s:%s",auStack_c0,*param_6,auStack_e4);
      }
      else {
                    /* try { // try from 00a5bb78 to 00b5bba3 has its CatchHandler @ 00a5b90c */
        lVar8 = FUN_00a24258("%s:%s:%08x:%s:%s:%s",auStack_c0,*param_6,*(undefined4 *)(param_6 + 7),
                             param_6[1],param_6[5],auStack_e4);
      }
      if (lVar8 != 0) {
        FUN_00a696b0(auStack_78,lVar8);
        (*(code *)PTR_free_01769a00)(lVar8);
        FUN_00a5bdfc(auStack_78,&local_9c);
        lVar8 = 1;
        pcVar7 = param_2;
LAB_00a5bc40:
        do {
          cVar10 = *pcVar7;
                    /* try { // try from 00a5bc44 to 00b5bc4b has its CatchHandler @ 00a5bc94 */
          if (cVar10 != '\"') {
            if (cVar10 == '\0') goto LAB_00a5bc64;
                    /* try { // try from 00a5bc50 to 00b5bc57 has its CatchHandler @ 00a5bc8c */
            if (cVar10 != '\\') {
              lVar8 = lVar8 + 1;
              pcVar7 = pcVar7 + 1;
              goto LAB_00a5bc40;
            }
          }
          lVar8 = lVar8 + 2;
          pcVar7 = pcVar7 + 1;
        } while( true );
      }
    }
  }
  goto LAB_00a5bdc4;
LAB_00a5bcb8:
  *pcVar7 = '\0';
  if (param_6[5] == 0) {
    pcVar7 = (char *)FUN_00a24258("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                  ,pcVar6,param_6[2],*param_6,param_5,&local_9c);
  }
  else {
    pcVar7 = (char *)FUN_00a24258("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                  ,pcVar6,param_6[2],*param_6,param_5,param_6[1],
                                  *(undefined4 *)(param_6 + 7),param_6[5],&local_9c);
    iVar2 = FUN_00a4a0f8(param_6[5],"auth");
    if (iVar2 != 0) {
      *(int *)(param_6 + 7) = *(int *)(param_6 + 7) + 1;
    }
  }
  (*(code *)PTR_free_01769a00)(pcVar6);
  if (pcVar7 != (char *)0x0) {
    pcVar6 = pcVar7;
    if (param_6[4] != 0) {
      pcVar6 = (char *)FUN_00a24258("%s, opaque=\"%s\"",pcVar7);
      (*(code *)PTR_free_01769a00)(pcVar7);
      if (pcVar6 == (char *)0x0) goto LAB_00a5bdc4;
    }
    pcVar7 = pcVar6;
    if (param_6[6] != 0) {
      pcVar7 = (char *)FUN_00a24258("%s, algorithm=\"%s\"",pcVar6);
      (*(code *)PTR_free_01769a00)(pcVar6);
      if (pcVar7 == (char *)0x0) goto LAB_00a5bdc4;
    }
    *param_7 = pcVar7;
    sVar5 = strlen(pcVar7);
    uVar4 = 0;
    *param_8 = sVar5;
    goto LAB_00a5bdc8;
  }
  goto LAB_00a5bdc4;
LAB_00a5bc64:
                    /* try { // try from 00a5bc68 to 00b5bc6f has its CatchHandler @ 00a5bc90 */
                    /* try { // try from 00a5bc70 to 00b5bcd7 has its CatchHandler @ 00a5b90c */
  pcVar6 = (char *)(*(code *)PTR_malloc_017699f8)(lVar8);
  pcVar7 = pcVar6;
  if (pcVar6 != (char *)0x0) {
    do {
                    /* catch() { ... } // from try @ 00a5bb40 with catch @ 00a5bc90
                       catch() { ... } // from try @ 00a5bc68 with catch @ 00a5bc90 */
      cVar10 = *param_2;
                    /* catch() { ... } // from try @ 00a5ba70 with catch @ 00a5bc94
                       catch() { ... } // from try @ 00a5bc44 with catch @ 00a5bc94 */
                    /* catch() { ... } // from try @ 00a5b96c with catch @ 00a5bc98
                       catch() { ... } // from try @ 00a5bba4 with catch @ 00a5bc98 */
      if ((cVar10 == '\"') || (cVar10 == '\\')) {
                    /* catch() { ... } // from try @ 00a5babc with catch @ 00a5bcac
                       catch() { ... } // from try @ 00a5bbe0 with catch @ 00a5bcac */
        pcVar9 = pcVar7 + 1;
        *pcVar7 = '\\';
        cVar10 = *param_2;
      }
      else {
        pcVar9 = pcVar7;
        if (cVar10 == '\0') goto LAB_00a5bcb8;
      }
                    /* catch() { ... } // from try @ 00a5b9a0 with catch @ 00a5bc88 */
      param_2 = param_2 + 1;
                    /* catch() { ... } // from try @ 00a5b9e4 with catch @ 00a5bc8c
                       catch() { ... } // from try @ 00a5bc50 with catch @ 00a5bc8c */
      *pcVar9 = cVar10;
      pcVar7 = pcVar9 + 1;
    } while( true );
  }
LAB_00a5bdc4:
  uVar4 = 0x1b;
LAB_00a5bdc8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00a5bdec to 00b5be97 has its CatchHandler @ 00a5bdec
                       catch() { ... } // from try @ 00a5bdec with catch @ 00a5bdec
                       catch() { ... } // from try @ 00a5bea8 with catch @ 00a5bdec
                       catch() { ... } // from try @ 00a5bf14 with catch @ 00a5bdec
                       catch() { ... } // from try @ 00a5bffc with catch @ 00a5bdec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

