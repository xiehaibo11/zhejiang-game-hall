
/* cocos2d::PUScriptTranslator::processNode(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*) */

PUScriptTranslator * __thiscall
cocos2d::PUScriptTranslator::processNode
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  PUScriptTranslator *pPVar3;
  
  if ((*(int *)(param_2 + 0x24) == 2) && (param_2[0xac] == (PUAbstractNode)0x0)) {
    puVar1 = (undefined8 *)PUTranslateManager::Instance();
    plVar2 = (long *)(**(code **)*puVar1)(puVar1,param_2);
    this = (PUScriptTranslator *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e47d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pPVar3 = (PUScriptTranslator *)(**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
      return pPVar3;
    }
  }
  return this;
}

