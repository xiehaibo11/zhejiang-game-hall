
/* cocostudio::DataReaderHelper::decodeTexture(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

TextureData * cocostudio::DataReaderHelper::decodeTexture(GenericValue *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  TextureData *this;
  DictionaryHelper *pDVar4;
  char *__s;
  size_t sVar5;
  GenericValue *pGVar6;
  Ref *this_00;
  int iVar7;
  undefined4 uVar8;
  Ref *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (TextureData *)0x0) {
    TextureData::TextureData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_1,"name",(char *)0x0);
  if (__s != (char *)0x0) {
    sVar5 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),__s,sVar5);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"width",0.0);
  *(undefined4 *)(this + 0x28) = uVar8;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"height",0.0);
  *(undefined4 *)(this + 0x24) = uVar8;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"pX",0.0);
  *(undefined4 *)(this + 0x2c) = uVar8;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"pY",0.0);
  *(undefined4 *)(this + 0x30) = uVar8;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getArrayCount_json(pDVar4,param_1,"contour_data",0);
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar6 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar4,param_1,"contour_data",iVar7);
      this_00 = (Ref *)decodeContour(pGVar6);
      puVar1 = *(undefined8 **)(this + 0x58);
      local_60 = this_00;
      if (puVar1 == *(undefined8 **)(this + 0x60)) {
        std::__ndk1::
        vector<cocostudio::ContourData*,std::__ndk1::allocator<cocostudio::ContourData*>>::
        __push_back_slow_path<cocostudio::ContourData*const&>
                  ((vector<cocostudio::ContourData*,std::__ndk1::allocator<cocostudio::ContourData*>>
                    *)(this + 0x50),(ContourData **)&local_60);
      }
      else {
        *puVar1 = this_00;
        *(undefined8 **)(this + 0x58) = puVar1 + 1;
      }
      cocos2d::Ref::retain(local_60);
      cocos2d::Ref::release(this_00);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

