
/* cocostudio::DataReaderHelper::decodeMovement(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

MovementData *
cocostudio::DataReaderHelper::decodeMovement(GenericValue *param_1,_DataInfo *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  MovementData *this;
  DictionaryHelper *pDVar4;
  ulong uVar5;
  char *__s;
  size_t sVar6;
  GenericValue *pGVar7;
  Ref *this_00;
  int iVar8;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (MovementData *)0x0) {
    MovementData::MovementData(this);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar1 = DictionaryHelper::getBooleanValue_json(pDVar4,param_1,"lp",true);
  this[0x50] = (MovementData)(bVar1 & 1);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"drTW",0);
  *(undefined4 *)(this + 0x4c) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"to",0);
  *(undefined4 *)(this + 0x48) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"dr",0);
  *(undefined4 *)(this + 0x40) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar4,param_1,"dr");
  if ((uVar5 & 1) == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar2 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"sc",1.0);
  }
  *(undefined4 *)(this + 0x44) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"twE",0);
  *(undefined4 *)(this + 0x54) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_1,"name",(char *)0x0);
  if (__s != (char *)0x0) {
    sVar6 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),__s,sVar6);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getArrayCount_json(pDVar4,param_1,"mov_bone_data",0);
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar4,param_1,"mov_bone_data",iVar8);
      this_00 = (Ref *)decodeMovementBone(pGVar7,param_2);
      MovementData::addMovementBoneData(this,(MovementBoneData *)this_00);
      cocos2d::Ref::release(this_00);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  return this;
}

