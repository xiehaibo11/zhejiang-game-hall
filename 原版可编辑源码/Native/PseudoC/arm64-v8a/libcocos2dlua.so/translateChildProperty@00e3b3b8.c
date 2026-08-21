
/* cocos2d::PUOnPositionObserverTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUOnPositionObserverTranslator::translateChildProperty
          (PUOnPositionObserverTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  size_t sVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  PUAbstractNode *pPVar11;
  undefined4 uVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  ulong uVar18;
  float local_84;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
  uVar18 = (ulong)((byte)PVar4 >> 1);
  lVar17 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar18;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar16 = (ulong)(token[0x1f98] >> 1);
  if ((token[0x1f98] & 1) != 0) {
    sVar16 = token._8096_8_;
  }
  if (sVar2 == sVar16) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x1f99);
    if ((token[0x1f98] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._8104_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        uVar9 = uVar18;
        do {
          if (*pPVar14 != *pPVar11) goto LAB_00e3b4a0;
          uVar9 = uVar9 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e3b4a0;
    uVar18 = PUScriptTranslator::passValidatePropertyNumberOfValues
                       ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                        (basic_string *)(token + 0x1f98),2);
    if ((uVar18 & 1) == 0) goto LAB_00e3bc10;
    local_78 = 0;
    local_70 = (char *)0x0;
    local_80 = 0;
    local_84 = 0.0;
    lVar15 = *(long *)(param_2 + 0x60);
    uVar9 = PUScriptTranslator::getString
                      (*(PUAbstractNode **)(lVar15 + 0x10),(basic_string *)&local_80);
    uVar18 = local_80;
    if ((uVar9 & 1) != 0) {
      sVar16 = local_80 >> 1 & 0x7f;
      sVar2 = sVar16;
      if ((local_80 & 1) != 0) {
        sVar2 = local_78;
      }
      sVar5 = (ulong)(token[0x300] >> 1);
      if ((token[0x300] & 1) != 0) {
        sVar5 = token._776_8_;
      }
      if (sVar2 == sVar5) {
        pcVar13 = (char *)((ulong)&local_80 | 1);
        pcVar3 = pcVar13;
        if ((local_80 & 1) != 0) {
          pcVar3 = local_70;
        }
        pcVar1 = token + 0x301;
        if ((token[0x300] & 1) != 0) {
          pcVar1 = (char *)token._784_8_;
        }
        sVar5 = sVar16;
        sVar7 = sVar2;
        if ((local_80 & 1) == 0) {
          while (sVar7 != 0) {
            if (*pcVar13 != *pcVar1) goto LAB_00e3b808;
            pcVar13 = pcVar13 + 1;
            pcVar1 = pcVar1 + 1;
            sVar5 = sVar5 - 1;
            sVar7 = sVar5;
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
        goto LAB_00e3b808;
        *(undefined4 *)(lVar17 + 0xb4) = 0;
      }
      else {
LAB_00e3b808:
        sVar5 = (ulong)(token[0x318] >> 1);
        if ((token[0x318] & 1) != 0) {
          sVar5 = token._800_8_;
        }
        if (sVar2 == sVar5) {
          pcVar13 = (char *)((ulong)&local_80 | 1);
          pcVar3 = pcVar13;
          if ((uVar18 & 1) != 0) {
            pcVar3 = local_70;
          }
          pcVar1 = token + 0x319;
          if ((token[0x318] & 1) != 0) {
            pcVar1 = (char *)token._808_8_;
          }
          sVar5 = sVar16;
          sVar7 = sVar2;
          if ((uVar18 & 1) == 0) {
            while (sVar7 != 0) {
              if (*pcVar13 != *pcVar1) goto LAB_00e3b918;
              pcVar13 = pcVar13 + 1;
              pcVar1 = pcVar1 + 1;
              sVar5 = sVar5 - 1;
              sVar7 = sVar5;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e3b918;
          uVar12 = 2;
        }
        else {
LAB_00e3b918:
          sVar5 = (ulong)(token[0x330] >> 1);
          if ((token[0x330] & 1) != 0) {
            sVar5 = token._824_8_;
          }
          if (sVar2 != sVar5) goto LAB_00e3bab0;
          pcVar13 = (char *)((ulong)&local_80 | 1);
          pcVar3 = pcVar13;
          if ((uVar18 & 1) != 0) {
            pcVar3 = local_70;
          }
          pcVar1 = token + 0x331;
          if ((token[0x330] & 1) != 0) {
            pcVar1 = (char *)token._832_8_;
          }
          if ((uVar18 & 1) == 0) {
            while (sVar2 != 0) {
              if (*pcVar13 != *pcVar1) goto LAB_00e3bab0;
              pcVar13 = pcVar13 + 1;
                    /* try { // try from 00e3b978 to 00f3b97f has its CatchHandler @ 00e3ba30 */
              pcVar1 = pcVar1 + 1;
              sVar16 = sVar16 - 1;
              sVar2 = sVar16;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e3bab0;
          uVar12 = 1;
        }
        *(undefined4 *)(lVar17 + 0xb4) = uVar12;
      }
LAB_00e3bab0:
      uVar18 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(lVar15 + 8) + 0x10),&local_84);
      if ((uVar18 & 1) != 0) {
        *(undefined1 *)(lVar17 + 0xb0) = 1;
        *(float *)(lVar17 + 0xa4) = local_84;
joined_r0x00e3bbf8:
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        uVar10 = 1;
        goto LAB_00e3bc14;
      }
    }
LAB_00e3bc00:
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  else {
LAB_00e3b4a0:
    sVar16 = (ulong)(token[0x1fb0] >> 1);
    if ((token[0x1fb0] & 1) != 0) {
      sVar16 = token._8120_8_;
    }
    if (sVar2 == sVar16) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1fb1);
      if ((token[0x1fb0] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._8128_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar9 = uVar18;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e3b5ec;
            uVar9 = uVar9 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e3b5ec;
      uVar18 = PUScriptTranslator::passValidatePropertyNumberOfValues
                         ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                          (basic_string *)(token + 0x1fb0),2);
      if ((uVar18 & 1) != 0) {
        local_78 = 0;
        local_70 = (char *)0x0;
        local_80 = 0;
        local_84 = 0.0;
        lVar15 = *(long *)(param_2 + 0x60);
        uVar9 = PUScriptTranslator::getString
                          (*(PUAbstractNode **)(lVar15 + 0x10),(basic_string *)&local_80);
        uVar18 = local_80;
        if ((uVar9 & 1) == 0) goto LAB_00e3bc00;
        sVar16 = local_80 >> 1 & 0x7f;
        sVar2 = sVar16;
        if ((local_80 & 1) != 0) {
          sVar2 = local_78;
        }
        sVar5 = (ulong)(token[0x300] >> 1);
        if ((token[0x300] & 1) != 0) {
          sVar5 = token._776_8_;
        }
        if (sVar2 == sVar5) {
                    /* try { // try from 00e3b6d8 to 00f3b727 has its CatchHandler @ 00e3b6d8
                       catch() { ... } // from try @ 00e3b6d8 with catch @ 00e3b6d8
                       catch() { ... } // from try @ 00e3b734 with catch @ 00e3b6d8 */
          pcVar13 = (char *)((ulong)&local_80 | 1);
          pcVar3 = pcVar13;
          if ((local_80 & 1) != 0) {
            pcVar3 = local_70;
          }
          pcVar1 = token + 0x301;
          if ((token[0x300] & 1) != 0) {
            pcVar1 = (char *)token._784_8_;
          }
          sVar5 = sVar16;
          sVar7 = sVar2;
          if ((local_80 & 1) == 0) {
            while (sVar7 != 0) {
              if (*pcVar13 != *pcVar1) goto LAB_00e3b890;
              pcVar13 = pcVar13 + 1;
              pcVar1 = pcVar1 + 1;
              sVar5 = sVar5 - 1;
              sVar7 = sVar5;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e3b890;
          *(undefined4 *)(lVar17 + 0xb8) = 0;
        }
        else {
LAB_00e3b890:
          sVar5 = (ulong)(token[0x318] >> 1);
          if ((token[0x318] & 1) != 0) {
            sVar5 = token._800_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((uVar18 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x319;
            if ((token[0x318] & 1) != 0) {
              pcVar1 = (char *)token._808_8_;
            }
            sVar5 = sVar16;
            sVar7 = sVar2;
            if ((uVar18 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e3ba24;
                pcVar13 = pcVar13 + 1;
                    /* try { // try from 00e3b8f4 to 00f3b8fb has its CatchHandler @ 00e3ba34 */
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e3ba24;
            uVar12 = 2;
          }
          else {
LAB_00e3ba24:
                    /* catch() { ... } // from try @ 00e3b99c with catch @ 00e3ba28 */
                    /* catch() { ... } // from try @ 00e3b9a8 with catch @ 00e3ba2c */
                    /* catch() { ... } // from try @ 00e3b978 with catch @ 00e3ba30 */
            sVar5 = (ulong)(token[0x330] >> 1);
                    /* catch() { ... } // from try @ 00e3b8f4 with catch @ 00e3ba34 */
            if ((token[0x330] & 1) != 0) {
              sVar5 = token._824_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e3bb88;
                    /* try { // try from 00e3ba48 to 00f3bb07 has its CatchHandler @ 00e3ba48
                       catch() { ... } // from try @ 00e3ba48 with catch @ 00e3ba48
                       catch() { ... } // from try @ 00e3bb58 with catch @ 00e3ba48
                       catch() { ... } // from try @ 00e3bbd4 with catch @ 00e3ba48 */
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((uVar18 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x331;
            if ((token[0x330] & 1) != 0) {
              pcVar1 = (char *)token._832_8_;
            }
            if ((uVar18 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e3bb88;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar16 = sVar16 - 1;
                sVar2 = sVar16;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e3bb88;
            uVar12 = 1;
          }
          *(undefined4 *)(lVar17 + 0xb8) = uVar12;
        }
LAB_00e3bb88:
        uVar18 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(lVar15 + 8) + 0x10),&local_84);
        if ((uVar18 & 1) != 0) {
          *(undefined1 *)(lVar17 + 0xb1) = 1;
          *(float *)(lVar17 + 0xa8) = local_84;
          goto joined_r0x00e3bbf8;
        }
        goto LAB_00e3bc00;
      }
    }
    else {
LAB_00e3b5ec:
      sVar16 = (ulong)(token[0x1fc8] >> 1);
      if ((token[0x1fc8] & 1) != 0) {
        sVar16 = token._8144_8_;
      }
      if (sVar2 == sVar16) {
        pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar14 = param_2 + 0x39;
        }
        pPVar11 = (PUAbstractNode *)(token + 0x1fc9);
        if ((token[0x1fc8] & 1) != 0) {
          pPVar11 = (PUAbstractNode *)token._8152_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar14 = param_2 + 0x39;
            do {
              if (*pPVar14 != *pPVar11) goto LAB_00e3bc10;
              uVar18 = uVar18 - 1;
              pPVar14 = pPVar14 + 1;
              pPVar11 = pPVar11 + 1;
            } while (uVar18 != 0);
          }
        }
        else {
                    /* try { // try from 00e3b728 to 00f3b733 has its CatchHandler @ 00e3b7b8 */
          if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
          goto LAB_00e3bc10;
        }
                    /* try { // try from 00e3b734 to 00f3b7cb has its CatchHandler @ 00e3b6d8 */
        uVar18 = PUScriptTranslator::passValidatePropertyNumberOfValues
                           ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                            (basic_string *)(token + 0x1fc8),2);
        if ((uVar18 & 1) != 0) {
          local_78 = 0;
          local_70 = (char *)0x0;
          local_80 = 0;
          local_84 = 0.0;
          lVar15 = *(long *)(param_2 + 0x60);
          uVar9 = PUScriptTranslator::getString
                            (*(PUAbstractNode **)(lVar15 + 0x10),(basic_string *)&local_80);
          uVar18 = local_80;
          if ((uVar9 & 1) == 0) goto LAB_00e3bc00;
          sVar16 = local_80 >> 1 & 0x7f;
          sVar2 = sVar16;
          if ((local_80 & 1) != 0) {
            sVar2 = local_78;
          }
          sVar5 = (ulong)(token[0x300] >> 1);
          if ((token[0x300] & 1) != 0) {
            sVar5 = token._776_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_80 | 1);
                    /* catch() { ... } // from try @ 00e3b728 with catch @ 00e3b7b8 */
            pcVar3 = pcVar13;
            if ((local_80 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x301;
            if ((token[0x300] & 1) != 0) {
              pcVar1 = (char *)token._784_8_;
            }
            sVar5 = sVar16;
            sVar7 = sVar2;
            if ((local_80 & 1) == 0) {
                    /* try { // try from 00e3b7cc to 00f3b8f3 has its CatchHandler @ 00e3b7cc
                       catch() { ... } // from try @ 00e3b7cc with catch @ 00e3b7cc
                       catch() { ... } // from try @ 00e3b9cc with catch @ 00e3b7cc */
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e3b99c;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e3b99c;
            *(undefined4 *)(lVar17 + 0xbc) = 0;
          }
          else {
LAB_00e3b99c:
                    /* try { // try from 00e3b99c to 00f3b9a3 has its CatchHandler @ 00e3ba28 */
                    /* try { // try from 00e3b9a8 to 00f3b9cb has its CatchHandler @ 00e3ba2c */
            sVar5 = (ulong)(token[0x318] >> 1);
            if ((token[0x318] & 1) != 0) {
              sVar5 = token._800_8_;
            }
            if (sVar2 == sVar5) {
              pcVar13 = (char *)((ulong)&local_80 | 1);
                    /* try { // try from 00e3b9cc to 00f3ba47 has its CatchHandler @ 00e3b7cc */
              pcVar3 = pcVar13;
              if ((uVar18 & 1) != 0) {
                pcVar3 = local_70;
              }
              pcVar1 = token + 0x319;
              if ((token[0x318] & 1) != 0) {
                pcVar1 = (char *)token._808_8_;
              }
              sVar5 = sVar16;
              sVar7 = sVar2;
              if ((uVar18 & 1) == 0) {
                while (sVar7 != 0) {
                  if (*pcVar13 != *pcVar1) goto LAB_00e3bafc;
                  pcVar13 = pcVar13 + 1;
                  pcVar1 = pcVar1 + 1;
                  sVar5 = sVar5 - 1;
                  sVar7 = sVar5;
                }
              }
              else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e3bafc;
              uVar12 = 2;
            }
            else {
LAB_00e3bafc:
                    /* try { // try from 00e3bb08 to 00f3bb13 has its CatchHandler @ 00e3bc1c */
              sVar5 = (ulong)(token[0x330] >> 1);
              if ((token[0x330] & 1) != 0) {
                sVar5 = token._824_8_;
              }
              if (sVar2 != sVar5) goto LAB_00e3bbd0;
              pcVar13 = (char *)((ulong)&local_80 | 1);
              pcVar3 = pcVar13;
              if ((uVar18 & 1) != 0) {
                pcVar3 = local_70;
              }
              pcVar1 = token + 0x331;
              if ((token[0x330] & 1) != 0) {
                pcVar1 = (char *)token._832_8_;
              }
              if ((uVar18 & 1) == 0) {
                while (sVar2 != 0) {
                    /* try { // try from 00e3bb50 to 00f3bb57 has its CatchHandler @ 00e3bc10 */
                  if (*pcVar13 != *pcVar1) goto LAB_00e3bbd0;
                    /* try { // try from 00e3bb58 to 00f3bbcb has its CatchHandler @ 00e3ba48 */
                  pcVar13 = pcVar13 + 1;
                  pcVar1 = pcVar1 + 1;
                  sVar16 = sVar16 - 1;
                  sVar2 = sVar16;
                }
              }
              else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e3bbd0;
              uVar12 = 1;
            }
                    /* try { // try from 00e3bbcc to 00f3bbd3 has its CatchHandler @ 00e3bc1c */
            *(undefined4 *)(lVar17 + 0xbc) = uVar12;
          }
LAB_00e3bbd0:
                    /* try { // try from 00e3bbd4 to 00f3bc2f has its CatchHandler @ 00e3ba48 */
          uVar18 = PUScriptTranslator::getFloat
                             (*(PUAbstractNode **)(*(long *)(lVar15 + 8) + 0x10),&local_84);
          if ((uVar18 & 1) != 0) {
            *(undefined1 *)(lVar17 + 0xb2) = 1;
            *(float *)(lVar17 + 0xac) = local_84;
            goto joined_r0x00e3bbf8;
          }
          goto LAB_00e3bc00;
        }
      }
    }
  }
LAB_00e3bc10:
                    /* catch() { ... } // from try @ 00e3bb50 with catch @ 00e3bc10 */
  uVar10 = 0;
LAB_00e3bc14:
                    /* catch() { ... } // from try @ 00e3bb08 with catch @ 00e3bc1c
                       catch() { ... } // from try @ 00e3bbcc with catch @ 00e3bc1c */
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

