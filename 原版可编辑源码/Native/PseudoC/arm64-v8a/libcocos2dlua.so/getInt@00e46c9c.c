
/* cocos2d::PUScriptTranslator::getInt(cocos2d::PUAbstractNode const&, int*) */

bool cocos2d::PUScriptTranslator::getInt(PUAbstractNode *param_1,int *param_2)

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
    iVar1 = sscanf((char *)__s,"%d",param_2);
                    /* catch() { ... } // from try @ 00e46d30 with catch @ 00e46ce4 */
    return 1 < iVar1 + 1U;
  }
  return false;
}

