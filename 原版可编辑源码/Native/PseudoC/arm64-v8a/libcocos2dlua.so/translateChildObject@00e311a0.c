
/* cocos2d::PUVortexAffectorTranslator::translateChildObject(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

undefined4 __thiscall
cocos2d::PUVortexAffectorTranslator::translateChildObject
          (PUVortexAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUVortexAffector *this_00;
  ulong uVar9;
  PUDynamicAttributeTranslator aPStack_78 [16];
  long local_68;
  
                    /* try { // try from 00e311b4 to 00f311b7 has its CatchHandler @ 00e311d4 */
                    /* try { // try from 00e311b8 to 00f311e7 has its CatchHandler @ 00e31188 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00e311b4 with catch @ 00e311d4 */
  this_00 = *(PUVortexAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  PUDynamicAttributeTranslator::PUDynamicAttributeTranslator(aPStack_78);
  PVar2 = param_2[0x78];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x80);
  }
                    /* try { // try from 00e31210 to 00f31213 has its CatchHandler @ 00e31234 */
  sVar1 = (ulong)(token[0x198] >> 1);
  if ((token[0x198] & 1) != 0) {
    sVar1 = token._416_8_;
  }
  if (__n == sVar1) {
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e31210 with catch @ 00e31234
                        */
    pPVar5 = (PUAbstractNode *)(token + 0x199);
    if ((token[0x198] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._424_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        uVar7 = uVar9;
        do {
          if (*pPVar6 != *pPVar5) goto LAB_00e31280;
          uVar7 = uVar7 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar7 != 0);
      }
    }
    else {
                    /* catch() { ... } // from try @ 00e312c4 with catch @ 00e31274
                       catch() { ... } // from try @ 00e31648 with catch @ 00e31274 */
      if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e31280;
    }
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
    PUVortexAffector::setRotationSpeed(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
  else {
LAB_00e31280:
    sVar1 = (ulong)(token[0x1f50] >> 1);
    if ((token[0x1f50] & 1) != 0) {
      sVar1 = token._8024_8_;
    }
    if (__n != sVar1) {
LAB_00e31324:
      uVar8 = 0;
      goto LAB_00e3134c;
    }
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
                    /* try { // try from 00e312bc to 00f312c3 has its CatchHandler @ 00e316b0 */
    pPVar5 = (PUAbstractNode *)(token + 0x1f51);
    if ((token[0x1f50] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._8032_8_;
    }
                    /* try { // try from 00e312c4 to 00f3156b has its CatchHandler @ 00e31274 */
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        do {
          if (*pPVar6 != *pPVar5) goto LAB_00e31324;
          uVar9 = uVar9 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e31324;
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
    PUVortexAffector::setRotationSpeed(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
  uVar8 = 1;
LAB_00e3134c:
  PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator(aPStack_78);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

