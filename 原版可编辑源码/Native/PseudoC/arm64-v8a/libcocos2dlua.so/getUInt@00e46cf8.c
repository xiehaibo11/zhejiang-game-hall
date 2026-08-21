
/* cocos2d::PUScriptTranslator::getUInt(cocos2d::PUAbstractNode const&, unsigned int*) */

bool cocos2d::PUScriptTranslator::getUInt(PUAbstractNode *param_1,uint *param_2)

{
  int iVar1;
  PUAbstractNode *__s;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    if (((byte)param_1[0x38] & 1) == 0) {
      __s = param_1 + 0x39;
    }
    else {
                    /* try { // try from 00e46d30 to 00f46eb3 has its CatchHandler @ 00e46ce4 */
      __s = *(PUAbstractNode **)(param_1 + 0x48);
    }
    iVar1 = sscanf((char *)__s,"%u",param_2);
    return 1 < iVar1 + 1U;
  }
                    /* try { // try from 00e46d28 to 00f46d2f has its CatchHandler @ 00e46e94 */
  return false;
}

