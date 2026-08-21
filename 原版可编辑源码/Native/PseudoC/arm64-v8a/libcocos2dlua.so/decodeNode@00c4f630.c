
/* cocostudio::DataReaderHelper::decodeNode(cocostudio::BaseData*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

void cocostudio::DataReaderHelper::decodeNode
               (BaseData *param_1,GenericValue *param_2,_DataInfo *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  DictionaryHelper *pDVar3;
  GenericValue *pGVar4;
  float fVar5;
  float fVar6;
  
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar5 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"x",0.0);
  *(float *)(param_1 + 0x24) = fVar5 * s_PositionReadScale;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar5 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"y",0.0);
  fVar6 = *(float *)(param_3 + 0x38);
  fVar5 = fVar5 * s_PositionReadScale;
  *(float *)(param_1 + 0x24) = fVar6 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = fVar5 * fVar6;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(pDVar3,param_2,"z",0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getFloatValue_json(pDVar3,param_2,"kX",0.0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getFloatValue_json(pDVar3,param_2,"kY",0.0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getFloatValue_json(pDVar3,param_2,"cX",1.0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getFloatValue_json(pDVar3,param_2,"cY",1.0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  fVar5 = *(float *)(param_3 + 0x74);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  if (1.1 <= fVar5) {
    uVar2 = DictionaryHelper::checkObjectExist_json(pDVar3,param_2,"color");
    if ((uVar2 & 1) == 0) {
      return;
    }
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pGVar4 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar3,param_2,"color");
  }
  else {
    uVar2 = DictionaryHelper::checkObjectExist_json(pDVar3,param_2,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pGVar4 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar3,param_2,0);
  }
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,"a",0xff);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,"r",0xff);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,"g",0xff);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,"b",0xff);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  param_1[0x44] = (BaseData)0x1;
  return;
}

