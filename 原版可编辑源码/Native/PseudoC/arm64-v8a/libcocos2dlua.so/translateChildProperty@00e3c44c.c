
/* cocos2d::PUOnTimeObserverTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUOnTimeObserverTranslator::translateChildProperty
          (PUOnTimeObserverTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  
                    /* try { // try from 00e3c44c to 00f3c44f has its CatchHandler @ 00e3c48c */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c44c with catch @ 00e3c48c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c414 with catch @ 00e3c4a0
                        */
  uVar18 = (ulong)((byte)PVar4 >> 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c3ec with catch @ 00e3c4a4
                        */
  lVar17 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar18;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar16 = (ulong)(token[0x1ff8] >> 1);
  if ((token[0x1ff8] & 1) != 0) {
    sVar16 = token._8192_8_;
  }
  if (sVar2 == sVar16) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x1ff9);
    if ((token[0x1ff8] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._8200_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        uVar9 = uVar18;
        do {
          if (*pPVar14 != *pPVar11) goto LAB_00e3c534;
          uVar9 = uVar9 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e3c534;
                    /* try { // try from 00e3c5a0 to 00f3c677 has its CatchHandler @ 00e3c558 */
    uVar18 = PUScriptTranslator::passValidatePropertyNumberOfValues
                       ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                        (basic_string *)(token + 0x1ff8),2);
    if ((uVar18 & 1) != 0) {
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
              if (*pcVar13 != *pcVar1) goto LAB_00e3c6bc;
              pcVar13 = pcVar13 + 1;
              pcVar1 = pcVar1 + 1;
              sVar5 = sVar5 - 1;
              sVar7 = sVar5;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e3c6bc;
          *(undefined4 *)(lVar17 + 0xa8) = 0;
        }
        else {
LAB_00e3c6bc:
                    /* try { // try from 00e3c6c4 to 00f3c6cb has its CatchHandler @ 00e3c7f4 */
          sVar5 = (ulong)(token[0x318] >> 1);
                    /* try { // try from 00e3c6cc to 00f3c80f has its CatchHandler @ 00e3c678 */
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
                if (*pcVar13 != *pcVar1) goto LAB_00e3c744;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e3c744;
            uVar12 = 2;
          }
          else {
LAB_00e3c744:
            sVar5 = (ulong)(token[0x330] >> 1);
            if ((token[0x330] & 1) != 0) {
              sVar5 = token._824_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e3c7d0;
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
                if (*pcVar13 != *pcVar1) goto LAB_00e3c7d0;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar16 = sVar16 - 1;
                sVar2 = sVar16;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e3c7d0;
            uVar12 = 1;
          }
          *(undefined4 *)(lVar17 + 0xa8) = uVar12;
        }
LAB_00e3c7d0:
        uVar18 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(lVar15 + 8) + 0x10),&local_84);
        if ((uVar18 & 1) != 0) {
          *(float *)(lVar17 + 0xa4) = local_84;
          if ((local_80 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e3c6c4 with catch @ 00e3c7f4 */
            operator_delete(local_70);
          }
          goto LAB_00e3c7fc;
        }
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  else {
LAB_00e3c534:
    sVar16 = (ulong)(token[0x438] >> 1);
    if ((token[0x438] & 1) != 0) {
      sVar16 = token._1088_8_;
    }
    if (sVar2 == sVar16) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* catch() { ... } // from try @ 00e3c5a0 with catch @ 00e3c558 */
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x439);
      if ((token[0x438] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._1096_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e3c814;
            uVar18 = uVar18 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar18 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e3c814;
                    /* catch() { ... } // from try @ 00e3c6cc with catch @ 00e3c678 */
      uVar18 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x17894c8,1);
      if (((uVar18 & 1) != 0) &&
         (uVar18 = PUScriptTranslator::getBoolean
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                              (bool *)&local_80), (uVar18 & 1) != 0)) {
        *(basic_string *)(lVar17 + 0xac) = local_80._0_1_;
LAB_00e3c7fc:
        uVar10 = 1;
        goto LAB_00e3c818;
      }
    }
  }
LAB_00e3c814:
  uVar10 = 0;
LAB_00e3c818:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

