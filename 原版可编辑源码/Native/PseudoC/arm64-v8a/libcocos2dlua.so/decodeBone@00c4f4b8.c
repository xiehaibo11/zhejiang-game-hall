
/* cocostudio::DataReaderHelper::decodeBone(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

BoneData * cocostudio::DataReaderHelper::decodeBone(GenericValue *param_1,_DataInfo *param_2)

{
  int iVar1;
  BoneData *this;
  DictionaryHelper *pDVar2;
  char *pcVar3;
  size_t sVar4;
  GenericValue *pGVar5;
  Ref *this_00;
  int iVar6;
  
  this = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this != (BoneData *)0x0) {
    BoneData::BoneData(this);
  }
  (**(code **)(*(long *)this + 0x30))(this);
  decodeNode((BaseData *)this,param_1,param_2);
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar3 = (char *)DictionaryHelper::getStringValue_json(pDVar2,param_1,"name",(char *)0x0);
  if (pcVar3 != (char *)0x0) {
    sVar4 = strlen(pcVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x58),pcVar3,sVar4);
  }
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar3 = (char *)DictionaryHelper::getStringValue_json(pDVar2,param_1,"parent",(char *)0x0);
  if (pcVar3 != (char *)0x0) {
    sVar4 = strlen(pcVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x70),pcVar3,sVar4);
  }
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar1 = DictionaryHelper::getArrayCount_json(pDVar2,param_1,"display_data",0);
  if (0 < iVar1) {
    iVar6 = 0;
    do {
      pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar5 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar2,param_1,"display_data",iVar6);
      this_00 = (Ref *)decodeBoneDisplay(pGVar5,param_2);
      BoneData::addDisplayData(this,(DisplayData *)this_00);
      cocos2d::Ref::release(this_00);
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  return this;
}

