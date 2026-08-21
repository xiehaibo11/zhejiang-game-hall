
/* cocos2d::PUJetAffectorTranslator::translateChildObject(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

undefined4 __thiscall
cocos2d::PUJetAffectorTranslator::translateChildObject
          (PUJetAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUJetAffector *this_00;
  ulong uVar9;
  PUDynamicAttributeTranslator aPStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = *(PUJetAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  PUDynamicAttributeTranslator::PUDynamicAttributeTranslator(aPStack_78);
  PVar2 = param_2[0x78];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x80);
  }
  sVar1 = (ulong)(token[0x18] >> 1);
  if ((token[0x18] & 1) != 0) {
    sVar1 = token._32_8_;
  }
  if (__n == sVar1) {
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
    pPVar5 = (PUAbstractNode *)(token + 0x19);
    if ((token[0x18] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._40_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        uVar7 = uVar9;
        do {
          if (*pPVar6 != *pPVar5) goto LAB_00e291a4;
          uVar7 = uVar7 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e291a4;
                    /* try { // try from 00e29224 to 00f2924f has its CatchHandler @ 00e293d8 */
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
    PUJetAffector::setDynAcceleration(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
  else {
LAB_00e291a4:
    sVar1 = (ulong)(token[0x1ad0] >> 1);
    if ((token[0x1ad0] & 1) != 0) {
      sVar1 = token._6872_8_;
    }
    if (__n != sVar1) {
LAB_00e29248:
      uVar8 = 0;
      goto LAB_00e29270;
    }
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
                    /* try { // try from 00e291d8 to 00f291eb has its CatchHandler @ 00e29364 */
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
    pPVar5 = (PUAbstractNode *)(token + 0x1ad1);
    if ((token[0x1ad0] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._6880_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        do {
          if (*pPVar6 != *pPVar5) goto LAB_00e29248;
          uVar9 = uVar9 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e29248;
                    /* try { // try from 00e29250 to 00f2926b has its CatchHandler @ 00e28ac8 */
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
    PUJetAffector::setDynAcceleration(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
                    /* try { // try from 00e2926c to 00f2927b has its CatchHandler @ 00e29360 */
  uVar8 = 1;
LAB_00e29270:
  PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator(aPStack_78);
                    /* try { // try from 00e2927c to 00f2928f has its CatchHandler @ 00e2934c */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00e29290 to 00f2933f has its CatchHandler @ 00e28ac8 */
  return uVar8;
}

