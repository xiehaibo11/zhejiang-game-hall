
int FUN_00a43eb8(undefined8 param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  undefined4 local_288;
  undefined1 local_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined5 uStack_270;
  undefined3 local_26b;
  undefined5 uStack_268;
  char local_260 [16];
  char acStack_250 [36];
  char local_22c [64];
  char local_1ec [64];
  char local_1ac [128];
  char local_12c [64];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [2];
  undefined1 auStack_e6 [2];
  undefined1 auStack_e4 [2];
  undefined1 auStack_e2 [2];
  undefined1 auStack_e0 [2];
  undefined1 auStack_de [2];
  undefined1 auStack_dc [2];
  undefined1 auStack_da [2];
  undefined1 auStack_d8 [2];
  undefined1 auStack_d6 [2];
  undefined1 auStack_d4 [2];
  undefined1 auStack_d2 [2];
  undefined1 auStack_d0 [2];
  undefined1 auStack_ce [6];
  undefined8 local_c8;
  undefined1 auStack_c0 [2];
  undefined1 auStack_be [2];
  undefined1 auStack_bc [2];
  undefined1 auStack_ba [2];
  undefined1 auStack_b8 [2];
  undefined1 auStack_b6 [2];
  undefined1 auStack_b4 [2];
  undefined1 auStack_b2 [2];
  undefined1 auStack_b0 [2];
  undefined1 auStack_ae [2];
  undefined1 auStack_ac [2];
  undefined1 auStack_aa [10];
  undefined8 local_a0;
  undefined1 auStack_98 [2];
  undefined1 auStack_96 [2];
  undefined1 auStack_94 [2];
  undefined1 auStack_92 [2];
  undefined1 auStack_90 [2];
  undefined1 auStack_8e [2];
  undefined1 auStack_8c [2];
  undefined1 auStack_8a [2];
  undefined1 auStack_88 [2];
  undefined1 auStack_86 [2];
  undefined1 auStack_84 [2];
  undefined1 auStack_82 [10];
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  builtin_strncpy(local_260,"00000001",9);
  uStack_268 = 0x45544143;
  uStack_270 = 0x4548545541;
  local_26b = 0x49544e;
  local_284 = 0;
  local_288 = 0x68747561;
  local_a0 = (char *)0x0;
  local_c8 = 0;
  iVar2 = 0x3d;
                    /* try { // try from 00a43f50 to 00b4403b has its CatchHandler @ 00a43d34 */
  if (((*param_2 == '\0') || (*param_2 == '=')) ||
     (iVar2 = FUN_00a18f14(param_2,&local_a0,&local_c8), pcVar5 = local_a0, iVar2 != 0))
  goto LAB_00a44948;
  if (local_a0 == (char *)0x0) goto LAB_00a44944;
  pcVar4 = strstr(local_a0,"nonce=\"");
  if (pcVar4 == (char *)0x0) {
LAB_00a44930:
    (*(code *)PTR_free_01d1b748)(pcVar5);
  }
  else {
    cVar7 = pcVar4[7];
    uVar9 = 0;
    if ((cVar7 != '\0') && (cVar7 != '\"')) {
      uVar10 = 0;
      do {
        uVar9 = uVar10 + 1;
        local_12c[uVar10] = cVar7;
        if ((0x3e < uVar9) || (cVar7 = pcVar4[uVar10 + 8], cVar7 == '\0')) break;
        uVar10 = uVar9;
                    /* catch() { ... } // from try @ 00a43dbc with catch @ 00a43fcc */
      } while (cVar7 != '\"');
    }
                    /* catch() { ... } // from try @ 00a43db0 with catch @ 00a43fd0 */
                    /* catch() { ... } // from try @ 00a43d90 with catch @ 00a43fd4 */
    local_12c[uVar9] = '\0';
                    /* catch() { ... } // from try @ 00a43dc8 with catch @ 00a43fe4 */
    pcVar4 = strstr(pcVar5,"realm=\"");
    if (pcVar4 == (char *)0x0) {
                    /* try { // try from 00a4403c to 00b4408f has its CatchHandler @ 00a4403c
                       catch() { ... } // from try @ 00a4403c with catch @ 00a4403c
                       catch() { ... } // from try @ 00a44218 with catch @ 00a4403c */
      pcVar4 = local_1ac;
    }
    else {
      cVar7 = pcVar4[7];
      uVar9 = 0;
      if ((cVar7 != '\0') && (cVar7 != '\"')) {
        uVar10 = 0;
        do {
          uVar9 = uVar10 + 1;
          local_1ac[uVar10] = cVar7;
          if ((0x7e < uVar9) || (cVar7 = pcVar4[uVar10 + 8], cVar7 == '\"')) break;
          uVar10 = uVar9;
        } while (cVar7 != '\0');
      }
      pcVar4 = local_1ac + uVar9;
    }
    *pcVar4 = '\0';
    pcVar4 = strstr(pcVar5,"algorithm=");
    if (pcVar4 == (char *)0x0) goto LAB_00a44930;
    cVar7 = pcVar4[10];
    uVar9 = 0;
    if ((cVar7 != '\0') && (cVar7 != ',')) {
      uVar10 = 0;
      do {
        uVar9 = uVar10 + 1;
        local_1ec[uVar10] = cVar7;
        if ((0x3e < uVar9) || (cVar7 = pcVar4[uVar10 + 0xb], cVar7 == '\0')) break;
                    /* try { // try from 00a44090 to 00b440a7 has its CatchHandler @ 00a442a4 */
        uVar10 = uVar9;
      } while (cVar7 != ',');
    }
    local_1ec[uVar9] = '\0';
                    /* try { // try from 00a440b0 to 00b440bb has its CatchHandler @ 00a442a0 */
    pcVar4 = strstr(pcVar5,"qop=\"");
    if (pcVar4 == (char *)0x0) goto LAB_00a44930;
    cVar7 = pcVar4[5];
                    /* try { // try from 00a440bc to 00b440c7 has its CatchHandler @ 00a4429c */
    uVar9 = 0;
                    /* try { // try from 00a440c8 to 00b440fb has its CatchHandler @ 00a442b4 */
    if ((cVar7 != '\0') && (cVar7 != '\"')) {
      uVar10 = 0;
      do {
        uVar9 = uVar10 + 1;
        local_22c[uVar10] = cVar7;
        if ((0x3e < uVar9) || (cVar7 = pcVar4[uVar10 + 6], cVar7 == '\0')) break;
        uVar10 = uVar9;
      } while (cVar7 != '\"');
    }
                    /* try { // try from 00a44100 to 00b44117 has its CatchHandler @ 00a4428c */
    local_22c[uVar9] = '\0';
    (*(code *)PTR_free_01d1b748)(pcVar5);
                    /* try { // try from 00a44124 to 00b4418b has its CatchHandler @ 00a442b4 */
    iVar2 = strcmp(local_1ec,"md5-sess");
    if (iVar2 == 0) {
      pcVar5 = (char *)(*(code *)PTR_strdup_01d1b758)(local_22c);
      if (pcVar5 == (char *)0x0) goto LAB_00a44988;
      pcVar4 = strtok_r(pcVar5,",",(char **)&local_a0);
      bVar11 = false;
      while (pcVar4 != (char *)0x0) {
        iVar2 = FUN_00a33710(pcVar4,"auth");
        if (iVar2 == 0) {
                    /* try { // try from 00a44190 to 00b441d3 has its CatchHandler @ 00a4428c */
          iVar2 = FUN_00a33710(pcVar4,"auth-int");
          if (iVar2 != 0) {
            bVar8 = 0;
            goto LAB_00a441bc;
          }
          iVar2 = FUN_00a33710(pcVar4,"auth-conf");
          if (iVar2 != 0) {
            bVar8 = 0;
            goto LAB_00a441bc;
          }
        }
        else {
          bVar8 = 1;
LAB_00a441bc:
          bVar11 = (bool)(bVar8 | bVar11);
        }
        pcVar4 = strtok_r((char *)0x0,",",(char **)&local_a0);
      }
                    /* try { // try from 00a441dc to 00b44217 has its CatchHandler @ 00a442b4 */
      (*(code *)PTR_free_01d1b748)(pcVar5);
      if (bVar11) {
        iVar2 = FUN_00a53a70(param_1,&local_280,4);
        if (iVar2 != 0) goto LAB_00a44948;
                    /* try { // try from 00a44218 to 00b4430b has its CatchHandler @ 00a4403c */
        FUN_00a0e7c4(acStack_250,0x21,"%08x%08x%08x%08x",local_280,uStack_27c,local_278,uStack_274);
        lVar6 = FUN_00a52d20(&PTR_MD5_Init_01c6e548);
        if (lVar6 != 0) {
          strlen(param_3);
          uVar3 = FUN_00a16cf8();
          FUN_00a52da0(lVar6,param_3,uVar3);
          FUN_00a52da0(lVar6,":",1);
          strlen(local_1ac);
          uVar3 = FUN_00a16cf8();
          FUN_00a52da0(lVar6,local_1ac,uVar3);
                    /* catch() { ... } // from try @ 00a44100 with catch @ 00a4428c
                       catch() { ... } // from try @ 00a44190 with catch @ 00a4428c */
          FUN_00a52da0(lVar6,":",1);
                    /* catch() { ... } // from try @ 00a440bc with catch @ 00a4429c */
          strlen(param_4);
                    /* catch() { ... } // from try @ 00a440b0 with catch @ 00a442a0 */
          uVar3 = FUN_00a16cf8();
                    /* catch() { ... } // from try @ 00a44090 with catch @ 00a442a4 */
          FUN_00a52da0(lVar6,param_4,uVar3);
                    /* catch() { ... } // from try @ 00a440c8 with catch @ 00a442b4
                       catch() { ... } // from try @ 00a44124 with catch @ 00a442b4
                       catch() { ... } // from try @ 00a441dc with catch @ 00a442b4 */
          FUN_00a52dc0(lVar6,&local_78);
          lVar6 = FUN_00a52d20(&PTR_MD5_Init_01c6e548);
          if (lVar6 != 0) {
            FUN_00a52da0(lVar6,&local_78,0x10);
            FUN_00a52da0(lVar6,":",1);
            strlen(local_12c);
            uVar3 = FUN_00a16cf8();
                    /* try { // try from 00a4430c to 00b44363 has its CatchHandler @ 00a4430c
                       catch() { ... } // from try @ 00a4430c with catch @ 00a4430c
                       catch() { ... } // from try @ 00a444c4 with catch @ 00a4430c */
            FUN_00a52da0(lVar6,local_12c,uVar3);
            FUN_00a52da0(lVar6,":",1);
            strlen(acStack_250);
            uVar3 = FUN_00a16cf8();
            FUN_00a52da0(lVar6,acStack_250,uVar3);
            FUN_00a52dc0(lVar6,&local_78);
                    /* try { // try from 00a44364 to 00b4437b has its CatchHandler @ 00a44544 */
            FUN_00a0e7c4(&local_a0,3,&DAT_01a4ab5e,local_78);
            FUN_00a0e7c4((ulong)&local_a0 | 2,3,&DAT_01a4ab5e,local_77);
                    /* try { // try from 00a44384 to 00b4438f has its CatchHandler @ 00a44540 */
                    /* try { // try from 00a44390 to 00b4439b has its CatchHandler @ 00a4453c */
            FUN_00a0e7c4((long)&local_a0 + 4,3,&DAT_01a4ab5e,local_76);
                    /* try { // try from 00a4439c to 00b444c3 has its CatchHandler @ 00a44554 */
            FUN_00a0e7c4((long)&local_a0 + 6,3,&DAT_01a4ab5e,local_75);
            FUN_00a0e7c4(auStack_98,3,&DAT_01a4ab5e,local_74);
            FUN_00a0e7c4(auStack_96,3,&DAT_01a4ab5e,local_73);
            FUN_00a0e7c4(auStack_94,3,&DAT_01a4ab5e,local_72);
            FUN_00a0e7c4(auStack_92,3,&DAT_01a4ab5e,local_71);
            FUN_00a0e7c4(auStack_90,3,&DAT_01a4ab5e,local_70);
            FUN_00a0e7c4(auStack_8e,3,&DAT_01a4ab5e,local_6f);
            FUN_00a0e7c4(auStack_8c,3,&DAT_01a4ab5e,local_6e);
            FUN_00a0e7c4(auStack_8a,3,&DAT_01a4ab5e,local_6d);
            FUN_00a0e7c4(auStack_88,3,&DAT_01a4ab5e,local_6c);
            FUN_00a0e7c4(auStack_86,3,&DAT_01a4ab5e,local_6b);
            FUN_00a0e7c4(auStack_84,3,&DAT_01a4ab5e,local_6a);
            FUN_00a0e7c4(auStack_82,3,&DAT_01a4ab5e,local_69);
            pcVar5 = (char *)FUN_00a53d6c(param_5,local_1ac,0);
            if (pcVar5 != (char *)0x0) {
              lVar6 = FUN_00a52d20(&PTR_MD5_Init_01c6e548);
                    /* try { // try from 00a444c4 to 00b445ab has its CatchHandler @ 00a4430c */
              if (lVar6 != 0) {
                strlen((char *)&uStack_270);
                uVar3 = FUN_00a16cf8();
                FUN_00a52da0(lVar6,&uStack_270,uVar3);
                FUN_00a52da0(lVar6,":",1);
                strlen(pcVar5);
                uVar3 = FUN_00a16cf8();
                FUN_00a52da0(lVar6,pcVar5,uVar3);
                FUN_00a52dc0(lVar6,&local_78);
                    /* catch() { ... } // from try @ 00a44390 with catch @ 00a4453c */
                FUN_00a0e7c4(&local_c8,3,&DAT_01a4ab5e,local_78);
                    /* catch() { ... } // from try @ 00a44384 with catch @ 00a44540 */
                    /* catch() { ... } // from try @ 00a44364 with catch @ 00a44544 */
                FUN_00a0e7c4((ulong)&local_c8 | 2,3,&DAT_01a4ab5e,local_77);
                    /* catch() { ... } // from try @ 00a4439c with catch @ 00a44554 */
                FUN_00a0e7c4((long)&local_c8 + 4,3,&DAT_01a4ab5e,local_76);
                FUN_00a0e7c4((long)&local_c8 + 6,3,&DAT_01a4ab5e,local_75);
                FUN_00a0e7c4(auStack_c0,3,&DAT_01a4ab5e,local_74);
                FUN_00a0e7c4(auStack_be,3,&DAT_01a4ab5e,local_73);
                    /* try { // try from 00a445ac to 00b445ff has its CatchHandler @ 00a445ac
                       catch() { ... } // from try @ 00a445ac with catch @ 00a445ac
                       catch() { ... } // from try @ 00a44764 with catch @ 00a445ac */
                FUN_00a0e7c4(auStack_bc,3,&DAT_01a4ab5e,local_72);
                FUN_00a0e7c4(auStack_ba,3,&DAT_01a4ab5e,local_71);
                FUN_00a0e7c4(auStack_b8,3,&DAT_01a4ab5e,local_70);
                FUN_00a0e7c4(auStack_b6,3,&DAT_01a4ab5e,local_6f);
                    /* try { // try from 00a44600 to 00b44617 has its CatchHandler @ 00a447e0 */
                FUN_00a0e7c4(auStack_b4,3,&DAT_01a4ab5e,local_6e);
                FUN_00a0e7c4(auStack_b2,3,&DAT_01a4ab5e,local_6d);
                    /* try { // try from 00a44620 to 00b4462b has its CatchHandler @ 00a447dc */
                    /* try { // try from 00a4462c to 00b44637 has its CatchHandler @ 00a447d8 */
                FUN_00a0e7c4(auStack_b0,3,&DAT_01a4ab5e,local_6c);
                    /* try { // try from 00a44638 to 00b44763 has its CatchHandler @ 00a447f0 */
                FUN_00a0e7c4(auStack_ae,3,&DAT_01a4ab5e,local_6b);
                FUN_00a0e7c4(auStack_ac,3,&DAT_01a4ab5e,local_6a);
                FUN_00a0e7c4(auStack_aa,3,&DAT_01a4ab5e,local_69);
                lVar6 = FUN_00a52d20(&PTR_MD5_Init_01c6e548);
                if (lVar6 != 0) {
                  FUN_00a52da0(lVar6,&local_a0,0x20);
                  FUN_00a52da0(lVar6,":",1);
                  strlen(local_12c);
                  uVar3 = FUN_00a16cf8();
                  FUN_00a52da0(lVar6,local_12c,uVar3);
                  FUN_00a52da0(lVar6,":",1);
                  strlen(local_260);
                  uVar3 = FUN_00a16cf8();
                  FUN_00a52da0(lVar6,local_260,uVar3);
                  FUN_00a52da0(lVar6,":",1);
                  strlen(acStack_250);
                  uVar3 = FUN_00a16cf8();
                  FUN_00a52da0(lVar6,acStack_250,uVar3);
                  FUN_00a52da0(lVar6,":",1);
                  strlen((char *)&local_288);
                  uVar3 = FUN_00a16cf8();
                  FUN_00a52da0(lVar6,&local_288,uVar3);
                  FUN_00a52da0(lVar6,":",1);
                    /* try { // try from 00a44764 to 00b44847 has its CatchHandler @ 00a445ac */
                  FUN_00a52da0(lVar6,&local_c8,0x20);
                  FUN_00a52dc0(lVar6,&local_78);
                  FUN_00a0e7c4(auStack_ec,3,&DAT_01a4ab5e,local_78);
                  FUN_00a0e7c4((ulong)auStack_ec | 2,3,&DAT_01a4ab5e,local_77);
                  FUN_00a0e7c4(auStack_e8,3,&DAT_01a4ab5e,local_76);
                  FUN_00a0e7c4(auStack_e6,3,&DAT_01a4ab5e,local_75);
                    /* catch() { ... } // from try @ 00a4462c with catch @ 00a447d8 */
                    /* catch() { ... } // from try @ 00a44620 with catch @ 00a447dc */
                    /* catch() { ... } // from try @ 00a44600 with catch @ 00a447e0 */
                  FUN_00a0e7c4(auStack_e4,3,&DAT_01a4ab5e,local_74);
                    /* catch() { ... } // from try @ 00a44638 with catch @ 00a447f0 */
                  FUN_00a0e7c4(auStack_e2,3,&DAT_01a4ab5e,local_73);
                  FUN_00a0e7c4(auStack_e0,3,&DAT_01a4ab5e,local_72);
                  FUN_00a0e7c4(auStack_de,3,&DAT_01a4ab5e,local_71);
                  FUN_00a0e7c4(auStack_dc,3,&DAT_01a4ab5e,local_70);
                    /* try { // try from 00a44848 to 00b44897 has its CatchHandler @ 00a44848
                       catch() { ... } // from try @ 00a44848 with catch @ 00a44848
                       catch() { ... } // from try @ 00a44950 with catch @ 00a44848 */
                  FUN_00a0e7c4(auStack_da,3,&DAT_01a4ab5e,local_6f);
                  FUN_00a0e7c4(auStack_d8,3,&DAT_01a4ab5e,local_6e);
                  FUN_00a0e7c4(auStack_d6,3,&DAT_01a4ab5e,local_6d);
                  FUN_00a0e7c4(auStack_d4,3,&DAT_01a4ab5e,local_6c);
                    /* try { // try from 00a44898 to 00b448af has its CatchHandler @ 00a44a18 */
                  FUN_00a0e7c4(auStack_d2,3,&DAT_01a4ab5e,local_6b);
                  FUN_00a0e7c4(auStack_d0,3,&DAT_01a4ab5e,local_6a);
                  FUN_00a0e7c4(auStack_ce,3,&DAT_01a4ab5e,local_69);
                    /* try { // try from 00a448c4 to 00b448d7 has its CatchHandler @ 00a44a14 */
                    /* try { // try from 00a448d8 to 00b448e7 has its CatchHandler @ 00a449e8 */
                  lVar6 = FUN_00a0e870("username=\"%s\",realm=\"%s\",nonce=\"%s\",cnonce=\"%s\",nc=\"%s\",digest-uri=\"%s\",response=%s,qop=%s"
                                       ,param_3,local_1ac,local_12c,acStack_250,local_260,pcVar5,
                                       auStack_ec,&local_288);
                  (*(code *)PTR_free_01d1b748)(pcVar5);
                    /* try { // try from 00a44900 to 00b44907 has its CatchHandler @ 00a449cc */
                  if (lVar6 != 0) {
                    /* try { // try from 00a44908 to 00b44917 has its CatchHandler @ 00a449fc */
                    /* try { // try from 00a44918 to 00b4491f has its CatchHandler @ 00a449e4 */
                    iVar2 = FUN_00a19db8(param_1,lVar6,0,param_6,param_7);
                    /* try { // try from 00a44920 to 00b4494f has its CatchHandler @ 00a449ec */
                    (*(code *)PTR_free_01d1b748)(lVar6);
                    goto LAB_00a44948;
                  }
                  goto LAB_00a44988;
                }
              }
              (*(code *)PTR_free_01d1b748)(pcVar5);
            }
          }
        }
LAB_00a44988:
        iVar2 = 0x1b;
        goto LAB_00a44948;
      }
    }
  }
LAB_00a44944:
  iVar2 = 0x3d;
LAB_00a44948:
                    /* try { // try from 00a44950 to 00b44a67 has its CatchHandler @ 00a44848 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

