
/* cocos2d::PUScriptTranslator::passValidatePropertyValidBool(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*) */

bool __thiscall
cocos2d::PUScriptTranslator::passValidatePropertyValidBool
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2)

{
  return *(int *)(*(long *)(*(long *)(param_2 + 0x60) + 0x10) + 0x24) == 1;
}

