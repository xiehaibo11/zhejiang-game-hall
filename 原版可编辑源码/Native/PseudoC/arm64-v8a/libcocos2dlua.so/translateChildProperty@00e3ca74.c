
/* cocos2d::PUOnVelocityObserverTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUOnVelocityObserverTranslator::translateChildProperty
          (PUOnVelocityObserverTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUAbstractNode *__s2;
  undefined4 uVar11;
  ulong uVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  float local_74;
  ulong local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
  uVar12 = (ulong)((byte)PVar4 >> 1);
  sVar2 = uVar12;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar16 = (ulong)(token[0x2010] >> 1);
  if ((token[0x2010] & 1) != 0) {
    sVar16 = token._8216_8_;
  }
  if (sVar2 == sVar16) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e3caec to 00f3caef has its CatchHandler @ 00e3cbe0 */
    lVar17 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    __s2 = (PUAbstractNode *)(token + 0x2011);
    if ((token[0x2010] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._8224_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        do {
          if (*pPVar14 != *__s2) goto LAB_00e3cd7c;
          uVar12 = uVar12 - 1;
                    /* try { // try from 00e3cb34 to 00f3cb37 has its CatchHandler @ 00e3cbf4 */
          pPVar14 = pPVar14 + 1;
                    /* try { // try from 00e3cb38 to 00f3cc2b has its CatchHandler @ 00e3ca24 */
          __s2 = __s2 + 1;
        } while (uVar12 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,__s2,sVar2), iVar8 != 0)) goto LAB_00e3cd7c;
    uVar12 = PUScriptTranslator::passValidatePropertyNumberOfValues
                       ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                        (basic_string *)(token + 0x2010),2);
    if ((uVar12 & 1) != 0) {
      local_68 = 0;
      local_60 = (char *)0x0;
      local_70 = 0;
      local_74 = 0.0;
      lVar15 = *(long *)(param_2 + 0x60);
      uVar9 = PUScriptTranslator::getString
                        (*(PUAbstractNode **)(lVar15 + 0x10),(basic_string *)&local_70);
      uVar12 = local_70;
      if ((uVar9 & 1) != 0) {
        sVar16 = local_70 >> 1 & 0x7f;
        sVar2 = sVar16;
        if ((local_70 & 1) != 0) {
          sVar2 = local_68;
        }
        sVar5 = (ulong)(token[0x300] >> 1);
        if ((token[0x300] & 1) != 0) {
          sVar5 = token._776_8_;
        }
        if (sVar2 == sVar5) {
          pcVar13 = (char *)((ulong)&local_70 | 1);
          pcVar3 = pcVar13;
          if ((local_70 & 1) != 0) {
            pcVar3 = local_60;
          }
          pcVar1 = token + 0x301;
                    /* catch() { ... } // from try @ 00e3caec with catch @ 00e3cbe0 */
          if ((token[0x300] & 1) != 0) {
            pcVar1 = (char *)token._784_8_;
          }
          sVar5 = sVar16;
          sVar7 = sVar2;
          if ((local_70 & 1) == 0) {
            while (sVar7 != 0) {
                    /* catch() { ... } // from try @ 00e3cb34 with catch @ 00e3cbf4 */
              if (*pcVar13 != *pcVar1) goto LAB_00e3cc24;
              pcVar13 = pcVar13 + 1;
              pcVar1 = pcVar1 + 1;
              sVar5 = sVar5 - 1;
              sVar7 = sVar5;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e3cc24;
          *(undefined4 *)(lVar17 + 0xa8) = 0;
        }
        else {
LAB_00e3cc24:
                    /* catch() { ... } // from try @ 00e3cc58 with catch @ 00e3cc2c */
          sVar5 = (ulong)(token[0x318] >> 1);
          if ((token[0x318] & 1) != 0) {
            sVar5 = token._800_8_;
          }
          if (sVar2 == sVar5) {
                    /* try { // try from 00e3cc50 to 00f3cc57 has its CatchHandler @ 00e3cc9c */
            pcVar13 = (char *)((ulong)&local_70 | 1);
            pcVar3 = pcVar13;
                    /* try { // try from 00e3cc58 to 00f3ccb7 has its CatchHandler @ 00e3cc2c */
            if ((uVar12 & 1) != 0) {
              pcVar3 = local_60;
            }
            pcVar1 = token + 0x319;
            if ((token[0x318] & 1) != 0) {
              pcVar1 = (char *)token._808_8_;
            }
            sVar5 = sVar16;
            sVar7 = sVar2;
            if ((uVar12 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e3ccac;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else {
                    /* catch() { ... } // from try @ 00e3cc50 with catch @ 00e3cc9c */
              if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e3ccac;
            }
            uVar11 = 2;
          }
          else {
LAB_00e3ccac:
                    /* catch() { ... } // from try @ 00e3ccfc with catch @ 00e3ccb8 */
            sVar5 = (ulong)(token[0x330] >> 1);
            if ((token[0x330] & 1) != 0) {
              sVar5 = token._824_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e3cd38;
            pcVar13 = (char *)((ulong)&local_70 | 1);
            pcVar3 = pcVar13;
            if ((uVar12 & 1) != 0) {
              pcVar3 = local_60;
            }
            pcVar1 = token + 0x331;
            if ((token[0x330] & 1) != 0) {
              pcVar1 = (char *)token._832_8_;
            }
            if ((uVar12 & 1) == 0) {
              while (sVar2 != 0) {
                    /* try { // try from 00e3ccf4 to 00f3ccfb has its CatchHandler @ 00e3cd80 */
                    /* try { // try from 00e3ccfc to 00f3cd9b has its CatchHandler @ 00e3ccb8 */
                if (*pcVar13 != *pcVar1) goto LAB_00e3cd38;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar16 = sVar16 - 1;
                sVar2 = sVar16;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e3cd38;
            uVar11 = 1;
          }
          *(undefined4 *)(lVar17 + 0xa8) = uVar11;
        }
LAB_00e3cd38:
        uVar12 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(lVar15 + 8) + 0x10),&local_74);
        if ((uVar12 & 1) != 0) {
          *(float *)(lVar17 + 0xa4) = local_74;
          if ((local_70 & 1) != 0) {
            operator_delete(local_60);
          }
          uVar10 = 1;
          goto LAB_00e3cd80;
        }
      }
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
  }
LAB_00e3cd7c:
  uVar10 = 0;
LAB_00e3cd80:
                    /* catch() { ... } // from try @ 00e3ccf4 with catch @ 00e3cd80 */
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

