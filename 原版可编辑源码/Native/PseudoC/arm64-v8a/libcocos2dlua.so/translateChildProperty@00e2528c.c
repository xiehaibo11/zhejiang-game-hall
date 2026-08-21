
/* cocos2d::PUColorAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUColorAffectorTranslator::translateChildProperty
          (PUColorAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  char *pcVar12;
  PUAbstractNode *pPVar13;
  PUColorAffector *this_00;
  size_t sVar14;
  ulong uVar15;
  float unaff_s8;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  float local_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
  uVar15 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUColorAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar15;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar14 = (ulong)(token[0x1758] >> 1);
  if ((token[0x1758] & 1) != 0) {
    sVar14 = token._5984_8_;
  }
                    /* try { // try from 00e25310 to 00f25317 has its CatchHandler @ 00e2566c */
  if (sVar2 == sVar14) {
    pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar13 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x1759);
    if ((token[0x1758] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._5992_8_;
    }
                    /* try { // try from 00e25334 to 00f2539f has its CatchHandler @ 00e25668 */
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar13 = param_2 + 0x39;
        uVar9 = uVar15;
        do {
          if (*pPVar13 != *pPVar11) goto LAB_00e25378;
          uVar9 = uVar9 - 1;
          pPVar13 = pPVar13 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e25378;
LAB_00e25474:
    uVar15 = PUScriptTranslator::passValidatePropertyNumberOfValuesRange
                       ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                        (basic_string *)(token + 0x1758),4,5);
    if ((uVar15 & 1) != 0) {
      Vec4::Vec4((Vec4 *)&local_98);
                    /* try { // try from 00e254a0 to 00f254a7 has its CatchHandler @ 00e25640 */
      pPVar13 = *(PUAbstractNode **)(param_2 + 0x60);
                    /* try { // try from 00e254a8 to 00f25523 has its CatchHandler @ 00e24f20 */
      if (pPVar13 != param_2 + 0x58) {
        iVar8 = 0;
        do {
          local_7c = 0.0;
          uVar15 = PUScriptTranslator::getFloat(*(PUAbstractNode **)(pPVar13 + 0x10),&local_7c);
          if ((uVar15 & 1) != 0) {
            switch(iVar8) {
            case 0:
              unaff_s8 = local_7c;
              break;
            case 1:
                    /* try { // try from 00e2552c to 00f2557b has its CatchHandler @ 00e24f20 */
              local_98 = CONCAT44(local_98._4_4_,local_7c);
              break;
            case 2:
              local_98 = CONCAT44(local_7c,(undefined4)local_98);
              break;
            case 3:
              local_90 = CONCAT44(local_90._4_4_,local_7c);
                    /* try { // try from 00e25524 to 00f2552b has its CatchHandler @ 00e25628 */
              break;
            case 4:
              local_90 = CONCAT44(local_7c,(undefined4)local_90);
            }
          }
          pPVar13 = *(PUAbstractNode **)(pPVar13 + 8);
          iVar8 = iVar8 + 1;
        } while (pPVar13 != param_2 + 0x58);
      }
                    /* try { // try from 00e25610 to 00f25617 has its CatchHandler @ 00e25640 */
                    /* try { // try from 00e25618 to 00f2561f has its CatchHandler @ 00e25628 */
      PUColorAffector::addColor(this_00,unaff_s8,(Vec4 *)&local_98);
                    /* try { // try from 00e25620 to 00f25627 has its CatchHandler @ 00e25668 */
      Vec4::~Vec4((Vec4 *)&local_98);
                    /* catch() { ... } // from try @ 00e25524 with catch @ 00e25628
                       catch() { ... } // from try @ 00e25618 with catch @ 00e25628
                       try { // try from 00e25628 to 00f2573b has its CatchHandler @ 00e24f20 */
      uVar10 = 1;
      goto LAB_00e256c8;
    }
  }
  else {
LAB_00e25378:
    sVar14 = (ulong)(token[6000] >> 1);
    if ((token[6000] & 1) != 0) {
      sVar14 = token._6008_8_;
    }
    if (sVar2 == sVar14) {
      pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e253a0 to 00f25417 has its CatchHandler @ 00e24f20 */
      if (((byte)PVar4 & 1) == 0) {
        pPVar13 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1771);
      if ((token[6000] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._6016_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar13 = param_2 + 0x39;
          uVar9 = uVar15;
          do {
            if (*pPVar13 != *pPVar11) goto LAB_00e25400;
            uVar9 = uVar9 - 1;
            pPVar13 = pPVar13 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e25400;
      goto LAB_00e25474;
    }
LAB_00e25400:
    sVar14 = (ulong)(token[0x1788] >> 1);
                    /* try { // try from 00e25418 to 00f25467 has its CatchHandler @ 00e256ac */
    if ((token[0x1788] & 1) != 0) {
      sVar14 = token._6032_8_;
    }
    if (sVar2 == sVar14) {
      pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar13 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1789);
      if ((token[0x1788] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._6040_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar13 = param_2 + 0x39;
          do {
            if (*pPVar13 != *pPVar11) goto LAB_00e256c4;
            uVar15 = uVar15 - 1;
            pPVar13 = pPVar13 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar15 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e256c4;
      uVar15 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178a818,4);
      if ((uVar15 & 1) != 0) {
        local_90 = 0;
        local_88 = (char *)0x0;
        local_98 = 0;
        uVar9 = PUScriptTranslator::getString
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                           (basic_string *)&local_98);
        uVar15 = local_98;
                    /* try { // try from 00e2557c to 00f25587 has its CatchHandler @ 00e25654 */
        if ((uVar9 & 1) != 0) {
          sVar14 = local_98 >> 1 & 0x7f;
          sVar2 = sVar14;
          if ((local_98 & 1) != 0) {
            sVar2 = local_90;
          }
          sVar5 = (ulong)(token[0x17b8] >> 1);
          if ((token[0x17b8] & 1) != 0) {
            sVar5 = token._6080_8_;
          }
          if (sVar2 == sVar5) {
                    /* try { // try from 00e255cc to 00f255d7 has its CatchHandler @ 00e256ac */
            pcVar12 = (char *)((ulong)&local_98 | 1);
            pcVar3 = pcVar12;
            if ((local_98 & 1) != 0) {
              pcVar3 = local_88;
            }
                    /* try { // try from 00e255d8 to 00f2560f has its CatchHandler @ 00e24f20 */
            pcVar1 = token + 0x17b9;
            if ((token[0x17b8] & 1) != 0) {
              pcVar1 = (char *)token._6088_8_;
            }
            sVar5 = sVar14;
            sVar7 = sVar2;
            if ((local_98 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar12 != *pcVar1) goto LAB_00e25640;
                pcVar12 = pcVar12 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e25640;
            local_7c = 1.4013e-45;
            PUColorAffector::setColorOperation(this_00,(ColorOperation *)&local_7c);
          }
          else {
LAB_00e25640:
                    /* catch() { ... } // from try @ 00e254a0 with catch @ 00e25640
                       catch() { ... } // from try @ 00e25610 with catch @ 00e25640 */
                    /* catch() { ... } // from try @ 00e2557c with catch @ 00e25654 */
            sVar5 = (ulong)(token[0x17a0] >> 1);
            if ((token[0x17a0] & 1) != 0) {
              sVar5 = token._6056_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e256b8;
                    /* catch() { ... } // from try @ 00e25334 with catch @ 00e25668
                       catch() { ... } // from try @ 00e25620 with catch @ 00e25668 */
                    /* catch() { ... } // from try @ 00e25310 with catch @ 00e2566c */
            pcVar12 = (char *)((ulong)&local_98 | 1);
            pcVar3 = pcVar12;
            if ((uVar15 & 1) != 0) {
              pcVar3 = local_88;
            }
            pcVar1 = token + 0x17a1;
            if ((token[0x17a0] & 1) != 0) {
              pcVar1 = (char *)token._6064_8_;
            }
            if ((uVar15 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar12 != *pcVar1) goto LAB_00e256c4;
                pcVar12 = pcVar12 + 1;
                    /* catch() { ... } // from try @ 00e25418 with catch @ 00e256ac
                       catch() { ... } // from try @ 00e255cc with catch @ 00e256ac */
                pcVar1 = pcVar1 + 1;
                sVar14 = sVar14 - 1;
                sVar2 = sVar14;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e256bc;
            local_7c = 0.0;
            PUColorAffector::setColorOperation(this_00,(ColorOperation *)&local_7c);
          }
          if ((local_98 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e25b00 with catch @ 00e2573c
                       catch() { ... } // from try @ 00e25b8c with catch @ 00e2573c
                       catch() { ... } // from try @ 00e25c3c with catch @ 00e2573c
                       catch() { ... } // from try @ 00e25d84 with catch @ 00e2573c */
            operator_delete(local_88);
          }
          uVar10 = 1;
          goto LAB_00e256c8;
        }
LAB_00e256b8:
        if ((uVar15 & 1) != 0) {
LAB_00e256bc:
          operator_delete(local_88);
        }
      }
    }
  }
LAB_00e256c4:
  uVar10 = 0;
LAB_00e256c8:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

