
/* cocos2d::PUAlignAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUAlignAffectorTranslator::translateChildProperty
          (PUAlignAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUAlignAffector *this_00;
  ulong uVar9;
  bool local_70 [4];
  bool local_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUAlignAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x15a8] >> 1);
  if ((token[0x15a8] & 1) != 0) {
    sVar1 = token._5552_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x15a9);
    if ((token[0x15a8] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._5560_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e224e4;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e224e4;
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178a638,1);
    if ((uVar9 & 1) != 0) {
      uVar9 = PUScriptTranslator::getBoolean
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_6c);
      local_70[0] = local_6c[0];
joined_r0x00e225d4:
      if ((uVar9 & 1) != 0) {
        PUAlignAffector::setResize(this_00,local_70[0]);
        uVar5 = 1;
        goto LAB_00e225f0;
      }
    }
  }
  else {
LAB_00e224e4:
    sVar1 = (ulong)(token[0x1590] >> 1);
    if ((token[0x1590] & 1) != 0) {
      sVar1 = token._5528_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1591);
      if ((token[0x1590] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._5536_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e225ec;
            uVar9 = uVar9 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e225ec;
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x178a620,1);
      if ((uVar9 & 1) != 0) {
        uVar9 = PUScriptTranslator::getBoolean
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_70);
        goto joined_r0x00e225d4;
      }
    }
  }
LAB_00e225ec:
  uVar5 = 0;
LAB_00e225f0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

