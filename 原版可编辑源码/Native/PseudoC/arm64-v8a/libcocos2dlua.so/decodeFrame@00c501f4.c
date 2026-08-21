
/* cocostudio::DataReaderHelper::decodeFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

FrameData * cocostudio::DataReaderHelper::decodeFrame(GenericValue *param_1,_DataInfo *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  FrameData *this;
  DictionaryHelper *pDVar4;
  char *__s;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  float fVar8;
  
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (FrameData *)0x0) {
    FrameData::FrameData(this);
  }
  decodeNode((BaseData *)this,param_1,param_2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"twE",0);
  *(undefined4 *)(this + 0x60) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"dI",0);
  *(undefined4 *)(this + 0x74) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"bd_src",1);
  *(undefined4 *)(this + 0x78) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"bd_dst",0x303);
  *(undefined4 *)(this + 0x7c) = uVar2;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar1 = DictionaryHelper::getBooleanValue_json(pDVar4,param_1,"tweenFrame",true);
  this[0x70] = (FrameData)(bVar1 & 1);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_1,"evt",(char *)0x0);
  if (__s != (char *)0x0) {
    sVar5 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x80),__s,sVar5);
  }
  fVar8 = *(float *)(param_2 + 0x74);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  if (0.3 <= fVar8) {
    uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"fi",0);
    *(undefined4 *)(this + 0x58) = uVar2;
  }
  else {
    uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"dr",1);
    *(undefined4 *)(this + 0x5c) = uVar2;
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getArrayCount_json(pDVar4,param_1,"twEP",0);
  if (uVar3 != 0) {
    uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    if ((ulong)(long)(int)uVar3 >> 0x3e != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar6 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
    *(void **)(this + 0x68) = pvVar6;
    *(uint *)(this + 100) = uVar3;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar2 = DictionaryHelper::getFloatValueFromArray_json(pDVar4,param_1,"twEP",(int)uVar7,0.0);
        *(undefined4 *)(*(long *)(this + 0x68) + uVar7 * 4) = uVar2;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
  }
  return this;
}

