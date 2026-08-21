
/* cocos2d::PUScriptTranslator::passValidatePropertyValidVector2(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*) */

PUScriptTranslator * __thiscall
cocos2d::PUScriptTranslator::passValidatePropertyValidVector2
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2)

{
  long lVar1;
  uint uVar2;
  char *__s;
  long lVar3;
  PUPropertyAbstractNode *pPVar4;
  uint uVar5;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar4 = *(PUPropertyAbstractNode **)(param_2 + 0x60);
  if (param_2 + 0x58 == pPVar4) {
LAB_00e479f4:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return (PUScriptTranslator *)0x0;
    }
  }
  else {
    uVar5 = 1;
    do {
      local_4c = 0;
      lVar3 = *(long *)(pPVar4 + 0x10);
      if (*(int *)(lVar3 + 0x24) != 1) goto LAB_00e479f4;
      if ((*(byte *)(lVar3 + 0x38) & 1) == 0) {
        __s = (char *)(lVar3 + 0x39);
      }
      else {
        __s = *(char **)(lVar3 + 0x48);
      }
      uVar2 = sscanf(__s,"%f",&local_4c);
      this = (PUScriptTranslator *)(ulong)uVar2;
      if (uVar2 + 1 < 2) goto LAB_00e479f4;
      uVar2 = uVar5 + 1;
    } while ((uVar5 < 2) &&
            (pPVar4 = *(PUPropertyAbstractNode **)(pPVar4 + 8), uVar5 = uVar2,
            param_2 + 0x58 != pPVar4));
    this = (PUScriptTranslator *)(ulong)(uVar2 != 2);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

