
/* cocos2d::PUScaleVelocityAffectorTranslator::translateChildObject(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

undefined4 __thiscall
cocos2d::PUScaleVelocityAffectorTranslator::translateChildObject
          (PUScaleVelocityAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2
          )

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  PUAbstractNode *__s2;
  ulong uVar5;
  PUAbstractNode *pPVar6;
  undefined4 uVar7;
  PUScaleVelocityAffector *this_00;
  PUDynamicAttributeTranslator aPStack_48 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = *(PUScaleVelocityAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  PUDynamicAttributeTranslator::PUDynamicAttributeTranslator(aPStack_48);
  PVar2 = param_2[0x78];
  uVar5 = (ulong)((byte)PVar2 >> 1);
  __n = uVar5;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x80);
  }
  sVar1 = (ulong)(token[0x1d40] >> 1);
  if ((token[0x1d40] & 1) != 0) {
    sVar1 = token._7496_8_;
  }
  if (__n == sVar1) {
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
    __s2 = (PUAbstractNode *)(token + 0x1d41);
    if ((token[0x1d40] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._7504_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        do {
          if (*pPVar6 != *__s2) goto LAB_00e2d8ac;
          uVar5 = uVar5 - 1;
          pPVar6 = pPVar6 + 1;
          __s2 = __s2 + 1;
        } while (uVar5 != 0);
      }
    }
    else {
                    /* try { // try from 00e2d8a4 to 00f2d947 has its CatchHandler @ 00e2d8a4
                       catch() { ... } // from try @ 00e2d8a4 with catch @ 00e2d8a4
                       catch() { ... } // from try @ 00e2d974 with catch @ 00e2d8a4 */
      if ((__n != 0) && (iVar4 = memcmp(pPVar6,__s2,__n), iVar4 != 0)) goto LAB_00e2d8ac;
    }
    PUDynamicAttributeTranslator::translate(aPStack_48,param_1,param_2);
    PUScaleVelocityAffector::setDynScaleVelocity(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
    uVar7 = 1;
  }
  else {
LAB_00e2d8ac:
    uVar7 = 0;
  }
  PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator(aPStack_48);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

