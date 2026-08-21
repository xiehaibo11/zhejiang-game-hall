
/* WARNING: Type propagation algorithm not settling */
/* spine::Atlas::load(char const*, int, char const*, bool) */

void __thiscall spine::Atlas::load(Atlas *this,char *param_1,int param_2,char *param_3,bool param_4)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 *puVar24;
  size_t sVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong local_128;
  undefined **local_100;
  size_t local_f8;
  char *local_f0;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  char *local_d0;
  int local_c8 [2];
  char *local_c0;
  int local_b8 [2];
  char *local_b0;
  char *pcStack_a8;
  char *local_a0;
  char *pcStack_98;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_d8 = (byte *)param_1;
  sVar8 = strlen(param_3);
  iVar5 = (int)sVar8;
  if (iVar5 < 1) {
    local_128 = 0;
  }
  else {
    local_128 = (ulong)(param_3[(long)((sVar8 << 0x20) + -0x100000000) >> 0x20] != '/' &&
                       param_3[(long)((sVar8 << 0x20) + -0x100000000) >> 0x20] != '\\');
  }
  if (param_2 != 0) {
    sVar8 = (size_t)iVar5;
    puVar24 = (undefined8 *)0x0;
    pbVar1 = (byte *)(param_1 + param_2);
    pbVar22 = (byte *)param_1;
LAB_00ce1a5c:
    do {
      pbVar21 = (byte *)param_1;
      if (*param_1 != 10) {
        param_1 = param_1 + 1;
        pbVar21 = pbVar1;
        local_d8 = (byte *)param_1;
        if (pbVar1 != (byte *)param_1) goto LAB_00ce1a5c;
      }
      local_e8 = pbVar22;
      local_e0 = pbVar21;
      iVar6 = isspace((uint)*pbVar22);
      while ((iVar6 != 0 && (pbVar22 < pbVar21))) {
        pbVar22 = pbVar22 + 1;
        local_e8 = pbVar22;
        iVar6 = isspace((uint)*pbVar22);
      }
      pbVar18 = pbVar21;
      pbVar17 = pbVar21;
      if (pbVar22 != pbVar21) {
        do {
          pbVar18 = pbVar17;
          pbVar17 = pbVar18 + -1;
          local_e0 = pbVar18;
          if (pbVar17 < pbVar22) break;
        } while (*pbVar17 == 0xd);
      }
      if (pbVar21 != pbVar1) {
        local_d8 = pbVar21 + 1;
      }
      lVar23 = (long)pbVar18 - (long)pbVar22;
      if (lVar23 == 0) {
        puVar24 = (undefined8 *)0x0;
      }
      else {
        iVar6 = (int)lVar23;
        if (puVar24 == (undefined8 *)0x0) {
          plVar10 = (long *)SpineExtension::getInstance();
          pcVar12 = (char *)(**(code **)(*plVar10 + 0x18))
                                      (plVar10,(lVar23 << 0x20) + 0x100000000 >> 0x20,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp"
                                       ,0x135);
          memcpy(pcVar12,pbVar22,(long)iVar6);
          pcVar12[iVar6] = '\0';
          sVar25 = strlen(pcVar12);
          plVar10 = (long *)SpineExtension::getInstance();
          pcVar11 = (char *)(**(code **)(*plVar10 + 0x18))
                                      (plVar10,(long)(iVar5 + (int)local_128) + 1 + sVar25,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp"
                                       ,0x78);
          memcpy(pcVar11,param_3,sVar8);
          if (local_128 != 0) {
            pcVar11[sVar8] = '/';
          }
          strcpy(pcVar11 + sVar8 + local_128,pcVar12);
          puVar24 = SpineObject::operator_new
                              (0x70,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp"
                               ,0x7d);
          local_100 = &PTR__String_01c67868;
          if (pcVar12 == (char *)0x0) {
            local_f8 = 0;
            local_f0 = (char *)0x0;
          }
          else {
            local_f8 = strlen(pcVar12);
            local_f0 = pcVar12;
          }
          puVar24[2] = 0;
          puVar24[3] = 0;
          puVar24[4] = &PTR__String_01c67868;
          puVar24[1] = &PTR__AtlasPage_01c8e770;
          *puVar24 = &PTR__AtlasPage_01c8e750;
          if (local_f0 == (char *)0x0) {
            pcVar12 = (char *)0x0;
            puVar24[5] = 0;
            puVar24[6] = 0;
          }
          else {
            puVar24[5] = local_f8;
            lVar23 = local_f8 + 1;
            plVar10 = (long *)SpineExtension::getInstance();
            pvVar13 = (void *)(**(code **)(*plVar10 + 0x18))
                                        (plVar10,lVar23,
                                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                         ,0x47);
            puVar24[6] = pvVar13;
            memcpy(pvVar13,local_f0,local_f8 + 1);
            pcVar12 = local_f0;
          }
          local_100 = &PTR__String_01c67868;
          puVar24[7] = &PTR__String_01c67868;
          puVar24[8] = 0;
          puVar24[9] = 0;
          puVar24[0xb] = 0x100000001;
          puVar24[10] = 0x100000006;
          puVar24[0xc] = 1;
          *(undefined4 *)(puVar24 + 0xd) = 0;
          if (pcVar12 != (char *)0x0) {
            plVar10 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar10 + 0x28))
                      (plVar10,pcVar12,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_100);
          readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
          lVar23 = strtol(local_d0,(char **)local_c8,10);
          *(int *)((long)puVar24 + 100) = (int)lVar23;
          lVar23 = strtol(local_c0,(char **)local_b8,10);
          *(int *)(puVar24 + 0xd) = (int)lVar23;
          readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
          pcVar12 = local_d0;
          lVar23 = 7;
          iVar6 = local_c8[0] - (int)local_d0;
          do {
            if (lVar23 == -1) {
              iVar6 = 0;
              goto LAB_00ce2354;
            }
            iVar7 = strncmp((&PTR_DAT_01c8e6a8)[lVar23],pcVar12,(long)iVar6);
            lVar23 = lVar23 + -1;
          } while (iVar7 != 0);
          iVar6 = (int)lVar23 + 1;
LAB_00ce2354:
          *(int *)(puVar24 + 10) = iVar6;
          readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
          pcVar12 = local_d0;
          lVar23 = 7;
          iVar6 = local_c8[0] - (int)local_d0;
          do {
            if (lVar23 == -1) {
              iVar6 = 0;
              goto LAB_00ce23a8;
            }
            iVar7 = strncmp((&PTR_DAT_01c8e6e8)[lVar23],pcVar12,(long)iVar6);
            lVar23 = lVar23 + -1;
          } while (iVar7 != 0);
          iVar6 = (int)lVar23 + 1;
LAB_00ce23a8:
          pcVar12 = local_c0;
          *(int *)((long)puVar24 + 0x54) = iVar6;
          lVar23 = 7;
          iVar6 = local_b8[0] - (int)local_c0;
          do {
            if (lVar23 == -1) {
              iVar6 = 0;
              goto LAB_00ce23ec;
            }
            iVar7 = strncmp((&PTR_DAT_01c8e6e8)[lVar23],pcVar12,(long)iVar6);
            lVar23 = lVar23 + -1;
          } while (iVar7 != 0);
          iVar6 = (int)lVar23 + 1;
LAB_00ce23ec:
          *(int *)(puVar24 + 0xb) = iVar6;
          readValue((char **)&local_d8,(char *)pbVar1,(Str *)&local_e8);
          pbVar22 = local_e8;
          *(undefined8 *)((long)puVar24 + 0x5c) = 0x100000001;
          sVar25 = (long)local_e0 - (long)local_e8;
          iVar6 = strncmp("none",(char *)local_e8,sVar25);
          if (iVar6 == 0) {
LAB_00ce2478:
            if (param_4) goto LAB_00ce2480;
LAB_00ce24f0:
            local_100 = &PTR__String_01c67868;
            if (pcVar11 == (char *)0x0) {
              local_f8 = 0;
              local_f0 = (char *)0x0;
            }
            else {
              local_f8 = strlen(pcVar11);
              local_f0 = pcVar11;
            }
            if (&local_100 == (undefined ***)(puVar24 + 7)) {
LAB_00ce2594:
              local_100 = &PTR__String_01c67868;
              if (pcVar11 != (char *)0x0) {
                plVar10 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar10 + 0x28))
                          (plVar10,pcVar11,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0xc9);
              }
            }
            else {
              lVar23 = puVar24[9];
              if (lVar23 != 0) {
                plVar10 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar10 + 0x28))
                          (plVar10,lVar23,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0x7a);
                pcVar11 = local_f0;
              }
              if (pcVar11 != (char *)0x0) {
                puVar24[8] = local_f8;
                lVar23 = local_f8 + 1;
                plVar10 = (long *)SpineExtension::getInstance();
                pvVar13 = (void *)(**(code **)(*plVar10 + 0x18))
                                            (plVar10,lVar23,
                                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                             ,0x81);
                puVar24[9] = pvVar13;
                memcpy(pvVar13,local_f0,local_f8 + 1);
                pcVar11 = local_f0;
                goto LAB_00ce2594;
              }
              puVar24[8] = 0;
              puVar24[9] = 0;
              local_100 = &PTR__String_01c67868;
            }
            SpineObject::~SpineObject((SpineObject *)&local_100);
          }
          else {
            if (sVar25 == 1) {
              bVar3 = *pbVar22;
              if (bVar3 == 0x79) {
                *(undefined4 *)(puVar24 + 0xc) = 2;
              }
              else {
                if (bVar3 != 0x78) goto LAB_00ce2478;
                *(undefined4 *)((long)puVar24 + 0x5c) = 2;
              }
            }
            else {
              iVar6 = strncmp("xy",(char *)pbVar22,sVar25);
              if (iVar6 != 0) goto LAB_00ce2478;
              *(undefined8 *)((long)puVar24 + 0x5c) = 0x200000002;
            }
            if (!param_4) goto LAB_00ce24f0;
LAB_00ce2480:
            plVar10 = *(long **)(this + 0x48);
            if (plVar10 != (long *)0x0) {
              local_100 = &PTR__String_01c67868;
              if (pcVar11 == (char *)0x0) {
                local_f8 = 0;
                local_f0 = (char *)0x0;
              }
              else {
                local_f8 = strlen(pcVar11);
                lVar23 = local_f8 + 1;
                plVar14 = (long *)SpineExtension::getInstance();
                local_f0 = (char *)(**(code **)(*plVar14 + 0x18))
                                             (plVar14,lVar23,
                                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                              ,0x39);
                memcpy(local_f0,pcVar11,local_f8 + 1);
              }
              (**(code **)(*plVar10 + 0x10))(plVar10,puVar24,&local_100);
              pcVar12 = local_f0;
              local_100 = &PTR__String_01c67868;
              if (local_f0 != (char *)0x0) {
                plVar10 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar10 + 0x28))
                          (plVar10,pcVar12,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0xc9);
              }
              SpineObject::~SpineObject((SpineObject *)&local_100);
            }
            plVar10 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar10 + 0x28))
                      (plVar10,pcVar11,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp",
                       0xa0);
          }
          uVar2 = *(ulong *)(this + 0x10);
          if (uVar2 == *(ulong *)(this + 0x18)) {
            uVar16 = (uint)((float)uVar2 * 1.75);
            uVar27 = *(undefined8 *)(this + 0x20);
            if (uVar16 < 9) {
              uVar16 = 8;
            }
            *(long *)(this + 0x18) = (long)(int)uVar16;
            plVar10 = (long *)SpineExtension::getInstance();
            lVar23 = (**(code **)(*plVar10 + 0x20))
                               (plVar10,uVar27,
                                -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar20 = *(long *)(this + 0x10);
            *(long *)(this + 0x20) = lVar23;
            *(long *)(this + 0x10) = lVar20 + 1;
            *(undefined8 **)(lVar23 + lVar20 * 8) = puVar24;
          }
          else {
            *(ulong *)(this + 0x10) = uVar2 + 1;
            *(undefined8 **)(*(long *)(this + 0x20) + uVar2 * 8) = puVar24;
          }
        }
        else {
          puVar9 = SpineObject::operator_new
                             (0xa8,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp"
                              ,0xa6);
          puVar9[0xc] = 0;
          puVar9[0xb] = 0;
          puVar9[10] = 0;
          puVar9[9] = 0;
          puVar9[8] = 0;
          puVar9[7] = 0;
          puVar9[6] = 0;
          puVar9[5] = 0;
          *puVar9 = &PTR__AtlasRegion_01c8e7c8;
          puVar9[1] = puVar24;
          puVar9[2] = &PTR__String_01c67868;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[0xf] = 0;
          puVar9[0x10] = 0;
          puVar9[0xd] = &PTR__Vector_01c8e510;
          puVar9[0xe] = 0;
          puVar9[0x13] = 0;
          puVar9[0x14] = 0;
          puVar9[0x11] = &PTR__Vector_01c8e510;
          puVar9[0x12] = 0;
          plVar10 = (long *)SpineExtension::getInstance();
          pcVar11 = (char *)(**(code **)(*plVar10 + 0x18))
                                      (plVar10,(lVar23 << 0x20) + 0x100000000 >> 0x20,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp"
                                       ,0x135);
          memcpy(pcVar11,pbVar22,(long)iVar6);
          pcVar11[iVar6] = '\0';
          local_100 = &PTR__String_01c67868;
          if (pcVar11 == (char *)0x0) {
            local_f8 = 0;
            local_f0 = (char *)0x0;
          }
          else {
            local_f8 = strlen(pcVar11);
            local_f0 = pcVar11;
          }
          if (&local_100 == (undefined ***)(puVar9 + 2)) {
LAB_00ce1d44:
            local_100 = &PTR__String_01c67868;
            if (pcVar11 != (char *)0x0) {
              plVar10 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar10 + 0x28))
                        (plVar10,pcVar11,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
          }
          else {
            lVar23 = puVar9[4];
            if (lVar23 != 0) {
              plVar10 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar10 + 0x28))
                        (plVar10,lVar23,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0x7a);
              pcVar11 = local_f0;
            }
            if (pcVar11 != (char *)0x0) {
              puVar9[3] = local_f8;
              lVar23 = local_f8 + 1;
              plVar10 = (long *)SpineExtension::getInstance();
              pvVar13 = (void *)(**(code **)(*plVar10 + 0x18))
                                          (plVar10,lVar23,
                                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                           ,0x81);
              puVar9[4] = pvVar13;
              memcpy(pvVar13,local_f0,local_f8 + 1);
              pcVar11 = local_f0;
              goto LAB_00ce1d44;
            }
            puVar9[3] = 0;
            puVar9[4] = 0;
            local_100 = &PTR__String_01c67868;
          }
          SpineObject::~SpineObject((SpineObject *)&local_100);
          readValue((char **)&local_d8,(char *)pbVar1,(Str *)&local_e8);
          pbVar22 = local_e8;
          sVar25 = (long)local_e0 - (long)local_e8;
          iVar6 = strncmp("true",(char *)local_e8,sVar25);
          if (iVar6 == 0) {
            iVar6 = 0x5a;
          }
          else {
            iVar7 = strncmp("false",(char *)pbVar22,sVar25);
            iVar6 = 0;
            if (iVar7 != 0) {
              lVar23 = strtol((char *)pbVar22,(char **)&local_e0,10);
              iVar6 = (int)lVar23;
            }
          }
          *(int *)(puVar9 + 0xc) = iVar6;
          *(bool *)((long)puVar9 + 0x5c) = iVar6 == 0x5a;
          readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
          lVar23 = strtol(local_d0,(char **)local_c8,10);
          *(int *)(puVar9 + 5) = (int)lVar23;
          lVar23 = strtol(local_c0,(char **)local_b8,10);
          *(int *)((long)puVar9 + 0x2c) = (int)lVar23;
          readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
          lVar23 = strtol(local_d0,(char **)local_c8,10);
          *(int *)(puVar9 + 6) = (int)lVar23;
          lVar23 = strtol(local_c0,(char **)local_b8,10);
          iVar6 = (int)lVar23;
          *(int *)((long)puVar9 + 0x34) = iVar6;
          uVar29 = puVar9[5];
          uVar30 = NEON_scvtf(uVar29,4);
          uVar27 = NEON_scvtf(*(undefined8 *)((long)puVar24 + 100),4);
          fVar26 = (float)uVar27;
          fVar28 = (float)((ulong)uVar27 >> 0x20);
          puVar9[7] = CONCAT44((float)((ulong)uVar30 >> 0x20) / fVar28,(float)uVar30 / fVar26);
          iVar7 = (int)((ulong)uVar29 >> 0x20);
          if (*(char *)((long)puVar9 + 0x5c) == '\0') {
            *(float *)(puVar9 + 8) = (float)(*(int *)(puVar9 + 6) + (int)uVar29) / fVar26;
            iVar15 = iVar7;
          }
          else {
            *(float *)(puVar9 + 8) = (float)((int)uVar29 + iVar6) / fVar26;
            iVar15 = *(int *)(puVar9 + 6);
            iVar6 = iVar7;
          }
          *(float *)((long)puVar9 + 0x44) = (float)(iVar15 + iVar6) / fVar28;
          iVar6 = readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
          if (iVar6 == 4) {
            uVar2 = puVar9[0xe];
            puVar9[0xe] = 4;
            uVar19 = 4;
            if ((ulong)puVar9[0xf] < 4) {
              uVar27 = puVar9[0x10];
              puVar9[0xf] = 8;
              plVar10 = (long *)SpineExtension::getInstance();
              uVar27 = (**(code **)(*plVar10 + 0x20))
                                 (plVar10,uVar27,0x20,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar19 = puVar9[0xe];
              puVar9[0x10] = uVar27;
            }
            if (uVar2 <= uVar19 && uVar19 - uVar2 != 0) {
              memset((void *)(puVar9[0x10] + uVar2 * 4),0,(uVar19 - uVar2) * 4);
            }
            lVar23 = strtol(local_d0,(char **)local_c8,10);
            *(int *)puVar9[0x10] = (int)lVar23;
            lVar23 = strtol(local_c0,(char **)local_b8,10);
            *(int *)(puVar9[0x10] + 4) = (int)lVar23;
            lVar23 = strtol(local_b0,&pcStack_a8,10);
            *(int *)(puVar9[0x10] + 8) = (int)lVar23;
            lVar23 = strtol(local_a0,&pcStack_98,10);
            *(int *)(puVar9[0x10] + 0xc) = (int)lVar23;
            iVar6 = readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
            if (iVar6 == 4) {
              uVar2 = puVar9[0x12];
              puVar9[0x12] = 4;
              uVar19 = 4;
              if ((ulong)puVar9[0x13] < 4) {
                uVar27 = puVar9[0x14];
                puVar9[0x13] = 8;
                plVar10 = (long *)SpineExtension::getInstance();
                uVar27 = (**(code **)(*plVar10 + 0x20))
                                   (plVar10,uVar27,0x20,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x52);
                uVar19 = puVar9[0x12];
                puVar9[0x14] = uVar27;
              }
              if (uVar2 <= uVar19 && uVar19 - uVar2 != 0) {
                memset((void *)(puVar9[0x14] + uVar2 * 4),0,(uVar19 - uVar2) * 4);
              }
              lVar23 = strtol(local_d0,(char **)local_c8,10);
              *(int *)puVar9[0x14] = (int)lVar23;
              lVar23 = strtol(local_c0,(char **)local_b8,10);
              *(int *)(puVar9[0x14] + 4) = (int)lVar23;
              lVar23 = strtol(local_b0,&pcStack_a8,10);
              *(int *)(puVar9[0x14] + 8) = (int)lVar23;
              lVar23 = strtol(local_a0,&pcStack_98,10);
              *(int *)(puVar9[0x14] + 0xc) = (int)lVar23;
              readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
            }
          }
          lVar23 = strtol(local_d0,(char **)local_c8,10);
          *(int *)(puVar9 + 10) = (int)lVar23;
          lVar23 = strtol(local_c0,(char **)local_b8,10);
          *(int *)((long)puVar9 + 0x54) = (int)lVar23;
          readTuple((char **)&local_d8,(char *)pbVar1,(Str *)&local_d0);
          lVar23 = strtol(local_d0,(char **)local_c8,10);
          *(float *)(puVar9 + 9) = (float)(int)lVar23;
          lVar23 = strtol(local_c0,(char **)local_b8,10);
          *(float *)((long)puVar9 + 0x4c) = (float)(int)lVar23;
          readValue((char **)&local_d8,(char *)pbVar1,(Str *)&local_e8);
          lVar23 = strtol((char *)local_e8,(char **)&local_e0,10);
          *(int *)(puVar9 + 0xb) = (int)lVar23;
          uVar2 = *(ulong *)(this + 0x30);
          if (uVar2 == *(ulong *)(this + 0x38)) {
            uVar16 = (uint)((float)uVar2 * 1.75);
            uVar27 = *(undefined8 *)(this + 0x40);
            if (uVar16 < 9) {
              uVar16 = 8;
            }
            *(long *)(this + 0x38) = (long)(int)uVar16;
            plVar10 = (long *)SpineExtension::getInstance();
            lVar23 = (**(code **)(*plVar10 + 0x20))
                               (plVar10,uVar27,
                                -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar20 = *(long *)(this + 0x30);
            *(long *)(this + 0x40) = lVar23;
            *(long *)(this + 0x30) = lVar20 + 1;
            *(undefined8 **)(lVar23 + lVar20 * 8) = puVar9;
          }
          else {
            *(ulong *)(this + 0x30) = uVar2 + 1;
            *(undefined8 **)(*(long *)(this + 0x40) + uVar2 * 8) = puVar9;
          }
        }
      }
      param_1 = (char *)local_d8;
      pbVar22 = local_d8;
    } while (local_d8 != pbVar1);
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

