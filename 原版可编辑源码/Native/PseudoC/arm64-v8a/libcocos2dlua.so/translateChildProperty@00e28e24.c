
/* cocos2d::PUJetAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUJetAffectorTranslator::translateChildProperty
          (PUJetAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUJetAffector *this_01;
  ulong uVar9;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e28e4c to 00f28e53 has its CatchHandler @ 00e293f8 */
                    /* try { // try from 00e28e54 to 00f28e5f has its CatchHandler @ 00e29408 */
  PVar2 = param_2[0x38];
                    /* try { // try from 00e28e74 to 00f28e7f has its CatchHandler @ 00e293c8 */
  uVar9 = (ulong)((byte)PVar2 >> 1);
                    /* try { // try from 00e28e80 to 00f28ecb has its CatchHandler @ 00e28ac8 */
  this_01 = *(PUJetAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x18] >> 1);
  if ((token[0x18] & 1) != 0) {
    sVar1 = token._32_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x19);
    if ((token[0x18] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._40_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
                    /* try { // try from 00e28ecc to 00f28ed3 has its CatchHandler @ 00e29408 */
          if (*pPVar7 != *pPVar6) goto LAB_00e28f00;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e28f00;
                    /* try { // try from 00e28f80 to 00f28f93 has its CatchHandler @ 00e293dc */
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x17890a8,0);
    uVar5 = 0;
                    /* try { // try from 00e28f94 to 00f2903f has its CatchHandler @ 00e28ac8 */
    if ((uVar9 & 1) == 0) goto LAB_00e29070;
    local_6c = 0.0;
    uVar9 = PUScriptTranslator::getFloat
                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar9 & 1) == 0) goto LAB_00e2906c;
    this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeFixed *)0x0) {
      PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
    }
LAB_00e29044:
    (**(code **)(*(long *)this_00 + 0x28))(local_6c,this_00);
    PUJetAffector::setDynAcceleration(this_01,(PUDynamicAttribute *)this_00);
    uVar5 = 1;
  }
  else {
LAB_00e28f00:
                    /* try { // try from 00e28f10 to 00f28f23 has its CatchHandler @ 00e29398 */
    sVar1 = (ulong)(token[0x1ad0] >> 1);
    if ((token[0x1ad0] & 1) != 0) {
      sVar1 = token._6872_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1ad1);
      if ((token[0x1ad0] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._6880_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          do {
                    /* try { // try from 00e28f54 to 00f28f67 has its CatchHandler @ 00e29394 */
            if (*pPVar7 != *pPVar6) goto LAB_00e2906c;
            uVar9 = uVar9 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e2906c;
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x178ab60,0);
      uVar5 = 0;
      if ((uVar9 & 1) == 0) goto LAB_00e29070;
      local_6c = 0.0;
      uVar9 = PUScriptTranslator::getFloat
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
      if ((uVar9 & 1) != 0) {
        this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
        if (this_00 != (PUDynamicAttributeFixed *)0x0) {
                    /* try { // try from 00e29040 to 00f29047 has its CatchHandler @ 00e29398 */
          PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
        }
        goto LAB_00e29044;
      }
    }
LAB_00e2906c:
    uVar5 = 0;
  }
LAB_00e29070:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

