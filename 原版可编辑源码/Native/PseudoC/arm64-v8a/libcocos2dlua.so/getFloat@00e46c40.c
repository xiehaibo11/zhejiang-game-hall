
/* cocos2d::PUScriptTranslator::getFloat(cocos2d::PUAbstractNode const&, float*) */

bool cocos2d::PUScriptTranslator::getFloat(PUAbstractNode *param_1,float *param_2)

{
  int iVar1;
  PUAbstractNode *__s;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    if (((byte)param_1[0x38] & 1) == 0) {
      __s = param_1 + 0x39;
    }
    else {
      __s = *(PUAbstractNode **)(param_1 + 0x48);
    }
    iVar1 = sscanf((char *)__s,"%f",param_2);
    return 1 < iVar1 + 1U;
  }
  return false;
}

