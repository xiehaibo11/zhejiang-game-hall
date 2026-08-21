
/* cocos2d::PUGeometryRotatorTranslator::translateChildObject(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

undefined4 __thiscall
cocos2d::PUGeometryRotatorTranslator::translateChildObject
          (PUGeometryRotatorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUGeometryRotator *this_00;
  ulong uVar9;
  PUDynamicAttributeTranslator aPStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e27b10 to 00f27b13 has its CatchHandler @ 00e27b94 */
                    /* try { // try from 00e27b14 to 00f27bc7 has its CatchHandler @ 00e27a84 */
  this_00 = *(PUGeometryRotator **)(*(long *)(param_2 + 0x28) + 0x30);
  PUDynamicAttributeTranslator::PUDynamicAttributeTranslator(aPStack_78);
  PVar2 = param_2[0x78];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x80);
  }
  sVar1 = (ulong)(token[0x198] >> 1);
  if ((token[0x198] & 1) != 0) {
    sVar1 = token._416_8_;
  }
  if (__n == sVar1) {
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
    pPVar5 = (PUAbstractNode *)(token + 0x199);
    if ((token[0x198] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._424_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        uVar7 = uVar9;
        do {
                    /* catch() { ... } // from try @ 00e27b10 with catch @ 00e27b94 */
          if (*pPVar6 != *pPVar5) goto LAB_00e27bc4;
          uVar7 = uVar7 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e27bc4;
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
    PUGeometryRotator::setRotationSpeed(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
  else {
LAB_00e27bc4:
    sVar1 = (ulong)(token[0x19f8] >> 1);
    if ((token[0x19f8] & 1) != 0) {
      sVar1 = token._6656_8_;
    }
    if (__n != sVar1) {
LAB_00e27c68:
      uVar8 = 0;
      goto LAB_00e27c90;
    }
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
    pPVar5 = (PUAbstractNode *)(token + 0x19f9);
    if ((token[0x19f8] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._6664_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        do {
          if (*pPVar6 != *pPVar5) goto LAB_00e27c68;
          uVar9 = uVar9 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e27c68;
                    /* catch() { ... } // from try @ 00e27d00 with catch @ 00e27c78
                       catch() { ... } // from try @ 00e289a0 with catch @ 00e27c78 */
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
    PUGeometryRotator::setRotationSpeed(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
  uVar8 = 1;
LAB_00e27c90:
  PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator(aPStack_78);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

