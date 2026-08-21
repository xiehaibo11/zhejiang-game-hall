
/* cocos2d::PUGravityAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUGravityAffectorTranslator::translateChildProperty
          (PUGravityAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUGravityAffector *this_00;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar6 = (ulong)((byte)PVar2 >> 1);
  __n = uVar6;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1a28] >> 1);
  if ((token[0x1a28] & 1) != 0) {
    sVar1 = token._6704_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    this_00 = *(PUGravityAffector **)(*(long *)(param_2 + 0x28) + 0x30);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    __s2 = (PUAbstractNode *)(token + 0x1a29);
    if ((token[0x1a28] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._6712_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        do {
          if (*pPVar7 != *__s2) goto LAB_00e28050;
          uVar6 = uVar6 - 1;
          pPVar7 = pPVar7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,__s2,__n), iVar4 != 0)) goto LAB_00e28050;
    uVar6 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178aab8,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00e28054;
    local_4c = 0.0;
    uVar6 = PUScriptTranslator::getFloat
                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_4c);
    if ((uVar6 & 1) != 0) {
      PUGravityAffector::setGravity(this_00,local_4c);
      uVar5 = 1;
      goto LAB_00e28054;
    }
  }
LAB_00e28050:
  uVar5 = 0;
LAB_00e28054:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

