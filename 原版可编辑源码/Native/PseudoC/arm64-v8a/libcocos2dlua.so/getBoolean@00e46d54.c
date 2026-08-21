
/* cocos2d::PUScriptTranslator::getBoolean(cocos2d::PUAbstractNode const&, bool*) */

undefined8 cocos2d::PUScriptTranslator::getBoolean(PUAbstractNode *param_1,bool *param_2)

{
  ulong uVar1;
  PUAbstractNode PVar2;
  bool bVar3;
  PUAbstractNode *pPVar4;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    PVar2 = param_1[0x38];
    uVar1 = (ulong)((byte)PVar2 >> 1);
    if (((byte)PVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x40);
    }
    if (uVar1 == 4) {
      pPVar4 = *(PUAbstractNode **)(param_1 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar4 = param_1 + 0x39;
      }
      bVar3 = *(int *)pPVar4 == 0x65757274;
    }
    else {
      bVar3 = false;
    }
    *param_2 = bVar3;
    return 1;
  }
  return 0;
}

