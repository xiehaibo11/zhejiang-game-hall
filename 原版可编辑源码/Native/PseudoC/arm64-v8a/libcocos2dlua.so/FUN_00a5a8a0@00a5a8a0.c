
int FUN_00a5a8a0(undefined8 param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5,
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
  
                    /* try { // try from 00a5a8bc to 00b5ab6b has its CatchHandler @ 00a5a8bc
                       catch() { ... } // from try @ 00a5a8bc with catch @ 00a5a8bc
                       catch() { ... } // from try @ 00a5abec with catch @ 00a5a8bc */
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
  if (((*param_2 == '\0') || (*param_2 == '=')) ||
     (iVar2 = FUN_00a2e8fc(param_2,&local_a0,&local_c8), pcVar5 = local_a0, iVar2 != 0))
  goto LAB_00a5b330;
  if (local_a0 == (char *)0x0) goto LAB_00a5b32c;
  pcVar4 = strstr(local_a0,"nonce=\"");
  if (pcVar4 == (char *)0x0) {
LAB_00a5b318:
    (*(code *)PTR_free_01769a00)(pcVar5);
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
      } while (cVar7 != '\"');
    }
    local_12c[uVar9] = '\0';
    pcVar4 = strstr(pcVar5,"realm=\"");
    if (pcVar4 == (char *)0x0) {
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
    if (pcVar4 == (char *)0x0) goto LAB_00a5b318;
    cVar7 = pcVar4[10];
    uVar9 = 0;
    if ((cVar7 != '\0') && (cVar7 != ',')) {
      uVar10 = 0;
      do {
        uVar9 = uVar10 + 1;
        local_1ec[uVar10] = cVar7;
        if ((0x3e < uVar9) || (cVar7 = pcVar4[uVar10 + 0xb], cVar7 == '\0')) break;
        uVar10 = uVar9;
      } while (cVar7 != ',');
    }
    local_1ec[uVar9] = '\0';
    pcVar4 = strstr(pcVar5,"qop=\"");
    if (pcVar4 == (char *)0x0) goto LAB_00a5b318;
    cVar7 = pcVar4[5];
    uVar9 = 0;
    if ((cVar7 != '\0') && (cVar7 != '\"')) {
      uVar10 = 0;
      do {
        uVar9 = uVar10 + 1;
        local_22c[uVar10] = cVar7;
        if ((0x3e < uVar9) || (cVar7 = pcVar4[uVar10 + 6], cVar7 == '\0')) break;
        uVar10 = uVar9;
      } while (cVar7 != '\"');
    }
    local_22c[uVar9] = '\0';
    (*(code *)PTR_free_01769a00)(pcVar5);
    iVar2 = strcmp(local_1ec,"md5-sess");
    if (iVar2 == 0) {
      pcVar5 = (char *)(*(code *)PTR_strdup_01769a10)(local_22c);
      if (pcVar5 == (char *)0x0) goto LAB_00a5b370;
      pcVar4 = strtok_r(pcVar5,",",(char **)&local_a0);
      bVar11 = false;
      while (pcVar4 != (char *)0x0) {
        iVar2 = FUN_00a4a0f8(pcVar4,"auth");
        if (iVar2 == 0) {
          iVar2 = FUN_00a4a0f8(pcVar4,"auth-int");
          if (iVar2 != 0) {
            bVar8 = 0;
            goto LAB_00a5aba4;
          }
          iVar2 = FUN_00a4a0f8(pcVar4,"auth-conf");
          if (iVar2 != 0) {
                    /* try { // try from 00a5aba0 to 00b5abb3 has its CatchHandler @ 00a5ac38 */
            bVar8 = 0;
            goto LAB_00a5aba4;
          }
        }
        else {
          bVar8 = 1;
                    /* try { // try from 00a5ab6c to 00b5ab9f has its CatchHandler @ 00a5ac6c */
LAB_00a5aba4:
          bVar11 = (bool)(bVar8 | bVar11);
        }
        pcVar4 = strtok_r((char *)0x0,",",(char **)&local_a0);
                    /* try { // try from 00a5abb8 to 00b5abeb has its CatchHandler @ 00a5ac3c */
      }
      (*(code *)PTR_free_01769a00)(pcVar5);
      if (bVar11) {
        iVar2 = FUN_00a6a458(param_1,&local_280,4);
                    /* try { // try from 00a5abec to 00b5ac87 has its CatchHandler @ 00a5a8bc */
        if (iVar2 != 0) goto LAB_00a5b330;
        FUN_00a241ac(acStack_250,0x21,"%08x%08x%08x%08x",local_280,uStack_27c,local_278,uStack_274);
        lVar6 = FUN_00a69708(&PTR_MD5_Init_016a4d18);
        if (lVar6 != 0) {
          strlen(param_3);
          uVar3 = FUN_00a2c6e0();
                    /* catch() { ... } // from try @ 00a5aba0 with catch @ 00a5ac38 */
          FUN_00a69788(lVar6,param_3,uVar3);
                    /* catch() { ... } // from try @ 00a5abb8 with catch @ 00a5ac3c */
          FUN_00a69788(lVar6,&DAT_012f06b7,1);
          strlen(local_1ac);
          uVar3 = FUN_00a2c6e0();
                    /* catch() { ... } // from try @ 00a5ab6c with catch @ 00a5ac6c */
          FUN_00a69788(lVar6,local_1ac,uVar3);
          FUN_00a69788(lVar6,&DAT_012f06b7,1);
          strlen(param_4);
          uVar3 = FUN_00a2c6e0();
          FUN_00a69788(lVar6,param_4,uVar3);
          FUN_00a697a8(lVar6,&local_78);
          lVar6 = FUN_00a69708(&PTR_MD5_Init_016a4d18);
          if (lVar6 != 0) {
            FUN_00a69788(lVar6,&local_78,0x10);
            FUN_00a69788(lVar6,&DAT_012f06b7,1);
            strlen(local_12c);
            uVar3 = FUN_00a2c6e0();
            FUN_00a69788(lVar6,local_12c,uVar3);
            FUN_00a69788(lVar6,&DAT_012f06b7,1);
            strlen(acStack_250);
            uVar3 = FUN_00a2c6e0();
            FUN_00a69788(lVar6,acStack_250,uVar3);
            FUN_00a697a8(lVar6,&local_78);
            FUN_00a241ac(&local_a0,3,&DAT_013c6a4f,local_78);
            FUN_00a241ac((ulong)&local_a0 | 2,3,&DAT_013c6a4f,local_77);
            FUN_00a241ac((long)&local_a0 + 4,3,&DAT_013c6a4f,local_76);
            FUN_00a241ac((long)&local_a0 + 6,3,&DAT_013c6a4f,local_75);
            FUN_00a241ac(auStack_98,3,&DAT_013c6a4f,local_74);
            FUN_00a241ac(auStack_96,3,&DAT_013c6a4f,local_73);
            FUN_00a241ac(auStack_94,3,&DAT_013c6a4f,local_72);
            FUN_00a241ac(auStack_92,3,&DAT_013c6a4f,local_71);
            FUN_00a241ac(auStack_90,3,&DAT_013c6a4f,local_70);
            FUN_00a241ac(auStack_8e,3,&DAT_013c6a4f,local_6f);
            FUN_00a241ac(auStack_8c,3,&DAT_013c6a4f,local_6e);
            FUN_00a241ac(auStack_8a,3,&DAT_013c6a4f,local_6d);
            FUN_00a241ac(auStack_88,3,&DAT_013c6a4f,local_6c);
            FUN_00a241ac(auStack_86,3,&DAT_013c6a4f,local_6b);
            FUN_00a241ac(auStack_84,3,&DAT_013c6a4f,local_6a);
            FUN_00a241ac(auStack_82,3,&DAT_013c6a4f,local_69);
            pcVar5 = (char *)FUN_00a6a754(param_5,local_1ac,0);
            if (pcVar5 != (char *)0x0) {
              lVar6 = FUN_00a69708(&PTR_MD5_Init_016a4d18);
              if (lVar6 != 0) {
                strlen((char *)&uStack_270);
                uVar3 = FUN_00a2c6e0();
                FUN_00a69788(lVar6,&uStack_270,uVar3);
                FUN_00a69788(lVar6,&DAT_012f06b7,1);
                strlen(pcVar5);
                uVar3 = FUN_00a2c6e0();
                FUN_00a69788(lVar6,pcVar5,uVar3);
                FUN_00a697a8(lVar6,&local_78);
                FUN_00a241ac(&local_c8,3,&DAT_013c6a4f,local_78);
                FUN_00a241ac((ulong)&local_c8 | 2,3,&DAT_013c6a4f,local_77);
                FUN_00a241ac((long)&local_c8 + 4,3,&DAT_013c6a4f,local_76);
                FUN_00a241ac((long)&local_c8 + 6,3,&DAT_013c6a4f,local_75);
                FUN_00a241ac(auStack_c0,3,&DAT_013c6a4f,local_74);
                FUN_00a241ac(auStack_be,3,&DAT_013c6a4f,local_73);
                FUN_00a241ac(auStack_bc,3,&DAT_013c6a4f,local_72);
                FUN_00a241ac(auStack_ba,3,&DAT_013c6a4f,local_71);
                FUN_00a241ac(auStack_b8,3,&DAT_013c6a4f,local_70);
                FUN_00a241ac(auStack_b6,3,&DAT_013c6a4f,local_6f);
                FUN_00a241ac(auStack_b4,3,&DAT_013c6a4f,local_6e);
                FUN_00a241ac(auStack_b2,3,&DAT_013c6a4f,local_6d);
                FUN_00a241ac(auStack_b0,3,&DAT_013c6a4f,local_6c);
                FUN_00a241ac(auStack_ae,3,&DAT_013c6a4f,local_6b);
                FUN_00a241ac(auStack_ac,3,&DAT_013c6a4f,local_6a);
                FUN_00a241ac(auStack_aa,3,&DAT_013c6a4f,local_69);
                lVar6 = FUN_00a69708(&PTR_MD5_Init_016a4d18);
                if (lVar6 != 0) {
                  FUN_00a69788(lVar6,&local_a0,0x20);
                  FUN_00a69788(lVar6,&DAT_012f06b7,1);
                  strlen(local_12c);
                  uVar3 = FUN_00a2c6e0();
                  FUN_00a69788(lVar6,local_12c,uVar3);
                  FUN_00a69788(lVar6,&DAT_012f06b7,1);
                  strlen(local_260);
                  uVar3 = FUN_00a2c6e0();
                  FUN_00a69788(lVar6,local_260,uVar3);
                  FUN_00a69788(lVar6,&DAT_012f06b7,1);
                  strlen(acStack_250);
                  uVar3 = FUN_00a2c6e0();
                  FUN_00a69788(lVar6,acStack_250,uVar3);
                  FUN_00a69788(lVar6,&DAT_012f06b7,1);
                  strlen((char *)&local_288);
                  uVar3 = FUN_00a2c6e0();
                  FUN_00a69788(lVar6,&local_288,uVar3);
                  FUN_00a69788(lVar6,&DAT_012f06b7,1);
                  FUN_00a69788(lVar6,&local_c8,0x20);
                  FUN_00a697a8(lVar6,&local_78);
                  FUN_00a241ac(auStack_ec,3,&DAT_013c6a4f,local_78);
                  FUN_00a241ac((ulong)auStack_ec | 2,3,&DAT_013c6a4f,local_77);
                  FUN_00a241ac(auStack_e8,3,&DAT_013c6a4f,local_76);
                  FUN_00a241ac(auStack_e6,3,&DAT_013c6a4f,local_75);
                  FUN_00a241ac(auStack_e4,3,&DAT_013c6a4f,local_74);
                  FUN_00a241ac(auStack_e2,3,&DAT_013c6a4f,local_73);
                  FUN_00a241ac(auStack_e0,3,&DAT_013c6a4f,local_72);
                  FUN_00a241ac(auStack_de,3,&DAT_013c6a4f,local_71);
                  FUN_00a241ac(auStack_dc,3,&DAT_013c6a4f,local_70);
                  FUN_00a241ac(auStack_da,3,&DAT_013c6a4f,local_6f);
                  FUN_00a241ac(auStack_d8,3,&DAT_013c6a4f,local_6e);
                  FUN_00a241ac(auStack_d6,3,&DAT_013c6a4f,local_6d);
                  FUN_00a241ac(auStack_d4,3,&DAT_013c6a4f,local_6c);
                  FUN_00a241ac(auStack_d2,3,&DAT_013c6a4f,local_6b);
                  FUN_00a241ac(auStack_d0,3,&DAT_013c6a4f,local_6a);
                    /* try { // try from 00a5b2a4 to 00b5b303 has its CatchHandler @ 00a5b2a4
                       catch() { ... } // from try @ 00a5b2a4 with catch @ 00a5b2a4
                       catch() { ... } // from try @ 00a5b3d0 with catch @ 00a5b2a4
                       catch() { ... } // from try @ 00a5b418 with catch @ 00a5b2a4 */
                  FUN_00a241ac(auStack_ce,3,&DAT_013c6a4f,local_69);
                  lVar6 = FUN_00a24258("username=\"%s\",realm=\"%s\",nonce=\"%s\",cnonce=\"%s\",nc=\"%s\",digest-uri=\"%s\",response=%s,qop=%s"
                                       ,param_3,local_1ac,local_12c,acStack_250,local_260,pcVar5,
                                       auStack_ec,&local_288);
                  (*(code *)PTR_free_01769a00)(pcVar5);
                  if (lVar6 != 0) {
                    iVar2 = FUN_00a2f7a0(param_1,lVar6,0,param_6,param_7);
                    /* try { // try from 00a5b304 to 00b5b397 has its CatchHandler @ 00a5b48c */
                    (*(code *)PTR_free_01769a00)(lVar6);
                    goto LAB_00a5b330;
                  }
                  goto LAB_00a5b370;
                }
              }
              (*(code *)PTR_free_01769a00)(pcVar5);
            }
          }
        }
LAB_00a5b370:
        iVar2 = 0x1b;
        goto LAB_00a5b330;
      }
    }
  }
LAB_00a5b32c:
  iVar2 = 0x3d;
LAB_00a5b330:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

