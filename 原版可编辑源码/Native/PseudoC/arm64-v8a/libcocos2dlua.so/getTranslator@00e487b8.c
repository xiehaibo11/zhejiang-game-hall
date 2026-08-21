
/* cocos2d::PUTranslateManager::getTranslator(cocos2d::PUAbstractNode*) */

PUTranslateManager * __thiscall
cocos2d::PUTranslateManager::getTranslator(PUTranslateManager *this,PUAbstractNode *param_1)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  PUAbstractNode PVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  PUAbstractNode *pPVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  void *pvVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  bVar7 = token[0x450];
  if (*(int *)(param_1 + 0x24) != 2) {
    return (PUTranslateManager *)0x0;
  }
  PVar5 = param_1[0x78];
  lVar18 = *(long *)(param_1 + 0x28);
  uVar19 = (ulong)((byte)PVar5 >> 1);
  sVar3 = uVar19;
  if (((byte)PVar5 & 1) != 0) {
    sVar3 = *(size_t *)(param_1 + 0x80);
  }
  sVar4 = (ulong)(token[0x450] >> 1);
  if ((token[0x450] & 1) != 0) {
    sVar4 = token._1112_8_;
  }
  if (sVar3 == sVar4) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0x451);
    if ((token[0x450] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._1120_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e4889c;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e48908:
      return this + 8;
    }
    if ((sVar3 == 0) || (iVar11 = memcmp(pPVar14,pPVar12,sVar3), iVar11 == 0)) goto LAB_00e48908;
  }
LAB_00e4889c:
  sVar2 = (ulong)(token[0x270] >> 1);
  if ((token[0x270] & 1) != 0) {
    sVar2 = token._632_8_;
  }
  if (sVar3 == sVar2) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0x271);
    if ((token[0x270] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._640_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e48930;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e48a14:
      return this + 0x58;
    }
    if ((sVar3 == 0) || (iVar11 = memcmp(pPVar14,pPVar12,sVar3), iVar11 == 0)) goto LAB_00e48a14;
  }
LAB_00e48930:
  bVar8 = token[0x588];
  sVar2 = (ulong)(token[0x588] >> 1);
  if ((token[0x588] & 1) != 0) {
    sVar2 = token._1424_8_;
  }
  if (sVar3 == sVar2) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0x589);
    if ((token[0x588] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._1432_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e489a0;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e48a5c:
      bVar10 = true;
    }
    else {
      if (sVar3 == 0) goto LAB_00e48a5c;
      iVar11 = memcmp(pPVar14,pPVar12,sVar3);
      bVar10 = iVar11 == 0;
    }
    bVar9 = lVar18 != 0;
    if ((lVar18 != 0) && (bVar10)) {
      bVar6 = *(byte *)(lVar18 + 0x78);
      uVar20 = (ulong)(bVar6 >> 1);
      sVar1 = uVar20;
      if ((bVar6 & 1) != 0) {
        sVar1 = *(size_t *)(lVar18 + 0x80);
      }
      if (sVar1 == sVar4) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar6 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x451;
        if ((bVar7 & 1) != 0) {
          pcVar13 = (char *)token._1120_8_;
        }
        if ((bVar6 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            uVar17 = uVar20;
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e48bc4;
              uVar17 = uVar17 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_00e48cec;
        }
        if ((sVar4 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar4), iVar11 == 0))
        goto LAB_00e48cec;
      }
LAB_00e48bc4:
      sVar4 = (ulong)(token[0x408] >> 1);
      if ((token[0x408] & 1) != 0) {
        sVar4 = token._1040_8_;
      }
      if (sVar1 == sVar4) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar6 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x409;
        if ((token[0x408] & 1) != 0) {
          pcVar13 = (char *)token._1048_8_;
        }
        if ((bVar6 & 1) == 0) {
          if (sVar1 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e48ce0;
              uVar20 = uVar20 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar20 != 0);
          }
LAB_00e48cec:
          return this + 0x18;
        }
        if ((sVar1 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar1), iVar11 == 0))
        goto LAB_00e48cec;
      }
LAB_00e48ce0:
      bVar9 = true;
    }
  }
  else {
LAB_00e489a0:
    bVar9 = lVar18 != 0;
  }
  sVar4 = (ulong)(token[0x6f0] >> 1);
  if ((token[0x6f0] & 1) != 0) {
    sVar4 = token._1784_8_;
  }
  if (sVar3 == sVar4) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0x6f1);
    if ((token[0x6f0] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._1792_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e48d28;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e48b1c:
      bVar10 = true;
    }
    else {
      if (sVar3 == 0) goto LAB_00e48b1c;
      iVar11 = memcmp(pPVar14,pPVar12,sVar3);
      bVar10 = iVar11 == 0;
    }
    if ((bool)(bVar9 & bVar10)) {
      bVar7 = *(byte *)(lVar18 + 0x78);
      uVar20 = (ulong)(bVar7 >> 1);
      sVar4 = uVar20;
      if ((bVar7 & 1) != 0) {
        sVar4 = *(size_t *)(lVar18 + 0x80);
      }
      if (sVar4 == sVar2) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x589;
        if ((bVar8 & 1) != 0) {
          pcVar13 = (char *)token._1432_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            uVar17 = uVar20;
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e48c50;
              uVar17 = uVar17 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_00e48e4c;
        }
        if ((sVar2 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar2), iVar11 == 0))
        goto LAB_00e48e4c;
      }
LAB_00e48c50:
      sVar1 = (ulong)(token[0x408] >> 1);
      if ((token[0x408] & 1) != 0) {
        sVar1 = token._1040_8_;
      }
      if (sVar4 == sVar1) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x409;
        if ((token[0x408] & 1) != 0) {
          pcVar13 = (char *)token._1048_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e48d28;
              uVar20 = uVar20 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar20 != 0);
          }
LAB_00e48e4c:
          return this + 0x28;
        }
        if ((sVar4 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar4), iVar11 == 0))
        goto LAB_00e48e4c;
      }
    }
  }
LAB_00e48d28:
  sVar4 = (ulong)(token[0x7f8] >> 1);
  if ((token[0x7f8] & 1) != 0) {
    sVar4 = token._2048_8_;
  }
  if (sVar3 == sVar4) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0x7f9);
    if ((token[0x7f8] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._2056_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e48f14;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e48dcc:
      bVar10 = true;
    }
    else {
      if (sVar3 == 0) goto LAB_00e48dcc;
      iVar11 = memcmp(pPVar14,pPVar12,sVar3);
      bVar10 = iVar11 == 0;
    }
    if ((bool)(bVar9 & bVar10)) {
      bVar7 = *(byte *)(lVar18 + 0x78);
      uVar20 = (ulong)(bVar7 >> 1);
      sVar4 = uVar20;
      if ((bVar7 & 1) != 0) {
        sVar4 = *(size_t *)(lVar18 + 0x80);
      }
      if (sVar4 == sVar2) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x589;
        if ((bVar8 & 1) != 0) {
          pcVar13 = (char *)token._1432_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            uVar17 = uVar20;
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e48e7c;
              uVar17 = uVar17 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_00e49038;
        }
        if ((sVar2 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar2), iVar11 == 0))
        goto LAB_00e49038;
      }
LAB_00e48e7c:
      sVar1 = (ulong)(token[0x408] >> 1);
      if ((token[0x408] & 1) != 0) {
        sVar1 = token._1040_8_;
      }
      if (sVar4 == sVar1) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x409;
        if ((token[0x408] & 1) != 0) {
          pcVar13 = (char *)token._1048_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e48f14;
              uVar20 = uVar20 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar20 != 0);
          }
LAB_00e49038:
          return this + 0x38;
        }
        if ((sVar4 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar4), iVar11 == 0))
        goto LAB_00e49038;
      }
    }
  }
LAB_00e48f14:
  sVar4 = (ulong)(token[0xa98] >> 1);
  if ((token[0xa98] & 1) != 0) {
    sVar4 = token._2720_8_;
  }
  if (sVar3 == sVar4) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0xa99);
    if ((token[0xa98] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._2728_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e49100;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e48fb8:
      bVar10 = true;
    }
    else {
      if (sVar3 == 0) goto LAB_00e48fb8;
      iVar11 = memcmp(pPVar14,pPVar12,sVar3);
      bVar10 = iVar11 == 0;
    }
    if ((bool)(bVar9 & bVar10)) {
      bVar7 = *(byte *)(lVar18 + 0x78);
      uVar20 = (ulong)(bVar7 >> 1);
      sVar4 = uVar20;
      if ((bVar7 & 1) != 0) {
        sVar4 = *(size_t *)(lVar18 + 0x80);
      }
      if (sVar4 == sVar2) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x589;
        if ((bVar8 & 1) != 0) {
          pcVar13 = (char *)token._1432_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            uVar17 = uVar20;
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e49068;
              uVar17 = uVar17 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_00e49224;
        }
        if ((sVar2 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar2), iVar11 == 0))
        goto LAB_00e49224;
      }
LAB_00e49068:
      sVar1 = (ulong)(token[0x408] >> 1);
      if ((token[0x408] & 1) != 0) {
        sVar1 = token._1040_8_;
      }
      if (sVar4 == sVar1) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x409;
        if ((token[0x408] & 1) != 0) {
          pcVar13 = (char *)token._1048_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e49100;
              uVar20 = uVar20 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar20 != 0);
          }
LAB_00e49224:
          return this + 0x48;
        }
        if ((sVar4 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar4), iVar11 == 0))
        goto LAB_00e49224;
      }
    }
  }
LAB_00e49100:
  sVar4 = (ulong)(token[3000] >> 1);
  if ((token[3000] & 1) != 0) {
    sVar4 = token._3008_8_;
  }
  if (sVar3 == sVar4) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0xbb9);
    if ((token[3000] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._3016_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e492ec;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e491a4:
      bVar10 = true;
    }
    else {
      if (sVar3 == 0) goto LAB_00e491a4;
      iVar11 = memcmp(pPVar14,pPVar12,sVar3);
      bVar10 = iVar11 == 0;
    }
    if ((bool)(bVar9 & bVar10)) {
      bVar7 = *(byte *)(lVar18 + 0x78);
      uVar20 = (ulong)(bVar7 >> 1);
      sVar4 = uVar20;
      if ((bVar7 & 1) != 0) {
        sVar4 = *(size_t *)(lVar18 + 0x80);
      }
      if (sVar4 == sVar2) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x589;
        if ((bVar8 & 1) != 0) {
          pcVar13 = (char *)token._1432_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            uVar17 = uVar20;
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e49254;
              uVar17 = uVar17 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_00e49428;
        }
        if ((sVar2 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar2), iVar11 == 0))
        goto LAB_00e49428;
      }
LAB_00e49254:
      sVar1 = (ulong)(token[0x408] >> 1);
      if ((token[0x408] & 1) != 0) {
        sVar1 = token._1040_8_;
      }
      if (sVar4 == sVar1) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x409;
        if ((token[0x408] & 1) != 0) {
          pcVar13 = (char *)token._1048_8_;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e492ec;
              uVar20 = uVar20 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar20 != 0);
          }
LAB_00e49428:
          return this + 0x90;
        }
        if ((sVar4 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar4), iVar11 == 0))
        goto LAB_00e49428;
      }
    }
  }
LAB_00e492ec:
  bVar7 = token[0xb40];
  sVar4 = (ulong)(token[0xb40] >> 1);
  if ((token[0xb40] & 1) != 0) {
    sVar4 = token._2888_8_;
  }
  if (sVar3 == sVar4) {
    pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
    if (((byte)PVar5 & 1) == 0) {
      pPVar14 = param_1 + 0x79;
    }
    pPVar12 = (PUAbstractNode *)(token + 0xb41);
    if ((token[0xb40] & 1) != 0) {
      pPVar12 = (PUAbstractNode *)token._2896_8_;
    }
    if (((byte)PVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pPVar14 = param_1 + 0x79;
        uVar20 = uVar19;
        do {
          if (*pPVar14 != *pPVar12) goto LAB_00e49500;
          uVar20 = uVar20 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar12 = pPVar12 + 1;
        } while (uVar20 != 0);
      }
LAB_00e493a4:
      bVar10 = true;
    }
    else {
      if (sVar3 == 0) goto LAB_00e493a4;
      iVar11 = memcmp(pPVar14,pPVar12,sVar3);
      bVar10 = iVar11 == 0;
    }
    if ((bool)(bVar9 & bVar10)) {
      bVar6 = *(byte *)(lVar18 + 0x78);
      uVar20 = (ulong)(bVar6 >> 1);
      sVar1 = uVar20;
      if ((bVar6 & 1) != 0) {
        sVar1 = *(size_t *)(lVar18 + 0x80);
      }
      if (sVar1 == sVar2) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar6 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x589;
        if ((bVar8 & 1) != 0) {
          pcVar13 = (char *)token._1432_8_;
        }
        if ((bVar6 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            uVar17 = uVar20;
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e49460;
              uVar17 = uVar17 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_00e4961c;
        }
        if ((sVar2 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar2), iVar11 == 0))
        goto LAB_00e4961c;
      }
LAB_00e49460:
      sVar2 = (ulong)(token[0x408] >> 1);
      if ((token[0x408] & 1) != 0) {
        sVar2 = token._1040_8_;
      }
      if (sVar1 == sVar2) {
        pvVar15 = *(void **)(lVar18 + 0x88);
        if ((bVar6 & 1) == 0) {
          pvVar15 = (void *)(lVar18 + 0x79);
        }
        pcVar13 = token + 0x409;
        if ((token[0x408] & 1) != 0) {
          pcVar13 = (char *)token._1048_8_;
        }
        if ((bVar6 & 1) == 0) {
          if (sVar1 != 0) {
            pcVar16 = (char *)(lVar18 + 0x79);
            do {
              if (*pcVar16 != *pcVar13) goto LAB_00e49500;
              uVar20 = uVar20 - 1;
              pcVar16 = pcVar16 + 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar20 != 0);
          }
LAB_00e4961c:
          return this + 0x80;
        }
        if ((sVar1 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar1), iVar11 == 0))
        goto LAB_00e4961c;
      }
    }
  }
LAB_00e49500:
  sVar2 = (ulong)(token[0xba0] >> 1);
  if ((token[0xba0] & 1) != 0) {
    sVar2 = token._2984_8_;
  }
  if (sVar3 != sVar2) {
    return (PUTranslateManager *)0x0;
  }
  pPVar14 = *(PUAbstractNode **)(param_1 + 0x88);
  if (((byte)PVar5 & 1) == 0) {
    pPVar14 = param_1 + 0x79;
  }
  pPVar12 = (PUAbstractNode *)(token + 0xba1);
  if ((token[0xba0] & 1) != 0) {
    pPVar12 = (PUAbstractNode *)token._2992_8_;
  }
  if (((byte)PVar5 & 1) == 0) {
    if (sVar3 != 0) {
      pPVar14 = param_1 + 0x79;
      do {
        if (*pPVar14 != *pPVar12) {
          return (PUTranslateManager *)0x0;
        }
        uVar19 = uVar19 - 1;
        pPVar14 = pPVar14 + 1;
        pPVar12 = pPVar12 + 1;
      } while (uVar19 != 0);
    }
LAB_00e4959c:
    bVar10 = true;
  }
  else {
    if (sVar3 == 0) goto LAB_00e4959c;
    iVar11 = memcmp(pPVar14,pPVar12,sVar3);
    bVar10 = iVar11 == 0;
  }
  if ((bool)(bVar9 & bVar10)) {
    bVar8 = *(byte *)(lVar18 + 0x78);
    uVar19 = (ulong)(bVar8 >> 1);
    sVar3 = uVar19;
    if ((bVar8 & 1) != 0) {
      sVar3 = *(size_t *)(lVar18 + 0x80);
    }
    if (sVar3 == sVar4) {
      pvVar15 = *(void **)(lVar18 + 0x88);
      if ((bVar8 & 1) == 0) {
        pvVar15 = (void *)(lVar18 + 0x79);
      }
      pcVar13 = token + 0xb41;
      if ((bVar7 & 1) != 0) {
        pcVar13 = (char *)token._2896_8_;
      }
      if ((bVar8 & 1) == 0) {
        if (sVar4 != 0) {
          pcVar16 = (char *)(lVar18 + 0x79);
          uVar20 = uVar19;
          do {
            if (*pcVar16 != *pcVar13) goto LAB_00e49640;
            uVar20 = uVar20 - 1;
            pcVar16 = pcVar16 + 1;
            pcVar13 = pcVar13 + 1;
          } while (uVar20 != 0);
        }
        goto LAB_00e496dc;
      }
      if ((sVar4 == 0) || (iVar11 = memcmp(pvVar15,pcVar13,sVar4), iVar11 == 0)) goto LAB_00e496dc;
    }
LAB_00e49640:
    sVar4 = (ulong)(token[0x408] >> 1);
    if ((token[0x408] & 1) != 0) {
      sVar4 = token._1040_8_;
    }
    if (sVar3 == sVar4) {
      pvVar15 = *(void **)(lVar18 + 0x88);
      if ((bVar8 & 1) == 0) {
        pvVar15 = (void *)(lVar18 + 0x79);
      }
      pcVar13 = token + 0x409;
      if ((token[0x408] & 1) != 0) {
        pcVar13 = (char *)token._1048_8_;
      }
      if ((bVar8 & 1) == 0) {
        if (sVar3 != 0) {
          pcVar16 = (char *)(lVar18 + 0x79);
          do {
            if (*pcVar16 != *pcVar13) {
              return (PUTranslateManager *)0x0;
            }
            uVar19 = uVar19 - 1;
            pcVar16 = pcVar16 + 1;
            pcVar13 = pcVar13 + 1;
          } while (uVar19 != 0);
        }
      }
      else if ((sVar3 != 0) && (iVar11 = memcmp(pvVar15,pcVar13,sVar3), iVar11 != 0)) {
        return (PUTranslateManager *)0x0;
      }
LAB_00e496dc:
      return this + 0x70;
    }
  }
  return (PUTranslateManager *)0x0;
}

