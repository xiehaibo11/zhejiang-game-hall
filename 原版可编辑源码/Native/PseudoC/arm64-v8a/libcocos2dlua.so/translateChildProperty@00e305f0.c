
/* cocos2d::PUVelocityMatchingAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUVelocityMatchingAffectorTranslator::translateChildProperty
          (PUVelocityMatchingAffectorTranslator *this,PUScriptCompiler *param_1,
          PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUAbstractNode *pPVar6;
  PUAbstractNode *pPVar7;
  ulong uVar8;
  PUVelocityMatchingAffector *this_00;
  ulong uVar9;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUVelocityMatchingAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x2a0] >> 1);
  if ((token[0x2a0] & 1) != 0) {
    sVar1 = token._680_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x2a1);
    if ((token[0x2a0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._688_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e306cc;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e306cc;
    uVar5 = 0x1789330;
LAB_00e30760:
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
    uVar5 = 0;
                    /* try { // try from 00e3077c to 00f3078b has its CatchHandler @ 00e30818 */
    if ((uVar9 & 1) == 0) goto LAB_00e307b0;
    local_6c = 0.0;
    uVar9 = PUScriptTranslator::getFloat
                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar9 & 1) != 0) {
      PUVelocityMatchingAffector::setRadius(this_00,local_6c);
      uVar5 = 1;
      goto LAB_00e307b0;
    }
  }
  else {
LAB_00e306cc:
    sVar1 = (ulong)(token[0x1f20] >> 1);
    if ((token[0x1f20] & 1) != 0) {
      sVar1 = token._7976_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1f21);
      if ((token[0x1f20] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7984_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          do {
                    /* try { // try from 00e30724 to 00f30727 has its CatchHandler @ 00e30830 */
            if (*pPVar7 != *pPVar6) goto LAB_00e307ac;
            uVar9 = uVar9 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e307ac;
      uVar5 = 0x178afb0;
      goto LAB_00e30760;
    }
  }
LAB_00e307ac:
  uVar5 = 0;
LAB_00e307b0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 00e307d8 to 00f307db has its CatchHandler @ 00e3081c */
  return;
}

