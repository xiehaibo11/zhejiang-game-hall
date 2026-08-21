
/* cocos2d::PUPlaneColliderTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

uint __thiscall
cocos2d::PUPlaneColliderTranslator::translateChildProperty
          (PUPlaneColliderTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUPlaneCollider *this_00;
  ulong uVar10;
  PUBaseColliderTranslator aPStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUPlaneCollider **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1e0] >> 1);
  if ((token[0x1e0] & 1) != 0) {
    sVar1 = token._488_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x1e1);
    if ((token[0x1e0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._496_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e2b030;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b030;
    uVar7 = 0x1789270;
  }
  else {
LAB_00e2b030:
    sVar1 = (ulong)(token[0x1bf0] >> 1);
    if ((token[0x1bf0] & 1) != 0) {
      sVar1 = token._7160_8_;
    }
    if (__n != sVar1) {
LAB_00e2b0bc:
      PUBaseColliderTranslator::PUBaseColliderTranslator(aPStack_78);
      uVar5 = PUBaseColliderTranslator::translateChildProperty(aPStack_78,param_1,param_2);
      PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)aPStack_78);
      goto LAB_00e2b140;
    }
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x1bf1);
    if ((token[0x1bf0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._7168_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e2b0bc;
          uVar10 = uVar10 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b0bc;
    uVar7 = 0x178ac80;
  }
  uVar10 = PUScriptTranslator::passValidateProperty
                     ((PUScriptTranslator *)this,param_1,param_2,uVar7,6);
  if ((uVar10 & 1) != 0) {
    Vec3::Vec3((Vec3 *)aPStack_78);
    uVar10 = PUScriptTranslator::getVector3
                       ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),param_2 + 0x58,
                        aPStack_78,3);
    if ((uVar10 & 1) != 0) {
      PUPlaneCollider::setNormal(this_00,(Vec3 *)aPStack_78);
      uVar5 = 1;
      goto LAB_00e2b140;
    }
  }
  uVar5 = 0;
LAB_00e2b140:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}

