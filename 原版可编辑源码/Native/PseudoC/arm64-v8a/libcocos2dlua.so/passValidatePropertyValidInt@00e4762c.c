
/* cocos2d::PUScriptTranslator::passValidatePropertyValidInt(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*) */

void __thiscall
cocos2d::PUScriptTranslator::passValidatePropertyValidInt
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *__s;
  long lVar4;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  local_2c = 0;
  lVar4 = *(long *)(*(long *)(param_2 + 0x60) + 0x10);
  if (*(int *)(lVar4 + 0x24) == 1) {
    if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
      __s = (char *)(lVar4 + 0x39);
    }
    else {
      __s = *(char **)(lVar4 + 0x48);
    }
    iVar3 = sscanf(__s,"%d",&local_2c);
    bVar2 = 1 < iVar3 + 1U;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

