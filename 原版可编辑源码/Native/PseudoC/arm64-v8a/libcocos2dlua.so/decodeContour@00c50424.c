
/* cocostudio::DataReaderHelper::decodeContour(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

ContourData * cocostudio::DataReaderHelper::decodeContour(GenericValue *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ContourData *this;
  DictionaryHelper *pDVar4;
  GenericValue *pGVar5;
  undefined4 uVar6;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (ContourData *)0x0) {
    ContourData::ContourData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getArrayCount_json(pDVar4,param_1,"vertex",0);
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 + -1;
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar5 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar4,param_1,"vertex",iVar3);
      local_70 = 0;
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar6 = DictionaryHelper::getFloatValue_json(pDVar4,pGVar5,"x",0.0);
      local_70 = CONCAT44(local_70._4_4_,uVar6);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar6 = DictionaryHelper::getFloatValue_json(pDVar4,pGVar5,"y",0.0);
      local_70 = CONCAT44(uVar6,(undefined4)local_70);
      puVar1 = *(undefined8 **)(this + 0x30);
      if (puVar1 == *(undefined8 **)(this + 0x38)) {
        std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
        __push_back_slow_path<cocos2d::Vec2_const&>
                  ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0x28),
                   (Vec2 *)&local_70);
      }
      else {
        *puVar1 = local_70;
        *(undefined8 **)(this + 0x30) = puVar1 + 1;
      }
    } while (0 < iVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

