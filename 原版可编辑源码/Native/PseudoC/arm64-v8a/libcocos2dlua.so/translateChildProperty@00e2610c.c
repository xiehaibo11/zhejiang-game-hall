
/* cocos2d::PUForceFieldAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

undefined4 __thiscall
cocos2d::PUForceFieldAffectorTranslator::translateChildProperty
          (PUForceFieldAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  size_t sVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  PUAbstractNode *pPVar9;
  char *pcVar10;
  PUAbstractNode *pPVar11;
  ulong uVar12;
  PUForceFieldAffector *this_00;
  undefined4 uVar13;
  size_t sVar14;
  ulong uVar15;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
                    /* try { // try from 00e26154 to 00f2615f has its CatchHandler @ 00e26a3c */
  uVar15 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUForceFieldAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar15;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar14 = (ulong)(token[0x1860] >> 1);
  if ((token[0x1860] & 1) != 0) {
    sVar14 = token._6248_8_;
  }
  if (sVar2 == sVar14) {
    pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar11 = param_2 + 0x39;
    }
    pPVar9 = (PUAbstractNode *)(token + 0x1861);
    if ((token[0x1860] & 1) != 0) {
      pPVar9 = (PUAbstractNode *)token._6256_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar11 = param_2 + 0x39;
        uVar12 = uVar15;
        do {
          if (*pPVar11 != *pPVar9) goto LAB_00e261f4;
          uVar12 = uVar12 - 1;
          pPVar11 = pPVar11 + 1;
          pPVar9 = pPVar9 + 1;
        } while (uVar12 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0)) goto LAB_00e261f4;
    uVar15 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178a8f0,4);
    if ((uVar15 & 1) != 0) {
      local_78 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      uVar15 = PUScriptTranslator::getString
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                          (basic_string *)&local_80);
      if ((uVar15 & 1) != 0) {
        PUForceFieldAffector::suppressGeneration(this_00,true);
        uVar15 = local_80;
        sVar14 = local_80 >> 1 & 0x7f;
        sVar2 = sVar14;
        if ((local_80 & 1) != 0) {
          sVar2 = local_78;
        }
        sVar5 = (ulong)(token[0x1878] >> 1);
        if ((token[0x1878] & 1) != 0) {
          sVar5 = token._6272_8_;
        }
        if (sVar2 == sVar5) {
          pcVar10 = (char *)((ulong)&local_80 | 1);
          pcVar3 = pcVar10;
          if ((local_80 & 1) != 0) {
            pcVar3 = local_70;
          }
          pcVar1 = token + 0x1879;
          if ((token[0x1878] & 1) != 0) {
            pcVar1 = (char *)token._6280_8_;
          }
          sVar5 = sVar14;
          sVar7 = sVar2;
          if ((local_80 & 1) == 0) {
            while (sVar7 != 0) {
              if (*pcVar10 != *pcVar1) goto LAB_00e268b4;
              pcVar10 = pcVar10 + 1;
              pcVar1 = pcVar1 + 1;
              sVar5 = sVar5 - 1;
              sVar7 = sVar5;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e268b4;
          PUForceFieldAffector::setForceFieldType(this_00,0);
        }
        else {
LAB_00e268b4:
          sVar5 = (ulong)(token[0x1890] >> 1);
          if ((token[0x1890] & 1) != 0) {
            sVar5 = token._6296_8_;
          }
                    /* try { // try from 00e268d4 to 00f268e3 has its CatchHandler @ 00e269fc */
          if (sVar2 != sVar5) {
LAB_00e26a2c:
            PUForceFieldAffector::suppressGeneration(this_00,false);
            goto LAB_00e26a38;
          }
          pcVar10 = (char *)((ulong)&local_80 | 1);
          pcVar3 = pcVar10;
          if ((uVar15 & 1) != 0) {
            pcVar3 = local_70;
          }
          pcVar1 = token + 0x1891;
                    /* try { // try from 00e268fc to 00f26907 has its CatchHandler @ 00e26a3c */
          if ((token[0x1890] & 1) != 0) {
            pcVar1 = (char *)token._6304_8_;
          }
          if ((uVar15 & 1) == 0) {
            while (sVar2 != 0) {
              if (*pcVar10 != *pcVar1) goto LAB_00e26a2c;
              pcVar10 = pcVar10 + 1;
              pcVar1 = pcVar1 + 1;
              sVar14 = sVar14 - 1;
              sVar2 = sVar14;
            }
          }
          else {
                    /* catch() { ... } // from try @ 00e26734 with catch @ 00e26a28 */
            if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e26a2c;
          }
                    /* catch() { ... } // from try @ 00e26380 with catch @ 00e26a50
                       catch() { ... } // from try @ 00e2687c with catch @ 00e26a50 */
                    /* catch() { ... } // from try @ 00e26674 with catch @ 00e26a54 */
                    /* catch() { ... } // from try @ 00e26588 with catch @ 00e26a58 */
          PUForceFieldAffector::setForceFieldType(this_00,1);
        }
                    /* catch() { ... } // from try @ 00e264ac with catch @ 00e26a5c */
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        uVar13 = 1;
        goto LAB_00e26f50;
      }
LAB_00e26a38:
                    /* catch() { ... } // from try @ 00e26154 with catch @ 00e26a3c
                       catch() { ... } // from try @ 00e268fc with catch @ 00e26a3c */
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    goto LAB_00e26a48;
  }
LAB_00e261f4:
  sVar14 = (ulong)(token[0x18a8] >> 1);
  if ((token[0x18a8] & 1) != 0) {
    sVar14 = token._6320_8_;
  }
  if (sVar2 == sVar14) {
    pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar11 = param_2 + 0x39;
    }
    pPVar9 = (PUAbstractNode *)(token + 0x18a9);
    if ((token[0x18a8] & 1) != 0) {
      pPVar9 = (PUAbstractNode *)token._6328_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar11 = param_2 + 0x39;
        uVar12 = uVar15;
        do {
          if (*pPVar11 != *pPVar9) goto LAB_00e26354;
          uVar12 = uVar12 - 1;
          pPVar11 = pPVar11 + 1;
          pPVar9 = pPVar9 + 1;
        } while (uVar12 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0)) goto LAB_00e26354;
    uVar15 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178a938,0);
    uVar13 = 0;
    if ((uVar15 & 1) == 0) goto LAB_00e26f50;
    local_80 = local_80 & 0xffffffff00000000;
    uVar15 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(float *)&local_80);
    if ((uVar15 & 1) == 0) goto LAB_00e26a48;
    PUForceFieldAffector::suppressGeneration(this_00,true);
    PUForceFieldAffector::setDelta(this_00,(float)local_80);
  }
  else {
LAB_00e26354:
                    /* try { // try from 00e26360 to 00f26367 has its CatchHandler @ 00e26aac */
    sVar14 = (ulong)(token[0x18c0] >> 1);
    if ((token[0x18c0] & 1) != 0) {
      sVar14 = token._6344_8_;
    }
    if (sVar2 != sVar14) {
LAB_00e26438:
      sVar14 = (ulong)(token[0x18d8] >> 1);
      if ((token[0x18d8] & 1) != 0) {
        sVar14 = token._6368_8_;
      }
      if (sVar2 == sVar14) {
        pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar11 = param_2 + 0x39;
        }
        pPVar9 = (PUAbstractNode *)(token + 0x18d9);
        if ((token[0x18d8] & 1) != 0) {
          pPVar9 = (PUAbstractNode *)token._6376_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar11 = param_2 + 0x39;
            uVar12 = uVar15;
            do {
              if (*pPVar11 != *pPVar9) goto LAB_00e2651c;
              uVar12 = uVar12 - 1;
              pPVar11 = pPVar11 + 1;
              pPVar9 = pPVar9 + 1;
            } while (uVar12 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
        goto LAB_00e2651c;
        uVar15 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,0x178a968,2);
        if ((uVar15 & 1) != 0) {
          local_80 = local_80 & 0xffffffff00000000;
          uVar15 = PUScriptTranslator::getUInt
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                              (uint *)&local_80);
          if ((uVar15 & 1) != 0) {
            PUForceFieldAffector::suppressGeneration(this_00,true);
            PUForceFieldAffector::setOctaves(this_00,(ushort)local_80);
            goto LAB_00e26f44;
          }
        }
      }
      else {
LAB_00e2651c:
        sVar14 = (ulong)(token[0x18f0] >> 1);
        if ((token[0x18f0] & 1) != 0) {
          sVar14 = token._6392_8_;
        }
        if (sVar2 == sVar14) {
          pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar4 & 1) == 0) {
            pPVar11 = param_2 + 0x39;
          }
          pPVar9 = (PUAbstractNode *)(token + 0x18f1);
          if ((token[0x18f0] & 1) != 0) {
            pPVar9 = (PUAbstractNode *)token._6400_8_;
          }
          if (((byte)PVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pPVar11 = param_2 + 0x39;
              uVar12 = uVar15;
              do {
                if (*pPVar11 != *pPVar9) goto LAB_00e265fc;
                uVar12 = uVar12 - 1;
                pPVar11 = pPVar11 + 1;
                    /* try { // try from 00e26588 to 00f2658f has its CatchHandler @ 00e26a58 */
                pPVar9 = pPVar9 + 1;
              } while (uVar12 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
          goto LAB_00e265fc;
                    /* try { // try from 00e26674 to 00f2667b has its CatchHandler @ 00e26a54 */
          uVar15 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,0x178a980,0);
          uVar13 = 0;
          if ((uVar15 & 1) == 0) goto LAB_00e26f50;
          local_80 = local_80 & 0xffffffff00000000;
          uVar15 = PUScriptTranslator::getFloat
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                              (float *)&local_80);
          if ((uVar15 & 1) != 0) {
            PUForceFieldAffector::suppressGeneration(this_00,true);
                    /* try { // try from 00e266c8 to 00f266d3 has its CatchHandler @ 00e26a4c */
            PUForceFieldAffector::setFrequency(this_00,(double)(float)local_80);
            goto LAB_00e26f44;
          }
        }
        else {
LAB_00e265fc:
          sVar14 = (ulong)(token[0x1908] >> 1);
          if ((token[0x1908] & 1) != 0) {
            sVar14 = token._6416_8_;
          }
          if (sVar2 == sVar14) {
            pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar4 & 1) == 0) {
              pPVar11 = param_2 + 0x39;
            }
            pPVar9 = (PUAbstractNode *)(token + 0x1909);
            if ((token[0x1908] & 1) != 0) {
              pPVar9 = (PUAbstractNode *)token._6424_8_;
            }
            if (((byte)PVar4 & 1) == 0) {
              if (sVar2 != 0) {
                pPVar11 = param_2 + 0x39;
                uVar12 = uVar15;
                do {
                  if (*pPVar11 != *pPVar9) goto LAB_00e266e4;
                  uVar12 = uVar12 - 1;
                  pPVar11 = pPVar11 + 1;
                  pPVar9 = pPVar9 + 1;
                } while (uVar12 != 0);
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
            goto LAB_00e266e4;
            uVar15 = PUScriptTranslator::passValidateProperty
                               ((PUScriptTranslator *)this,param_1,param_2,0x178a998,0);
            uVar13 = 0;
            if ((uVar15 & 1) == 0) goto LAB_00e26f50;
            local_80 = local_80 & 0xffffffff00000000;
            uVar15 = PUScriptTranslator::getFloat
                               (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                (float *)&local_80);
            if ((uVar15 & 1) != 0) {
              PUForceFieldAffector::suppressGeneration(this_00,true);
              PUForceFieldAffector::setAmplitude(this_00,(double)(float)local_80);
              goto LAB_00e26f44;
            }
          }
          else {
LAB_00e266e4:
            sVar14 = (ulong)(token[0x1920] >> 1);
            if ((token[0x1920] & 1) != 0) {
              sVar14 = token._6440_8_;
            }
            if (sVar2 == sVar14) {
              pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
              if (((byte)PVar4 & 1) == 0) {
                pPVar11 = param_2 + 0x39;
              }
              pPVar9 = (PUAbstractNode *)(token + 0x1921);
              if ((token[0x1920] & 1) != 0) {
                pPVar9 = (PUAbstractNode *)token._6448_8_;
              }
              if (((byte)PVar4 & 1) == 0) {
                if (sVar2 != 0) {
                  pPVar11 = param_2 + 0x39;
                    /* try { // try from 00e26734 to 00f2673b has its CatchHandler @ 00e26a28 */
                  uVar12 = uVar15;
                  do {
                    /* try { // try from 00e2673c to 00f267cb has its CatchHandler @ 00e25eb8 */
                    if (*pPVar11 != *pPVar9) goto LAB_00e267cc;
                    uVar12 = uVar12 - 1;
                    pPVar11 = pPVar11 + 1;
                    pPVar9 = pPVar9 + 1;
                  } while (uVar12 != 0);
                }
              }
              else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
              goto LAB_00e267cc;
              uVar15 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,param_2,0x178a9b0,0);
              uVar13 = 0;
              if ((uVar15 & 1) == 0) goto LAB_00e26f50;
              local_80 = local_80 & 0xffffffff00000000;
              uVar15 = PUScriptTranslator::getFloat
                                 (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                  (float *)&local_80);
                    /* try { // try from 00e2687c to 00f26883 has its CatchHandler @ 00e26a50 */
              if ((uVar15 & 1) != 0) {
                    /* try { // try from 00e26884 to 00f268d3 has its CatchHandler @ 00e25eb8 */
                PUForceFieldAffector::suppressGeneration(this_00,true);
                PUForceFieldAffector::setPersistence(this_00,(double)(float)local_80);
                goto LAB_00e26f44;
              }
            }
            else {
LAB_00e267cc:
                    /* try { // try from 00e267cc to 00f267d3 has its CatchHandler @ 00e26a10 */
                    /* try { // try from 00e267d4 to 00f2687b has its CatchHandler @ 00e25eb8 */
              sVar14 = (ulong)(token[0x1938] >> 1);
              if ((token[0x1938] & 1) != 0) {
                sVar14 = token._6464_8_;
              }
              if (sVar2 == sVar14) {
                pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                if (((byte)PVar4 & 1) == 0) {
                  pPVar11 = param_2 + 0x39;
                }
                pPVar9 = (PUAbstractNode *)(token + 0x1939);
                if ((token[0x1938] & 1) != 0) {
                  pPVar9 = (PUAbstractNode *)token._6472_8_;
                }
                if (((byte)PVar4 & 1) == 0) {
                  if (sVar2 != 0) {
                    pPVar11 = param_2 + 0x39;
                    uVar12 = uVar15;
                    do {
                      if (*pPVar11 != *pPVar9) goto LAB_00e2694c;
                      uVar12 = uVar12 - 1;
                      pPVar11 = pPVar11 + 1;
                      pPVar9 = pPVar9 + 1;
                    } while (uVar12 != 0);
                  }
                }
                else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
                goto LAB_00e2694c;
                    /* try { // try from 00e269d4 to 00f269db has its CatchHandler @ 00e269f8 */
                    /* try { // try from 00e269dc to 00f269e3 has its CatchHandler @ 00e269f4 */
                uVar15 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,param_2,0x178a9c8,2);
                if ((uVar15 & 1) != 0) {
                    /* try { // try from 00e269e4 to 00f269eb has its CatchHandler @ 00e269f0 */
                  local_80 = local_80 & 0xffffffff00000000;
                    /* try { // try from 00e269ec to 00f26b2b has its CatchHandler @ 00e25eb8 */
                    /* catch() { ... } // from try @ 00e269e4 with catch @ 00e269f0 */
                    /* catch() { ... } // from try @ 00e269dc with catch @ 00e269f4 */
                  uVar15 = PUScriptTranslator::getUInt
                                     (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                      (uint *)&local_80);
                    /* catch() { ... } // from try @ 00e269d4 with catch @ 00e269f8 */
                  if ((uVar15 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e268d4 with catch @ 00e269fc */
                    PUForceFieldAffector::suppressGeneration(this_00,true);
                    /* catch() { ... } // from try @ 00e267cc with catch @ 00e26a10 */
                    PUForceFieldAffector::setForceFieldSize(this_00,(uint)(float)local_80);
                    goto LAB_00e26f44;
                  }
                }
              }
              else {
LAB_00e2694c:
                sVar14 = (ulong)(token[0x1950] >> 1);
                if ((token[0x1950] & 1) != 0) {
                  sVar14 = token._6488_8_;
                }
                if (sVar2 == sVar14) {
                  pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                  if (((byte)PVar4 & 1) == 0) {
                    pPVar11 = param_2 + 0x39;
                  }
                  pPVar9 = (PUAbstractNode *)(token + 0x1951);
                  if ((token[0x1950] & 1) != 0) {
                    pPVar9 = (PUAbstractNode *)token._6496_8_;
                  }
                  if (((byte)PVar4 & 1) == 0) {
                    if (sVar2 != 0) {
                      pPVar11 = param_2 + 0x39;
                      uVar12 = uVar15;
                      do {
                        if (*pPVar11 != *pPVar9) goto LAB_00e26a84;
                        uVar12 = uVar12 - 1;
                        pPVar11 = pPVar11 + 1;
                        pPVar9 = pPVar9 + 1;
                      } while (uVar12 != 0);
                    }
                  }
                  else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
                  goto LAB_00e26a84;
                  uVar15 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,param_2,0x178a9e0,6);
                  if ((uVar15 & 1) != 0) {
                    Vec3::Vec3((Vec3 *)&local_80);
                    uVar15 = PUScriptTranslator::getVector3
                                       ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),
                                        param_2 + 0x58,&local_80,3);
                    if ((uVar15 & 1) != 0) {
                      PUForceFieldAffector::suppressGeneration(this_00,true);
                      PUForceFieldAffector::setWorldSize(this_00,(Vec3 *)&local_80);
                      goto LAB_00e26f44;
                    }
                  }
                }
                else {
LAB_00e26a84:
                  sVar14 = (ulong)(token[0x1968] >> 1);
                  if ((token[0x1968] & 1) != 0) {
                    sVar14 = token._6512_8_;
                  }
                  if (sVar2 == sVar14) {
                    pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* catch() { ... } // from try @ 00e26360 with catch @ 00e26aac */
                    if (((byte)PVar4 & 1) == 0) {
                      pPVar11 = param_2 + 0x39;
                    }
                    pPVar9 = (PUAbstractNode *)(token + 0x1969);
                    if ((token[0x1968] & 1) != 0) {
                      pPVar9 = (PUAbstractNode *)token._6520_8_;
                    }
                    if (((byte)PVar4 & 1) == 0) {
                      if (sVar2 != 0) {
                        pPVar11 = param_2 + 0x39;
                        uVar12 = uVar15;
                        do {
                          if (*pPVar11 != *pPVar9) goto LAB_00e26b70;
                          uVar12 = uVar12 - 1;
                          pPVar11 = pPVar11 + 1;
                          pPVar9 = pPVar9 + 1;
                        } while (uVar12 != 0);
                      }
                    }
                    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
                    goto LAB_00e26b70;
                    uVar15 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,param_2,0x178a9f8,1);
                    if (((uVar15 & 1) != 0) &&
                       (uVar15 = PUScriptTranslator::getBoolean
                                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                            (bool *)&local_80), (uVar15 & 1) != 0)) {
                      PUForceFieldAffector::suppressGeneration(this_00,true);
                      PUForceFieldAffector::setIgnoreNegativeX(this_00,(bool)local_80._0_1_);
                      goto LAB_00e26f44;
                    }
                  }
                  else {
LAB_00e26b70:
                    sVar14 = (ulong)(token[0x1980] >> 1);
                    if ((token[0x1980] & 1) != 0) {
                      sVar14 = token._6536_8_;
                    }
                    if (sVar2 == sVar14) {
                      pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                      if (((byte)PVar4 & 1) == 0) {
                        pPVar11 = param_2 + 0x39;
                      }
                      pPVar9 = (PUAbstractNode *)(token + 0x1981);
                      if ((token[0x1980] & 1) != 0) {
                        pPVar9 = (PUAbstractNode *)token._6544_8_;
                      }
                      if (((byte)PVar4 & 1) == 0) {
                        if (sVar2 != 0) {
                          pPVar11 = param_2 + 0x39;
                          uVar12 = uVar15;
                          do {
                            if (*pPVar11 != *pPVar9) goto LAB_00e26c4c;
                            uVar12 = uVar12 - 1;
                            pPVar11 = pPVar11 + 1;
                            pPVar9 = pPVar9 + 1;
                          } while (uVar12 != 0);
                        }
                      }
                      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
                      goto LAB_00e26c4c;
                      uVar15 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,param_2,0x178aa10,1);
                      if (((uVar15 & 1) != 0) &&
                         (uVar15 = PUScriptTranslator::getBoolean
                                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10)
                                              ,(bool *)&local_80), (uVar15 & 1) != 0)) {
                        PUForceFieldAffector::suppressGeneration(this_00,true);
                        PUForceFieldAffector::setIgnoreNegativeY(this_00,(bool)local_80._0_1_);
                        goto LAB_00e26f44;
                      }
                    }
                    else {
LAB_00e26c4c:
                      sVar14 = (ulong)(token[0x1998] >> 1);
                      if ((token[0x1998] & 1) != 0) {
                        sVar14 = token._6560_8_;
                      }
                      if (sVar2 == sVar14) {
                        pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                        if (((byte)PVar4 & 1) == 0) {
                          pPVar11 = param_2 + 0x39;
                        }
                        pPVar9 = (PUAbstractNode *)(token + 0x1999);
                        if ((token[0x1998] & 1) != 0) {
                          pPVar9 = (PUAbstractNode *)token._6568_8_;
                        }
                        if (((byte)PVar4 & 1) == 0) {
                          if (sVar2 != 0) {
                            pPVar11 = param_2 + 0x39;
                            uVar12 = uVar15;
                            do {
                              if (*pPVar11 != *pPVar9) goto LAB_00e26d28;
                              uVar12 = uVar12 - 1;
                              pPVar11 = pPVar11 + 1;
                              pPVar9 = pPVar9 + 1;
                            } while (uVar12 != 0);
                          }
                        }
                        else {
                    /* try { // try from 00e26d1c to 00f27647 has its CatchHandler @ 00e26d1c
                       catch() { ... } // from try @ 00e26d1c with catch @ 00e26d1c
                       catch() { ... } // from try @ 00e27880 with catch @ 00e26d1c */
                          if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
                          goto LAB_00e26d28;
                        }
                        uVar15 = PUScriptTranslator::passValidateProperty
                                           ((PUScriptTranslator *)this,param_1,param_2,0x178aa28,1);
                        if (((uVar15 & 1) != 0) &&
                           (uVar15 = PUScriptTranslator::getBoolean
                                               (*(PUAbstractNode **)
                                                 (*(long *)(param_2 + 0x60) + 0x10),
                                                (bool *)&local_80), (uVar15 & 1) != 0)) {
                          PUForceFieldAffector::suppressGeneration(this_00,true);
                          PUForceFieldAffector::setIgnoreNegativeZ(this_00,(bool)local_80._0_1_);
                          goto LAB_00e26f44;
                        }
                      }
                      else {
LAB_00e26d28:
                        sVar14 = (ulong)(token[0x19b0] >> 1);
                        if ((token[0x19b0] & 1) != 0) {
                          sVar14 = token._6584_8_;
                        }
                        if (sVar2 == sVar14) {
                          pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                          if (((byte)PVar4 & 1) == 0) {
                            pPVar11 = param_2 + 0x39;
                          }
                          pPVar9 = (PUAbstractNode *)(token + 0x19b1);
                          if ((token[0x19b0] & 1) != 0) {
                            pPVar9 = (PUAbstractNode *)token._6592_8_;
                          }
                          if (((byte)PVar4 & 1) == 0) {
                            if (sVar2 != 0) {
                              pPVar11 = param_2 + 0x39;
                              uVar12 = uVar15;
                              do {
                                if (*pPVar11 != *pPVar9) goto LAB_00e26e04;
                                uVar12 = uVar12 - 1;
                                pPVar11 = pPVar11 + 1;
                                pPVar9 = pPVar9 + 1;
                              } while (uVar12 != 0);
                            }
                          }
                          else if ((sVar2 != 0) &&
                                  (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
                          goto LAB_00e26e04;
                          uVar15 = PUScriptTranslator::passValidateProperty
                                             ((PUScriptTranslator *)this,param_1,param_2,0x178aa40,6
                                             );
                          if ((uVar15 & 1) != 0) {
                            Vec3::Vec3((Vec3 *)&local_80);
                            uVar15 = PUScriptTranslator::getVector3
                                               ((PUScriptTranslator *)this,
                                                *(undefined8 *)(param_2 + 0x60),param_2 + 0x58,
                                                &local_80,3);
                            if ((uVar15 & 1) != 0) {
                              PUForceFieldAffector::suppressGeneration(this_00,true);
                              PUForceFieldAffector::setMovement(this_00,(Vec3 *)&local_80);
                              goto LAB_00e26f44;
                            }
                          }
                        }
                        else {
LAB_00e26e04:
                          sVar14 = (ulong)(token[0x19c8] >> 1);
                          if ((token[0x19c8] & 1) != 0) {
                            sVar14 = token._6608_8_;
                          }
                          if (sVar2 == sVar14) {
                            pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                            if (((byte)PVar4 & 1) == 0) {
                              pPVar11 = param_2 + 0x39;
                            }
                            pPVar9 = (PUAbstractNode *)(token + 0x19c9);
                            if ((token[0x19c8] & 1) != 0) {
                              pPVar9 = (PUAbstractNode *)token._6616_8_;
                            }
                            if (((byte)PVar4 & 1) == 0) {
                              if (sVar2 != 0) {
                                pPVar11 = param_2 + 0x39;
                                do {
                                  if (*pPVar11 != *pPVar9) goto LAB_00e26a48;
                                  uVar15 = uVar15 - 1;
                                  pPVar11 = pPVar11 + 1;
                                  pPVar9 = pPVar9 + 1;
                                } while (uVar15 != 0);
                              }
                            }
                            else if ((sVar2 != 0) &&
                                    (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0))
                            goto LAB_00e26a48;
                            uVar15 = PUScriptTranslator::passValidateProperty
                                               ((PUScriptTranslator *)this,param_1,param_2,0x178aa58
                                                ,0);
                            uVar13 = 0;
                            if ((uVar15 & 1) == 0) goto LAB_00e26f50;
                            local_80 = local_80 & 0xffffffff00000000;
                            uVar15 = PUScriptTranslator::getFloat
                                               (*(PUAbstractNode **)
                                                 (*(long *)(param_2 + 0x60) + 0x10),
                                                (float *)&local_80);
                            if ((uVar15 & 1) != 0) {
                              PUForceFieldAffector::suppressGeneration(this_00,true);
                              PUForceFieldAffector::setMovementFrequency(this_00,(float)local_80);
                              goto LAB_00e26f44;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00e26a48:
      uVar13 = 0;
                    /* catch() { ... } // from try @ 00e266c8 with catch @ 00e26a4c */
      goto LAB_00e26f50;
    }
    pPVar11 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e26380 to 00f2638f has its CatchHandler @ 00e26a50 */
    if (((byte)PVar4 & 1) == 0) {
      pPVar11 = param_2 + 0x39;
    }
    pPVar9 = (PUAbstractNode *)(token + 0x18c1);
    if ((token[0x18c0] & 1) != 0) {
      pPVar9 = (PUAbstractNode *)token._6352_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar11 = param_2 + 0x39;
        uVar12 = uVar15;
        do {
          if (*pPVar11 != *pPVar9) goto LAB_00e26438;
          uVar12 = uVar12 - 1;
          pPVar11 = pPVar11 + 1;
          pPVar9 = pPVar9 + 1;
        } while (uVar12 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar11,pPVar9,sVar2), iVar8 != 0)) goto LAB_00e26438;
    uVar15 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178a950,0);
    uVar13 = 0;
    if ((uVar15 & 1) == 0) goto LAB_00e26f50;
    local_80 = local_80 & 0xffffffff00000000;
    uVar15 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(float *)&local_80);
    if ((uVar15 & 1) == 0) goto LAB_00e26a48;
    PUForceFieldAffector::suppressGeneration(this_00,true);
    PUForceFieldAffector::setScaleForce(this_00,(float)local_80);
  }
LAB_00e26f44:
  uVar13 = 1;
  PUForceFieldAffector::suppressGeneration(this_00,false);
LAB_00e26f50:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}

