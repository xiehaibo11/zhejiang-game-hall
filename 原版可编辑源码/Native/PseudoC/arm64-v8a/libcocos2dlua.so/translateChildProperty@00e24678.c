
/* cocos2d::PUCollisionAvoidanceAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUCollisionAvoidanceAffectorTranslator::translateChildProperty
          (PUCollisionAvoidanceAffectorTranslator *this,PUScriptCompiler *param_1,
          PUAbstractNode *param_2)

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
  PUCollisionAvoidanceAffector *this_00;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e246a4 to 00f246ab has its CatchHandler @ 00e246bc */
  PVar2 = param_2[0x38];
                    /* try { // try from 00e246ac to 00f246b3 has its CatchHandler @ 00e246b8 */
                    /* try { // try from 00e246b4 to 00f247eb has its CatchHandler @ 00e242c0 */
                    /* catch() { ... } // from try @ 00e246ac with catch @ 00e246b8 */
                    /* catch() { ... } // from try @ 00e246a4 with catch @ 00e246bc */
                    /* catch() { ... } // from try @ 00e24304 with catch @ 00e246c0 */
  uVar6 = (ulong)((byte)PVar2 >> 1);
  __n = uVar6;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
                    /* catch() { ... } // from try @ 00e24528 with catch @ 00e246d4 */
  sVar1 = (ulong)(token[0x1740] >> 1);
  if ((token[0x1740] & 1) != 0) {
    sVar1 = token._5960_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* catch() { ... } // from try @ 00e244a0 with catch @ 00e246ec */
    this_00 = *(PUCollisionAvoidanceAffector **)(*(long *)(param_2 + 0x28) + 0x30);
                    /* catch() { ... } // from try @ 00e2457c with catch @ 00e24700 */
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    __s2 = (PUAbstractNode *)(token + 0x1741);
    if ((token[0x1740] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._5968_8_;
    }
                    /* catch() { ... } // from try @ 00e243b0 with catch @ 00e24714 */
    if (((byte)PVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00e24380 with catch @ 00e24718 */
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        do {
                    /* catch() { ... } // from try @ 00e24418 with catch @ 00e24728
                       catch() { ... } // from try @ 00e245a0 with catch @ 00e24728 */
          if (*pPVar7 != *__s2) goto LAB_00e247a4;
          uVar6 = uVar6 - 1;
          pPVar7 = pPVar7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,__s2,__n), iVar4 != 0)) goto LAB_00e247a4;
    uVar6 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178a7d0,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00e247a8;
    local_4c = 0.0;
    uVar6 = PUScriptTranslator::getFloat
                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_4c);
    if ((uVar6 & 1) != 0) {
      PUCollisionAvoidanceAffector::setRadius(this_00,local_4c);
      uVar5 = 1;
      goto LAB_00e247a8;
    }
  }
LAB_00e247a4:
  uVar5 = 0;
LAB_00e247a8:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

