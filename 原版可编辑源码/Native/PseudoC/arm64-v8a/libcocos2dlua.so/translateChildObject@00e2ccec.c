
/* cocos2d::PUScaleAffectorTranslator::translateChildObject(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

undefined4 __thiscall
cocos2d::PUScaleAffectorTranslator::translateChildObject
          (PUScaleAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  PUAbstractNode *pPVar5;
  PUAbstractNode *pPVar6;
  ulong uVar7;
  undefined4 uVar8;
  PUScaleAffector *this_00;
  ulong uVar9;
  PUDynamicAttributeTranslator aPStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = *(PUScaleAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  PUDynamicAttributeTranslator::PUDynamicAttributeTranslator(aPStack_78);
  PVar2 = param_2[0x78];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x80);
  }
  sVar1 = (ulong)(token[0x1ce0] >> 1);
  if ((token[0x1ce0] & 1) != 0) {
    sVar1 = token._7400_8_;
  }
  if (__n == sVar1) {
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
    pPVar5 = (PUAbstractNode *)(token + 0x1ce1);
    if ((token[0x1ce0] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._7408_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        uVar7 = uVar9;
        do {
          if (*pPVar6 != *pPVar5) goto LAB_00e2cdd8;
          uVar7 = uVar7 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e2cdd8;
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
                    /* try { // try from 00e2ce60 to 00f2ce97 has its CatchHandler @ 00e2ceb4 */
    PUScaleAffector::setDynScaleXYZ(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
  else {
LAB_00e2cdd8:
    sVar1 = (ulong)(token[0x1cf8] >> 1);
    if ((token[0x1cf8] & 1) != 0) {
      sVar1 = token._7424_8_;
    }
    if (__n == sVar1) {
                    /* try { // try from 00e2cdfc to 00f2ce03 has its CatchHandler @ 00e2ceb8 */
      pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
      if (((byte)PVar2 & 1) == 0) {
        pPVar6 = param_2 + 0x79;
      }
      pPVar5 = (PUAbstractNode *)(token + 0x1cf9);
      if ((token[0x1cf8] & 1) != 0) {
        pPVar5 = (PUAbstractNode *)token._7432_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar6 = param_2 + 0x79;
          uVar7 = uVar9;
          do {
            if (*pPVar6 != *pPVar5) goto LAB_00e2ce80;
            uVar7 = uVar7 - 1;
            pPVar6 = pPVar6 + 1;
            pPVar5 = pPVar5 + 1;
          } while (uVar7 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e2ce80;
      PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
      PUScaleAffector::setDynScaleX(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
    }
    else {
LAB_00e2ce80:
      sVar1 = (ulong)(token[0x1d10] >> 1);
                    /* try { // try from 00e2ce98 to 00f2cec7 has its CatchHandler @ 00e2c7a0 */
      if ((token[0x1d10] & 1) != 0) {
        sVar1 = token._7448_8_;
      }
      if (__n == sVar1) {
        pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
                    /* catch() { ... } // from try @ 00e2ce60 with catch @ 00e2ceb4 */
                    /* catch() { ... } // from try @ 00e2cdfc with catch @ 00e2ceb8 */
        if (((byte)PVar2 & 1) == 0) {
          pPVar6 = param_2 + 0x79;
        }
        pPVar5 = (PUAbstractNode *)(token + 0x1d11);
        if ((token[0x1d10] & 1) != 0) {
          pPVar5 = (PUAbstractNode *)token._7456_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar6 = param_2 + 0x79;
            uVar7 = uVar9;
            do {
              if (*pPVar6 != *pPVar5) goto LAB_00e2cf28;
              uVar7 = uVar7 - 1;
              pPVar6 = pPVar6 + 1;
              pPVar5 = pPVar5 + 1;
            } while (uVar7 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e2cf28;
        PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
        PUScaleAffector::setDynScaleY(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
      }
      else {
LAB_00e2cf28:
        sVar1 = (ulong)(token[0x1d28] >> 1);
        if ((token[0x1d28] & 1) != 0) {
          sVar1 = token._7472_8_;
        }
        if (__n != sVar1) {
LAB_00e2cfcc:
          uVar8 = 0;
          goto LAB_00e2cff4;
        }
        pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
        if (((byte)PVar2 & 1) == 0) {
          pPVar6 = param_2 + 0x79;
        }
        pPVar5 = (PUAbstractNode *)(token + 0x1d29);
        if ((token[0x1d28] & 1) != 0) {
          pPVar5 = (PUAbstractNode *)token._7480_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar6 = param_2 + 0x79;
            do {
              if (*pPVar6 != *pPVar5) goto LAB_00e2cfcc;
              uVar9 = uVar9 - 1;
              pPVar6 = pPVar6 + 1;
              pPVar5 = pPVar5 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e2cfcc;
        PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
        PUScaleAffector::setDynScaleZ(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
      }
    }
  }
  uVar8 = 1;
LAB_00e2cff4:
  PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator(aPStack_78);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00e2d020 to 00f2d0a7 has its CatchHandler @ 00e2d020
                       catch() { ... } // from try @ 00e2d020 with catch @ 00e2d020
                       catch() { ... } // from try @ 00e2d0b0 with catch @ 00e2d020
                       catch() { ... } // from try @ 00e2d11c with catch @ 00e2d020 */
  return uVar8;
}

