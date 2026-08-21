
/* cocos2d::PUSphereColliderTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

uint __thiscall
cocos2d::PUSphereColliderTranslator::translateChildProperty
          (PUSphereColliderTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  PUAbstractNode *pPVar6;
  undefined8 uVar7;
  PUAbstractNode *pPVar8;
  ulong uVar9;
  PUSphereCollider *this_00;
  ulong uVar10;
  float local_70 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUSphereCollider **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x2a0] >> 1);
  if ((token[0x2a0] & 1) != 0) {
    sVar1 = token._680_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x2a1);
    if ((token[0x2a0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._688_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e2e658;
          uVar9 = uVar9 - 1;
                    /* try { // try from 00e2e638 to 00f2e7b7 has its CatchHandler @ 00e2e84c */
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2e658;
    uVar7 = 0x1789330;
LAB_00e2e764:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,uVar7,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e2e830;
    local_70[0] = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_70);
    if ((uVar10 & 1) != 0) {
      PUSphereCollider::setRadius(this_00,local_70[0]);
      uVar5 = 1;
      goto LAB_00e2e830;
    }
  }
  else {
LAB_00e2e658:
    sVar1 = (ulong)(token[0x1dd0] >> 1);
    if ((token[0x1dd0] & 1) != 0) {
      sVar1 = token._7640_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1dd1);
      if ((token[0x1dd0] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7648_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e2e6e8;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2e6e8;
      uVar7 = 0x178ae60;
      goto LAB_00e2e764;
    }
LAB_00e2e6e8:
    sVar1 = (ulong)(token[0x1728] >> 1);
    if ((token[0x1728] & 1) != 0) {
      sVar1 = token._5936_8_;
    }
    if (__n != sVar1) {
LAB_00e2e7bc:
      PUBaseColliderTranslator::PUBaseColliderTranslator((PUBaseColliderTranslator *)local_70);
      uVar5 = PUBaseColliderTranslator::translateChildProperty
                        ((PUBaseColliderTranslator *)local_70,param_1,param_2);
                    /* try { // try from 00e2e7d4 to 00f2e7e3 has its CatchHandler @ 00e2e848 */
      PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)local_70);
      goto LAB_00e2e830;
    }
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x1729);
    if ((token[0x1728] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._5944_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e2e7bc;
          uVar10 = uVar10 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2e7bc;
                    /* try { // try from 00e2e7e4 to 00f2e887 has its CatchHandler @ 00e2e4d0 */
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178a7b8,1);
    if (((uVar10 & 1) != 0) &&
       (uVar10 = PUScriptTranslator::getBoolean
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(bool *)local_70)
       , (uVar10 & 1) != 0)) {
      PUSphereCollider::setInnerCollision(this_00,(bool)local_70[0]._0_1_);
      uVar5 = 1;
      goto LAB_00e2e830;
    }
  }
  uVar5 = 0;
LAB_00e2e830:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00e2e53c with catch @ 00e2e844 */
                    /* catch() { ... } // from try @ 00e2e7d4 with catch @ 00e2e848 */
                    /* catch() { ... } // from try @ 00e2e638 with catch @ 00e2e84c */
  return uVar5 & 1;
}

