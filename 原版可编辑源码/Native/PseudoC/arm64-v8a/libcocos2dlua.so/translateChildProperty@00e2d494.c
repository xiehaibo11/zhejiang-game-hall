
/* cocos2d::PUScaleVelocityAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUScaleVelocityAffectorTranslator::translateChildProperty
          (PUScaleVelocityAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2
          )

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUDynamicAttributeFixed *this_00;
  PUAbstractNode *pPVar6;
  PUAbstractNode *pPVar7;
  ulong uVar8;
  PUScaleVelocityAffector *this_01;
  ulong uVar9;
  PUScaleVelocityAffector local_74 [4];
  PUScaleVelocityAffector local_70 [4];
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_01 = *(PUScaleVelocityAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1d40] >> 1);
  if ((token[0x1d40] & 1) != 0) {
    sVar1 = token._7496_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x1d41);
    if ((token[0x1d40] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._7504_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e2d57c;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e2d57c;
                    /* try { // try from 00e2d5f4 to 00f2d5f7 has its CatchHandler @ 00e2d674 */
                    /* try { // try from 00e2d5f8 to 00f2d687 has its CatchHandler @ 00e2d594 */
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178add0,0);
    uVar5 = 0;
    if ((uVar9 & 1) == 0) goto LAB_00e2d784;
    local_6c = 0.0;
    uVar9 = PUScriptTranslator::getFloat
                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar9 & 1) == 0) goto LAB_00e2d780;
    this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeFixed *)0x0) {
      PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
    }
    (**(code **)(*(long *)this_00 + 0x28))(local_6c,this_00);
    PUScaleVelocityAffector::setDynScaleVelocity(this_01,(PUDynamicAttribute *)this_00);
LAB_00e2d778:
    uVar5 = 1;
  }
  else {
LAB_00e2d57c:
    sVar1 = (ulong)(token[0x438] >> 1);
    if ((token[0x438] & 1) != 0) {
      sVar1 = token._1088_8_;
    }
                    /* try { // try from 00e2d594 to 00f2d5f3 has its CatchHandler @ 00e2d594
                       catch() { ... } // from try @ 00e2d594 with catch @ 00e2d594
                       catch() { ... } // from try @ 00e2d5f8 with catch @ 00e2d594 */
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x439);
      if ((token[0x438] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._1096_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          uVar8 = uVar9;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e2d67c;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00e2d5f4 with catch @ 00e2d674 */
        if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e2d67c;
      }
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x17894c8,1);
      if (((uVar9 & 1) != 0) &&
         (uVar9 = PUScriptTranslator::getBoolean
                            (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(bool *)local_70
                            ), (uVar9 & 1) != 0)) {
        this_01[0xb9] = local_70[0];
        goto LAB_00e2d778;
      }
    }
    else {
LAB_00e2d67c:
      sVar1 = (ulong)(token[0x1d58] >> 1);
      if ((token[0x1d58] & 1) != 0) {
        sVar1 = token._7520_8_;
      }
      if (__n == sVar1) {
        pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar7 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1d59);
        if ((token[0x1d58] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._7528_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar7 = param_2 + 0x39;
            do {
              if (*pPVar7 != *pPVar6) goto LAB_00e2d780;
              uVar9 = uVar9 - 1;
              pPVar7 = pPVar7 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e2d780;
        uVar9 = PUScriptTranslator::passValidateProperty
                          ((PUScriptTranslator *)this,param_1,param_2,0x178ade8,1);
        if (((uVar9 & 1) != 0) &&
           (uVar9 = PUScriptTranslator::getBoolean
                              (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                               (bool *)local_74), (uVar9 & 1) != 0)) {
          this_01[0xba] = local_74[0];
          goto LAB_00e2d778;
        }
      }
    }
LAB_00e2d780:
    uVar5 = 0;
  }
LAB_00e2d784:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

