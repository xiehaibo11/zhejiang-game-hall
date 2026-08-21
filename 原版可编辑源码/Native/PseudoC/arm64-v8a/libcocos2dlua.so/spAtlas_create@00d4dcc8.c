
long * spAtlas_create(byte *param_1,int param_2,char *param_3,long param_4)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  char *__s;
  size_t sVar11;
  long lVar12;
  int iVar13;
  byte *pbVar14;
  byte *__s2;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 *local_f0;
  ulong local_e0;
  byte *local_d0;
  byte *local_c8;
  char *local_c0;
  char *pcStack_b8;
  char *local_b0;
  char *pcStack_a8;
  char *local_a0;
  char *pcStack_98;
  char *local_90;
  char *pcStack_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  local_c8 = param_1;
  sVar7 = strlen(param_3);
  iVar15 = (int)sVar7;
  if (iVar15 < 1) {
    local_e0 = 0;
  }
  else {
    local_e0 = (ulong)(param_3[(long)((sVar7 << 0x20) + -0x100000000) >> 0x20] != '/' &&
                      param_3[(long)((sVar7 << 0x20) + -0x100000000) >> 0x20] != '\\');
  }
  plVar8 = (long *)_spCalloc(1,0x18,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                             ,0xb5);
  plVar8[2] = param_4;
  if (param_2 == 0) {
LAB_00d4e7c8:
    if (*(long *)(lVar4 + 0x28) == local_80) {
      return plVar8;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00d4ddac to 00e4ddc7 has its CatchHandler @ 00d4e028 */
  local_f0 = (undefined8 *)0x0;
  lVar19 = 0;
  lVar18 = 0;
  pbVar1 = param_1 + param_2;
                    /* try { // try from 00d4ddc8 to 00e4de47 has its CatchHandler @ 00d4dc0c */
  sVar7 = (size_t)iVar15;
  pbVar14 = param_1;
LAB_00d4dde8:
  do {
    pbVar21 = param_1;
    if (*param_1 != 10) {
      local_c8 = param_1 + 1;
      pbVar21 = pbVar1;
      param_1 = local_c8;
      if (pbVar1 != local_c8) goto LAB_00d4dde8;
    }
    local_d0 = pbVar21;
    iVar5 = isspace((uint)*pbVar14);
    while ((iVar5 != 0 && (pbVar14 < pbVar21))) {
      pbVar14 = pbVar14 + 1;
      iVar5 = isspace((uint)*pbVar14);
    }
                    /* try { // try from 00d4de48 to 00e4de53 has its CatchHandler @ 00d4e034 */
    pbVar20 = pbVar21;
    pbVar17 = pbVar21;
    if (pbVar14 != pbVar21) {
      do {
        pbVar20 = pbVar17;
                    /* try { // try from 00d4de54 to 00e4de8f has its CatchHandler @ 00d4dc0c */
        pbVar17 = pbVar20 + -1;
        local_d0 = pbVar17;
        iVar5 = isspace((uint)*pbVar17);
        local_d0 = pbVar20;
        if (pbVar17 < pbVar14) break;
      } while (iVar5 != 0);
    }
    if (pbVar21 != pbVar1) {
      pbVar21 = pbVar21 + 1;
      local_c8 = pbVar21;
    }
                    /* try { // try from 00d4de90 to 00e4de9b has its CatchHandler @ 00d4e030 */
    lVar12 = (long)pbVar20 - (long)pbVar14;
    if (lVar12 != 0) {
      iVar5 = (int)lVar12;
      if (lVar19 == 0) {
        __s = (char *)_spMalloc((lVar12 << 0x20) + 0x100000000 >> 0x20,
                                "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                                ,0x88);
                    /* try { // try from 00d4dffc to 00e4e003 has its CatchHandler @ 00d4e008 */
        memcpy(__s,pbVar14,(long)iVar5);
                    /* try { // try from 00d4e004 to 00e4e05f has its CatchHandler @ 00d4dc0c */
        __s[iVar5] = '\0';
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4dffc with catch @ 00d4e008
                        */
        sVar11 = strlen(__s);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4dc5c with catch @ 00d4e00c
                        */
        pvVar10 = (void *)_spMalloc((long)(iVar15 + (int)local_e0) + 1 + sVar11,
                                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                                    ,0xbe);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4ddac with catch @ 00d4e028
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4ded4 with catch @ 00d4e02c
                        */
        memcpy(pvVar10,param_3,sVar7);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4de90 with catch @ 00d4e030
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4de48 with catch @ 00d4e034
                        */
        if (local_e0 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4deec with catch @ 00d4e038
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4df64 with catch @ 00d4e03c
                        */
          *(undefined1 *)((long)pvVar10 + sVar7) = 0x2f;
        }
        strcpy((char *)((long)pvVar10 + sVar7 + local_e0),__s);
        lVar19 = spAtlasPage_create(plVar8,__s);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e0b8 with catch @ 00d4e060
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4e478 with catch @ 00d4e060
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4e558 with catch @ 00d4e060
                        */
        _spFree(__s);
        plVar2 = plVar8;
        if (lVar18 != 0) {
          plVar2 = (long *)(lVar18 + 0x38);
        }
        *plVar2 = lVar19;
        iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
        if (iVar5 == 2) {
          lVar18 = strtol(local_c0,&pcStack_b8,10);
          *(int *)(lVar19 + 0x30) = (int)lVar18;
          lVar18 = strtol(local_b0,&pcStack_a8,10);
          *(int *)(lVar19 + 0x34) = (int)lVar18;
          iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
        }
        if (iVar5 != 0) {
          uVar6 = FUN_00d4ebac(&PTR_DAT_01776fd0,&local_c0);
          *(undefined4 *)(lVar19 + 0x10) = uVar6;
          iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
          if (iVar5 != 0) {
            uVar6 = FUN_00d4ebac(&PTR_DAT_01777010,&local_c0);
            *(undefined4 *)(lVar19 + 0x14) = uVar6;
                    /* try { // try from 00d4e28c to 00e4e29f has its CatchHandler @ 00d4e5f0 */
            uVar6 = FUN_00d4ebac(&PTR_DAT_01777010,&local_b0);
            pbVar17 = local_c8;
            *(undefined4 *)(lVar19 + 0x18) = uVar6;
            pbVar20 = local_d0;
            pbVar21 = pbVar1;
            if (local_c8 != pbVar1) {
              do {
                    /* try { // try from 00d4e2ac to 00e4e2f3 has its CatchHandler @ 00d4e5c4 */
                pbVar16 = local_c8;
                if (*local_c8 == 10) break;
                local_c8 = local_c8 + 1;
                pbVar16 = pbVar1;
              } while (pbVar1 != local_c8);
              local_d0 = pbVar16;
              iVar5 = isspace((uint)*pbVar17);
              pbVar14 = pbVar17;
              while ((iVar5 != 0 && (pbVar14 < pbVar16))) {
                iVar5 = isspace((uint)pbVar14[1]);
                pbVar14 = pbVar14 + 1;
              }
              pbVar20 = pbVar16;
              pbVar21 = pbVar16;
              if (pbVar14 != pbVar16) {
                do {
                    /* try { // try from 00d4e314 to 00e4e31b has its CatchHandler @ 00d4e510 */
                  pbVar20 = pbVar21;
                  pbVar21 = pbVar20 + -1;
                  local_d0 = pbVar21;
                  iVar5 = isspace((uint)*pbVar21);
                  local_d0 = pbVar20;
                  if (pbVar21 < pbVar14) break;
                    /* try { // try from 00d4e32c to 00e4e32f has its CatchHandler @ 00d4e580 */
                } while (iVar5 != 0);
              }
              pbVar21 = pbVar1;
              if (pbVar16 != pbVar1) {
                local_c8 = pbVar16 + 1;
                pbVar21 = local_c8;
              }
            }
            pbVar17 = pbVar14 + 2;
            do {
              pbVar16 = pbVar17;
              if (pbVar20 == pbVar14) goto LAB_00d4e7bc;
              __s2 = pbVar14 + 1;
              bVar3 = *pbVar14;
              pbVar17 = pbVar16 + 1;
              pbVar14 = __s2;
            } while (bVar3 != 0x3a);
            iVar5 = isspace((uint)*__s2);
            for (; (iVar5 != 0 && (__s2 = pbVar16 + -1, __s2 < pbVar20)); pbVar16 = pbVar16 + 1) {
              iVar5 = isspace((uint)*pbVar16);
              __s2 = pbVar16;
            }
            pbVar14 = pbVar20;
            if (__s2 != pbVar20) {
              do {
                pbVar20 = pbVar14;
                pbVar14 = pbVar20 + -1;
                local_d0 = pbVar14;
                iVar5 = isspace((uint)*pbVar14);
                local_d0 = pbVar20;
                if (pbVar14 < __s2) break;
              } while (iVar5 != 0);
            }
            sVar11 = (long)pbVar20 - (long)__s2;
            *(undefined8 *)(lVar19 + 0x1c) = 0x100000001;
            iVar5 = strncmp("none",(char *)__s2,sVar11);
            if (iVar5 != 0) {
              if (sVar11 == 1) {
                if (*__s2 == 0x79) {
                  *(undefined4 *)(lVar19 + 0x20) = 2;
                }
                else if (*__s2 == 0x78) {
                  *(undefined4 *)(lVar19 + 0x1c) = 2;
                }
              }
              else {
                iVar5 = strncmp("xy",(char *)__s2,sVar11);
                if (iVar5 == 0) {
                  *(undefined8 *)(lVar19 + 0x1c) = 0x200000002;
                }
              }
            }
            _spAtlasPage_createTexture(lVar19,pvVar10);
            _spFree(pvVar10);
            lVar18 = lVar19;
            goto LAB_00d4e794;
          }
        }
LAB_00d4e7bc:
        spAtlas_dispose(plVar8);
        plVar8 = (long *)0x0;
      }
      else {
                    /* try { // try from 00d4de9c to 00e4ded3 has its CatchHandler @ 00d4dc0c */
        puVar9 = (undefined8 *)
                 _spCalloc(1,0x68,
                           "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                           ,0x33);
                    /* try { // try from 00d4ded4 to 00e4dedf has its CatchHandler @ 00d4e02c */
        plVar2 = plVar8 + 1;
        if (local_f0 != (undefined8 *)0x0) {
          plVar2 = local_f0 + 0xc;
        }
        *plVar2 = (long)puVar9;
        puVar9[0xb] = lVar19;
                    /* try { // try from 00d4deec to 00e4df0f has its CatchHandler @ 00d4e038 */
        pvVar10 = (void *)_spMalloc((lVar12 << 0x20) + 0x100000000 >> 0x20,
                                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                                    ,0x88);
        memcpy(pvVar10,pbVar14,(long)iVar5);
        pbVar20 = local_c8;
        *(undefined1 *)((long)pvVar10 + (long)iVar5) = 0;
        *puVar9 = pvVar10;
        pbVar21 = local_d0;
        if (local_c8 != pbVar1) {
          do {
            pbVar17 = local_c8;
            if (*local_c8 == 10) break;
            local_c8 = local_c8 + 1;
            pbVar17 = pbVar1;
          } while (pbVar1 != local_c8);
          local_d0 = pbVar17;
          iVar5 = isspace((uint)*pbVar20);
          pbVar14 = pbVar20;
          while ((iVar5 != 0 && (pbVar14 < pbVar17))) {
                    /* try { // try from 00d4df64 to 00e4df9b has its CatchHandler @ 00d4e03c */
            iVar5 = isspace((uint)pbVar14[1]);
            pbVar14 = pbVar14 + 1;
          }
          pbVar21 = pbVar17;
          pbVar20 = pbVar17;
          if (pbVar14 != pbVar17) {
            do {
              pbVar21 = pbVar20;
              pbVar20 = pbVar21 + -1;
              local_d0 = pbVar20;
              iVar5 = isspace((uint)*pbVar20);
              local_d0 = pbVar21;
              if (pbVar20 < pbVar14) break;
            } while (iVar5 != 0);
          }
          if (pbVar17 != pbVar1) {
            local_c8 = pbVar17 + 1;
          }
        }
        pbVar20 = pbVar14 + 2;
        do {
          pbVar17 = pbVar20;
                    /* try { // try from 00d4e0b0 to 00e4e0b7 has its CatchHandler @ 00d4e51c */
          if (pbVar21 == pbVar14) goto LAB_00d4e7a8;
                    /* try { // try from 00d4e0b8 to 00e4e143 has its CatchHandler @ 00d4e060 */
          pbVar16 = pbVar14 + 1;
          bVar3 = *pbVar14;
          pbVar20 = pbVar17 + 1;
          pbVar14 = pbVar16;
        } while (bVar3 != 0x3a);
        iVar5 = isspace((uint)*pbVar16);
        for (; (pbVar14 = pbVar16, iVar5 != 0 && (pbVar14 = pbVar17 + -1, pbVar14 < pbVar21));
            pbVar17 = pbVar17 + 1) {
          iVar5 = isspace((uint)*pbVar17);
          pbVar16 = pbVar17;
        }
        pbVar20 = pbVar21;
        if (pbVar14 != pbVar21) {
          do {
            pbVar21 = pbVar20;
            pbVar20 = pbVar21 + -1;
            local_d0 = pbVar20;
            iVar5 = isspace((uint)*pbVar20);
            local_d0 = pbVar21;
            if (pbVar20 < pbVar14) break;
          } while (iVar5 != 0);
        }
        iVar5 = strncmp("true",(char *)pbVar14,(long)pbVar21 - (long)pbVar14);
                    /* try { // try from 00d4e144 to 00e4e153 has its CatchHandler @ 00d4e518 */
        *(uint *)((long)puVar9 + 0x3c) = (uint)(iVar5 == 0);
        iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
        if (iVar5 == 2) {
                    /* try { // try from 00d4e174 to 00e4e19b has its CatchHandler @ 00d4e5b4 */
          lVar12 = strtol(local_c0,&pcStack_b8,10);
          *(int *)(puVar9 + 1) = (int)lVar12;
          lVar12 = strtol(local_b0,&pcStack_a8,10);
          *(int *)((long)puVar9 + 0xc) = (int)lVar12;
          iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
          if (iVar5 == 2) {
            lVar12 = strtol(local_c0,&pcStack_b8,10);
                    /* try { // try from 00d4e1b8 to 00e4e1db has its CatchHandler @ 00d4e53c */
            *(int *)(puVar9 + 2) = (int)lVar12;
            lVar12 = strtol(local_b0,&pcStack_a8,10);
            iVar5 = (int)lVar12;
            *(int *)((long)puVar9 + 0x14) = iVar5;
            uVar25 = puVar9[1];
            uVar27 = NEON_scvtf(uVar25,4);
            uVar23 = NEON_scvtf(*(undefined8 *)(lVar19 + 0x30),4);
            fVar22 = (float)uVar23;
            fVar24 = (float)((ulong)uVar23 >> 0x20);
            puVar9[3] = CONCAT44((float)((ulong)uVar27 >> 0x20) / fVar24,(float)uVar27 / fVar22);
            iVar26 = (int)((ulong)uVar25 >> 0x20);
            if (*(int *)((long)puVar9 + 0x3c) == 0) {
                    /* try { // try from 00d4e424 to 00e4e42b has its CatchHandler @ 00d4e4f8 */
              *(float *)(puVar9 + 4) = (float)(*(int *)(puVar9 + 2) + (int)uVar25) / fVar22;
              iVar13 = iVar26;
            }
            else {
              *(float *)(puVar9 + 4) = (float)((int)uVar25 + iVar5) / fVar22;
              iVar13 = *(int *)(puVar9 + 2);
              iVar5 = iVar26;
                    /* try { // try from 00d4e208 to 00e4e20b has its CatchHandler @ 00d4e514 */
                    /* try { // try from 00d4e20c to 00e4e21b has its CatchHandler @ 00d4e538 */
            }
                    /* try { // try from 00d4e43c to 00e4e463 has its CatchHandler @ 00d4e540 */
            *(float *)((long)puVar9 + 0x24) = (float)(iVar13 + iVar5) / fVar24;
            iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
            if (iVar5 == 4) {
                    /* try { // try from 00d4e474 to 00e4e477 has its CatchHandler @ 00d4e5a0 */
                    /* try { // try from 00d4e478 to 00e4e553 has its CatchHandler @ 00d4e060 */
              uVar23 = _spMalloc(0x10,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                                 ,0x111);
              puVar9[9] = uVar23;
              lVar12 = strtol(local_c0,&pcStack_b8,10);
              *(int *)puVar9[9] = (int)lVar12;
              lVar12 = strtol(local_b0,&pcStack_a8,10);
              *(int *)(puVar9[9] + 4) = (int)lVar12;
              lVar12 = strtol(local_a0,&pcStack_98,10);
              *(int *)(puVar9[9] + 8) = (int)lVar12;
              lVar12 = strtol(local_90,&pcStack_88,10);
              *(int *)(puVar9[9] + 0xc) = (int)lVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e424 with catch @ 00d4e4f8
                        */
              iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
              if (iVar5 == 4) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e314 with catch @ 00d4e510
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e208 with catch @ 00d4e514
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e144 with catch @ 00d4e518
                        */
                uVar23 = _spMalloc(0x10,
                                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                                   ,0x11a);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e0b0 with catch @ 00d4e51c
                        */
                puVar9[10] = uVar23;
                lVar12 = strtol(local_c0,&pcStack_b8,10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e20c with catch @ 00d4e538
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e1b8 with catch @ 00d4e53c
                        */
                *(int *)puVar9[10] = (int)lVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e43c with catch @ 00d4e540
                        */
                lVar12 = strtol(local_b0,&pcStack_a8,10);
                    /* try { // try from 00d4e554 to 00e4e557 has its CatchHandler @ 00d4e57c */
                *(int *)(puVar9[10] + 4) = (int)lVar12;
                    /* try { // try from 00d4e558 to 00e4e60b has its CatchHandler @ 00d4e060 */
                lVar12 = strtol(local_a0,&pcStack_98,10);
                *(int *)(puVar9[10] + 8) = (int)lVar12;
                lVar12 = strtol(local_90,&pcStack_88,10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e554 with catch @ 00d4e57c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e32c with catch @ 00d4e580
                        */
                *(int *)(puVar9[10] + 0xc) = (int)lVar12;
                iVar5 = FUN_00d4e804(&local_c8,pbVar1,&local_c0);
              }
            }
            if (iVar5 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e474 with catch @ 00d4e5a0
                        */
              lVar12 = strtol(local_c0,&pcStack_b8,10);
              *(int *)(puVar9 + 6) = (int)lVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e174 with catch @ 00d4e5b4
                        */
              lVar12 = strtol(local_b0,&pcStack_a8,10);
              *(int *)((long)puVar9 + 0x34) = (int)lVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e2ac with catch @ 00d4e5c4
                        */
              FUN_00d4e804(&local_c8,pbVar1,&local_c0);
              lVar12 = strtol(local_c0,&pcStack_b8,10);
              *(int *)(puVar9 + 5) = (int)lVar12;
              lVar12 = strtol(local_b0,&pcStack_a8,10);
              pbVar21 = local_c8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4e28c with catch @ 00d4e5f0
                        */
              *(int *)((long)puVar9 + 0x2c) = (int)lVar12;
              pbVar14 = local_d0;
              if (local_c8 != pbVar1) {
                do {
                    /* catch() { ... } // from try @ 00d4e670 with catch @ 00d4e60c
                       catch() { ... } // from try @ 00d4ec90 with catch @ 00d4e60c
                       catch() { ... } // from try @ 00d4edc0 with catch @ 00d4e60c */
                  pbVar20 = local_c8;
                  if (*local_c8 == 10) break;
                  local_c8 = local_c8 + 1;
                  pbVar20 = pbVar1;
                } while (pbVar1 != local_c8);
                local_d0 = pbVar20;
                iVar5 = isspace((uint)*pbVar21);
                pbVar16 = pbVar21;
                while ((iVar5 != 0 && (pbVar16 < pbVar20))) {
                  iVar5 = isspace((uint)pbVar16[1]);
                  pbVar16 = pbVar16 + 1;
                }
                pbVar14 = pbVar20;
                pbVar21 = pbVar20;
                if (pbVar16 != pbVar20) {
                  do {
                    /* try { // try from 00d4e670 to 00e4ec73 has its CatchHandler @ 00d4e60c */
                    pbVar14 = pbVar21;
                    /* try { // try from 00d4e668 to 00e4e66f has its CatchHandler @ 00d4ee10 */
                    pbVar21 = pbVar14 + -1;
                    local_d0 = pbVar21;
                    iVar5 = isspace((uint)*pbVar21);
                    local_d0 = pbVar14;
                    if (pbVar21 < pbVar16) break;
                  } while (iVar5 != 0);
                }
                if (pbVar20 != pbVar1) {
                  local_c8 = pbVar20 + 1;
                }
              }
              pbVar21 = pbVar16 + 2;
              do {
                pbVar20 = pbVar21;
                if (pbVar14 == pbVar16) goto LAB_00d4e7a8;
                pbVar17 = pbVar16 + 1;
                bVar3 = *pbVar16;
                pbVar21 = pbVar20 + 1;
                pbVar16 = pbVar17;
              } while (bVar3 != 0x3a);
              iVar5 = isspace((uint)*pbVar17);
              for (; (iVar5 != 0 && (pbVar17 = pbVar20 + -1, pbVar17 < pbVar14));
                  pbVar20 = pbVar20 + 1) {
                iVar5 = isspace((uint)*pbVar20);
                pbVar17 = pbVar20;
              }
              if (pbVar17 != pbVar14) {
                do {
                  pbVar21 = pbVar14;
                  pbVar14 = pbVar21 + -1;
                  local_d0 = pbVar14;
                  iVar5 = isspace((uint)*pbVar14);
                  local_d0 = pbVar21;
                  if (pbVar14 < pbVar17) break;
                } while (iVar5 != 0);
              }
              lVar12 = strtol((char *)pbVar17,(char **)&local_d0,10);
              *(int *)(puVar9 + 7) = (int)lVar12;
              pbVar21 = local_c8;
              local_f0 = puVar9;
              goto LAB_00d4e794;
            }
          }
        }
LAB_00d4e7a8:
        spAtlas_dispose(plVar8);
        plVar8 = (long *)0x0;
      }
      goto LAB_00d4e7c8;
    }
    lVar19 = 0;
LAB_00d4e794:
    param_1 = pbVar21;
    pbVar14 = pbVar21;
    if (pbVar21 == pbVar1) goto LAB_00d4e7c8;
  } while( true );
}

