
/* cocostudio::DataReaderHelper::decodeAnimation(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

AnimationData *
cocostudio::DataReaderHelper::decodeAnimation(GenericValue *param_1,_DataInfo *param_2)

{
  int iVar1;
  AnimationData *this;
  DictionaryHelper *pDVar2;
  char *__s;
  size_t sVar3;
  GenericValue *pGVar4;
  Ref *this_00;
  int iVar5;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (AnimationData *)0x0) {
    AnimationData::AnimationData(this);
  }
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar2,param_1,"name",(char *)0x0);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),__s,sVar3);
  }
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar1 = DictionaryHelper::getArrayCount_json(pDVar2,param_1,"mov_data",0);
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar4 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar2,param_1,"mov_data",iVar5);
      this_00 = (Ref *)decodeMovement(pGVar4,param_2);
      AnimationData::addMovement(this,(MovementData *)this_00);
      cocos2d::Ref::release(this_00);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return this;
}

