
/* cocos2d::PUPathFollowerTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUPathFollowerTranslator::translateChildProperty
          (PUPathFollowerTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUAbstractNode *__s2;
  ulong uVar6;
  PUAbstractNode *pPVar7;
  PUPathFollower *this_00;
  Vec3 aVStack_58 [16];
  long local_48;
  
                    /* catch() { ... } // from try @ 00e2a7d8 with catch @ 00e2a914 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e2a92c to 00f2a9c7 has its CatchHandler @ 00e2a92c
                       catch() { ... } // from try @ 00e2a92c with catch @ 00e2a92c
                       catch() { ... } // from try @ 00e2a9d8 with catch @ 00e2a92c */
  PVar2 = param_2[0x38];
  uVar6 = (ulong)((byte)PVar2 >> 1);
  __n = uVar6;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1bd8] >> 1);
  if ((token[0x1bd8] & 1) != 0) {
    sVar1 = token._7136_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    this_00 = *(PUPathFollower **)(*(long *)(param_2 + 0x28) + 0x30);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    __s2 = (PUAbstractNode *)(token + 0x1bd9);
    if ((token[0x1bd8] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._7144_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        do {
          if (*pPVar7 != *__s2) goto LAB_00e2aa3c;
          uVar6 = uVar6 - 1;
                    /* try { // try from 00e2a9c8 to 00f2a9d7 has its CatchHandler @ 00e2aac4 */
          pPVar7 = pPVar7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
                    /* try { // try from 00e2a9d8 to 00f2aadb has its CatchHandler @ 00e2a92c */
      if ((__n != 0) && (iVar4 = memcmp(pPVar7,__s2,__n), iVar4 != 0)) goto LAB_00e2aa3c;
    }
    uVar6 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178ac68,6);
    if ((uVar6 & 1) != 0) {
      Vec3::Vec3(aVStack_58);
      uVar6 = PUScriptTranslator::getVector3
                        ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),param_2 + 0x58,
                         aVStack_58,3);
      if ((uVar6 & 1) != 0) {
        PUPathFollower::addPoint(this_00,aVStack_58);
        uVar5 = 1;
        goto LAB_00e2aa40;
      }
    }
  }
LAB_00e2aa3c:
  uVar5 = 0;
LAB_00e2aa40:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

