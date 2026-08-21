
void FUN_00a44fdc(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_118 = 0;
  local_110 = 0;
  if (*(int *)(param_6 + 7) == 0) {
    *(undefined4 *)(param_6 + 7) = 1;
    lVar8 = param_6[1];
  }
  else {
    lVar8 = param_6[1];
  }
  if (lVar8 == 0) {
    uVar4 = FUN_00a53a70(param_1,&local_9c,4);
    if ((int)uVar4 != 0) goto LAB_00a453e0;
                    /* try { // try from 00a451c4 to 00b45223 has its CatchHandler @ 00a451c4
                       catch() { ... } // from try @ 00a451c4 with catch @ 00a451c4
                       catch() { ... } // from try @ 00a45530 with catch @ 00a451c4 */
    FUN_00a0e7c4(acStack_108,0x21,"%08x%08x%08x%08x",local_9c,uStack_98,local_94,uStack_90);
    sVar5 = strlen(acStack_108);
    uVar4 = FUN_00a19db8(param_1,acStack_108,sVar5,&local_110,&local_118);
    if ((int)uVar4 != 0) goto LAB_00a453e0;
    param_6[1] = local_110;
  }
  lVar8 = FUN_00a0e870("%s:%s:%s",param_2,param_6[2],param_3);
  if (lVar8 != 0) {
    FUN_00a52cc8(auStack_78,lVar8);
    (*(code *)PTR_free_01d1b748)(lVar8);
    FUN_00a45414(auStack_78,auStack_c0);
    if (*(int *)(param_6 + 3) == 1) {
      lVar8 = FUN_00a0e870("%s:%s:%s",auStack_c0,*param_6,param_6[1]);
      if (lVar8 == 0) goto LAB_00a453dc;
      FUN_00a52cc8(auStack_78,lVar8);
      (*(code *)PTR_free_01d1b748)(lVar8);
      FUN_00a45414(auStack_78,auStack_c0);
    }
    lVar3 = FUN_00a0e870("%s:%s",param_4,param_5);
    lVar8 = lVar3;
    if ((param_6[5] != 0) && (iVar2 = FUN_00a33710(param_6[5],"auth-int"), iVar2 != 0)) {
      lVar8 = FUN_00a0e870("%s:%s",lVar3,&DAT_01896ceb);
      (*(code *)PTR_free_01d1b748)(lVar3);
    }
    if (lVar8 != 0) {
                    /* try { // try from 00a4514c to 00b451c3 has its CatchHandler @ 00a44eac */
                    /* catch() { ... } // from try @ 00a44f30 with catch @ 00a45154 */
      FUN_00a52cc8(auStack_78,lVar8);
                    /* catch() { ... } // from try @ 00a44f24 with catch @ 00a45158 */
                    /* catch() { ... } // from try @ 00a44f04 with catch @ 00a4515c */
      (*(code *)PTR_free_01d1b748)(lVar8);
                    /* catch() { ... } // from try @ 00a44f3c with catch @ 00a4516c */
      FUN_00a45414(auStack_78,auStack_e4);
      if (param_6[5] == 0) {
        lVar8 = FUN_00a0e870("%s:%s:%s",auStack_c0,*param_6,auStack_e4);
      }
      else {
        lVar8 = FUN_00a0e870("%s:%s:%08x:%s:%s:%s",auStack_c0,*param_6,*(undefined4 *)(param_6 + 7),
                             param_6[1],param_6[5],auStack_e4);
      }
      if (lVar8 != 0) {
                    /* try { // try from 00a45224 to 00b4523b has its CatchHandler @ 00a45614 */
        FUN_00a52cc8(auStack_78,lVar8);
        (*(code *)PTR_free_01d1b748)(lVar8);
        FUN_00a45414(auStack_78,&local_9c);
                    /* try { // try from 00a45244 to 00b4524f has its CatchHandler @ 00a455c0 */
        lVar8 = 1;
        pcVar7 = param_2;
LAB_00a45258:
        do {
          cVar10 = *pcVar7;
                    /* try { // try from 00a4525c to 00b45273 has its CatchHandler @ 00a45624 */
          if (cVar10 != '\"') {
            if (cVar10 == '\0') goto LAB_00a4527c;
            if (cVar10 != '\\') {
              lVar8 = lVar8 + 1;
              pcVar7 = pcVar7 + 1;
              goto LAB_00a45258;
            }
          }
                    /* try { // try from 00a45250 to 00b4525b has its CatchHandler @ 00a455bc */
          lVar8 = lVar8 + 2;
          pcVar7 = pcVar7 + 1;
        } while( true );
      }
    }
  }
  goto LAB_00a453dc;
LAB_00a452d0:
  *pcVar7 = '\0';
  if (param_6[5] == 0) {
                    /* try { // try from 00a45338 to 00b45363 has its CatchHandler @ 00a455c4 */
    pcVar7 = (char *)FUN_00a0e870("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                  ,pcVar6,param_6[2],*param_6,param_5,&local_9c);
  }
  else {
    pcVar7 = (char *)FUN_00a0e870("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                  ,pcVar6,param_6[2],*param_6,param_5,param_6[1],
                                  *(undefined4 *)(param_6 + 7),param_6[5],&local_9c);
    iVar2 = FUN_00a33710(param_6[5],"auth");
    if (iVar2 != 0) {
      *(int *)(param_6 + 7) = *(int *)(param_6 + 7) + 1;
    }
  }
  (*(code *)PTR_free_01d1b748)(pcVar6);
  if (pcVar7 != (char *)0x0) {
    pcVar6 = pcVar7;
    if (param_6[4] != 0) {
      pcVar6 = (char *)FUN_00a0e870("%s, opaque=\"%s\"",pcVar7);
      (*(code *)PTR_free_01d1b748)(pcVar7);
                    /* try { // try from 00a4538c to 00b45393 has its CatchHandler @ 00a455b4 */
      if (pcVar6 == (char *)0x0) goto LAB_00a453dc;
    }
    pcVar7 = pcVar6;
    if (param_6[6] != 0) {
      pcVar7 = (char *)FUN_00a0e870("%s, algorithm=\"%s\"",pcVar6);
                    /* try { // try from 00a453a8 to 00b453af has its CatchHandler @ 00a455b0 */
      (*(code *)PTR_free_01d1b748)(pcVar6);
      if (pcVar7 == (char *)0x0) goto LAB_00a453dc;
    }
    *param_7 = pcVar7;
                    /* try { // try from 00a453c8 to 00b453fb has its CatchHandler @ 00a455b8 */
    sVar5 = strlen(pcVar7);
    uVar4 = 0;
    *param_8 = sVar5;
    goto LAB_00a453e0;
  }
  goto LAB_00a453dc;
LAB_00a4527c:
  pcVar6 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar8);
  pcVar7 = pcVar6;
  if (pcVar6 != (char *)0x0) {
    do {
      cVar10 = *param_2;
      if ((cVar10 == '\"') || (cVar10 == '\\')) {
        pcVar9 = pcVar7 + 1;
        *pcVar7 = '\\';
        cVar10 = *param_2;
      }
      else {
                    /* try { // try from 00a452bc to 00b45323 has its CatchHandler @ 00a45624 */
        pcVar9 = pcVar7;
        if (cVar10 == '\0') goto LAB_00a452d0;
      }
                    /* try { // try from 00a452a0 to 00b452a7 has its CatchHandler @ 00a455c4 */
      param_2 = param_2 + 1;
      *pcVar9 = cVar10;
      pcVar7 = pcVar9 + 1;
    } while( true );
  }
LAB_00a453dc:
  uVar4 = 0x1b;
LAB_00a453e0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

