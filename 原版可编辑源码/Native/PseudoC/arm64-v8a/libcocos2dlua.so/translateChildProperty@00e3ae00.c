
/* cocos2d::PUOnEventFlagObserverTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUOnEventFlagObserverTranslator::translateChildProperty
          (PUOnEventFlagObserverTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  long lVar8;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar6 = (ulong)((byte)PVar2 >> 1);
  __n = uVar6;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1f80] >> 1);
  if ((token[0x1f80] & 1) != 0) {
    sVar1 = token._8072_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    lVar8 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    __s2 = (PUAbstractNode *)(token + 0x1f81);
    if ((token[0x1f80] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._8080_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        do {
          if (*pPVar7 != *__s2) goto LAB_00e3af20;
          uVar6 = uVar6 - 1;
          pPVar7 = pPVar7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,__s2,__n), iVar4 != 0)) goto LAB_00e3af20;
    uVar6 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178b010,2);
    if ((uVar6 & 1) != 0) {
      local_4c = 0;
      uVar6 = PUScriptTranslator::getUInt
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_4c);
      if ((uVar6 & 1) != 0) {
        uVar5 = 1;
        *(uint *)(lVar8 + 0xa4) = local_4c;
        goto LAB_00e3af24;
      }
    }
  }
LAB_00e3af20:
  uVar5 = 0;
LAB_00e3af24:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

