
/* cocostudio::DataReaderHelper::decodeArmature(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

ArmatureData *
cocostudio::DataReaderHelper::decodeArmature(GenericValue *param_1,_DataInfo *param_2)

{
  int iVar1;
  ArmatureData *this;
  DictionaryHelper *pDVar2;
  char *__s;
  size_t sVar3;
  GenericValue *pGVar4;
  Ref *this_00;
  int iVar5;
  undefined4 uVar6;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (ArmatureData *)0x0) {
    ArmatureData::ArmatureData(this);
  }
  ArmatureData::init();
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar2,param_1,"name",(char *)0x0);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),__s,sVar3);
  }
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getFloatValue_json(pDVar2,param_1,"version",0.1);
  *(undefined4 *)(this + 0x68) = uVar6;
  *(undefined4 *)(param_2 + 0x74) = uVar6;
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar1 = DictionaryHelper::getArrayCount_json(pDVar2,param_1,"bone_data",0);
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar4 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar2,param_1,"bone_data",iVar5);
      this_00 = (Ref *)decodeBone(pGVar4,param_2);
      ArmatureData::addBoneData(this,(BoneData *)this_00);
      cocos2d::Ref::release(this_00);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return this;
}

